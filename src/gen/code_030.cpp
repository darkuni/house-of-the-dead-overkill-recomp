#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8010F6A4
void f_8010F6A4(Ctx* __restrict c) {
  trace_call(0x8010F6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F6A4
  c->r[0]=c->lr; // 8010F6A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F6AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F6B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010F6B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010F6B8
  c->r[29]=c->r[3]|c->r[3]; // 8010F6BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010F6C0
  c->r[0]=R8(c->r[3]+0x000008A4u); // 8010F6C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8010F6C8
  if (crb(c,2)) { goto L_8010F6DC; } // 8010F6CC
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 8010F6D0
  c->r[4]=c->r[29]+0x000008A4u; // 8010F6D4
  c->lr=0x8010F6DCu; f_8002477C(c); // 8010F6D8
L_8010F6DC:;
  c->r[5]=R32(c->r[29]+0x000007E0u); // 8010F6DC
  cmps(c,0,(int32_t)c->r[5],0); // 8010F6E0
  if (crb(c,2)) { goto L_8010F6F8; } // 8010F6E4
  c->r[6]=R32(c->r[13]+0xFFFFE678u); // 8010F6E8
  c->r[3]=c->r[29]+0x0000079Cu; // 8010F6EC
  c->r[4]=0u+0x00000001u; // 8010F6F0
  c->lr=0x8010F6F8u; f_802A91BC(c); // 8010F6F4
L_8010F6F8:;
  c->r[5]=R32(c->r[29]+0x000007E4u); // 8010F6F8
  cmps(c,0,(int32_t)c->r[5],0); // 8010F6FC
  if (crb(c,2)) { goto L_8010F714; } // 8010F700
  c->r[6]=R32(c->r[13]+0xFFFFE678u); // 8010F704
  c->r[3]=c->r[29]+0x000007BCu; // 8010F708
  c->r[4]=0u+0x00000000u; // 8010F70C
  c->lr=0x8010F714u; f_802A91BC(c); // 8010F710
L_8010F714:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8010F714
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 8010F718
  if (!crb(c,2)) { goto L_8010F7D8; } // 8010F71C
  c->r[0]=R32(c->r[29]+0x000007E8u); // 8010F720
  cmps(c,0,(int32_t)c->r[0],2); // 8010F724
  if (crb(c,2)) { goto L_8010F734; } // 8010F728
  cmps(c,0,(int32_t)c->r[0],4); // 8010F72C
  if (!crb(c,2)) { goto L_8010F760; } // 8010F730
L_8010F734:;
  c->r[3]=0u+0x163A0000u; // 8010F734
  c->r[3]=c->r[3]+0x00006383u; // 8010F738
  c->lr=0x8010F740u; f_802455C0(c); // 8010F73C
  c->r[9]=c->r[3]|c->r[3]; // 8010F740
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 8010F744
  c->r[5]=R32(c->r[29]+0x000007F4u); // 8010F748
  c->r[6]=c->r[29]+0x000007FCu; // 8010F74C
  c->r[4]=0u+0x00000001u; // 8010F750
  c->r[7]=0u+0x00000000u; // 8010F754
  c->r[8]=0u+0x00000000u; // 8010F758
  c->lr=0x8010F760u; f_8027FE10(c); // 8010F75C
L_8010F760:;
  c->r[0]=R32(c->r[29]+0x000007ECu); // 8010F760
  cmps(c,0,(int32_t)c->r[0],2); // 8010F764
  if (crb(c,2)) { goto L_8010F774; } // 8010F768
  cmps(c,0,(int32_t)c->r[0],4); // 8010F76C
  if (!crb(c,2)) { goto L_8010F7AC; } // 8010F770
L_8010F774:;
  c->r[3]=0u+0x163A0000u; // 8010F774
  c->r[3]=c->r[3]+0x00006383u; // 8010F778
  c->lr=0x8010F780u; f_802455C0(c); // 8010F77C
  c->r[4]=R32(c->r[29]+0x000007ECu); // 8010F780
  c->r[9]=c->r[3]|c->r[3]; // 8010F784
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 8010F788
  c->r[6]=c->r[29]+0x0000083Cu; // 8010F78C
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 8010F790
  c->r[4]=R32(c->r[29]+0x000007F0u); // 8010F794
  c->r[0]=cntlz(c->r[0]); // 8010F798
  c->r[5]=R32(c->r[29]+0x000007F8u); // 8010F79C
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 8010F7A0
  c->r[8]=0u+0x00000000u; // 8010F7A4
  c->lr=0x8010F7ACu; f_8027FE10(c); // 8010F7A8
L_8010F7AC:;
  c->r[0]=R32(c->r[29]+0x00000878u); // 8010F7AC
  cmps(c,0,(int32_t)c->r[0],2); // 8010F7B0
  if (!crb(c,2)) { goto L_8010F7D8; } // 8010F7B4
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 8010F7B8
  c->r[6]=c->r[29]+0x0000087Cu; // 8010F7BC
  c->r[4]=R32(c->r[29]+0x000008A0u); // 8010F7C0
  c->r[7]=0u+0x00000000u; // 8010F7C4
  c->r[5]=R32(c->r[29]+0x0000089Cu); // 8010F7C8
  c->r[8]=0u+0x00000001u; // 8010F7CC
  c->r[9]=0u+0x00000000u; // 8010F7D0
  c->lr=0x8010F7D8u; f_8027FE10(c); // 8010F7D4
L_8010F7D8:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8010F7D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8010F7DC
  if (crb(c,2)) { goto L_8010F954; } // 8010F7E0
  c->r[30]=0u+0x00000000u; // 8010F7E4
  c->r[31]=0u+0x00000000u; // 8010F7E8
  c->r[28]=0u+0x163A0000u; // 8010F7EC
  goto L_8010F944; // 8010F7F0
L_8010F7F4:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 8010F7F4
  c->r[4]=R32(c->r[3]+c->r[31]); // 8010F7F8
  c->r[0]=R32(c->r[4]+0x00000120u); // 8010F7FC
  c->r[0]=rotl(c->r[0],9)&0x00000001u; cr0(c,c->r[0]); // 8010F800
  if (crb(c,2)) { goto L_8010F93C; } // 8010F804
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 8010F808
  c->r[4]=c->r[4]+0x00000064u; // 8010F80C
  c->r[5]=0u+0x00000001u; // 8010F810
  c->lr=0x8010F818u; f_8027EDC8(c); // 8010F814
  c->r[4]=R32(c->r[29]+0x000000A8u); // 8010F818
  c->r[4]=R32(c->r[4]+c->r[31]); // 8010F81C
  W32(c->r[4]+0x000000ECu,c->r[3]); // 8010F820
  c->r[3]=R32(c->r[29]+0x000000A8u); // 8010F824
  c->r[4]=R32(c->r[29]+0x000000A0u); // 8010F828
  c->r[3]=R32(c->r[3]+c->r[31]); // 8010F82C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 8010F830
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8010F834
  c->r[0]=(rotl(c->r[4],30)&0x02000000u)|(c->r[0]&~0x02000000u); // 8010F838
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8010F83C
  c->r[3]=R32(c->r[29]+0x000000A8u); // 8010F840
  c->r[3]=R32(c->r[3]+c->r[31]); // 8010F844
  c->r[3]=R32(c->r[3]+0x000000ECu); // 8010F848
  cmps(c,0,(int32_t)c->r[3],0); // 8010F84C
  if (crb(c,2)) { goto L_8010F93C; } // 8010F850
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8010F854
  c->r[0]=rotl(c->r[0],12)&0x00000001u; cr0(c,c->r[0]); // 8010F858
  if (crb(c,2)) { goto L_8010F870; } // 8010F85C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8010F860
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 8010F864
  c->r[0]=c->r[0]|0x00100000u; // 8010F868
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8010F86C
L_8010F870:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8010F870
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 8010F874
  if (!crb(c,2)) { goto L_8010F8F8; } // 8010F878
  c->r[3]=R32(c->r[29]+0x000000A8u); // 8010F87C
  c->r[3]=R32(c->r[3]+c->r[31]); // 8010F880
  c->r[0]=R32(c->r[3]+0x00000120u); // 8010F884
  c->r[0]=rotl(c->r[0],14)&0x00000001u; cr0(c,c->r[0]); // 8010F888
  if (crb(c,2)) { goto L_8010F8F8; } // 8010F88C
  c->r[0]=R32(c->r[29]+0x000000ACu); // 8010F890
  cmpu(c,0,c->r[3],c->r[0]); // 8010F894
  if (!crb(c,2)) { goto L_8010F8CC; } // 8010F898
  c->r[0]=R32(c->r[29]+0x000007E8u); // 8010F89C
  cmps(c,0,(int32_t)c->r[0],2); // 8010F8A0
  if (crb(c,0)) { goto L_8010F8F8; } // 8010F8A4
  c->r[3]=c->r[29]+0x000007FCu; // 8010F8A8
  c->r[4]=0u+0x00000000u; // 8010F8AC
  c->lr=0x8010F8B4u; f_8024D960(c); // 8010F8B0
  c->r[5]=R32(c->r[29]+0x000000A8u); // 8010F8B4
  c->r[4]=c->r[3]|c->r[3]; // 8010F8B8
  c->r[3]=R32(c->r[5]+c->r[31]); // 8010F8BC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 8010F8C0
  c->lr=0x8010F8C8u; f_8027DBA0(c); // 8010F8C4
  goto L_8010F8F8; // 8010F8C8
L_8010F8CC:;
  c->r[0]=R32(c->r[29]+0x000007ECu); // 8010F8CC
  cmps(c,0,(int32_t)c->r[0],2); // 8010F8D0
  if (crb(c,0)) { goto L_8010F8F8; } // 8010F8D4
  c->r[3]=c->r[29]+0x0000083Cu; // 8010F8D8
  c->r[4]=0u+0x00000000u; // 8010F8DC
  c->lr=0x8010F8E4u; f_8024D960(c); // 8010F8E0
  c->r[5]=R32(c->r[29]+0x000000A8u); // 8010F8E4
  c->r[4]=c->r[3]|c->r[3]; // 8010F8E8
  c->r[3]=R32(c->r[5]+c->r[31]); // 8010F8EC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 8010F8F0
  c->lr=0x8010F8F8u; f_8027DBA0(c); // 8010F8F4
L_8010F8F8:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 8010F8F8
  c->r[3]=R32(c->r[3]+c->r[31]); // 8010F8FC
  c->r[0]=R32(c->r[3]+0x00000120u); // 8010F900
  c->r[0]=rotl(c->r[0],9)&0x00000001u; cr0(c,c->r[0]); // 8010F904
  if (crb(c,2)) { goto L_8010F93C; } // 8010F908
  c->r[3]=c->r[28]+0x00006383u; // 8010F90C
  c->lr=0x8010F914u; f_802455C0(c); // 8010F910
  c->r[4]=R32(c->r[29]+0x000000A8u); // 8010F914
  c->r[9]=c->r[3]|c->r[3]; // 8010F918
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 8010F91C
  c->r[6]=c->r[29]|c->r[29]; // 8010F920
  c->r[4]=R32(c->r[4]+c->r[31]); // 8010F924
  c->r[5]=0u+0x00000004u; // 8010F928
  c->r[7]=0u+0x00000000u; // 8010F92C
  c->r[8]=0u+0x00000001u; // 8010F930
  c->r[4]=c->r[4]+0x00000064u; // 8010F934
  c->lr=0x8010F93Cu; f_8027EB80(c); // 8010F938
L_8010F93C:;
  c->r[31]=c->r[31]+0x00000004u; // 8010F93C
  c->r[30]=c->r[30]+0x00000001u; // 8010F940
L_8010F944:;
  c->r[0]=R32(c->r[29]+0x000000A4u); // 8010F944
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010F948
  if (crb(c,0)) { IRQCHK(c); goto L_8010F7F4; } // 8010F94C
  goto L_8010F9EC; // 8010F950
L_8010F954:;
  c->r[3]=0u+0x163A0000u; // 8010F954
  c->r[3]=c->r[3]+0x00006383u; // 8010F958
  c->lr=0x8010F960u; f_802455C0(c); // 8010F95C
  c->r[4]=R32(c->r[29]+0x000000ACu); // 8010F960
  c->r[9]=c->r[3]|c->r[3]; // 8010F964
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 8010F968
  c->r[6]=c->r[29]|c->r[29]; // 8010F96C
  c->r[4]=c->r[4]+0x00000064u; // 8010F970
  c->r[5]=0u+0x00000004u; // 8010F974
  c->r[7]=0u+0x00000000u; // 8010F978
  c->r[8]=0u+0x00000001u; // 8010F97C
  c->lr=0x8010F984u; f_8027EB80(c); // 8010F980
  c->r[4]=R32(c->r[29]+0x000000ACu); // 8010F984
  W32(c->r[4]+0x000000ECu,c->r[3]); // 8010F988
  c->r[3]=R32(c->r[29]+0x000000ACu); // 8010F98C
  c->r[4]=R32(c->r[29]+0x000000A0u); // 8010F990
  c->r[3]=R32(c->r[3]+0x000000ECu); // 8010F994
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8010F998
  c->r[0]=(rotl(c->r[4],30)&0x02000000u)|(c->r[0]&~0x02000000u); // 8010F99C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8010F9A0
  c->r[3]=R32(c->r[29]+0x000000ACu); // 8010F9A4
  c->r[3]=R32(c->r[3]+0x000000ECu); // 8010F9A8
  cmps(c,0,(int32_t)c->r[3],0); // 8010F9AC
  if (crb(c,2)) { goto L_8010F9EC; } // 8010F9B0
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8010F9B4
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 8010F9B8
  c->r[0]=c->r[0]|0x00100000u; // 8010F9BC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8010F9C0
  c->r[0]=R32(c->r[29]+0x000007E8u); // 8010F9C4
  cmps(c,0,(int32_t)c->r[0],2); // 8010F9C8
  if (crb(c,0)) { goto L_8010F9EC; } // 8010F9CC
  c->r[3]=c->r[29]+0x000007FCu; // 8010F9D0
  c->r[4]=0u+0x00000000u; // 8010F9D4
  c->lr=0x8010F9DCu; f_8024D960(c); // 8010F9D8
  c->r[5]=R32(c->r[29]+0x000000ACu); // 8010F9DC
  c->r[4]=c->r[3]|c->r[3]; // 8010F9E0
  c->r[3]=R32(c->r[5]+0x000000ECu); // 8010F9E4
  c->lr=0x8010F9ECu; f_8027DBA0(c); // 8010F9E8
L_8010F9EC:;
  c->r[0]=R32(c->r[29]+0x000000B0u); // 8010F9EC
  cmps(c,0,(int32_t)c->r[0],0); // 8010F9F0
  if (!crb(c,2)) { goto L_8010FA10; } // 8010F9F4
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 8010F9F8
  c->r[3]=c->r[29]|c->r[29]; // 8010F9FC
  c->r[4]=R32(c->r[29]+0x000000ACu); // 8010FA00
  c->r[12]=R32(c->r[12]+0x00000060u); // 8010FA04
  c->ctr=c->r[12]; // 8010FA08
  if (true) { c->lr=0x8010FA10u; dispatch(c,c->ctr); } // 8010FA0C
L_8010FA10:;
  c->r[3]=R32(c->r[13]+0xFFFFE860u); // 8010FA10
  cmps(c,0,(int32_t)c->r[3],0); // 8010FA14
  if (crb(c,2)) { goto L_8010FA40; } // 8010FA18
  c->r[3]=R32(c->r[3]+0x000000DCu); // 8010FA1C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010FA20
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[0]);} // 8010FA24
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010FA28
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 8010FA2C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010FA30
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 8010FA34
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010FA38
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[0]);} // 8010FA3C
L_8010FA40:;
  c->r[0]=R32(c->r[29]+0x00000A78u); // 8010FA40
  cmps(c,0,(int32_t)c->r[0],0); // 8010FA44
  if (crb(c,2)) { goto L_8010FA54; } // 8010FA48
  c->r[3]=c->r[29]|c->r[29]; // 8010FA4C
  c->lr=0x8010FA54u; f_8030FE40(c); // 8010FA50
L_8010FA54:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8010FA54
  c->r[0]=rotl(c->r[0],23)&0x00000001u; cr0(c,c->r[0]); // 8010FA58
  if (crb(c,2)) { goto L_8010FA64; } // 8010FA5C
  c->lr=0x8010FA64u; f_803139C8(c); // 8010FA60
L_8010FA64:;
  c->r[3]=R32(c->r[29]+0x000000B4u); // 8010FA64
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8010FA68
  cmps(c,0,(int32_t)c->r[3],0); // 8010FA6C
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 8010FA70
  W32(c->r[29]+0x000000A0u,c->r[0]); // 8010FA74
  if (crb(c,2)) { goto L_8010FA84; } // 8010FA78
  c->r[0]=0u+0x00000028u; // 8010FA7C
  W8(c->r[3]+0x00000007u,c->r[0]); // 8010FA80
L_8010FA84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FA84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010FA88
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010FA8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010FA90
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010FA94
  c->lr=c->r[0]; // 8010FA98
  c->r[1]=c->r[1]+0x00000020u; // 8010FA9C
  return; // 8010FAA0
}

// fn_8010FAA4
void f_8010FAA4(Ctx* __restrict c) {
  trace_call(0x8010FAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FAA4
  c->r[0]=c->lr; // 8010FAA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FAAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010FAB0
  c->r[31]=c->r[4]|c->r[4]; // 8010FAB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010FAB8
  c->r[30]=c->r[3]|c->r[3]; // 8010FABC
  c->r[0]=R8(c->r[3]+0x000008A4u); // 8010FAC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8010FAC4
  if (crb(c,2)) { goto L_8010FAD8; } // 8010FAC8
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 8010FACC
  c->r[4]=c->r[30]+0x000008A4u; // 8010FAD0
  c->lr=0x8010FAD8u; f_800248E4(c); // 8010FAD4
L_8010FAD8:;
  c->r[3]=c->r[30]|c->r[30]; // 8010FAD8
  c->r[4]=c->r[31]|c->r[31]; // 8010FADC
  c->lr=0x8010FAE4u; f_802B202C(c); // 8010FAE0
  c->lr=0x8010FAE8u; f_8026B4E0(c); // 8010FAE4
  c->lr=0x8010FAECu; f_8026D680(c); // 8010FAE8
  c->r[3]=0u+0x00000040u; // 8010FAEC
  c->lr=0x8010FAF4u; f_80253F50(c); // 8010FAF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010FAF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010FAFC
  c->lr=c->r[0]; // 8010FB00
  c->r[1]=c->r[1]+0x00000010u; // 8010FB04
  return; // 8010FB08
}

// fn_8010FB0C
void f_8010FB0C(Ctx* __restrict c) {
  trace_call(0x8010FB0Cu);
  return; // 8010FB0C
}

// fn_8010FB10
void f_8010FB10(Ctx* __restrict c) {
  trace_call(0x8010FB10u);
  return; // 8010FB10
}

// fn_8010FB14
void f_8010FB14(Ctx* __restrict c) {
  trace_call(0x8010FB14u);
  return; // 8010FB14
}

// fn_8010FB18
void f_8010FB18(Ctx* __restrict c) {
  trace_call(0x8010FB18u);
  return; // 8010FB18
}

// fn_8010FB1C
void f_8010FB1C(Ctx* __restrict c) {
  trace_call(0x8010FB1Cu);
  return; // 8010FB1C
}

// fn_8010FB20
void f_8010FB20(Ctx* __restrict c) {
  trace_call(0x8010FB20u);
  return; // 8010FB20
}

// fn_8010FB24
void f_8010FB24(Ctx* __restrict c) {
  trace_call(0x8010FB24u);
  return; // 8010FB24
}

// fn_8010FB28
void f_8010FB28(Ctx* __restrict c) {
  trace_call(0x8010FB28u);
  return; // 8010FB28
}

// fn_8010FB2C
void f_8010FB2C(Ctx* __restrict c) {
  trace_call(0x8010FB2Cu);
  return; // 8010FB2C
}

// fn_8010FB30
void f_8010FB30(Ctx* __restrict c) {
  trace_call(0x8010FB30u);
  c->r[3]=0u+0x00000000u; // 8010FB30
  return; // 8010FB34
}

// fn_8010FB38
void f_8010FB38(Ctx* __restrict c) {
  trace_call(0x8010FB38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FB38
  c->r[0]=c->lr; // 8010FB3C
  c->r[3]=0u+0x80420000u; // 8010FB40
  c->r[4]=0u+0x00000000u; // 8010FB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FB48
  c->r[3]=c->r[3]+0x00002018u; // 8010FB4C
  c->lr=0x8010FB54u; f_8024D9B0(c); // 8010FB50
  c->r[0]=R32(c->r[13]+0xFFFFE1B0u); // 8010FB54
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8010FB58
  if (crb(c,2)) { goto L_8010FBA8; } // 8010FB5C
  c->r[5]=R32(c->r[13]+0xFFFFE1A8u); // 8010FB60
  c->r[4]=0u+0x00000000u; // 8010FB64
  c->r[0]=R32(c->r[13]+0xFFFFE1ACu); // 8010FB68
  c->r[6]=c->r[5]|c->r[5]; // 8010FB6C
  c->ctr=c->r[0]; // 8010FB70
  cmps(c,0,(int32_t)c->r[0],0); // 8010FB74
  if (!crb(c,1)) { goto L_8010FBA0; } // 8010FB78
L_8010FB7C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8010FB7C
  cmpu(c,0,c->r[3],c->r[0]); // 8010FB80
  if (!crb(c,2)) { goto L_8010FB94; } // 8010FB84
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8010FB88
  c->r[8]=c->r[5]+c->r[0]; // 8010FB8C
  goto L_8010FBFC; // 8010FB90
L_8010FB94:;
  c->r[6]=c->r[6]+0x00000018u; // 8010FB94
  c->r[4]=c->r[4]+0x00000001u; // 8010FB98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010FB7C; } // 8010FB9C
L_8010FBA0:;
  c->r[8]=0u+0x00000000u; // 8010FBA0
  goto L_8010FBFC; // 8010FBA4
L_8010FBA8:;
  c->r[4]=R32(c->r[13]+0xFFFFE1ACu); // 8010FBA8
  c->r[5]=0u+0x00000000u; // 8010FBAC
  c->r[7]=R32(c->r[13]+0xFFFFE1A8u); // 8010FBB0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8010FBB4
L_8010FBB8:;
  c->r[0]=c->r[5]+c->r[4]; // 8010FBB8
  c->r[6]=sraw(c,c->r[0],1); // 8010FBBC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)24); // 8010FBC0
  c->r[8]=c->r[7]+c->r[0]; // 8010FBC4
  c->r[0]=R32(c->r[7]+c->r[0]); // 8010FBC8
  cmpu(c,0,c->r[0],c->r[3]); // 8010FBCC
  if (!crb(c,2)) { goto L_8010FBD8; } // 8010FBD0
  goto L_8010FBFC; // 8010FBD4
L_8010FBD8:;
  if (!crb(c,0)) { goto L_8010FBEC; } // 8010FBD8
  c->r[5]=c->r[6]+0x00000001u; // 8010FBDC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8010FBE0
  if (crb(c,1)) { goto L_8010FBF8; } // 8010FBE4
  IRQCHK(c); goto L_8010FBB8; // 8010FBE8
L_8010FBEC:;
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 8010FBEC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8010FBF0
  if (!crb(c,0)) { IRQCHK(c); goto L_8010FBB8; } // 8010FBF4
L_8010FBF8:;
  c->r[8]=0u+0x00000000u; // 8010FBF8
L_8010FBFC:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010FBFC
  if (crb(c,2)) { goto L_8010FC14; } // 8010FC00
  c->r[12]=R32(c->r[8]+0x00000014u); // 8010FC04
  c->ctr=c->r[12]; // 8010FC08
  if (true) { c->lr=0x8010FC10u; dispatch(c,c->ctr); } // 8010FC0C
  goto L_8010FC18; // 8010FC10
L_8010FC14:;
  c->r[3]=0u+0x00000000u; // 8010FC14
L_8010FC18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FC18
  c->lr=c->r[0]; // 8010FC1C
  c->r[1]=c->r[1]+0x00000010u; // 8010FC20
  return; // 8010FC24
}

// fn_8010FC28
void f_8010FC28(Ctx* __restrict c) {
  trace_call(0x8010FC28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FC28
  c->r[0]=c->lr; // 8010FC2C
  c->r[3]=0u+0x80420000u; // 8010FC30
  c->r[4]=0u+0x00000000u; // 8010FC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FC38
  c->r[3]=c->r[3]+0x00002004u; // 8010FC3C
  c->lr=0x8010FC44u; f_8024D9B0(c); // 8010FC40
  c->r[0]=R32(c->r[13]+0xFFFFE1B0u); // 8010FC44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8010FC48
  if (crb(c,2)) { goto L_8010FC98; } // 8010FC4C
  c->r[5]=R32(c->r[13]+0xFFFFE1A8u); // 8010FC50
  c->r[4]=0u+0x00000000u; // 8010FC54
  c->r[0]=R32(c->r[13]+0xFFFFE1ACu); // 8010FC58
  c->r[6]=c->r[5]|c->r[5]; // 8010FC5C
  c->ctr=c->r[0]; // 8010FC60
  cmps(c,0,(int32_t)c->r[0],0); // 8010FC64
  if (!crb(c,1)) { goto L_8010FC90; } // 8010FC68
L_8010FC6C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8010FC6C
  cmpu(c,0,c->r[3],c->r[0]); // 8010FC70
  if (!crb(c,2)) { goto L_8010FC84; } // 8010FC74
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8010FC78
  c->r[8]=c->r[5]+c->r[0]; // 8010FC7C
  goto L_8010FCEC; // 8010FC80
L_8010FC84:;
  c->r[6]=c->r[6]+0x00000018u; // 8010FC84
  c->r[4]=c->r[4]+0x00000001u; // 8010FC88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010FC6C; } // 8010FC8C
L_8010FC90:;
  c->r[8]=0u+0x00000000u; // 8010FC90
  goto L_8010FCEC; // 8010FC94
L_8010FC98:;
  c->r[4]=R32(c->r[13]+0xFFFFE1ACu); // 8010FC98
  c->r[5]=0u+0x00000000u; // 8010FC9C
  c->r[7]=R32(c->r[13]+0xFFFFE1A8u); // 8010FCA0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8010FCA4
L_8010FCA8:;
  c->r[0]=c->r[5]+c->r[4]; // 8010FCA8
  c->r[6]=sraw(c,c->r[0],1); // 8010FCAC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)24); // 8010FCB0
  c->r[8]=c->r[7]+c->r[0]; // 8010FCB4
  c->r[0]=R32(c->r[7]+c->r[0]); // 8010FCB8
  cmpu(c,0,c->r[0],c->r[3]); // 8010FCBC
  if (!crb(c,2)) { goto L_8010FCC8; } // 8010FCC0
  goto L_8010FCEC; // 8010FCC4
L_8010FCC8:;
  if (!crb(c,0)) { goto L_8010FCDC; } // 8010FCC8
  c->r[5]=c->r[6]+0x00000001u; // 8010FCCC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8010FCD0
  if (crb(c,1)) { goto L_8010FCE8; } // 8010FCD4
  IRQCHK(c); goto L_8010FCA8; // 8010FCD8
L_8010FCDC:;
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 8010FCDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8010FCE0
  if (!crb(c,0)) { IRQCHK(c); goto L_8010FCA8; } // 8010FCE4
L_8010FCE8:;
  c->r[8]=0u+0x00000000u; // 8010FCE8
L_8010FCEC:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010FCEC
  if (crb(c,2)) { goto L_8010FD04; } // 8010FCF0
  c->r[12]=R32(c->r[8]+0x00000014u); // 8010FCF4
  c->ctr=c->r[12]; // 8010FCF8
  if (true) { c->lr=0x8010FD00u; dispatch(c,c->ctr); } // 8010FCFC
  goto L_8010FD08; // 8010FD00
L_8010FD04:;
  c->r[3]=0u+0x00000000u; // 8010FD04
L_8010FD08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FD08
  c->lr=c->r[0]; // 8010FD0C
  c->r[1]=c->r[1]+0x00000010u; // 8010FD10
  return; // 8010FD14
}

// fn_8010FD18
void f_8010FD18(Ctx* __restrict c) {
  trace_call(0x8010FD18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FD18
  c->r[0]=c->lr; // 8010FD1C
  c->r[3]=0u+0x80420000u; // 8010FD20
  c->r[4]=0u+0x00000000u; // 8010FD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FD28
  c->r[3]=c->r[3]+0x00001FF0u; // 8010FD2C
  c->lr=0x8010FD34u; f_8024D9B0(c); // 8010FD30
  c->r[0]=R32(c->r[13]+0xFFFFE1B0u); // 8010FD34
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8010FD38
  if (crb(c,2)) { goto L_8010FD88; } // 8010FD3C
  c->r[5]=R32(c->r[13]+0xFFFFE1A8u); // 8010FD40
  c->r[4]=0u+0x00000000u; // 8010FD44
  c->r[0]=R32(c->r[13]+0xFFFFE1ACu); // 8010FD48
  c->r[6]=c->r[5]|c->r[5]; // 8010FD4C
  c->ctr=c->r[0]; // 8010FD50
  cmps(c,0,(int32_t)c->r[0],0); // 8010FD54
  if (!crb(c,1)) { goto L_8010FD80; } // 8010FD58
L_8010FD5C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8010FD5C
  cmpu(c,0,c->r[3],c->r[0]); // 8010FD60
  if (!crb(c,2)) { goto L_8010FD74; } // 8010FD64
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8010FD68
  c->r[8]=c->r[5]+c->r[0]; // 8010FD6C
  goto L_8010FDDC; // 8010FD70
L_8010FD74:;
  c->r[6]=c->r[6]+0x00000018u; // 8010FD74
  c->r[4]=c->r[4]+0x00000001u; // 8010FD78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010FD5C; } // 8010FD7C
L_8010FD80:;
  c->r[8]=0u+0x00000000u; // 8010FD80
  goto L_8010FDDC; // 8010FD84
L_8010FD88:;
  c->r[4]=R32(c->r[13]+0xFFFFE1ACu); // 8010FD88
  c->r[5]=0u+0x00000000u; // 8010FD8C
  c->r[7]=R32(c->r[13]+0xFFFFE1A8u); // 8010FD90
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8010FD94
L_8010FD98:;
  c->r[0]=c->r[5]+c->r[4]; // 8010FD98
  c->r[6]=sraw(c,c->r[0],1); // 8010FD9C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)24); // 8010FDA0
  c->r[8]=c->r[7]+c->r[0]; // 8010FDA4
  c->r[0]=R32(c->r[7]+c->r[0]); // 8010FDA8
  cmpu(c,0,c->r[0],c->r[3]); // 8010FDAC
  if (!crb(c,2)) { goto L_8010FDB8; } // 8010FDB0
  goto L_8010FDDC; // 8010FDB4
L_8010FDB8:;
  if (!crb(c,0)) { goto L_8010FDCC; } // 8010FDB8
  c->r[5]=c->r[6]+0x00000001u; // 8010FDBC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8010FDC0
  if (crb(c,1)) { goto L_8010FDD8; } // 8010FDC4
  IRQCHK(c); goto L_8010FD98; // 8010FDC8
L_8010FDCC:;
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 8010FDCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8010FDD0
  if (!crb(c,0)) { IRQCHK(c); goto L_8010FD98; } // 8010FDD4
L_8010FDD8:;
  c->r[8]=0u+0x00000000u; // 8010FDD8
L_8010FDDC:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010FDDC
  if (crb(c,2)) { goto L_8010FDF4; } // 8010FDE0
  c->r[12]=R32(c->r[8]+0x00000014u); // 8010FDE4
  c->ctr=c->r[12]; // 8010FDE8
  if (true) { c->lr=0x8010FDF0u; dispatch(c,c->ctr); } // 8010FDEC
  goto L_8010FDF8; // 8010FDF0
L_8010FDF4:;
  c->r[3]=0u+0x00000000u; // 8010FDF4
L_8010FDF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FDF8
  c->lr=c->r[0]; // 8010FDFC
  c->r[1]=c->r[1]+0x00000010u; // 8010FE00
  return; // 8010FE04
}

// fn_8010FE08
void f_8010FE08(Ctx* __restrict c) {
  trace_call(0x8010FE08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FE08
  c->r[0]=c->lr; // 8010FE0C
  c->r[3]=0u+0x80420000u; // 8010FE10
  c->r[4]=0u+0x00000000u; // 8010FE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FE18
  c->r[3]=c->r[3]+0x00001FE0u; // 8010FE1C
  c->lr=0x8010FE24u; f_8024D9B0(c); // 8010FE20
  c->r[0]=R32(c->r[13]+0xFFFFE1B0u); // 8010FE24
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8010FE28
  if (crb(c,2)) { goto L_8010FE78; } // 8010FE2C
  c->r[5]=R32(c->r[13]+0xFFFFE1A8u); // 8010FE30
  c->r[4]=0u+0x00000000u; // 8010FE34
  c->r[0]=R32(c->r[13]+0xFFFFE1ACu); // 8010FE38
  c->r[6]=c->r[5]|c->r[5]; // 8010FE3C
  c->ctr=c->r[0]; // 8010FE40
  cmps(c,0,(int32_t)c->r[0],0); // 8010FE44
  if (!crb(c,1)) { goto L_8010FE70; } // 8010FE48
L_8010FE4C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8010FE4C
  cmpu(c,0,c->r[3],c->r[0]); // 8010FE50
  if (!crb(c,2)) { goto L_8010FE64; } // 8010FE54
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8010FE58
  c->r[8]=c->r[5]+c->r[0]; // 8010FE5C
  goto L_8010FECC; // 8010FE60
L_8010FE64:;
  c->r[6]=c->r[6]+0x00000018u; // 8010FE64
  c->r[4]=c->r[4]+0x00000001u; // 8010FE68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010FE4C; } // 8010FE6C
L_8010FE70:;
  c->r[8]=0u+0x00000000u; // 8010FE70
  goto L_8010FECC; // 8010FE74
L_8010FE78:;
  c->r[4]=R32(c->r[13]+0xFFFFE1ACu); // 8010FE78
  c->r[5]=0u+0x00000000u; // 8010FE7C
  c->r[7]=R32(c->r[13]+0xFFFFE1A8u); // 8010FE80
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8010FE84
L_8010FE88:;
  c->r[0]=c->r[5]+c->r[4]; // 8010FE88
  c->r[6]=sraw(c,c->r[0],1); // 8010FE8C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)24); // 8010FE90
  c->r[8]=c->r[7]+c->r[0]; // 8010FE94
  c->r[0]=R32(c->r[7]+c->r[0]); // 8010FE98
  cmpu(c,0,c->r[0],c->r[3]); // 8010FE9C
  if (!crb(c,2)) { goto L_8010FEA8; } // 8010FEA0
  goto L_8010FECC; // 8010FEA4
L_8010FEA8:;
  if (!crb(c,0)) { goto L_8010FEBC; } // 8010FEA8
  c->r[5]=c->r[6]+0x00000001u; // 8010FEAC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8010FEB0
  if (crb(c,1)) { goto L_8010FEC8; } // 8010FEB4
  IRQCHK(c); goto L_8010FE88; // 8010FEB8
L_8010FEBC:;
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 8010FEBC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8010FEC0
  if (!crb(c,0)) { IRQCHK(c); goto L_8010FE88; } // 8010FEC4
L_8010FEC8:;
  c->r[8]=0u+0x00000000u; // 8010FEC8
L_8010FECC:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010FECC
  if (crb(c,2)) { goto L_8010FEE4; } // 8010FED0
  c->r[12]=R32(c->r[8]+0x00000014u); // 8010FED4
  c->ctr=c->r[12]; // 8010FED8
  if (true) { c->lr=0x8010FEE0u; dispatch(c,c->ctr); } // 8010FEDC
  goto L_8010FEE8; // 8010FEE0
L_8010FEE4:;
  c->r[3]=0u+0x00000000u; // 8010FEE4
L_8010FEE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FEE8
  c->lr=c->r[0]; // 8010FEEC
  c->r[1]=c->r[1]+0x00000010u; // 8010FEF0
  return; // 8010FEF4
}

// fn_8010FEF8
void f_8010FEF8(Ctx* __restrict c) {
  trace_call(0x8010FEF8u);
  return; // 8010FEF8
}

// fn_8010FEFC
void f_8010FEFC(Ctx* __restrict c) {
  trace_call(0x8010FEFCu);
  return; // 8010FEFC
}

// fn_8010FF00
void f_8010FF00(Ctx* __restrict c) {
  trace_call(0x8010FF00u);
  return; // 8010FF00
}

// fn_8010FF04
void f_8010FF04(Ctx* __restrict c) {
  trace_call(0x8010FF04u);
  return; // 8010FF04
}

// fn_8010FF08
void f_8010FF08(Ctx* __restrict c) {
  trace_call(0x8010FF08u);
  return; // 8010FF08
}

// fn_8010FF0C
void f_8010FF0C(Ctx* __restrict c) {
  trace_call(0x8010FF0Cu);
  c->r[3]=0u+0x00000000u; // 8010FF0C
  return; // 8010FF10
}

// fn_8010FF14
void f_8010FF14(Ctx* __restrict c) {
  trace_call(0x8010FF14u);
  c->r[3]=R32(c->r[3]+0x000009C8u); // 8010FF14
  return; // 8010FF18
}

// fn_8010FF1C
void f_8010FF1C(Ctx* __restrict c) {
  trace_call(0x8010FF1Cu);
  return; // 8010FF1C
}

// fn_8010FF20
void f_8010FF20(Ctx* __restrict c) {
  trace_call(0x8010FF20u);
  return; // 8010FF20
}

// fn_8010FF24
void f_8010FF24(Ctx* __restrict c) {
  trace_call(0x8010FF24u);
  return; // 8010FF24
}

// fn_8010FF28
void f_8010FF28(Ctx* __restrict c) {
  trace_call(0x8010FF28u);
  return; // 8010FF28
}

// fn_8010FF2C
void f_8010FF2C(Ctx* __restrict c) {
  trace_call(0x8010FF2Cu);
  c->r[3]=c->r[3]+0x0000087Cu; // 8010FF2C
  f_803A6F10(c); return; // 8010FF30
}

// fn_8010FF34
void f_8010FF34(Ctx* __restrict c) {
  trace_call(0x8010FF34u);
  c->r[3]=c->r[3]+0x0000083Cu; // 8010FF34
  f_803A6F10(c); return; // 8010FF38
}

// fn_8010FF3C
void f_8010FF3C(Ctx* __restrict c) {
  trace_call(0x8010FF3Cu);
  c->r[3]=0u+0x00000000u; // 8010FF3C
  return; // 8010FF40
}

// fn_8010FF44
void f_8010FF44(Ctx* __restrict c) {
  trace_call(0x8010FF44u);
  c->r[5]=0u+0x00000100u; // 8010FF44
  c->r[3]=c->r[3]+0x00000B40u; // 8010FF48
  f_8024FA70(c); return; // 8010FF4C
}

// fn_8010FF50
void f_8010FF50(Ctx* __restrict c) {
  trace_call(0x8010FF50u);
  return; // 8010FF50
}

// fn_8010FF54
void f_8010FF54(Ctx* __restrict c) {
  trace_call(0x8010FF54u);
  return; // 8010FF54
}

// fn_8010FF58
void f_8010FF58(Ctx* __restrict c) {
  trace_call(0x8010FF58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FF58
  c->r[0]=c->lr; // 8010FF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8010FF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FF64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010FF68
  c->r[31]=c->r[4]|c->r[4]; // 8010FF6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010FF70
  c->r[30]=c->r[3]|c->r[3]; // 8010FF74
  if (crb(c,2)) { goto L_8010FF94; } // 8010FF78
  c->r[4]=0u+0x00000000u; // 8010FF7C
  c->lr=0x8010FF84u; f_802BCB18(c); // 8010FF80
  cmps(c,0,(int32_t)c->r[31],0); // 8010FF84
  if (!crb(c,1)) { goto L_8010FF94; } // 8010FF88
  c->r[3]=c->r[30]|c->r[30]; // 8010FF8C
  c->lr=0x8010FF94u; f_80244DC0(c); // 8010FF90
L_8010FF94:;
  c->r[3]=c->r[30]|c->r[30]; // 8010FF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010FF98
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010FF9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FFA0
  c->lr=c->r[0]; // 8010FFA4
  c->r[1]=c->r[1]+0x00000010u; // 8010FFA8
  return; // 8010FFAC
}

// fn_8010FFB0
void f_8010FFB0(Ctx* __restrict c) {
  trace_call(0x8010FFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FFB0
  c->r[4]=0u+0x80470000u; // 8010FFB4
  {uint32_t ea=c->r[2]+0xFFFF88B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FFB8
  c->r[3]=c->r[4]+0x00004A30u; // 8010FFBC
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010FFC0
  c->r[5]=0u+0x80470000u; // 8010FFC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8010FFC8
  c->r[8]=c->r[1]+0x00000008u; // 8010FFCC
  c->r[7]=c->r[1]+0x00000018u; // 8010FFD0
  c->r[6]=c->r[1]+0x00000028u; // 8010FFD4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8010FFD8
  c->r[5]=c->r[5]+0x00004A40u; // 8010FFDC
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 8010FFE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8010FFE4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8010FFE8
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,3,ea,0,0);} // 8010FFEC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8010FFF0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8010FFF4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 8010FFF8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8010FFFC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80110000
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,5,ea,0,0);} // 80110004
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80110008
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8011000C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 80110010
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80110014
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80110018
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,6,ea,0,0);} // 8011001C
  {uint32_t ea=c->r[4]+0x00004A30u; WF32(ea,c->f[1]);} // 80110020
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80110024
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80110028
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8011002C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80110030
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,0,0);} // 80110034
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,4,ea,0,0);} // 80110038
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,5,ea,0,0);} // 8011003C
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 80110040
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,3,ea,0,0);} // 80110044
  c->r[1]=c->r[1]+0x00000040u; // 80110048
  return; // 8011004C
}

// fn_80110050
void f_80110050(Ctx* __restrict c) {
  trace_call(0x80110050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110050
  c->r[0]=c->lr; // 80110054
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011005C
  c->r[31]=c->r[3]|c->r[3]; // 80110060
  c->lr=0x80110068u; f_8010E720(c); // 80110064
  c->r[3]=0u+0x80420000u; // 80110068
  c->r[0]=0u+0x00000000u; // 8011006C
  c->r[3]=c->r[3]+0x00002028u; // 80110070
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80110074
  c->r[3]=c->r[31]|c->r[31]; // 80110078
  W32(c->r[31]+0x00000D48u,c->r[0]); // 8011007C
  W32(c->r[31]+0x00000D44u,c->r[0]); // 80110080
  W8(c->r[31]+0x00000D4Cu,c->r[0]); // 80110084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110088
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011008C
  c->lr=c->r[0]; // 80110090
  c->r[1]=c->r[1]+0x00000010u; // 80110094
  return; // 80110098
}

// fn_8011009C
void f_8011009C(Ctx* __restrict c) {
  trace_call(0x8011009Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011009C
  c->r[0]=c->lr; // 801100A0
  cmps(c,0,(int32_t)c->r[3],0); // 801100A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801100A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801100AC
  c->r[31]=c->r[4]|c->r[4]; // 801100B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801100B4
  c->r[30]=c->r[3]|c->r[3]; // 801100B8
  if (crb(c,2)) { goto L_801100D8; } // 801100BC
  c->r[4]=0u+0x00000000u; // 801100C0
  c->lr=0x801100C8u; f_8010E850(c); // 801100C4
  cmps(c,0,(int32_t)c->r[31],0); // 801100C8
  if (!crb(c,1)) { goto L_801100D8; } // 801100CC
  c->r[3]=c->r[30]|c->r[30]; // 801100D0
  c->lr=0x801100D8u; f_80244DC0(c); // 801100D4
L_801100D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801100D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801100DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801100E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801100E4
  c->lr=c->r[0]; // 801100E8
  c->r[1]=c->r[1]+0x00000010u; // 801100EC
  return; // 801100F0
}

// fn_801100F4
void f_801100F4(Ctx* __restrict c) {
  trace_call(0x801100F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801100F4
  c->r[0]=c->lr; // 801100F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801100FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110100
  c->r[31]=c->r[3]|c->r[3]; // 80110104
  c->lr=0x8011010Cu; f_8010F690(c); // 80110108
  c->r[3]=0u+0x00000450u; // 8011010C
  c->r[4]=c->r[13]+0xFFFFBD00u; // 80110110
  c->r[5]=0u+0x00000000u; // 80110114
  c->r[6]=0u+0x00001001u; // 80110118
  c->lr=0x80110120u; f_80244D20(c); // 8011011C
  cmps(c,0,(int32_t)c->r[3],0); // 80110120
  if (crb(c,2)) { goto L_8011012C; } // 80110124
  c->lr=0x8011012Cu; f_8016557C(c); // 80110128
L_8011012C:;
  W32(c->r[31]+0x00000D48u,c->r[3]); // 8011012C
  c->r[4]=0u+0x00000000u; // 80110130
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110134
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80110138
  c->ctr=c->r[12]; // 8011013C
  if (true) { c->lr=0x80110144u; dispatch(c,c->ctr); } // 80110140
  c->r[0]=R32(c->r[13]+0xFFFFF3B8u); // 80110144
  c->r[3]=0u+0x00000018u; // 80110148
  {uint32_t ea=c->r[2]+0xFFFF88C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011014C
  c->r[4]=c->r[13]+0xFFFFBD48u; // 80110150
  {uint32_t ea=c->r[2]+0xFFFF88C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80110154
  c->r[5]=0u+0x00000000u; // 80110158
  {uint32_t ea=c->r[13]+0xFFFFF434u; WF32(ea,c->f[1]);} // 8011015C
  c->r[6]=0u+0x00001001u; // 80110160
  W32(c->r[13]+0xFFFFDF40u,c->r[0]); // 80110164
  {uint32_t ea=c->r[13]+0xFFFFF438u; WF32(ea,c->f[0]);} // 80110168
  c->lr=0x80110170u; f_80244D20(c); // 8011016C
  cmps(c,0,(int32_t)c->r[3],0); // 80110170
  if (crb(c,2)) { goto L_8011017C; } // 80110174
  c->lr=0x8011017Cu; f_80027DC4(c); // 80110178
L_8011017C:;
  W32(c->r[13]+0xFFFFE1C4u,c->r[3]); // 8011017C
  c->r[3]=0u+0x00001104u; // 80110180
  c->r[4]=c->r[13]+0xFFFFBD40u; // 80110184
  c->r[5]=0u+0x00000000u; // 80110188
  c->r[6]=0u+0x00001001u; // 8011018C
  c->lr=0x80110194u; f_80244D20(c); // 80110190
  cmps(c,0,(int32_t)c->r[3],0); // 80110194
  c->r[5]=c->r[3]|c->r[3]; // 80110198
  if (crb(c,2)) { goto L_801101A8; } // 8011019C
  c->lr=0x801101A4u; f_8015C3F0(c); // 801101A0
  c->r[5]=c->r[3]|c->r[3]; // 801101A4
L_801101A8:;
  W32(c->r[13]+0xFFFFE1C0u,c->r[5]); // 801101A8
  c->r[0]=0u+0x00000001u; // 801101AC
  c->r[3]=0u+0x00002278u; // 801101B0
  c->r[4]=c->r[13]+0xFFFFBD38u; // 801101B4
  W8(c->r[5]+0x00001101u,c->r[0]); // 801101B8
  c->r[5]=0u+0x00000000u; // 801101BC
  c->r[6]=0u+0x00001001u; // 801101C0
  c->lr=0x801101C8u; f_80244D20(c); // 801101C4
  cmps(c,0,(int32_t)c->r[3],0); // 801101C8
  if (crb(c,2)) { goto L_801101D4; } // 801101CC
  c->lr=0x801101D4u; f_8016146C(c); // 801101D0
L_801101D4:;
  W32(c->r[13]+0xFFFFE1BCu,c->r[3]); // 801101D4
  c->r[3]=0u+0x00000014u; // 801101D8
  c->r[4]=c->r[13]+0xFFFFBD30u; // 801101DC
  c->r[5]=0u+0x00000000u; // 801101E0
  c->r[6]=0u+0x00001001u; // 801101E4
  c->lr=0x801101ECu; f_80244D20(c); // 801101E8
  cmps(c,0,(int32_t)c->r[3],0); // 801101EC
  if (crb(c,2)) { goto L_801101F8; } // 801101F0
  c->lr=0x801101F8u; f_801378E8(c); // 801101F4
L_801101F8:;
  c->r[4]=0u+0x00010000u; // 801101F8
  W32(c->r[13]+0xFFFFE1B8u,c->r[3]); // 801101FC
  c->r[3]=c->r[4]+0xFFFFD2BCu; // 80110200
  c->r[5]=0u+0x00000000u; // 80110204
  c->r[4]=c->r[13]+0xFFFFBD28u; // 80110208
  c->r[6]=0u+0x00001001u; // 8011020C
  c->lr=0x80110214u; f_80244D20(c); // 80110210
  cmps(c,0,(int32_t)c->r[3],0); // 80110214
  if (crb(c,2)) { goto L_80110220; } // 80110218
  c->lr=0x80110220u; f_8002E038(c); // 8011021C
L_80110220:;
  W32(c->r[13]+0xFFFFE138u,c->r[3]); // 80110220
  c->r[3]=0u+0x0000012Cu; // 80110224
  c->r[4]=c->r[13]+0xFFFFBD20u; // 80110228
  c->r[5]=0u+0x00000000u; // 8011022C
  c->r[6]=0u+0x00001001u; // 80110230
  c->lr=0x80110238u; f_80244D20(c); // 80110234
  cmps(c,0,(int32_t)c->r[3],0); // 80110238
  if (crb(c,2)) { goto L_80110244; } // 8011023C
  c->lr=0x80110244u; f_8002B9F4(c); // 80110240
L_80110244:;
  W32(c->r[13]+0xFFFFE100u,c->r[3]); // 80110244
  c->r[3]=0u+0x0000067Cu; // 80110248
  c->r[4]=c->r[13]+0xFFFFBD18u; // 8011024C
  c->r[5]=0u+0x00000000u; // 80110250
  c->r[6]=0u+0x00001001u; // 80110254
  c->lr=0x8011025Cu; f_80244D20(c); // 80110258
  cmps(c,0,(int32_t)c->r[3],0); // 8011025C
  if (crb(c,2)) { goto L_80110268; } // 80110260
  c->lr=0x80110268u; f_80035424(c); // 80110264
L_80110268:;
  W32(c->r[13]+0xFFFFE13Cu,c->r[3]); // 80110268
  c->r[3]=0u+0x00000110u; // 8011026C
  c->r[4]=c->r[13]+0xFFFFBD10u; // 80110270
  c->r[5]=0u+0x00000000u; // 80110274
  c->r[6]=0u+0x00001001u; // 80110278
  c->lr=0x80110280u; f_80244D20(c); // 8011027C
  cmps(c,0,(int32_t)c->r[3],0); // 80110280
  if (crb(c,2)) { goto L_8011028C; } // 80110284
  c->lr=0x8011028Cu; f_801183F8(c); // 80110288
L_8011028C:;
  W32(c->r[13]+0xFFFFE1C8u,c->r[3]); // 8011028C
  c->lr=0x80110294u; f_8011881C(c); // 80110290
  c->r[3]=0u+0x00000024u; // 80110294
  c->r[4]=c->r[13]+0xFFFFBD08u; // 80110298
  c->r[5]=0u+0x00000000u; // 8011029C
  c->r[6]=0u+0x00001001u; // 801102A0
  c->lr=0x801102A8u; f_80244D20(c); // 801102A4
  cmps(c,0,(int32_t)c->r[3],0); // 801102A8
  if (crb(c,2)) { goto L_801102B4; } // 801102AC
  c->lr=0x801102B4u; f_801236B4(c); // 801102B0
L_801102B4:;
  W32(c->r[13]+0xFFFFE148u,c->r[3]); // 801102B4
  c->lr=0x801102BCu; f_80353A74(c); // 801102B8
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801102BC
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 801102C0
  c->r[0]=0u-c->r[4]; // 801102C4
  c->r[0]=c->r[0]|c->r[4]; // 801102C8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801102CC
  c->lr=0x801102D4u; f_801147DC(c); // 801102D0
  c->r[0]=0u+0x00000000u; // 801102D4
  W32(c->r[31]+0x00000D50u,c->r[0]); // 801102D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801102DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801102E0
  c->lr=c->r[0]; // 801102E4
  c->r[1]=c->r[1]+0x00000010u; // 801102E8
  return; // 801102EC
}

// fn_801102F0
void f_801102F0(Ctx* __restrict c) {
  trace_call(0x801102F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801102F0
  c->r[0]=c->lr; // 801102F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801102F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801102FC
  c->r[31]=c->r[3]|c->r[3]; // 80110300
  c->lr=0x80110308u; f_8010FAA4(c); // 80110304
  c->r[3]=R32(c->r[13]+0xFFFFE100u); // 80110308
  cmps(c,0,(int32_t)c->r[3],0); // 8011030C
  if (crb(c,2)) { goto L_80110328; } // 80110310
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110314
  c->r[4]=0u+0x00000001u; // 80110318
  c->r[12]=R32(c->r[12]+0x00000008u); // 8011031C
  c->ctr=c->r[12]; // 80110320
  if (true) { c->lr=0x80110328u; dispatch(c,c->ctr); } // 80110324
L_80110328:;
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 80110328
  c->r[0]=0u+0x00000000u; // 8011032C
  W32(c->r[13]+0xFFFFE100u,c->r[0]); // 80110330
  cmps(c,0,(int32_t)c->r[3],0); // 80110334
  if (crb(c,2)) { goto L_80110350; } // 80110338
  c->r[12]=R32(c->r[3]+0x00000000u); // 8011033C
  c->r[4]=0u+0x00000001u; // 80110340
  c->r[12]=R32(c->r[12]+0x00000008u); // 80110344
  c->ctr=c->r[12]; // 80110348
  if (true) { c->lr=0x80110350u; dispatch(c,c->ctr); } // 8011034C
L_80110350:;
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 80110350
  c->r[0]=0u+0x00000000u; // 80110354
  W32(c->r[13]+0xFFFFE13Cu,c->r[0]); // 80110358
  cmps(c,0,(int32_t)c->r[3],0); // 8011035C
  if (crb(c,2)) { goto L_80110378; } // 80110360
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110364
  c->r[4]=0u+0x00000001u; // 80110368
  c->r[12]=R32(c->r[12]+0x00000008u); // 8011036C
  c->ctr=c->r[12]; // 80110370
  if (true) { c->lr=0x80110378u; dispatch(c,c->ctr); } // 80110374
L_80110378:;
  c->r[3]=R32(c->r[13]+0xFFFFE148u); // 80110378
  c->r[0]=0u+0x00000000u; // 8011037C
  W32(c->r[13]+0xFFFFE138u,c->r[0]); // 80110380
  cmps(c,0,(int32_t)c->r[3],0); // 80110384
  if (crb(c,2)) { goto L_801103A0; } // 80110388
  c->r[12]=R32(c->r[3]+0x00000000u); // 8011038C
  c->r[4]=0u+0x00000001u; // 80110390
  c->r[12]=R32(c->r[12]+0x00000008u); // 80110394
  c->ctr=c->r[12]; // 80110398
  if (true) { c->lr=0x801103A0u; dispatch(c,c->ctr); } // 8011039C
L_801103A0:;
  c->r[3]=R32(c->r[13]+0xFFFFE1B8u); // 801103A0
  c->r[0]=0u+0x00000000u; // 801103A4
  W32(c->r[13]+0xFFFFE148u,c->r[0]); // 801103A8
  cmps(c,0,(int32_t)c->r[3],0); // 801103AC
  if (crb(c,2)) { goto L_801103C8; } // 801103B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801103B4
  c->r[4]=0u+0x00000001u; // 801103B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801103BC
  c->ctr=c->r[12]; // 801103C0
  if (true) { c->lr=0x801103C8u; dispatch(c,c->ctr); } // 801103C4
L_801103C8:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C0u); // 801103C8
  c->r[0]=0u+0x00000000u; // 801103CC
  W32(c->r[13]+0xFFFFE1B8u,c->r[0]); // 801103D0
  cmps(c,0,(int32_t)c->r[3],0); // 801103D4
  if (crb(c,2)) { goto L_801103F0; } // 801103D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801103DC
  c->r[4]=0u+0x00000001u; // 801103E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801103E4
  c->ctr=c->r[12]; // 801103E8
  if (true) { c->lr=0x801103F0u; dispatch(c,c->ctr); } // 801103EC
L_801103F0:;
  c->r[3]=R32(c->r[13]+0xFFFFE1BCu); // 801103F0
  c->r[0]=0u+0x00000000u; // 801103F4
  W32(c->r[13]+0xFFFFE1C0u,c->r[0]); // 801103F8
  cmps(c,0,(int32_t)c->r[3],0); // 801103FC
  if (crb(c,2)) { goto L_80110418; } // 80110400
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110404
  c->r[4]=0u+0x00000001u; // 80110408
  c->r[12]=R32(c->r[12]+0x00000008u); // 8011040C
  c->ctr=c->r[12]; // 80110410
  if (true) { c->lr=0x80110418u; dispatch(c,c->ctr); } // 80110414
L_80110418:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C4u); // 80110418
  c->r[0]=0u+0x00000000u; // 8011041C
  W32(c->r[13]+0xFFFFE1BCu,c->r[0]); // 80110420
  cmps(c,0,(int32_t)c->r[3],0); // 80110424
  if (crb(c,2)) { goto L_80110440; } // 80110428
  c->r[12]=R32(c->r[3]+0x00000000u); // 8011042C
  c->r[4]=0u+0x00000001u; // 80110430
  c->r[12]=R32(c->r[12]+0x00000008u); // 80110434
  c->ctr=c->r[12]; // 80110438
  if (true) { c->lr=0x80110440u; dispatch(c,c->ctr); } // 8011043C
L_80110440:;
  c->r[0]=0u+0x00000000u; // 80110440
  W32(c->r[13]+0xFFFFE1C4u,c->r[0]); // 80110444
  c->r[3]=R32(c->r[31]+0x00000D48u); // 80110448
  cmps(c,0,(int32_t)c->r[3],0); // 8011044C
  if (crb(c,2)) { goto L_8011048C; } // 80110450
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110454
  c->r[12]=R32(c->r[12]+0x00000010u); // 80110458
  c->ctr=c->r[12]; // 8011045C
  if (true) { c->lr=0x80110464u; dispatch(c,c->ctr); } // 80110460
  c->r[3]=R32(c->r[31]+0x00000D48u); // 80110464
  cmps(c,0,(int32_t)c->r[3],0); // 80110468
  if (crb(c,2)) { goto L_80110484; } // 8011046C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110470
  c->r[4]=0u+0x00000001u; // 80110474
  c->r[12]=R32(c->r[12]+0x00000008u); // 80110478
  c->ctr=c->r[12]; // 8011047C
  if (true) { c->lr=0x80110484u; dispatch(c,c->ctr); } // 80110480
L_80110484:;
  c->r[0]=0u+0x00000000u; // 80110484
  W32(c->r[31]+0x00000D48u,c->r[0]); // 80110488
L_8011048C:;
  c->r[3]=R32(c->r[31]+0x00000D44u); // 8011048C
  cmps(c,0,(int32_t)c->r[3],0); // 80110490
  if (crb(c,2)) { goto L_801104A4; } // 80110494
  c->lr=0x8011049Cu; f_8029A328(c); // 80110498
  c->r[3]=R32(c->r[31]+0x00000D44u); // 8011049C
  c->lr=0x801104A4u; f_80295B7C(c); // 801104A0
L_801104A4:;
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801104A4
  c->r[0]=0u+0x00000000u; // 801104A8
  W8(c->r[3]+0x00000011u,c->r[0]); // 801104AC
  c->r[0]=R32(c->r[13]+0xFFFFE1C8u); // 801104B0
  cmps(c,0,(int32_t)c->r[0],0); // 801104B4
  if (crb(c,2)) { goto L_8011051C; } // 801104B8
  c->r[31]=0u+0x00000000u; // 801104BC
  goto L_801104D0; // 801104C0
L_801104C4:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 801104C4
  c->r[4]=c->r[31]|c->r[31]; // 801104C8
  c->lr=0x801104D0u; f_80119A44(c); // 801104CC
L_801104D0:;
  c->r[4]=c->r[31]|c->r[31]; // 801104D0
  c->r[5]=c->r[1]+0x00000008u; // 801104D4
  c->r[3]=0u+0x00000001u; // 801104D8
  c->lr=0x801104E0u; f_8024D6D0(c); // 801104DC
  cmps(c,0,(int32_t)c->r[3],0); // 801104E0
  c->r[31]=c->r[3]|c->r[3]; // 801104E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801104C4; } // 801104E8
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 801104EC
  c->lr=0x801104F4u; f_80119750(c); // 801104F0
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 801104F4
  cmps(c,0,(int32_t)c->r[3],0); // 801104F8
  if (crb(c,2)) { goto L_80110514; } // 801104FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110500
  c->r[4]=0u+0x00000001u; // 80110504
  c->r[12]=R32(c->r[12]+0x00000008u); // 80110508
  c->ctr=c->r[12]; // 8011050C
  if (true) { c->lr=0x80110514u; dispatch(c,c->ctr); } // 80110510
L_80110514:;
  c->r[0]=0u+0x00000000u; // 80110514
  W32(c->r[13]+0xFFFFE1C8u,c->r[0]); // 80110518
L_8011051C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011051C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80110520
  c->lr=c->r[0]; // 80110524
  c->r[1]=c->r[1]+0x00000020u; // 80110528
  return; // 8011052C
}

// fn_80110530
void f_80110530(Ctx* __restrict c) {
  trace_call(0x80110530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110530
  c->r[0]=c->lr; // 80110534
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011053C
  c->r[31]=c->r[3]|c->r[3]; // 80110540
  c->lr=0x80110548u; f_8010F6A4(c); // 80110544
  c->r[3]=R32(c->r[31]+0x000000ACu); // 80110548
  c->r[4]=R32(c->r[3]+0x000001C8u); // 8011054C
  cmps(c,0,(int32_t)c->r[4],0); // 80110550
  if (crb(c,2)) { goto L_8011055C; } // 80110554
  c->r[4]=c->r[4]+0x00000028u; // 80110558
L_8011055C:;
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 8011055C
  c->lr=0x80110564u; f_80037480(c); // 80110560
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80110564
  cmps(c,0,(int32_t)c->r[3],0); // 80110568
  if (crb(c,2)) { goto L_80110574; } // 8011056C
  c->lr=0x80110574u; f_801196C0(c); // 80110570
L_80110574:;
  c->r[0]=R32(c->r[13]+0xFFFFE1C0u); // 80110574
  cmps(c,0,(int32_t)c->r[0],0); // 80110578
  if (crb(c,2)) { goto L_80110594; } // 8011057C
  c->lr=0x80110584u; f_8015C4D8(c); // 80110580
  c->r[12]=R32(c->r[3]+0x00000000u); // 80110584
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80110588
  c->ctr=c->r[12]; // 8011058C
  if (true) { c->lr=0x80110594u; dispatch(c,c->ctr); } // 80110590
L_80110594:;
  c->r[0]=R32(c->r[13]+0xFFFFE1BCu); // 80110594
  cmps(c,0,(int32_t)c->r[0],0); // 80110598
  if (crb(c,2)) { goto L_801105B4; } // 8011059C
  c->lr=0x801105A4u; f_8016153C(c); // 801105A0
  c->r[12]=R32(c->r[3]+0x00000040u); // 801105A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801105A8
  c->ctr=c->r[12]; // 801105AC
  if (true) { c->lr=0x801105B4u; dispatch(c,c->ctr); } // 801105B0
L_801105B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801105B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801105B8
  c->lr=c->r[0]; // 801105BC
  c->r[1]=c->r[1]+0x00000010u; // 801105C0
  return; // 801105C4
}

// fn_801105C8
void f_801105C8(Ctx* __restrict c) {
  trace_call(0x801105C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801105C8
  c->r[0]=c->lr; // 801105CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801105D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801105D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801105D8
  c->r[30]=c->r[5]|c->r[5]; // 801105DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801105E0
  c->r[29]=c->r[4]|c->r[4]; // 801105E4
  c->lr=0x801105ECu; f_8010FB0C(c); // 801105E8
  c->r[0]=R32(c->r[13]+0xFFFFE1C8u); // 801105EC
  cmps(c,0,(int32_t)c->r[0],0); // 801105F0
  if (crb(c,2)) { goto L_80110670; } // 801105F4
  cmps(c,0,(int32_t)c->r[29],1); // 801105F8
  if (crb(c,2)) { goto L_80110608; } // 801105FC
  cmps(c,0,(int32_t)c->r[29],4); // 80110600
  if (!crb(c,2)) { goto L_80110670; } // 80110604
L_80110608:;
  c->r[31]=0u+0x00000000u; // 80110608
  goto L_80110654; // 8011060C
L_80110610:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80110610
  c->r[0]=R32(c->r[3]+0x00000000u); // 80110614
  c->r[3]=R32(c->r[4]+0x000000E0u); // 80110618
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8011061C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80110620
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80110624
  cmpu(c,0,c->r[4],c->r[0]); // 80110628
  if (!crb(c,2)) { goto L_80110654; } // 8011062C
  cmps(c,0,(int32_t)c->r[29],1); // 80110630
  if (!crb(c,2)) { goto L_80110648; } // 80110634
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80110638
  c->r[4]=c->r[31]|c->r[31]; // 8011063C
  c->lr=0x80110644u; f_8011979C(c); // 80110640
  goto L_80110654; // 80110644
L_80110648:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80110648
  c->r[4]=c->r[31]|c->r[31]; // 8011064C
  c->lr=0x80110654u; f_80119A44(c); // 80110650
L_80110654:;
  c->r[4]=c->r[31]|c->r[31]; // 80110654
  c->r[5]=c->r[1]+0x00000008u; // 80110658
  c->r[3]=0u+0x00000001u; // 8011065C
  c->lr=0x80110664u; f_8024D6D0(c); // 80110660
  cmps(c,0,(int32_t)c->r[3],0); // 80110664
  c->r[31]=c->r[3]|c->r[3]; // 80110668
  if (!crb(c,2)) { IRQCHK(c); goto L_80110610; } // 8011066C
L_80110670:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80110670
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80110674
  c->r[30]=R32(c->r[1]+0x00000018u); // 80110678
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011067C
  c->lr=c->r[0]; // 80110680
  c->r[1]=c->r[1]+0x00000020u; // 80110684
  return; // 80110688
}

// fn_8011068C
void f_8011068C(Ctx* __restrict c) {
  trace_call(0x8011068Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011068C
  c->r[0]=c->lr; // 80110690
  W32(c->r[1]+0x00000024u,c->r[0]); // 80110694
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80110698
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011069C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801106A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801106A4
  c->r[28]=c->r[3]|c->r[3]; // 801106A8
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 801106AC
  c->lr=0x801106B4u; f_8014E2F4(c); // 801106B0
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 801106B4
  c->lr=0x801106BCu; f_800244E4(c); // 801106B8
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 801106BC
  c->lr=0x801106C4u; f_8002E624(c); // 801106C0
  c->r[3]=c->r[28]|c->r[28]; // 801106C4
  c->lr=0x801106CCu; f_8010F2EC(c); // 801106C8
  c->r[4]=R32(c->r[13]+0xFFFFE138u); // 801106CC
  c->r[3]=R32(c->r[13]+0xFFFFE148u); // 801106D0
  c->r[4]=R32(c->r[4]+0x00000014u); // 801106D4
  c->r[5]=R32(c->r[28]+0x00000078u); // 801106D8
  c->lr=0x801106E0u; f_80123788(c); // 801106DC
  c->r[4]=R32(c->r[28]+0x00000D48u); // 801106E0
  c->r[3]=c->r[28]|c->r[28]; // 801106E4
  c->lr=0x801106ECu; f_8010F28C(c); // 801106E8
  c->r[0]=R32(c->r[28]+0x00000D50u); // 801106EC
  cmpu(c,0,c->r[0],0x0000000Au); // 801106F0
  if (!crb(c,0)) { goto L_80110768; } // 801106F4
  c->r[30]=0u+0x00000001u; // 801106F8
  c->r[29]=0u+0x00000000u; // 801106FC
  c->r[31]=0u+0x00000000u; // 80110700
  goto L_80110734; // 80110704
L_80110708:;
  c->r[3]=R32(c->r[28]+0x000000A8u); // 80110708
  c->r[3]=R32(c->r[3]+c->r[31]); // 8011070C
  c->r[0]=R32(c->r[3]+0x00000120u); // 80110710
  c->r[0]=rotl(c->r[0],9)&0x00000001u; cr0(c,c->r[0]); // 80110714
  if (crb(c,2)) { goto L_8011072C; } // 80110718
  c->lr=0x80110720u; f_802C00A8(c); // 8011071C
  cmps(c,0,(int32_t)c->r[3],0); // 80110720
  if (!crb(c,2)) { goto L_8011072C; } // 80110724
  c->r[30]=0u+0x00000000u; // 80110728
L_8011072C:;
  c->r[31]=c->r[31]+0x00000004u; // 8011072C
  c->r[29]=c->r[29]+0x00000001u; // 80110730
L_80110734:;
  c->r[0]=R32(c->r[28]+0x000000A4u); // 80110734
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80110738
  if (crb(c,0)) { IRQCHK(c); goto L_80110708; } // 8011073C
  cmps(c,0,(int32_t)c->r[30],0); // 80110740
  if (crb(c,2)) { goto L_80110768; } // 80110744
  c->r[3]=R32(c->r[28]+0x00000D50u); // 80110748
  c->r[0]=c->r[3]+0x00000001u; // 8011074C
  W32(c->r[28]+0x00000D50u,c->r[0]); // 80110750
  cmpu(c,0,c->r[0],0x0000000Au); // 80110754
  if (crb(c,0)) { goto L_80110768; } // 80110758
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 8011075C
  c->r[0]=0u+0x00000001u; // 80110760
  W8(c->r[3]+0x00000011u,c->r[0]); // 80110764
L_80110768:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80110768
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011076C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80110770
  c->r[29]=R32(c->r[1]+0x00000014u); // 80110774
  c->r[28]=R32(c->r[1]+0x00000010u); // 80110778
  c->lr=c->r[0]; // 8011077C
  c->r[1]=c->r[1]+0x00000020u; // 80110780
  return; // 80110784
}

// fn_80110788
void f_80110788(Ctx* __restrict c) {
  trace_call(0x80110788u);
  f_8010F37C(c); return; // 80110788
}

// fn_8011078C
void f_8011078C(Ctx* __restrict c) {
  trace_call(0x8011078Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011078C
  c->r[0]=c->lr; // 80110790
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110794
  c->lr=0x8011079Cu; f_8010FB10(c); // 80110798
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 8011079C
  c->lr=0x801107A4u; f_80025364(c); // 801107A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801107A4
  c->lr=c->r[0]; // 801107A8
  c->r[1]=c->r[1]+0x00000010u; // 801107AC
  return; // 801107B0
}

// fn_801107B4
void f_801107B4(Ctx* __restrict c) {
  trace_call(0x801107B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801107B4
  c->r[0]=c->lr; // 801107B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801107BC
  c->lr=0x801107C4u; f_8010FB14(c); // 801107C0
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 801107C4
  c->lr=0x801107CCu; f_800253B8(c); // 801107C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801107CC
  c->lr=c->r[0]; // 801107D0
  c->r[1]=c->r[1]+0x00000010u; // 801107D4
  return; // 801107D8
}

// fn_801107DC
void f_801107DC(Ctx* __restrict c) {
  trace_call(0x801107DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801107DC
  c->r[0]=c->lr; // 801107E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801107E4
  c->lr=0x801107ECu; f_8010FB20(c); // 801107E8
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 801107EC
  c->lr=0x801107F4u; f_80025364(c); // 801107F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801107F4
  c->lr=c->r[0]; // 801107F8
  c->r[1]=c->r[1]+0x00000010u; // 801107FC
  return; // 80110800
}

// fn_80110804
void f_80110804(Ctx* __restrict c) {
  trace_call(0x80110804u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110804
  c->r[0]=c->lr; // 80110808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011080C
  c->lr=0x80110814u; f_8010FB24(c); // 80110810
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80110814
  c->lr=0x8011081Cu; f_800253B8(c); // 80110818
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011081C
  c->lr=c->r[0]; // 80110820
  c->r[1]=c->r[1]+0x00000010u; // 80110824
  return; // 80110828
}

// fn_8011082C
void f_8011082C(Ctx* __restrict c) {
  trace_call(0x8011082Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011082C
  c->r[4]=0u+0x80470000u; // 80110830
  {uint32_t ea=c->r[2]+0xFFFF88C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110834
  c->r[3]=c->r[4]+0x00004A70u; // 80110838
  {uint32_t ea=c->r[2]+0xFFFF88CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011083C
  c->r[5]=0u+0x80470000u; // 80110840
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80110844
  c->r[8]=c->r[1]+0x00000008u; // 80110848
  c->r[7]=c->r[1]+0x00000018u; // 8011084C
  c->r[6]=c->r[1]+0x00000028u; // 80110850
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80110854
  c->r[5]=c->r[5]+0x00004A80u; // 80110858
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 8011085C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80110860
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80110864
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,3,ea,0,0);} // 80110868
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8011086C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80110870
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 80110874
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80110878
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8011087C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,5,ea,0,0);} // 80110880
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80110884
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80110888
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 8011088C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80110890
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80110894
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,6,ea,0,0);} // 80110898
  {uint32_t ea=c->r[4]+0x00004A70u; WF32(ea,c->f[1]);} // 8011089C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801108A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801108A4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801108A8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 801108AC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,0,0);} // 801108B0
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,4,ea,0,0);} // 801108B4
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,5,ea,0,0);} // 801108B8
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 801108BC
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,3,ea,0,0);} // 801108C0
  c->r[1]=c->r[1]+0x00000040u; // 801108C4
  return; // 801108C8
}

// fn_801108CC
void f_801108CC(Ctx* __restrict c) {
  trace_call(0x801108CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801108CC
  c->r[0]=c->lr; // 801108D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801108D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801108D8
  c->r[31]=c->r[3]|c->r[3]; // 801108DC
  c->lr=0x801108E4u; f_8010E720(c); // 801108E0
  c->r[3]=0u+0x80420000u; // 801108E4
  c->r[0]=0u+0x00000000u; // 801108E8
  c->r[3]=c->r[3]+0x00002150u; // 801108EC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801108F0
  c->r[3]=c->r[31]|c->r[31]; // 801108F4
  W8(c->r[31]+0x00000D44u,c->r[0]); // 801108F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801108FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110900
  c->lr=c->r[0]; // 80110904
  c->r[1]=c->r[1]+0x00000010u; // 80110908
  return; // 8011090C
}

// fn_80110910
void f_80110910(Ctx* __restrict c) {
  trace_call(0x80110910u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110910
  c->r[0]=c->lr; // 80110914
  cmps(c,0,(int32_t)c->r[3],0); // 80110918
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011091C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110920
  c->r[31]=c->r[4]|c->r[4]; // 80110924
  W32(c->r[1]+0x00000008u,c->r[30]); // 80110928
  c->r[30]=c->r[3]|c->r[3]; // 8011092C
  if (crb(c,2)) { goto L_8011094C; } // 80110930
  c->r[4]=0u+0x00000000u; // 80110934
  c->lr=0x8011093Cu; f_8010E850(c); // 80110938
  cmps(c,0,(int32_t)c->r[31],0); // 8011093C
  if (!crb(c,1)) { goto L_8011094C; } // 80110940
  c->r[3]=c->r[30]|c->r[30]; // 80110944
  c->lr=0x8011094Cu; f_80244DC0(c); // 80110948
L_8011094C:;
  c->r[3]=c->r[30]|c->r[30]; // 8011094C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110950
  c->r[30]=R32(c->r[1]+0x00000008u); // 80110954
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110958
  c->lr=c->r[0]; // 8011095C
  c->r[1]=c->r[1]+0x00000010u; // 80110960
  return; // 80110964
}

// fn_80110968
void f_80110968(Ctx* __restrict c) {
  trace_call(0x80110968u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110968
  c->r[0]=c->lr; // 8011096C
  W32(c->r[1]+0x00000234u,c->r[0]); // 80110970
  W32(c->r[1]+0x0000022Cu,c->r[31]); // 80110974
  W32(c->r[1]+0x00000228u,c->r[30]); // 80110978
  W32(c->r[1]+0x00000224u,c->r[29]); // 8011097C
  W32(c->r[1]+0x00000220u,c->r[28]); // 80110980
  c->r[28]=c->r[3]|c->r[3]; // 80110984
  c->lr=0x8011098Cu; f_8010F2EC(c); // 80110988
  c->r[0]=R8(c->r[28]+0x00000D44u); // 8011098C
  c->r[31]=R32(c->r[13]+0xFFFFE12Cu); // 80110990
  cmps(c,0,(int32_t)c->r[0],0); // 80110994
  if (!crb(c,2)) { goto L_80110A18; } // 80110998
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 8011099C
  c->r[4]=c->r[31]|c->r[31]; // 801109A0
  c->lr=0x801109A8u; f_8011498C(c); // 801109A4
  c->r[30]=R32(c->r[13]+0xFFFFE168u); // 801109A8
  c->r[5]=0u+0x80470000u; // 801109AC
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 801109B0
  c->r[3]=c->r[1]+0x00000008u; // 801109B4
  c->r[4]=R32(c->r[30]+0x00000014u); // 801109B8
  c->r[5]=c->r[5]+0x00004AB0u; // 801109BC
  c->lr=0x801109C4u; f_8010E674(c); // 801109C0
  c->r[3]=c->r[30]|c->r[30]; // 801109C4
  c->r[4]=c->r[1]+0x00000008u; // 801109C8
  c->lr=0x801109D0u; f_80110C20(c); // 801109CC
  c->r[29]=c->r[3]|c->r[3]; // 801109D0
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 801109D4
  c->r[4]=c->r[28]|c->r[28]; // 801109D8
  c->r[6]=0u+0x00000000u; // 801109DC
  c->r[5]=c->r[29]|c->r[29]; // 801109E0
  c->r[7]=0u+0x00000000u; // 801109E4
  c->lr=0x801109ECu; f_8027AA3C(c); // 801109E8
  W32(c->r[30]+0x00000004u,c->r[29]); // 801109EC
  c->r[6]=0u+0x00000001u; // 801109F0
  c->r[3]=c->r[1]+0x00000008u; // 801109F4
  c->r[4]=0u+0xFFFFFFFFu; // 801109F8
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801109FC
  c->r[0]=c->r[0]|0xD0000000u; // 80110A00
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 80110A04
  c->r[5]=R32(c->r[13]+0xFFFFE820u); // 80110A08
  W8(c->r[5]+0x0000021Fu,c->r[6]); // 80110A0C
  W8(c->r[28]+0x00000D44u,c->r[6]); // 80110A10
  c->lr=0x80110A18u; f_8010E6E0(c); // 80110A14
L_80110A18:;
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80110A18
  c->r[0]=R8(c->r[3]+0x00000011u); // 80110A1C
  cmps(c,0,(int32_t)c->r[0],0); // 80110A20
  if (crb(c,2)) { goto L_80110A40; } // 80110A24
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110A28
  c->r[4]=c->r[28]|c->r[28]; // 80110A2C
  c->r[5]=0u+0x00000000u; // 80110A30
  c->lr=0x80110A38u; f_8027AA08(c); // 80110A34
  c->r[3]=c->r[31]|c->r[31]; // 80110A38
  c->lr=0x80110A40u; f_8014E65C(c); // 80110A3C
L_80110A40:;
  c->r[0]=R32(c->r[1]+0x00000234u); // 80110A40
  c->r[31]=R32(c->r[1]+0x0000022Cu); // 80110A44
  c->r[30]=R32(c->r[1]+0x00000228u); // 80110A48
  c->r[29]=R32(c->r[1]+0x00000224u); // 80110A4C
  c->r[28]=R32(c->r[1]+0x00000220u); // 80110A50
  c->lr=c->r[0]; // 80110A54
  c->r[1]=c->r[1]+0x00000230u; // 80110A58
  return; // 80110A5C
}

// fn_80110A60
void f_80110A60(Ctx* __restrict c) {
  trace_call(0x80110A60u);
  f_8010F37C(c); return; // 80110A60
}

// fn_80110A64
void f_80110A64(Ctx* __restrict c) {
  trace_call(0x80110A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110A64
  c->r[0]=c->lr; // 80110A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110A70
  c->r[31]=c->r[5]|c->r[5]; // 80110A74
  W32(c->r[1]+0x00000008u,c->r[30]); // 80110A78
  c->r[30]=c->r[3]|c->r[3]; // 80110A7C
  c->lr=0x80110A84u; f_802DC32C(c); // 80110A80
  cmps(c,0,(int32_t)c->r[31],2); // 80110A84
  if (!crb(c,2)) { goto L_80110A9C; } // 80110A88
  c->r[4]=R32(c->r[30]+0x0000004Cu); // 80110A8C
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80110A90
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80110A94
  c->lr=0x80110A9Cu; f_80114C5C(c); // 80110A98
L_80110A9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110A9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110AA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80110AA4
  c->lr=c->r[0]; // 80110AA8
  c->r[1]=c->r[1]+0x00000010u; // 80110AAC
  return; // 80110AB0
}

// fn_80110AB4
void f_80110AB4(Ctx* __restrict c) {
  trace_call(0x80110AB4u);
  c->r[4]=0u+0x80420000u; // 80110AB4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80110AB8
  c->r[4]=c->r[4]+0x000022A0u; // 80110ABC
  c->r[3]=R32(c->r[4]+c->r[0]); // 80110AC0
  return; // 80110AC4
}

// fn_80110AC8
void f_80110AC8(Ctx* __restrict c) {
  trace_call(0x80110AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110AC8
  c->r[0]=c->lr; // 80110ACC
  c->r[5]=0u+0x80420000u; // 80110AD0
  c->r[4]=0u+0x00000000u; // 80110AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110AD8
  c->r[0]=0u+0x00000001u; // 80110ADC
  c->r[5]=c->r[5]+0x000022ECu; // 80110AE0
  c->r[6]=0u+0x00001001u; // 80110AE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110AE8
  c->r[31]=c->r[3]|c->r[3]; // 80110AEC
  W32(c->r[3]+0x00000000u,c->r[5]); // 80110AF0
  c->r[5]=0u+0x00000000u; // 80110AF4
  W32(c->r[3]+0x00000004u,c->r[4]); // 80110AF8
  W32(c->r[3]+0x00000008u,c->r[4]); // 80110AFC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80110B00
  W8(c->r[3]+0x00000010u,c->r[4]); // 80110B04
  W8(c->r[3]+0x00000011u,c->r[4]); // 80110B08
  W8(c->r[3]+0x00000012u,c->r[4]); // 80110B0C
  c->r[4]=c->r[13]+0xFFFFBD58u; // 80110B10
  W32(c->r[3]+0x00000014u,c->r[0]); // 80110B14
  c->r[3]=0u+0x00000280u; // 80110B18
  c->lr=0x80110B20u; f_80244D20(c); // 80110B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80110B20
  if (crb(c,2)) { goto L_80110B2C; } // 80110B24
  c->lr=0x80110B2Cu; f_802AF32C(c); // 80110B28
L_80110B2C:;
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80110B2C
  c->lr=0x80110B34u; f_80353A74(c); // 80110B30
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80110B34
  c->r[3]=0u+0x80110000u; // 80110B38
  c->r[0]=0u-c->r[5]; // 80110B3C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80110B40
  c->r[0]=c->r[0]|c->r[5]; // 80110B44
  c->r[3]=c->r[3]+0x00000FE0u; // 80110B48
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80110B4C
  W8(c->r[4]+0x00000132u,c->r[0]); // 80110B50
  c->r[0]=0u+0x00000000u; // 80110B54
  c->r[4]=0u+0x00000000u; // 80110B58
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80110B5C
  c->r[6]=0u+0x00000001u; // 80110B60
  c->r[7]=0u+0x00000000u; // 80110B64
  W32(c->r[5]+0x00000258u,c->r[3]); // 80110B68
  W32(c->r[5]+0x0000025Cu,c->r[0]); // 80110B6C
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110B70
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80110B74
  c->lr=0x80110B7Cu; f_8027ACD0(c); // 80110B78
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110B7C
  c->r[0]=0u+0x00000001u; // 80110B80
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 80110B84
  c->r[3]=c->r[31]|c->r[31]; // 80110B88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110B90
  c->lr=c->r[0]; // 80110B94
  c->r[1]=c->r[1]+0x00000010u; // 80110B98
  return; // 80110B9C
}

// fn_80110BA0
void f_80110BA0(Ctx* __restrict c) {
  trace_call(0x80110BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110BA0
  c->r[0]=c->lr; // 80110BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80110BA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110BAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110BB0
  c->r[31]=c->r[4]|c->r[4]; // 80110BB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80110BB8
  c->r[30]=c->r[3]|c->r[3]; // 80110BBC
  if (crb(c,2)) { goto L_80110C04; } // 80110BC0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80110BC4
  c->r[5]=0u+0x80420000u; // 80110BC8
  c->r[5]=c->r[5]+0x000022ECu; // 80110BCC
  W32(c->r[3]+0x00000000u,c->r[5]); // 80110BD0
  cmps(c,0,(int32_t)c->r[4],0); // 80110BD4
  if (crb(c,2)) { goto L_80110BF4; } // 80110BD8
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110BDC
  c->r[5]=0u+0x00000000u; // 80110BE0
  c->lr=0x80110BE8u; f_8027AA08(c); // 80110BE4
  c->r[0]=0u+0x00000000u; // 80110BE8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80110BEC
  W8(c->r[30]+0x00000012u,c->r[0]); // 80110BF0
L_80110BF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80110BF4
  if (!crb(c,1)) { goto L_80110C04; } // 80110BF8
  c->r[3]=c->r[30]|c->r[30]; // 80110BFC
  c->lr=0x80110C04u; f_80244DC0(c); // 80110C00
L_80110C04:;
  c->r[3]=c->r[30]|c->r[30]; // 80110C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110C08
  c->r[30]=R32(c->r[1]+0x00000008u); // 80110C0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110C10
  c->lr=c->r[0]; // 80110C14
  c->r[1]=c->r[1]+0x00000010u; // 80110C18
  return; // 80110C1C
}

// fn_80110C20
void f_80110C20(Ctx* __restrict c) {
  trace_call(0x80110C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110C20
  c->r[0]=c->lr; // 80110C24
  c->r[3]=0u+0x00000000u; // 80110C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110C30
  c->r[31]=c->r[4]|c->r[4]; // 80110C34
  c->r[0]=R32(c->r[4]+0x00000000u); // 80110C38
  cmps(c,0,(int32_t)c->r[0],0); // 80110C3C
  if (crb(c,2)) { goto L_80110C68; } // 80110C40
  cmps(c,0,(int32_t)c->r[0],1); // 80110C44
  if (crb(c,2)) { goto L_80110C90; } // 80110C48
  cmps(c,0,(int32_t)c->r[0],2); // 80110C4C
  if (crb(c,2)) { goto L_80110CB8; } // 80110C50
  cmps(c,0,(int32_t)c->r[0],4); // 80110C54
  if (crb(c,2)) { goto L_80110CE0; } // 80110C58
  cmps(c,0,(int32_t)c->r[0],3); // 80110C5C
  if (crb(c,2)) { goto L_80110D08; } // 80110C60
  goto L_80110D2C; // 80110C64
L_80110C68:;
  c->r[3]=0u+0x00000D50u; // 80110C68
  c->r[4]=c->r[13]+0xFFFFBD60u; // 80110C6C
  c->r[5]=0u+0x00000000u; // 80110C70
  c->r[6]=0u+0x00001001u; // 80110C74
  c->lr=0x80110C7Cu; f_80244D20(c); // 80110C78
  cmps(c,0,(int32_t)c->r[3],0); // 80110C7C
  if (crb(c,2)) { goto L_80110D2C; } // 80110C80
  c->r[4]=c->r[31]|c->r[31]; // 80110C84
  c->lr=0x80110C8Cu; f_80112018(c); // 80110C88
  goto L_80110D2C; // 80110C8C
L_80110C90:;
  c->r[3]=0u+0x00000E90u; // 80110C90
  c->r[4]=c->r[13]+0xFFFFBD68u; // 80110C94
  c->r[5]=0u+0x00000000u; // 80110C98
  c->r[6]=0u+0x00001001u; // 80110C9C
  c->lr=0x80110CA4u; f_80244D20(c); // 80110CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80110CA4
  if (crb(c,2)) { goto L_80110D2C; } // 80110CA8
  c->r[4]=c->r[31]|c->r[31]; // 80110CAC
  c->lr=0x80110CB4u; f_801124CC(c); // 80110CB0
  goto L_80110D2C; // 80110CB4
L_80110CB8:;
  c->r[3]=0u+0x00000D60u; // 80110CB8
  c->r[4]=c->r[13]+0xFFFFBD70u; // 80110CBC
  c->r[5]=0u+0x00000000u; // 80110CC0
  c->r[6]=0u+0x00001001u; // 80110CC4
  c->lr=0x80110CCCu; f_80244D20(c); // 80110CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80110CCC
  if (crb(c,2)) { goto L_80110D2C; } // 80110CD0
  c->r[4]=c->r[31]|c->r[31]; // 80110CD4
  c->lr=0x80110CDCu; f_80110050(c); // 80110CD8
  goto L_80110D2C; // 80110CDC
L_80110CE0:;
  c->r[3]=0u+0x00000D50u; // 80110CE0
  c->r[4]=c->r[13]+0xFFFFBD78u; // 80110CE4
  c->r[5]=0u+0x00000000u; // 80110CE8
  c->r[6]=0u+0x00001001u; // 80110CEC
  c->lr=0x80110CF4u; f_80244D20(c); // 80110CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80110CF4
  if (crb(c,2)) { goto L_80110D2C; } // 80110CF8
  c->r[4]=c->r[31]|c->r[31]; // 80110CFC
  c->lr=0x80110D04u; f_80112264(c); // 80110D00
  goto L_80110D2C; // 80110D04
L_80110D08:;
  c->r[3]=0u+0x00000D50u; // 80110D08
  c->r[4]=c->r[13]+0xFFFFBD80u; // 80110D0C
  c->r[5]=0u+0x00000000u; // 80110D10
  c->r[6]=0u+0x00001001u; // 80110D14
  c->lr=0x80110D1Cu; f_80244D20(c); // 80110D18
  cmps(c,0,(int32_t)c->r[3],0); // 80110D1C
  if (crb(c,2)) { goto L_80110D2C; } // 80110D20
  c->r[4]=c->r[31]|c->r[31]; // 80110D24
  c->lr=0x80110D2Cu; f_801108CC(c); // 80110D28
L_80110D2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110D2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110D30
  c->lr=c->r[0]; // 80110D34
  c->r[1]=c->r[1]+0x00000010u; // 80110D38
  return; // 80110D3C
}

// fn_80110D40
void f_80110D40(Ctx* __restrict c) {
  trace_call(0x80110D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110D40
  c->r[0]=c->lr; // 80110D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110D4C
  c->r[31]=c->r[4]|c->r[4]; // 80110D50
  W32(c->r[1]+0x00000008u,c->r[30]); // 80110D54
  c->r[30]=c->r[3]|c->r[3]; // 80110D58
  c->r[0]=R32(c->r[3]+0x00000004u); // 80110D5C
  cmps(c,0,(int32_t)c->r[0],0); // 80110D60
  if (crb(c,2)) { goto L_80110DA4; } // 80110D64
  c->r[4]=R32(c->r[3]+0x00000008u); // 80110D68
  cmps(c,0,(int32_t)c->r[4],0); // 80110D6C
  if (crb(c,2)) { goto L_80110D8C; } // 80110D70
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110D74
  c->r[5]=0u+0x00000000u; // 80110D78
  c->lr=0x80110D80u; f_8027AA08(c); // 80110D7C
  c->r[0]=0u+0x00000000u; // 80110D80
  W32(c->r[30]+0x00000008u,c->r[0]); // 80110D84
  W8(c->r[30]+0x00000010u,c->r[0]); // 80110D88
L_80110D8C:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110D8C
  c->r[5]=0u+0x00000000u; // 80110D90
  c->r[4]=R32(c->r[30]+0x00000004u); // 80110D94
  c->lr=0x80110D9Cu; f_8027AA08(c); // 80110D98
  c->r[0]=0u+0x00000000u; // 80110D9C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80110DA0
L_80110DA4:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 80110DA4
  c->r[5]=c->r[31]|c->r[31]; // 80110DA8
  c->r[4]=0u+0x00000000u; // 80110DAC
  c->r[6]=0u+0x00000001u; // 80110DB0
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110DB4
  c->r[7]=0u+0x00000000u; // 80110DB8
  c->lr=0x80110DC0u; f_8027ACD0(c); // 80110DBC
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110DC0
  c->r[0]=0u+0x00000001u; // 80110DC4
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 80110DC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110DCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80110DD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110DD4
  c->lr=c->r[0]; // 80110DD8
  c->r[1]=c->r[1]+0x00000010u; // 80110DDC
  return; // 80110DE0
}

// fn_80110DE4
void f_80110DE4(Ctx* __restrict c) {
  trace_call(0x80110DE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110DE4
  c->r[0]=c->lr; // 80110DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110DF0
  c->r[31]=c->r[4]|c->r[4]; // 80110DF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80110DF8
  c->r[30]=c->r[3]|c->r[3]; // 80110DFC
  c->r[0]=R32(c->r[3]+0x00000008u); // 80110E00
  cmps(c,0,(int32_t)c->r[0],0); // 80110E04
  if (crb(c,2)) { goto L_80110E28; } // 80110E08
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110E0C
  c->r[4]=c->r[0]|c->r[0]; // 80110E10
  c->r[5]=0u+0x00000000u; // 80110E14
  c->lr=0x80110E1Cu; f_8027AA08(c); // 80110E18
  c->r[0]=0u+0x00000000u; // 80110E1C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80110E20
  W8(c->r[30]+0x00000010u,c->r[0]); // 80110E24
L_80110E28:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 80110E28
  c->r[5]=c->r[31]|c->r[31]; // 80110E2C
  c->r[4]=0u+0x00000000u; // 80110E30
  c->r[6]=0u+0x00000001u; // 80110E34
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110E38
  c->r[7]=0u+0x00000000u; // 80110E3C
  c->lr=0x80110E44u; f_8027ACD0(c); // 80110E40
  c->r[4]=R32(c->r[30]+0x00000008u); // 80110E44
  c->r[0]=0u+0x00000001u; // 80110E48
  c->r[3]=R32(c->r[4]+0x0000004Cu); // 80110E4C
  c->r[3]=rotl(c->r[3],0)&0xEFFFFFFFu; // 80110E50
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 80110E54
  c->r[4]=R32(c->r[30]+0x00000008u); // 80110E58
  c->r[3]=R32(c->r[4]+0x0000004Cu); // 80110E5C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80110E60
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 80110E64
  c->r[4]=R32(c->r[30]+0x00000008u); // 80110E68
  c->r[3]=R32(c->r[4]+0x0000004Cu); // 80110E6C
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 80110E70
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 80110E74
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110E78
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 80110E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110E80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80110E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110E88
  c->lr=c->r[0]; // 80110E8C
  c->r[1]=c->r[1]+0x00000010u; // 80110E90
  return; // 80110E94
}

// fn_80110E98
void f_80110E98(Ctx* __restrict c) {
  trace_call(0x80110E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110E98
  c->r[0]=c->lr; // 80110E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110EA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110EA4
  c->r[31]=c->r[3]|c->r[3]; // 80110EA8
  c->r[4]=R32(c->r[3]+0x00000008u); // 80110EAC
  cmps(c,0,(int32_t)c->r[4],0); // 80110EB0
  if (crb(c,2)) { goto L_80110ED0; } // 80110EB4
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110EB8
  c->r[5]=0u+0x00000000u; // 80110EBC
  c->lr=0x80110EC4u; f_8027AA08(c); // 80110EC0
  c->r[0]=0u+0x00000000u; // 80110EC4
  W32(c->r[31]+0x00000008u,c->r[0]); // 80110EC8
  W8(c->r[31]+0x00000010u,c->r[0]); // 80110ECC
L_80110ED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110ED4
  c->lr=c->r[0]; // 80110ED8
  c->r[1]=c->r[1]+0x00000010u; // 80110EDC
  return; // 80110EE0
}

// fn_80110EE4
void f_80110EE4(Ctx* __restrict c) {
  trace_call(0x80110EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110EE4
  c->r[0]=c->lr; // 80110EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110EEC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80110EF0
  cmps(c,0,(int32_t)c->r[0],0); // 80110EF4
  if (crb(c,2)) { goto L_80110FD0; } // 80110EF8
  c->r[6]=R32(c->r[3]+0x00000008u); // 80110EFC
  cmps(c,0,(int32_t)c->r[6],0); // 80110F00
  if (crb(c,2)) { goto L_80110FD0; } // 80110F04
  cmps(c,0,(int32_t)c->r[4],0); // 80110F08
  if (crb(c,2)) { goto L_80110F68; } // 80110F0C
  c->r[0]=R8(c->r[3]+0x00000010u); // 80110F10
  cmps(c,0,(int32_t)c->r[0],0); // 80110F14
  if (!crb(c,2)) { goto L_80110F68; } // 80110F18
  c->r[0]=R32(c->r[6]+0x00000050u); // 80110F1C
  c->r[5]=0u+0x00000001u; // 80110F20
  c->r[0]=c->r[0]|0x10000000u; // 80110F24
  W32(c->r[6]+0x00000050u,c->r[0]); // 80110F28
  c->r[4]=R32(c->r[3]+0x00000008u); // 80110F2C
  c->r[0]=R32(c->r[4]+0x00000050u); // 80110F30
  c->r[0]=c->r[0]|0x40000000u; // 80110F34
  W32(c->r[4]+0x00000050u,c->r[0]); // 80110F38
  c->r[4]=R32(c->r[3]+0x00000008u); // 80110F3C
  c->r[0]=R32(c->r[4]+0x0000004Cu); // 80110F40
  c->r[0]=c->r[0]|0x40000000u; // 80110F44
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 80110F48
  W8(c->r[3]+0x00000010u,c->r[5]); // 80110F4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80110F50
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80110F54
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 80110F58
  c->ctr=c->r[12]; // 80110F5C
  if (true) { c->lr=0x80110F64u; dispatch(c,c->ctr); } // 80110F60
  goto L_80110FC4; // 80110F64
L_80110F68:;
  cmps(c,0,(int32_t)c->r[4],0); // 80110F68
  if (!crb(c,2)) { goto L_80110FC4; } // 80110F6C
  c->r[0]=R8(c->r[3]+0x00000010u); // 80110F70
  cmps(c,0,(int32_t)c->r[0],0); // 80110F74
  if (crb(c,2)) { goto L_80110FC4; } // 80110F78
  c->r[0]=R32(c->r[6]+0x00000050u); // 80110F7C
  c->r[5]=0u+0x00000000u; // 80110F80
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80110F84
  W32(c->r[6]+0x00000050u,c->r[0]); // 80110F88
  c->r[4]=R32(c->r[3]+0x00000008u); // 80110F8C
  c->r[0]=R32(c->r[4]+0x00000050u); // 80110F90
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80110F94
  W32(c->r[4]+0x00000050u,c->r[0]); // 80110F98
  c->r[4]=R32(c->r[3]+0x00000008u); // 80110F9C
  c->r[0]=R32(c->r[4]+0x0000004Cu); // 80110FA0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80110FA4
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 80110FA8
  W8(c->r[3]+0x00000010u,c->r[5]); // 80110FAC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80110FB0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80110FB4
  c->r[12]=R32(c->r[12]+0x00000110u); // 80110FB8
  c->ctr=c->r[12]; // 80110FBC
  if (true) { c->lr=0x80110FC4u; dispatch(c,c->ctr); } // 80110FC0
L_80110FC4:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80110FC4
  c->r[0]=0u+0x00000001u; // 80110FC8
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 80110FCC
L_80110FD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110FD0
  c->lr=c->r[0]; // 80110FD4
  c->r[1]=c->r[1]+0x00000010u; // 80110FD8
  return; // 80110FDC
}

// fn_80110FE0
void f_80110FE0(Ctx* __restrict c) {
  trace_call(0x80110FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110FE0
  c->r[0]=c->lr; // 80110FE4
  cmps(c,0,(int32_t)c->r[3],0); // 80110FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80110FF0
  if (crb(c,2)) { goto L_80111004; } // 80110FF4
  cmps(c,0,(int32_t)c->r[3],1); // 80110FF8
  if (crb(c,2)) { goto L_8011105C; } // 80110FFC
  goto L_801110B8; // 80111000
L_80111004:;
  c->r[31]=R32(c->r[13]+0xFFFFE168u); // 80111004
  c->r[0]=R32(c->r[31]+0x00000004u); // 80111008
  cmps(c,0,(int32_t)c->r[0],0); // 8011100C
  if (crb(c,2)) { goto L_801110B8; } // 80111010
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80111014
  cmps(c,0,(int32_t)c->r[0],0); // 80111018
  if (crb(c,2)) { goto L_801110B8; } // 8011101C
  c->r[0]=R8(c->r[31]+0x00000012u); // 80111020
  cmps(c,0,(int32_t)c->r[0],0); // 80111024
  if (!crb(c,2)) { goto L_8011104C; } // 80111028
  c->r[0]=0u+0x00000001u; // 8011102C
  W8(c->r[31]+0x00000012u,c->r[0]); // 80111030
  c->lr=0x80111038u; f_8026B4E0(c); // 80111034
  c->r[3]=R32(c->r[31]+0x00000004u); // 80111038
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8011103C
  c->r[12]=R32(c->r[12]+0x0000011Cu); // 80111040
  c->ctr=c->r[12]; // 80111044
  if (true) { c->lr=0x8011104Cu; dispatch(c,c->ctr); } // 80111048
L_8011104C:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 8011104C
  c->r[0]=0u+0x00000001u; // 80111050
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 80111054
  goto L_801110B8; // 80111058
L_8011105C:;
  {uint32_t ea=c->r[2]+0xFFFF88D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011105C
  fcmp(c,0,c->f[0],c->f[1]); // 80111060
  if (!crb(c,2)) { goto L_801110B8; } // 80111064
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80111068
  c->r[0]=R32(c->r[3]+0x00000004u); // 8011106C
  cmps(c,0,(int32_t)c->r[0],0); // 80111070
  if (crb(c,2)) { goto L_801110B8; } // 80111074
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80111078
  cmps(c,0,(int32_t)c->r[0],0); // 8011107C
  if (crb(c,2)) { goto L_801110B8; } // 80111080
  c->r[0]=R8(c->r[3]+0x00000012u); // 80111084
  cmps(c,0,(int32_t)c->r[0],0); // 80111088
  if (crb(c,2)) { goto L_801110AC; } // 8011108C
  c->r[0]=0u+0x00000000u; // 80111090
  W8(c->r[3]+0x00000012u,c->r[0]); // 80111094
  c->r[3]=R32(c->r[3]+0x00000004u); // 80111098
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8011109C
  c->r[12]=R32(c->r[12]+0x00000120u); // 801110A0
  c->ctr=c->r[12]; // 801110A4
  if (true) { c->lr=0x801110ACu; dispatch(c,c->ctr); } // 801110A8
L_801110AC:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 801110AC
  c->r[0]=0u+0x00000001u; // 801110B0
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 801110B4
L_801110B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801110B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801110BC
  c->lr=c->r[0]; // 801110C0
  c->r[1]=c->r[1]+0x00000010u; // 801110C4
  return; // 801110C8
}

// fn_801110CC
void f_801110CC(Ctx* __restrict c) {
  trace_call(0x801110CCu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801110CC
  cmps(c,0,(int32_t)c->r[3],0); // 801110D0
  if (crb(c,2)) return; // 801110D4
  W8(c->r[3]+0x00000132u,c->r[4]); // 801110D8
  return; // 801110DC
}

// fn_801110E0
void f_801110E0(Ctx* __restrict c) {
  trace_call(0x801110E0u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801110E0
  c->r[0]=c->lr; // 801110E4
  c->r[4]=c->r[3]|c->r[3]; // 801110E8
  W32(c->r[1]+0x00000224u,c->r[0]); // 801110EC
  c->r[5]=c->r[4]+0x00000030u; // 801110F0
  c->r[3]=c->r[1]+0x00000008u; // 801110F4
  c->r[4]=0u+0x00000001u; // 801110F8
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 801110FC
  W32(c->r[1]+0x00000218u,c->r[30]); // 80111100
  c->r[30]=R32(c->r[13]+0xFFFFE168u); // 80111104
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 80111108
  c->lr=0x80111110u; f_8010E674(c); // 8011110C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80111110
  c->r[31]=0u+0x00000000u; // 80111114
  cmps(c,0,(int32_t)c->r[0],0); // 80111118
  if (crb(c,2)) { goto L_80111144; } // 8011111C
  cmps(c,0,(int32_t)c->r[0],1); // 80111120
  if (crb(c,2)) { goto L_80111170; } // 80111124
  cmps(c,0,(int32_t)c->r[0],2); // 80111128
  if (crb(c,2)) { goto L_8011119C; } // 8011112C
  cmps(c,0,(int32_t)c->r[0],4); // 80111130
  if (crb(c,2)) { goto L_801111C8; } // 80111134
  cmps(c,0,(int32_t)c->r[0],3); // 80111138
  if (crb(c,2)) { goto L_801111F4; } // 8011113C
  goto L_8011121C; // 80111140
L_80111144:;
  c->r[3]=0u+0x00000D50u; // 80111144
  c->r[4]=c->r[13]+0xFFFFBD88u; // 80111148
  c->r[5]=0u+0x00000000u; // 8011114C
  c->r[6]=0u+0x00001001u; // 80111150
  c->lr=0x80111158u; f_80244D20(c); // 80111154
  cmps(c,0,(int32_t)c->r[3],0); // 80111158
  if (crb(c,2)) { goto L_80111168; } // 8011115C
  c->r[4]=c->r[1]+0x00000008u; // 80111160
  c->lr=0x80111168u; f_80112018(c); // 80111164
L_80111168:;
  c->r[31]=c->r[3]|c->r[3]; // 80111168
  goto L_8011121C; // 8011116C
L_80111170:;
  c->r[3]=0u+0x00000E90u; // 80111170
  c->r[4]=c->r[13]+0xFFFFBD90u; // 80111174
  c->r[5]=0u+0x00000000u; // 80111178
  c->r[6]=0u+0x00001001u; // 8011117C
  c->lr=0x80111184u; f_80244D20(c); // 80111180
  cmps(c,0,(int32_t)c->r[3],0); // 80111184
  if (crb(c,2)) { goto L_80111194; } // 80111188
  c->r[4]=c->r[1]+0x00000008u; // 8011118C
  c->lr=0x80111194u; f_801124CC(c); // 80111190
L_80111194:;
  c->r[31]=c->r[3]|c->r[3]; // 80111194
  goto L_8011121C; // 80111198
L_8011119C:;
  c->r[3]=0u+0x00000D60u; // 8011119C
  c->r[4]=c->r[13]+0xFFFFBD98u; // 801111A0
  c->r[5]=0u+0x00000000u; // 801111A4
  c->r[6]=0u+0x00001001u; // 801111A8
  c->lr=0x801111B0u; f_80244D20(c); // 801111AC
  cmps(c,0,(int32_t)c->r[3],0); // 801111B0
  if (crb(c,2)) { goto L_801111C0; } // 801111B4
  c->r[4]=c->r[1]+0x00000008u; // 801111B8
  c->lr=0x801111C0u; f_80110050(c); // 801111BC
L_801111C0:;
  c->r[31]=c->r[3]|c->r[3]; // 801111C0
  goto L_8011121C; // 801111C4
L_801111C8:;
  c->r[3]=0u+0x00000D50u; // 801111C8
  c->r[4]=c->r[13]+0xFFFFBDA0u; // 801111CC
  c->r[5]=0u+0x00000000u; // 801111D0
  c->r[6]=0u+0x00001001u; // 801111D4
  c->lr=0x801111DCu; f_80244D20(c); // 801111D8
  cmps(c,0,(int32_t)c->r[3],0); // 801111DC
  if (crb(c,2)) { goto L_801111EC; } // 801111E0
  c->r[4]=c->r[1]+0x00000008u; // 801111E4
  c->lr=0x801111ECu; f_80112264(c); // 801111E8
L_801111EC:;
  c->r[31]=c->r[3]|c->r[3]; // 801111EC
  goto L_8011121C; // 801111F0
L_801111F4:;
  c->r[3]=0u+0x00000D50u; // 801111F4
  c->r[4]=c->r[13]+0xFFFFBDA8u; // 801111F8
  c->r[5]=0u+0x00000000u; // 801111FC
  c->r[6]=0u+0x00001001u; // 80111200
  c->lr=0x80111208u; f_80244D20(c); // 80111204
  cmps(c,0,(int32_t)c->r[3],0); // 80111208
  if (crb(c,2)) { goto L_80111218; } // 8011120C
  c->r[4]=c->r[1]+0x00000008u; // 80111210
  c->lr=0x80111218u; f_801108CC(c); // 80111214
L_80111218:;
  c->r[31]=c->r[3]|c->r[3]; // 80111218
L_8011121C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8011121C
  cmps(c,0,(int32_t)c->r[0],0); // 80111220
  if (crb(c,2)) { goto L_80111264; } // 80111224
  c->r[4]=R32(c->r[30]+0x00000008u); // 80111228
  cmps(c,0,(int32_t)c->r[4],0); // 8011122C
  if (crb(c,2)) { goto L_8011124C; } // 80111230
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111234
  c->r[5]=0u+0x00000000u; // 80111238
  c->lr=0x80111240u; f_8027AA08(c); // 8011123C
  c->r[0]=0u+0x00000000u; // 80111240
  W32(c->r[30]+0x00000008u,c->r[0]); // 80111244
  W8(c->r[30]+0x00000010u,c->r[0]); // 80111248
L_8011124C:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 8011124C
  c->r[5]=0u+0x00000000u; // 80111250
  c->r[4]=R32(c->r[30]+0x00000004u); // 80111254
  c->lr=0x8011125Cu; f_8027AA08(c); // 80111258
  c->r[0]=0u+0x00000000u; // 8011125C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80111260
L_80111264:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 80111264
  c->r[5]=c->r[31]|c->r[31]; // 80111268
  c->r[4]=0u+0x00000000u; // 8011126C
  c->r[6]=0u+0x00000001u; // 80111270
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111274
  c->r[7]=0u+0x00000000u; // 80111278
  c->lr=0x80111280u; f_8027ACD0(c); // 8011127C
  c->r[5]=R32(c->r[13]+0xFFFFE820u); // 80111280
  c->r[0]=0u+0x00000001u; // 80111284
  c->r[3]=c->r[1]+0x00000008u; // 80111288
  c->r[4]=0u+0xFFFFFFFFu; // 8011128C
  W8(c->r[5]+0x0000021Fu,c->r[0]); // 80111290
  c->lr=0x80111298u; f_8010E6E0(c); // 80111294
  c->r[0]=R32(c->r[1]+0x00000224u); // 80111298
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 8011129C
  c->r[30]=R32(c->r[1]+0x00000218u); // 801112A0
  c->lr=c->r[0]; // 801112A4
  c->r[1]=c->r[1]+0x00000220u; // 801112A8
  return; // 801112AC
}

// fn_801112B0
void f_801112B0(Ctx* __restrict c) {
  trace_call(0x801112B0u);
  c->r[4]=c->r[3]|c->r[3]; // 801112B0
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801112B4
  c->r[0]=R8(c->r[4]+0x00000030u); // 801112B8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801112BC
  c->r[0]=0u-c->r[4]; // 801112C0
  c->r[0]=c->r[0]|c->r[4]; // 801112C4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801112C8
  f_80110EE4(c); return; // 801112CC
}

// fn_801112D0
void f_801112D0(Ctx* __restrict c) {
  trace_call(0x801112D0u);
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801112D0
  c->r[3]=R8(c->r[3]+0x00000010u); // 801112D4
  return; // 801112D8
}

// fn_801112DC
void f_801112DC(Ctx* __restrict c) {
  trace_call(0x801112DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801112DC
  c->r[0]=c->lr; // 801112E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801112E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801112E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801112EC
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 801112F0
  c->r[0]=R32(c->r[3]+0x00000034u); // 801112F4
  W32(c->r[4]+0x000004C4u,c->r[0]); // 801112F8
  c->r[0]=R32(c->r[3]+0x00000034u); // 801112FC
  c->r[30]=R32(c->r[13]+0xFFFFE168u); // 80111300
  cmps(c,0,(int32_t)c->r[0],6); // 80111304
  if (crb(c,2)) { goto L_801113B4; } // 80111308
  c->r[3]=R8(c->r[3]+0x00000030u); // 8011130C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80111310
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80111314
  c->r[3]=0u-c->r[4]; // 80111318
  cmps(c,0,(int32_t)c->r[0],0); // 8011131C
  c->r[0]=c->r[3]|c->r[4]; // 80111320
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 80111324
  if (crb(c,2)) { goto L_801113A8; } // 80111328
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011132C
  cmps(c,0,(int32_t)c->r[0],0); // 80111330
  if (crb(c,2)) { goto L_801113A8; } // 80111334
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 80111338
  c->r[4]=c->r[31]|c->r[31]; // 8011133C
  c->lr=0x80111344u; f_8014DD4C(c); // 80111340
  c->r[3]=R32(c->r[30]+0x00000008u); // 80111344
  c->r[4]=0u+0x00000001u; // 80111348
  c->r[0]=R32(c->r[3]+0x00000050u); // 8011134C
  c->r[0]=c->r[0]|0x10000000u; // 80111350
  W32(c->r[3]+0x00000050u,c->r[0]); // 80111354
  c->r[3]=R32(c->r[30]+0x00000008u); // 80111358
  c->r[0]=R32(c->r[3]+0x00000050u); // 8011135C
  c->r[0]=c->r[0]|0x40000000u; // 80111360
  W32(c->r[3]+0x00000050u,c->r[0]); // 80111364
  c->r[3]=R32(c->r[30]+0x00000008u); // 80111368
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8011136C
  c->r[0]=c->r[0]|0x40000000u; // 80111370
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80111374
  W8(c->r[30]+0x00000010u,c->r[4]); // 80111378
  c->r[3]=R32(c->r[30]+0x00000004u); // 8011137C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80111380
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 80111384
  c->ctr=c->r[12]; // 80111388
  if (true) { c->lr=0x80111390u; dispatch(c,c->ctr); } // 8011138C
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 80111390
  c->r[3]=R32(c->r[3]+0x00000018u); // 80111394
  cmps(c,0,(int32_t)c->r[3],0); // 80111398
  if (crb(c,2)) { goto L_801113A8; } // 8011139C
  c->r[4]=c->r[31]|c->r[31]; // 801113A0
  c->lr=0x801113A8u; f_8012EBE8(c); // 801113A4
L_801113A8:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 801113A8
  c->r[0]=0u+0x00000001u; // 801113AC
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 801113B0
L_801113B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801113B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801113B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801113BC
  c->lr=c->r[0]; // 801113C0
  c->r[1]=c->r[1]+0x00000010u; // 801113C4
  return; // 801113C8
}

// fn_801113CC
void f_801113CC(Ctx* __restrict c) {
  trace_call(0x801113CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801113CC
  c->r[0]=c->lr; // 801113D0
  c->r[5]=c->r[3]|c->r[3]; // 801113D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801113D8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801113DC
  c->r[29]=R32(c->r[3]+0x00000038u); // 801113E0
  c->r[31]=R32(c->r[13]+0xFFFFE168u); // 801113E4
  cmps(c,0,(int32_t)c->r[29],0); // 801113E8
  c->r[30]=R32(c->r[31]+0x00000008u); // 801113EC
  if (crb(c,2)) { goto L_801113F8; } // 801113F0
  goto L_80111428; // 801113F4
L_801113F8:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801113F8
  cmps(c,0,(int32_t)c->r[3],0); // 801113FC
  if (crb(c,2)) { goto L_80111420; } // 80111400
  c->r[4]=R32(c->r[5]+0x00000030u); // 80111404
  c->r[6]=0u+0x00000000u; // 80111408
  c->r[8]=R32(c->r[5]+0x00000034u); // 8011140C
  c->r[5]=0u+0x00000000u; // 80111410
  c->r[7]=0u+0x00000000u; // 80111414
  c->lr=0x8011141Cu; f_802BA9F4(c); // 80111418
  goto L_80111424; // 8011141C
L_80111420:;
  c->r[3]=0u+0x00000000u; // 80111420
L_80111424:;
  c->r[29]=c->r[3]|c->r[3]; // 80111424
L_80111428:;
  c->r[3]=c->r[31]|c->r[31]; // 80111428
  c->r[4]=0u+0x00000001u; // 8011142C
  c->lr=0x80111434u; f_80110EE4(c); // 80111430
  c->r[28]=0u+0x00000000u; // 80111434
  c->r[27]=0u+0x00000000u; // 80111438
  c->r[31]=0u+0x00000000u; // 8011143C
  goto L_80111480; // 80111440
L_80111444:;
  c->r[3]=R32(c->r[30]+0x000000A8u); // 80111444
  c->r[3]=R32(c->r[3]+c->r[31]); // 80111448
  c->lr=0x80111450u; f_802C00A8(c); // 8011144C
  cmps(c,0,(int32_t)c->r[3],0); // 80111450
  if (crb(c,2)) { goto L_80111478; } // 80111454
  c->r[4]=R32(c->r[30]+0x000000A8u); // 80111458
  c->r[3]=R32(c->r[4]+c->r[31]); // 8011145C
  c->r[0]=R32(c->r[3]+0x00000114u); // 80111460
  cmps(c,0,(int32_t)c->r[0],0); // 80111464
  if (crb(c,2)) { goto L_80111478; } // 80111468
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8011146C
  c->r[28]=R32(c->r[4]+c->r[0]); // 80111470
  goto L_8011148C; // 80111474
L_80111478:;
  c->r[31]=c->r[31]+0x00000004u; // 80111478
  c->r[27]=c->r[27]+0x00000001u; // 8011147C
L_80111480:;
  c->r[0]=R32(c->r[30]+0x000000A4u); // 80111480
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80111484
  if (crb(c,0)) { IRQCHK(c); goto L_80111444; } // 80111488
L_8011148C:;
  c->r[12]=R32(c->r[29]+0x000000B4u); // 8011148C
  c->r[3]=c->r[29]|c->r[29]; // 80111490
  c->r[5]=R32(c->r[28]+0x00000114u); // 80111494
  c->r[4]=0u+0x00000000u; // 80111498
  c->r[12]=R32(c->r[12]+0x00000054u); // 8011149C
  c->ctr=c->r[12]; // 801114A0
  if (true) { c->lr=0x801114A8u; dispatch(c,c->ctr); } // 801114A4
  c->r[3]=R32(c->r[29]+0x00000054u); // 801114A8
  c->lr=0x801114B0u; f_8030D188(c); // 801114AC
  c->r[0]=R32(c->r[29]+0x00000014u); // 801114B0
  c->r[0]=c->r[0]|0x00000800u; // 801114B4
  W32(c->r[29]+0x00000014u,c->r[0]); // 801114B8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801114BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801114C0
  c->lr=c->r[0]; // 801114C4
  c->r[1]=c->r[1]+0x00000020u; // 801114C8
  return; // 801114CC
}

// fn_801114D0
void f_801114D0(Ctx* __restrict c) {
  trace_call(0x801114D0u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801114D0
  c->r[0]=c->lr; // 801114D4
  c->r[4]=c->r[3]|c->r[3]; // 801114D8
  W32(c->r[1]+0x00000224u,c->r[0]); // 801114DC
  c->r[5]=c->r[4]+0x00000030u; // 801114E0
  c->r[3]=c->r[1]+0x00000008u; // 801114E4
  c->r[4]=0u+0x00000001u; // 801114E8
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 801114EC
  W32(c->r[1]+0x00000218u,c->r[30]); // 801114F0
  c->r[30]=R32(c->r[13]+0xFFFFE168u); // 801114F4
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 801114F8
  c->lr=0x80111500u; f_8010E674(c); // 801114FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80111500
  c->r[31]=0u+0x00000000u; // 80111504
  cmps(c,0,(int32_t)c->r[0],0); // 80111508
  if (crb(c,2)) { goto L_80111534; } // 8011150C
  cmps(c,0,(int32_t)c->r[0],1); // 80111510
  if (crb(c,2)) { goto L_80111560; } // 80111514
  cmps(c,0,(int32_t)c->r[0],2); // 80111518
  if (crb(c,2)) { goto L_8011158C; } // 8011151C
  cmps(c,0,(int32_t)c->r[0],4); // 80111520
  if (crb(c,2)) { goto L_801115B8; } // 80111524
  cmps(c,0,(int32_t)c->r[0],3); // 80111528
  if (crb(c,2)) { goto L_801115E4; } // 8011152C
  goto L_8011160C; // 80111530
L_80111534:;
  c->r[3]=0u+0x00000D50u; // 80111534
  c->r[4]=c->r[13]+0xFFFFBDB0u; // 80111538
  c->r[5]=0u+0x00000000u; // 8011153C
  c->r[6]=0u+0x00001001u; // 80111540
  c->lr=0x80111548u; f_80244D20(c); // 80111544
  cmps(c,0,(int32_t)c->r[3],0); // 80111548
  if (crb(c,2)) { goto L_80111558; } // 8011154C
  c->r[4]=c->r[1]+0x00000008u; // 80111550
  c->lr=0x80111558u; f_80112018(c); // 80111554
L_80111558:;
  c->r[31]=c->r[3]|c->r[3]; // 80111558
  goto L_8011160C; // 8011155C
L_80111560:;
  c->r[3]=0u+0x00000E90u; // 80111560
  c->r[4]=c->r[13]+0xFFFFBDB8u; // 80111564
  c->r[5]=0u+0x00000000u; // 80111568
  c->r[6]=0u+0x00001001u; // 8011156C
  c->lr=0x80111574u; f_80244D20(c); // 80111570
  cmps(c,0,(int32_t)c->r[3],0); // 80111574
  if (crb(c,2)) { goto L_80111584; } // 80111578
  c->r[4]=c->r[1]+0x00000008u; // 8011157C
  c->lr=0x80111584u; f_801124CC(c); // 80111580
L_80111584:;
  c->r[31]=c->r[3]|c->r[3]; // 80111584
  goto L_8011160C; // 80111588
L_8011158C:;
  c->r[3]=0u+0x00000D60u; // 8011158C
  c->r[4]=c->r[13]+0xFFFFBDC0u; // 80111590
  c->r[5]=0u+0x00000000u; // 80111594
  c->r[6]=0u+0x00001001u; // 80111598
  c->lr=0x801115A0u; f_80244D20(c); // 8011159C
  cmps(c,0,(int32_t)c->r[3],0); // 801115A0
  if (crb(c,2)) { goto L_801115B0; } // 801115A4
  c->r[4]=c->r[1]+0x00000008u; // 801115A8
  c->lr=0x801115B0u; f_80110050(c); // 801115AC
L_801115B0:;
  c->r[31]=c->r[3]|c->r[3]; // 801115B0
  goto L_8011160C; // 801115B4
L_801115B8:;
  c->r[3]=0u+0x00000D50u; // 801115B8
  c->r[4]=c->r[13]+0xFFFFBDC8u; // 801115BC
  c->r[5]=0u+0x00000000u; // 801115C0
  c->r[6]=0u+0x00001001u; // 801115C4
  c->lr=0x801115CCu; f_80244D20(c); // 801115C8
  cmps(c,0,(int32_t)c->r[3],0); // 801115CC
  if (crb(c,2)) { goto L_801115DC; } // 801115D0
  c->r[4]=c->r[1]+0x00000008u; // 801115D4
  c->lr=0x801115DCu; f_80112264(c); // 801115D8
L_801115DC:;
  c->r[31]=c->r[3]|c->r[3]; // 801115DC
  goto L_8011160C; // 801115E0
L_801115E4:;
  c->r[3]=0u+0x00000D50u; // 801115E4
  c->r[4]=c->r[13]+0xFFFFBDD0u; // 801115E8
  c->r[5]=0u+0x00000000u; // 801115EC
  c->r[6]=0u+0x00001001u; // 801115F0
  c->lr=0x801115F8u; f_80244D20(c); // 801115F4
  cmps(c,0,(int32_t)c->r[3],0); // 801115F8
  if (crb(c,2)) { goto L_80111608; } // 801115FC
  c->r[4]=c->r[1]+0x00000008u; // 80111600
  c->lr=0x80111608u; f_801108CC(c); // 80111604
L_80111608:;
  c->r[31]=c->r[3]|c->r[3]; // 80111608
L_8011160C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8011160C
  cmps(c,0,(int32_t)c->r[0],0); // 80111610
  if (crb(c,2)) { goto L_80111654; } // 80111614
  c->r[4]=R32(c->r[30]+0x00000008u); // 80111618
  cmps(c,0,(int32_t)c->r[4],0); // 8011161C
  if (crb(c,2)) { goto L_8011163C; } // 80111620
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111624
  c->r[5]=0u+0x00000000u; // 80111628
  c->lr=0x80111630u; f_8027AA08(c); // 8011162C
  c->r[0]=0u+0x00000000u; // 80111630
  W32(c->r[30]+0x00000008u,c->r[0]); // 80111634
  W8(c->r[30]+0x00000010u,c->r[0]); // 80111638
L_8011163C:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 8011163C
  c->r[5]=0u+0x00000000u; // 80111640
  c->r[4]=R32(c->r[30]+0x00000004u); // 80111644
  c->lr=0x8011164Cu; f_8027AA08(c); // 80111648
  c->r[0]=0u+0x00000000u; // 8011164C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80111650
L_80111654:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 80111654
  c->r[5]=c->r[31]|c->r[31]; // 80111658
  c->r[4]=0u+0x00000000u; // 8011165C
  c->r[6]=0u+0x00000001u; // 80111660
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111664
  c->r[7]=0u+0x00000000u; // 80111668
  c->lr=0x80111670u; f_8027ACD0(c); // 8011166C
  c->r[5]=R32(c->r[13]+0xFFFFE820u); // 80111670
  c->r[0]=0u+0x00000001u; // 80111674
  c->r[3]=c->r[1]+0x00000008u; // 80111678
  c->r[4]=0u+0xFFFFFFFFu; // 8011167C
  W8(c->r[5]+0x0000021Fu,c->r[0]); // 80111680
  c->lr=0x80111688u; f_8010E6E0(c); // 80111684
  c->r[0]=R32(c->r[1]+0x00000224u); // 80111688
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 8011168C
  c->r[30]=R32(c->r[1]+0x00000218u); // 80111690
  c->lr=c->r[0]; // 80111694
  c->r[1]=c->r[1]+0x00000220u; // 80111698
  return; // 8011169C
}

// fn_801116A0
void f_801116A0(Ctx* __restrict c) {
  trace_call(0x801116A0u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801116A0
  c->r[0]=c->lr; // 801116A4
  c->r[5]=0u+0x80470000u; // 801116A8
  c->r[6]=0u+0x00000000u; // 801116AC
  W32(c->r[1]+0x00000224u,c->r[0]); // 801116B0
  c->r[5]=c->r[5]+0x00004AB0u; // 801116B4
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 801116B8
  W32(c->r[1]+0x00000218u,c->r[30]); // 801116BC
  c->r[30]=R32(c->r[13]+0xFFFFE168u); // 801116C0
L_801116C4:;
  c->r[4]=c->r[3]+c->r[6]; // 801116C4
  c->r[6]=c->r[6]+0x00000001u; // 801116C8
  c->r[0]=R8(c->r[4]+0x00000030u); // 801116CC
  W8(c->r[5]+0x00000000u,c->r[0]); // 801116D0
  c->r[5]=c->r[5]+0x00000001u; // 801116D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801116D8
  if (crb(c,2)) { goto L_801116E8; } // 801116DC
  cmpu(c,0,c->r[6],0x00000080u); // 801116E0
  if (crb(c,0)) { IRQCHK(c); goto L_801116C4; } // 801116E4
L_801116E8:;
  c->r[3]=0u+0x80470000u; // 801116E8
  c->r[5]=0u+0x80420000u; // 801116EC
  c->r[3]=c->r[3]+0x00004AB0u; // 801116F0
  c->r[4]=0u+0x00000000u; // 801116F4
  c->r[3]=c->r[6]+c->r[3]; // 801116F8
  c->r[0]=0u+0x00000002u; // 801116FC
  W8(c->r[3]+0xFFFFFFFFu,c->r[4]); // 80111700
  c->r[3]=c->r[1]+0x00000008u; // 80111704
  c->r[5]=c->r[5]+0x000022B4u; // 80111708
  c->r[4]=0u+0x00000003u; // 8011170C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80111710
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 80111714
  c->lr=0x8011171Cu; f_8010E674(c); // 80111718
  c->r[0]=R32(c->r[1]+0x00000008u); // 8011171C
  c->r[31]=0u+0x00000000u; // 80111720
  cmps(c,0,(int32_t)c->r[0],0); // 80111724
  if (crb(c,2)) { goto L_80111750; } // 80111728
  cmps(c,0,(int32_t)c->r[0],1); // 8011172C
  if (crb(c,2)) { goto L_8011177C; } // 80111730
  cmps(c,0,(int32_t)c->r[0],2); // 80111734
  if (crb(c,2)) { goto L_801117A8; } // 80111738
  cmps(c,0,(int32_t)c->r[0],4); // 8011173C
  if (crb(c,2)) { goto L_801117D4; } // 80111740
  cmps(c,0,(int32_t)c->r[0],3); // 80111744
  if (crb(c,2)) { goto L_80111800; } // 80111748
  goto L_80111828; // 8011174C
L_80111750:;
  c->r[3]=0u+0x00000D50u; // 80111750
  c->r[4]=c->r[13]+0xFFFFBDD8u; // 80111754
  c->r[5]=0u+0x00000000u; // 80111758
  c->r[6]=0u+0x00001001u; // 8011175C
  c->lr=0x80111764u; f_80244D20(c); // 80111760
  cmps(c,0,(int32_t)c->r[3],0); // 80111764
  if (crb(c,2)) { goto L_80111774; } // 80111768
  c->r[4]=c->r[1]+0x00000008u; // 8011176C
  c->lr=0x80111774u; f_80112018(c); // 80111770
L_80111774:;
  c->r[31]=c->r[3]|c->r[3]; // 80111774
  goto L_80111828; // 80111778
L_8011177C:;
  c->r[3]=0u+0x00000E90u; // 8011177C
  c->r[4]=c->r[13]+0xFFFFBDE0u; // 80111780
  c->r[5]=0u+0x00000000u; // 80111784
  c->r[6]=0u+0x00001001u; // 80111788
  c->lr=0x80111790u; f_80244D20(c); // 8011178C
  cmps(c,0,(int32_t)c->r[3],0); // 80111790
  if (crb(c,2)) { goto L_801117A0; } // 80111794
  c->r[4]=c->r[1]+0x00000008u; // 80111798
  c->lr=0x801117A0u; f_801124CC(c); // 8011179C
L_801117A0:;
  c->r[31]=c->r[3]|c->r[3]; // 801117A0
  goto L_80111828; // 801117A4
L_801117A8:;
  c->r[3]=0u+0x00000D60u; // 801117A8
  c->r[4]=c->r[13]+0xFFFFBDE8u; // 801117AC
  c->r[5]=0u+0x00000000u; // 801117B0
  c->r[6]=0u+0x00001001u; // 801117B4
  c->lr=0x801117BCu; f_80244D20(c); // 801117B8
  cmps(c,0,(int32_t)c->r[3],0); // 801117BC
  if (crb(c,2)) { goto L_801117CC; } // 801117C0
  c->r[4]=c->r[1]+0x00000008u; // 801117C4
  c->lr=0x801117CCu; f_80110050(c); // 801117C8
L_801117CC:;
  c->r[31]=c->r[3]|c->r[3]; // 801117CC
  goto L_80111828; // 801117D0
L_801117D4:;
  c->r[3]=0u+0x00000D50u; // 801117D4
  c->r[4]=c->r[13]+0xFFFFBDF0u; // 801117D8
  c->r[5]=0u+0x00000000u; // 801117DC
  c->r[6]=0u+0x00001001u; // 801117E0
  c->lr=0x801117E8u; f_80244D20(c); // 801117E4
  cmps(c,0,(int32_t)c->r[3],0); // 801117E8
  if (crb(c,2)) { goto L_801117F8; } // 801117EC
  c->r[4]=c->r[1]+0x00000008u; // 801117F0
  c->lr=0x801117F8u; f_80112264(c); // 801117F4
L_801117F8:;
  c->r[31]=c->r[3]|c->r[3]; // 801117F8
  goto L_80111828; // 801117FC
L_80111800:;
  c->r[3]=0u+0x00000D50u; // 80111800
  c->r[4]=c->r[13]+0xFFFFBDF8u; // 80111804
  c->r[5]=0u+0x00000000u; // 80111808
  c->r[6]=0u+0x00001001u; // 8011180C
  c->lr=0x80111814u; f_80244D20(c); // 80111810
  cmps(c,0,(int32_t)c->r[3],0); // 80111814
  if (crb(c,2)) { goto L_80111824; } // 80111818
  c->r[4]=c->r[1]+0x00000008u; // 8011181C
  c->lr=0x80111824u; f_801108CC(c); // 80111820
L_80111824:;
  c->r[31]=c->r[3]|c->r[3]; // 80111824
L_80111828:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80111828
  cmps(c,0,(int32_t)c->r[0],0); // 8011182C
  if (crb(c,2)) { goto L_80111870; } // 80111830
  c->r[4]=R32(c->r[30]+0x00000008u); // 80111834
  cmps(c,0,(int32_t)c->r[4],0); // 80111838
  if (crb(c,2)) { goto L_80111858; } // 8011183C
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111840
  c->r[5]=0u+0x00000000u; // 80111844
  c->lr=0x8011184Cu; f_8027AA08(c); // 80111848
  c->r[0]=0u+0x00000000u; // 8011184C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80111850
  W8(c->r[30]+0x00000010u,c->r[0]); // 80111854
L_80111858:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111858
  c->r[5]=0u+0x00000000u; // 8011185C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80111860
  c->lr=0x80111868u; f_8027AA08(c); // 80111864
  c->r[0]=0u+0x00000000u; // 80111868
  W32(c->r[30]+0x00000004u,c->r[0]); // 8011186C
L_80111870:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 80111870
  c->r[5]=c->r[31]|c->r[31]; // 80111874
  c->r[4]=0u+0x00000000u; // 80111878
  c->r[6]=0u+0x00000001u; // 8011187C
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111880
  c->r[7]=0u+0x00000000u; // 80111884
  c->lr=0x8011188Cu; f_8027ACD0(c); // 80111888
  c->r[5]=R32(c->r[13]+0xFFFFE820u); // 8011188C
  c->r[0]=0u+0x00000001u; // 80111890
  c->r[3]=c->r[1]+0x00000008u; // 80111894
  c->r[4]=0u+0xFFFFFFFFu; // 80111898
  W8(c->r[5]+0x0000021Fu,c->r[0]); // 8011189C
  c->lr=0x801118A4u; f_8010E6E0(c); // 801118A0
  c->r[0]=R32(c->r[1]+0x00000224u); // 801118A4
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 801118A8
  c->r[30]=R32(c->r[1]+0x00000218u); // 801118AC
  c->lr=c->r[0]; // 801118B0
  c->r[1]=c->r[1]+0x00000220u; // 801118B4
  return; // 801118B8
}

// fn_801118BC
void f_801118BC(Ctx* __restrict c) {
  trace_call(0x801118BCu);
  c->r[6]=0u+0x80470000u; // 801118BC
  c->r[5]=0u+0x00000000u; // 801118C0
  c->r[6]=c->r[6]+0x00004AB0u; // 801118C4
L_801118C8:;
  c->r[4]=c->r[3]+c->r[5]; // 801118C8
  c->r[5]=c->r[5]+0x00000001u; // 801118CC
  c->r[0]=R8(c->r[4]+0x00000030u); // 801118D0
  W8(c->r[6]+0x00000000u,c->r[0]); // 801118D4
  c->r[6]=c->r[6]+0x00000001u; // 801118D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801118DC
  if (crb(c,2)) { goto L_801118EC; } // 801118E0
  cmpu(c,0,c->r[5],0x00000080u); // 801118E4
  if (crb(c,0)) { IRQCHK(c); goto L_801118C8; } // 801118E8
L_801118EC:;
  c->r[3]=0u+0x80470000u; // 801118EC
  c->r[0]=0u+0x00000000u; // 801118F0
  c->r[3]=c->r[3]+0x00004AB0u; // 801118F4
  c->r[3]=c->r[5]+c->r[3]; // 801118F8
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 801118FC
  return; // 80111900
}

// fn_80111904
void f_80111904(Ctx* __restrict c) {
  trace_call(0x80111904u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80111904
  c->r[0]=c->lr; // 80111908
  c->r[5]=0u+0x80420000u; // 8011190C
  c->r[4]=0u+0x00000003u; // 80111910
  W32(c->r[1]+0x00000224u,c->r[0]); // 80111914
  c->r[0]=0u+0x00000001u; // 80111918
  c->r[3]=c->r[1]+0x00000008u; // 8011191C
  c->r[5]=c->r[5]+0x000022D0u; // 80111920
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 80111924
  W32(c->r[1]+0x00000218u,c->r[30]); // 80111928
  c->r[30]=R32(c->r[13]+0xFFFFE168u); // 8011192C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80111930
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 80111934
  c->lr=0x8011193Cu; f_8010E674(c); // 80111938
  c->r[0]=R32(c->r[1]+0x00000008u); // 8011193C
  c->r[31]=0u+0x00000000u; // 80111940
  cmps(c,0,(int32_t)c->r[0],0); // 80111944
  if (crb(c,2)) { goto L_80111970; } // 80111948
  cmps(c,0,(int32_t)c->r[0],1); // 8011194C
  if (crb(c,2)) { goto L_8011199C; } // 80111950
  cmps(c,0,(int32_t)c->r[0],2); // 80111954
  if (crb(c,2)) { goto L_801119C8; } // 80111958
  cmps(c,0,(int32_t)c->r[0],4); // 8011195C
  if (crb(c,2)) { goto L_801119F4; } // 80111960
  cmps(c,0,(int32_t)c->r[0],3); // 80111964
  if (crb(c,2)) { goto L_80111A20; } // 80111968
  goto L_80111A48; // 8011196C
L_80111970:;
  c->r[3]=0u+0x00000D50u; // 80111970
  c->r[4]=c->r[13]+0xFFFFBE00u; // 80111974
  c->r[5]=0u+0x00000000u; // 80111978
  c->r[6]=0u+0x00001001u; // 8011197C
  c->lr=0x80111984u; f_80244D20(c); // 80111980
  cmps(c,0,(int32_t)c->r[3],0); // 80111984
  if (crb(c,2)) { goto L_80111994; } // 80111988
  c->r[4]=c->r[1]+0x00000008u; // 8011198C
  c->lr=0x80111994u; f_80112018(c); // 80111990
L_80111994:;
  c->r[31]=c->r[3]|c->r[3]; // 80111994
  goto L_80111A48; // 80111998
L_8011199C:;
  c->r[3]=0u+0x00000E90u; // 8011199C
  c->r[4]=c->r[13]+0xFFFFBE08u; // 801119A0
  c->r[5]=0u+0x00000000u; // 801119A4
  c->r[6]=0u+0x00001001u; // 801119A8
  c->lr=0x801119B0u; f_80244D20(c); // 801119AC
  cmps(c,0,(int32_t)c->r[3],0); // 801119B0
  if (crb(c,2)) { goto L_801119C0; } // 801119B4
  c->r[4]=c->r[1]+0x00000008u; // 801119B8
  c->lr=0x801119C0u; f_801124CC(c); // 801119BC
L_801119C0:;
  c->r[31]=c->r[3]|c->r[3]; // 801119C0
  goto L_80111A48; // 801119C4
L_801119C8:;
  c->r[3]=0u+0x00000D60u; // 801119C8
  c->r[4]=c->r[13]+0xFFFFBE10u; // 801119CC
  c->r[5]=0u+0x00000000u; // 801119D0
  c->r[6]=0u+0x00001001u; // 801119D4
  c->lr=0x801119DCu; f_80244D20(c); // 801119D8
  cmps(c,0,(int32_t)c->r[3],0); // 801119DC
  if (crb(c,2)) { goto L_801119EC; } // 801119E0
  c->r[4]=c->r[1]+0x00000008u; // 801119E4
  c->lr=0x801119ECu; f_80110050(c); // 801119E8
L_801119EC:;
  c->r[31]=c->r[3]|c->r[3]; // 801119EC
  goto L_80111A48; // 801119F0
L_801119F4:;
  c->r[3]=0u+0x00000D50u; // 801119F4
  c->r[4]=c->r[13]+0xFFFFBE18u; // 801119F8
  c->r[5]=0u+0x00000000u; // 801119FC
  c->r[6]=0u+0x00001001u; // 80111A00
  c->lr=0x80111A08u; f_80244D20(c); // 80111A04
  cmps(c,0,(int32_t)c->r[3],0); // 80111A08
  if (crb(c,2)) { goto L_80111A18; } // 80111A0C
  c->r[4]=c->r[1]+0x00000008u; // 80111A10
  c->lr=0x80111A18u; f_80112264(c); // 80111A14
L_80111A18:;
  c->r[31]=c->r[3]|c->r[3]; // 80111A18
  goto L_80111A48; // 80111A1C
L_80111A20:;
  c->r[3]=0u+0x00000D50u; // 80111A20
  c->r[4]=c->r[13]+0xFFFFBE20u; // 80111A24
  c->r[5]=0u+0x00000000u; // 80111A28
  c->r[6]=0u+0x00001001u; // 80111A2C
  c->lr=0x80111A34u; f_80244D20(c); // 80111A30
  cmps(c,0,(int32_t)c->r[3],0); // 80111A34
  if (crb(c,2)) { goto L_80111A44; } // 80111A38
  c->r[4]=c->r[1]+0x00000008u; // 80111A3C
  c->lr=0x80111A44u; f_801108CC(c); // 80111A40
L_80111A44:;
  c->r[31]=c->r[3]|c->r[3]; // 80111A44
L_80111A48:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80111A48
  cmps(c,0,(int32_t)c->r[0],0); // 80111A4C
  if (crb(c,2)) { goto L_80111A90; } // 80111A50
  c->r[4]=R32(c->r[30]+0x00000008u); // 80111A54
  cmps(c,0,(int32_t)c->r[4],0); // 80111A58
  if (crb(c,2)) { goto L_80111A78; } // 80111A5C
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111A60
  c->r[5]=0u+0x00000000u; // 80111A64
  c->lr=0x80111A6Cu; f_8027AA08(c); // 80111A68
  c->r[0]=0u+0x00000000u; // 80111A6C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80111A70
  W8(c->r[30]+0x00000010u,c->r[0]); // 80111A74
L_80111A78:;
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111A78
  c->r[5]=0u+0x00000000u; // 80111A7C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80111A80
  c->lr=0x80111A88u; f_8027AA08(c); // 80111A84
  c->r[0]=0u+0x00000000u; // 80111A88
  W32(c->r[30]+0x00000004u,c->r[0]); // 80111A8C
L_80111A90:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 80111A90
  c->r[5]=c->r[31]|c->r[31]; // 80111A94
  c->r[4]=0u+0x00000000u; // 80111A98
  c->r[6]=0u+0x00000001u; // 80111A9C
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 80111AA0
  c->r[7]=0u+0x00000000u; // 80111AA4
  c->lr=0x80111AACu; f_8027ACD0(c); // 80111AA8
  c->r[5]=R32(c->r[13]+0xFFFFE820u); // 80111AAC
  c->r[6]=0u+0x00000001u; // 80111AB0
  c->r[3]=c->r[1]+0x00000008u; // 80111AB4
  c->r[4]=0u+0xFFFFFFFFu; // 80111AB8
  W8(c->r[5]+0x0000021Fu,c->r[6]); // 80111ABC
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 80111AC0
  c->r[0]=c->r[0]|0x90000000u; // 80111AC4
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80111AC8
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 80111ACC
  c->r[5]=R32(c->r[13]+0xFFFFE820u); // 80111AD0
  W8(c->r[5]+0x0000021Fu,c->r[6]); // 80111AD4
  c->lr=0x80111ADCu; f_8010E6E0(c); // 80111AD8
  c->r[0]=R32(c->r[1]+0x00000224u); // 80111ADC
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 80111AE0
  c->r[30]=R32(c->r[1]+0x00000218u); // 80111AE4
  c->lr=c->r[0]; // 80111AE8
  c->r[1]=c->r[1]+0x00000220u; // 80111AEC
  return; // 80111AF0
}

// fn_80111AF4
void f_80111AF4(Ctx* __restrict c) {
  trace_call(0x80111AF4u);
  c->r[4]=R32(c->r[13]+0xFFFFE138u); // 80111AF4
  c->r[4]=R32(c->r[4]+0x00000018u); // 80111AF8
  cmps(c,0,(int32_t)c->r[4],0); // 80111AFC
  if (crb(c,2)) return; // 80111B00
  c->r[0]=R8(c->r[3]+0x00000030u); // 80111B04
  c->r[3]=c->r[4]|c->r[4]; // 80111B08
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80111B0C
  c->r[0]=0u-c->r[4]; // 80111B10
  c->r[0]=c->r[0]|c->r[4]; // 80111B14
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80111B18
  f_8012EC48(c); return; // 80111B1C
  return; // 80111B20
}

// fn_80111B24
void f_80111B24(Ctx* __restrict c) {
  trace_call(0x80111B24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80111B24
  c->r[0]=c->lr; // 80111B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80111B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80111B30
  W32(c->r[1]+0x00000008u,c->r[30]); // 80111B34
  c->r[30]=c->r[3]|c->r[3]; // 80111B38
  c->r[3]=0u+0xFFFFFFFFu; // 80111B3C
  c->lr=0x80111B44u; f_8023F210(c); // 80111B40
  c->r[3]=0u+0x00000010u; // 80111B44
  c->lr=0x80111B4Cu; f_80253F50(c); // 80111B48
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80111B4C
  cmps(c,0,(int32_t)c->r[30],4); // 80111B50
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 80111B54
  if (crb(c,2)) { goto L_80111B68; } // 80111B58
  cmps(c,0,(int32_t)c->r[30],3); // 80111B5C
  if (crb(c,2)) { goto L_80111B8C; } // 80111B60
  goto L_80111BC4; // 80111B64
L_80111B68:;
  cmps(c,0,(int32_t)c->r[31],0); // 80111B68
  if (crb(c,2)) { goto L_80111BC4; } // 80111B6C
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80111B70
  c->r[3]=c->r[31]|c->r[31]; // 80111B74
  c->r[4]=0u+0x00000000u; // 80111B78
  c->r[12]=R32(c->r[12]+0x00000028u); // 80111B7C
  c->ctr=c->r[12]; // 80111B80
  if (true) { c->lr=0x80111B88u; dispatch(c,c->ctr); } // 80111B84
  goto L_80111BC4; // 80111B88
L_80111B8C:;
  c->r[3]=0u+0x00000000u; // 80111B8C
  c->lr=0x80111B94u; f_80255F60(c); // 80111B90
  cmps(c,0,(int32_t)c->r[31],0); // 80111B94
  if (crb(c,2)) { goto L_80111BC4; } // 80111B98
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80111B9C
  c->r[3]=c->r[31]|c->r[31]; // 80111BA0
  c->r[12]=R32(c->r[12]+0x00000018u); // 80111BA4
  c->ctr=c->r[12]; // 80111BA8
  if (true) { c->lr=0x80111BB0u; dispatch(c,c->ctr); } // 80111BAC
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80111BB0
  c->r[3]=c->r[31]|c->r[31]; // 80111BB4
  c->r[12]=R32(c->r[12]+0x00000020u); // 80111BB8
  c->ctr=c->r[12]; // 80111BBC
  if (true) { c->lr=0x80111BC4u; dispatch(c,c->ctr); } // 80111BC0
L_80111BC4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80111BC4
  c->r[3]=0u+0x00000001u; // 80111BC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80111BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80111BD0
  c->lr=c->r[0]; // 80111BD4
  c->r[1]=c->r[1]+0x00000010u; // 80111BD8
  return; // 80111BDC
}

// fn_80111BE0
void f_80111BE0(Ctx* __restrict c) {
  trace_call(0x80111BE0u);
  c->r[4]=R32(c->r[13]+0xFFFFE168u); // 80111BE0
  cmps(c,0,(int32_t)c->r[4],0); // 80111BE4
  if (crb(c,2)) return; // 80111BE8
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80111BEC
  cmps(c,0,(int32_t)c->r[4],0); // 80111BF0
  if (crb(c,2)) return; // 80111BF4
  c->r[0]=R8(c->r[3]+0x00000030u); // 80111BF8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80111BFC
  c->r[0]=0u-c->r[3]; // 80111C00
  c->r[0]=c->r[0]|c->r[3]; // 80111C04
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80111C08
  W8(c->r[4]+0x00000260u,c->r[0]); // 80111C0C
  return; // 80111C10
}

// fn_80111C14
void f_80111C14(Ctx* __restrict c) {
  trace_call(0x80111C14u);
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80111C14
  cmps(c,0,(int32_t)c->r[3],0); // 80111C18
  if (crb(c,2)) return; // 80111C1C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80111C20
  cmps(c,0,(int32_t)c->r[3],0); // 80111C24
  if (crb(c,2)) return; // 80111C28
  f_802AF78C(c); return; // 80111C2C
  return; // 80111C30
}

// fn_80111C34
void f_80111C34(Ctx* __restrict c) {
  trace_call(0x80111C34u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80111C34
  c->r[0]=c->lr; // 80111C38
  W32(c->r[1]+0x00000074u,c->r[0]); // 80111C3C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80111C40
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80111C44
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80111C48
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80111C4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80111C50
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80111C54
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80111C58
  W32(c->r[1]+0x00000038u,c->r[30]); // 80111C5C
  W32(c->r[1]+0x00000034u,c->r[29]); // 80111C60
  c->r[29]=c->r[3]|c->r[3]; // 80111C64
  c->r[0]=R8(c->r[3]+0x00000260u); // 80111C68
  cmps(c,0,(int32_t)c->r[0],0); // 80111C6C
  if (crb(c,2)) { goto L_80111F88; } // 80111C70
  c->r[0]=R8(c->r[3]+0x00000261u); // 80111C74
  cmps(c,0,(int32_t)c->r[0],0); // 80111C78
  if (crb(c,2)) { goto L_80111F88; } // 80111C7C
  c->r[3]=0u+0x00000000u; // 80111C80
  c->lr=0x80111C88u; f_80219E40(c); // 80111C84
  c->r[3]=0u+0x00000001u; // 80111C88
  c->r[4]=0u+0x00000000u; // 80111C8C
  c->r[5]=0u+0x00000000u; // 80111C90
  c->lr=0x80111C98u; f_80218810(c); // 80111C94
  c->r[3]=0u+0x00000002u; // 80111C98
  c->r[4]=0u+0x00000000u; // 80111C9C
  c->r[5]=0u+0x00000000u; // 80111CA0
  c->lr=0x80111CA8u; f_80218810(c); // 80111CA4
  c->r[3]=0u+0x00000003u; // 80111CA8
  c->r[4]=0u+0x00000001u; // 80111CAC
  c->r[5]=0u+0x00000000u; // 80111CB0
  c->lr=0x80111CB8u; f_80218810(c); // 80111CB4
  c->r[3]=0u+0x00000004u; // 80111CB8
  c->r[4]=0u+0x00000001u; // 80111CBC
  c->r[5]=0u+0x00000000u; // 80111CC0
  c->lr=0x80111CC8u; f_80218810(c); // 80111CC4
  c->r[3]=0u+0x00000005u; // 80111CC8
  c->r[4]=0u+0x00000001u; // 80111CCC
  c->r[5]=0u+0x00000000u; // 80111CD0
  c->lr=0x80111CD8u; f_80218810(c); // 80111CD4
  c->r[3]=0u+0x00000006u; // 80111CD8
  c->r[4]=0u+0x00000000u; // 80111CDC
  c->r[5]=0u+0x00000000u; // 80111CE0
  c->lr=0x80111CE8u; f_80218810(c); // 80111CE4
  c->r[3]=0u+0x00000008u; // 80111CE8
  c->r[4]=0u+0x00000000u; // 80111CEC
  c->r[5]=0u+0x00000000u; // 80111CF0
  c->lr=0x80111CF8u; f_80218810(c); // 80111CF4
  c->r[3]=0u+0x00000009u; // 80111CF8
  c->r[4]=0u+0x00000001u; // 80111CFC
  c->r[5]=0u+0x00000000u; // 80111D00
  c->lr=0x80111D08u; f_80218810(c); // 80111D04
  c->r[3]=0u+0x0000000Au; // 80111D08
  c->r[4]=0u+0x00000000u; // 80111D0C
  c->r[5]=0u+0x00000000u; // 80111D10
  c->lr=0x80111D18u; f_80218810(c); // 80111D14
  c->r[3]=0u+0x0000000Du; // 80111D18
  c->r[4]=0u+0x00000007u; // 80111D1C
  c->r[5]=0u+0x00000000u; // 80111D20
  c->lr=0x80111D28u; f_80218810(c); // 80111D24
  c->r[3]=0u+0x0000000Eu; // 80111D28
  c->r[4]=0u+0x00000000u; // 80111D2C
  c->r[5]=0u+0x00000000u; // 80111D30
  c->lr=0x80111D38u; f_80218810(c); // 80111D34
  c->r[3]=0u+0x00000000u; // 80111D38
  c->r[4]=0u+0x00000001u; // 80111D3C
  c->r[5]=0u+0x0000000Cu; // 80111D40
  c->r[6]=0u+0x00000000u; // 80111D44
  c->lr=0x80111D4Cu; f_80219010(c); // 80111D48
  c->r[3]=0u+0x00000000u; // 80111D4C
  c->r[4]=0u+0x00000000u; // 80111D50
  c->r[5]=0u+0x00000001u; // 80111D54
  c->r[6]=0u+0x00000000u; // 80111D58
  c->lr=0x80111D60u; f_80219010(c); // 80111D5C
  c->r[3]=0u+0x00000000u; // 80111D60
  c->r[4]=0u+0x00000000u; // 80111D64
  c->lr=0x80111D6Cu; f_80219C60(c); // 80111D68
  c->r[4]=R32(c->r[29]+0x000000A4u); // 80111D6C
  c->r[3]=0u+0x00000000u; // 80111D70
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80111D74
  c->lr=0x80111D7Cu; f_80219C60(c); // 80111D78
  c->r[3]=c->r[1]+0x0000000Cu; // 80111D7C
  c->r[4]=c->r[1]+0x00000008u; // 80111D80
  c->r[5]=0u+0x00000000u; // 80111D84
  c->r[6]=0u+0x00000000u; // 80111D88
  c->lr=0x80111D90u; f_80216170(c); // 80111D8C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80111D90
  c->r[31]=0u+0x43300000u; // 80111D94
  c->r[30]=R32(c->r[29]+0x00000268u); // 80111D98
  c->r[3]=sraw(c,c->r[3],1); // 80111D9C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80111DA0
  c->r[3]=c->r[3]^0x80000000u; // 80111DA4
  W32(c->r[1]+0x00000010u,c->r[31]); // 80111DA8
  c->r[0]=sraw(c,c->r[0],1); // 80111DAC
  {uint32_t ea=c->r[2]+0xFFFF88E8u; c->f[3]=RF64(ea);} // 80111DB0
  W32(c->r[1]+0x00000014u,c->r[3]); // 80111DB4
  c->r[0]=c->r[0]^0x80000000u; // 80111DB8
  {uint32_t ea=c->r[2]+0xFFFF88D4u; c->f[29]=c->ps1[29]=RF32(ea);} // 80111DBC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80111DC0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80111DC4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80111DC8
  {uint32_t ea=c->r[2]+0xFFFF88D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80111DCC
  W32(c->r[1]+0x00000018u,c->r[31]); // 80111DD0
  c->r[29]=R32(c->r[29]+0x0000026Cu); // 80111DD4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80111DD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 80111DDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80111DE0
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 80111DE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80111DE8
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[1]); // 80111DEC
  c->lr=0x80111DF4u; f_80257CD0(c); // 80111DF0
  c->r[6]=c->r[4]|c->r[4]; // 80111DF4
  c->r[5]=c->r[3]|c->r[3]; // 80111DF8
  c->r[4]=c->r[29]|c->r[29]; // 80111DFC
  c->r[3]=c->r[30]|c->r[30]; // 80111E00
  c->lr=0x80111E08u; f_80257D40(c); // 80111E04
  c->lr=0x80111E0Cu; f_80250160(c); // 80111E08
  {uint32_t ea=c->r[2]+0xFFFF9AE4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80111E0C
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80111E10
  c->r[29]=R32(c->r[2]+0xFFFF9AECu); // 80111E14
  fcmp(c,0,c->f[1],c->f[4]); // 80111E18
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[4]); // 80111E1C
  W32(c->r[1]+0x00000020u,c->r[31]); // 80111E20
  c->r[0]=c->r[29]^0x80000000u; // 80111E24
  {uint32_t ea=c->r[2]+0xFFFF88E8u; c->f[2]=RF64(ea);} // 80111E28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80111E2C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80111E30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80111E34
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 80111E38
  if (!crb(c,0)) { goto L_80111E54; } // 80111E3C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 80111E40
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80111E44
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80111E48
  c->r[29]=R32(c->r[1]+0x00000024u); // 80111E4C
  goto L_80111E80; // 80111E50
L_80111E54:;
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80111E54
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 80111E58
  fcmp(c,0,c->f[1],c->f[0]); // 80111E5C
  if (!crb(c,0)) { goto L_80111E68; } // 80111E60
  goto L_80111E80; // 80111E64
L_80111E68:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80111E68
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80111E6C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80111E70
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80111E74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80111E78
  c->r[29]=c->r[29]-c->r[0]; // 80111E7C
L_80111E80:;
  c->lr=0x80111E84u; f_80353A74(c); // 80111E80
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80111E84
  if (crb(c,2)) { goto L_80111E94; } // 80111E88
  {uint32_t ea=c->r[2]+0xFFFF88E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80111E8C
  goto L_80111E98; // 80111E90
L_80111E94:;
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80111E94
L_80111E98:;
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80111E98
  c->r[3]=0u+0x80470000u; // 80111E9C
  c->r[4]=c->r[3]+0x00004B30u; // 80111EA0
  {uint32_t ea=c->r[2]+0xFFFF88D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80111EA4
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80111EA8
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[29]); // 80111EAC
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 80111EB0
  c->r[0]=c->r[29]|0x7F7F0000u; // 80111EB4
  c->r[0]=c->r[0]|0x00007F00u; // 80111EB8
  {uint32_t ea=c->r[3]+0x00004B30u; WF32(ea,c->f[31]);} // 80111EBC
  c->r[3]=0u+0x00000004u; // 80111EC0
  c->r[5]=0u+0x00000004u; // 80111EC4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[30]);} // 80111EC8
  c->r[6]=0u+0x00000000u; // 80111ECC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[3]);} // 80111ED0
  W32(c->r[4]+0x00000018u,c->r[0]); // 80111ED4
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[3]);} // 80111ED8
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[2]);} // 80111EDC
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[31]);} // 80111EE0
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[1]);} // 80111EE4
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[3]);} // 80111EE8
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 80111EEC
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[3]);} // 80111EF0
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[3]);} // 80111EF4
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 80111EF8
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[30]);} // 80111EFC
  {uint32_t ea=c->r[4]+0x00000050u; WF32(ea,c->f[3]);} // 80111F00
  W32(c->r[4]+0x00000060u,c->r[0]); // 80111F04
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[2]);} // 80111F08
  {uint32_t ea=c->r[4]+0x00000068u; WF32(ea,c->f[2]);} // 80111F0C
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 80111F10
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[1]);} // 80111F14
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[3]);} // 80111F18
  W32(c->r[4]+0x00000084u,c->r[0]); // 80111F1C
  {uint32_t ea=c->r[4]+0x00000088u; WF32(ea,c->f[2]);} // 80111F20
  {uint32_t ea=c->r[4]+0x0000008Cu; WF32(ea,c->f[3]);} // 80111F24
  c->lr=0x80111F2Cu; f_80223CD0(c); // 80111F28
  c->lr=0x80111F30u; f_80219E80(c); // 80111F2C
  c->r[3]=0u+0x00000001u; // 80111F30
  c->lr=0x80111F38u; f_80218870(c); // 80111F34
  c->r[3]=0u+0x00000002u; // 80111F38
  c->lr=0x80111F40u; f_80218870(c); // 80111F3C
  c->r[3]=0u+0x00000003u; // 80111F40
  c->lr=0x80111F48u; f_80218870(c); // 80111F44
  c->r[3]=0u+0x00000004u; // 80111F48
  c->lr=0x80111F50u; f_80218870(c); // 80111F4C
  c->r[3]=0u+0x00000005u; // 80111F50
  c->lr=0x80111F58u; f_80218870(c); // 80111F54
  c->r[3]=0u+0x00000006u; // 80111F58
  c->lr=0x80111F60u; f_80218870(c); // 80111F5C
  c->r[3]=0u+0x00000008u; // 80111F60
  c->lr=0x80111F68u; f_80218870(c); // 80111F64
  c->r[3]=0u+0x00000009u; // 80111F68
  c->lr=0x80111F70u; f_80218870(c); // 80111F6C
  c->r[3]=0u+0x0000000Au; // 80111F70
  c->lr=0x80111F78u; f_80218870(c); // 80111F74
  c->r[3]=0u+0x0000000Du; // 80111F78
  c->lr=0x80111F80u; f_80218870(c); // 80111F7C
  c->r[3]=0u+0x0000000Eu; // 80111F80
  c->lr=0x80111F88u; f_80218870(c); // 80111F84
L_80111F88:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80111F88
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80111F8C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80111F90
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80111F94
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80111F98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80111F9C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80111FA0
  c->r[30]=R32(c->r[1]+0x00000038u); // 80111FA4
  c->r[0]=R32(c->r[1]+0x00000074u); // 80111FA8
  c->r[29]=R32(c->r[1]+0x00000034u); // 80111FAC
  c->lr=c->r[0]; // 80111FB0
  c->r[1]=c->r[1]+0x00000070u; // 80111FB4
  return; // 80111FB8
}

// fn_80111FBC
void f_80111FBC(Ctx* __restrict c) {
  trace_call(0x80111FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80111FBC
  c->r[0]=c->lr; // 80111FC0
  cmps(c,0,(int32_t)c->r[3],0); // 80111FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80111FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80111FCC
  c->r[31]=c->r[4]|c->r[4]; // 80111FD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80111FD4
  c->r[30]=c->r[3]|c->r[3]; // 80111FD8
  if (crb(c,2)) { goto L_80111FFC; } // 80111FDC
  if (crb(c,2)) { goto L_80111FEC; } // 80111FE0
  c->r[4]=0u+0x00000000u; // 80111FE4
  c->lr=0x80111FECu; f_802DC0A0(c); // 80111FE8
L_80111FEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80111FEC
  if (!crb(c,1)) { goto L_80111FFC; } // 80111FF0
  c->r[3]=c->r[30]|c->r[30]; // 80111FF4
  c->lr=0x80111FFCu; f_80244DC0(c); // 80111FF8
L_80111FFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80111FFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112000
  c->r[30]=R32(c->r[1]+0x00000008u); // 80112004
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112008
  c->lr=c->r[0]; // 8011200C
  c->r[1]=c->r[1]+0x00000010u; // 80112010
  return; // 80112014
}

// fn_80112018
void f_80112018(Ctx* __restrict c) {
  trace_call(0x80112018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112018
  c->r[0]=c->lr; // 8011201C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112020
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112024
  c->r[31]=c->r[3]|c->r[3]; // 80112028
  c->lr=0x80112030u; f_8010E720(c); // 8011202C
  c->r[3]=0u+0x80420000u; // 80112030
  c->r[0]=0u+0x00000000u; // 80112034
  c->r[3]=c->r[3]+0x000023E8u; // 80112038
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8011203C
  c->r[3]=c->r[31]|c->r[31]; // 80112040
  W32(c->r[31]+0x00000D44u,c->r[0]); // 80112044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112048
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011204C
  c->lr=c->r[0]; // 80112050
  c->r[1]=c->r[1]+0x00000010u; // 80112054
  return; // 80112058
}

// fn_8011205C
void f_8011205C(Ctx* __restrict c) {
  trace_call(0x8011205Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011205C
  c->r[0]=c->lr; // 80112060
  cmps(c,0,(int32_t)c->r[3],0); // 80112064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011206C
  c->r[31]=c->r[4]|c->r[4]; // 80112070
  W32(c->r[1]+0x00000008u,c->r[30]); // 80112074
  c->r[30]=c->r[3]|c->r[3]; // 80112078
  if (crb(c,2)) { goto L_80112098; } // 8011207C
  c->r[4]=0u+0x00000000u; // 80112080
  c->lr=0x80112088u; f_8010E850(c); // 80112084
  cmps(c,0,(int32_t)c->r[31],0); // 80112088
  if (!crb(c,1)) { goto L_80112098; } // 8011208C
  c->r[3]=c->r[30]|c->r[30]; // 80112090
  c->lr=0x80112098u; f_80244DC0(c); // 80112094
L_80112098:;
  c->r[3]=c->r[30]|c->r[30]; // 80112098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011209C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801120A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801120A4
  c->lr=c->r[0]; // 801120A8
  c->r[1]=c->r[1]+0x00000010u; // 801120AC
  return; // 801120B0
}

// fn_801120B4
void f_801120B4(Ctx* __restrict c) {
  trace_call(0x801120B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801120B4
  c->r[0]=c->lr; // 801120B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801120BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801120C0
  c->r[31]=c->r[3]|c->r[3]; // 801120C4
  c->lr=0x801120CCu; f_8010F690(c); // 801120C8
  c->r[3]=0u+0x00000450u; // 801120CC
  c->r[4]=c->r[13]+0xFFFFBE28u; // 801120D0
  c->r[5]=0u+0x00000000u; // 801120D4
  c->r[6]=0u+0x00001001u; // 801120D8
  c->lr=0x801120E0u; f_80244D20(c); // 801120DC
  cmps(c,0,(int32_t)c->r[3],0); // 801120E0
  if (crb(c,2)) { goto L_801120EC; } // 801120E4
  c->lr=0x801120ECu; f_8016557C(c); // 801120E8
L_801120EC:;
  W32(c->r[31]+0x00000D44u,c->r[3]); // 801120EC
  c->r[4]=0u+0x00000000u; // 801120F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801120F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801120F8
  c->ctr=c->r[12]; // 801120FC
  if (true) { c->lr=0x80112104u; dispatch(c,c->ctr); } // 80112100
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112108
  c->lr=c->r[0]; // 8011210C
  c->r[1]=c->r[1]+0x00000010u; // 80112110
  return; // 80112114
}

// fn_80112118
void f_80112118(Ctx* __restrict c) {
  trace_call(0x80112118u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112118
  c->r[0]=c->lr; // 8011211C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112120
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112124
  c->r[31]=c->r[3]|c->r[3]; // 80112128
  c->lr=0x80112130u; f_8010FAA4(c); // 8011212C
  c->r[3]=R32(c->r[31]+0x00000D44u); // 80112130
  cmps(c,0,(int32_t)c->r[3],0); // 80112134
  if (crb(c,2)) { goto L_80112174; } // 80112138
  c->r[12]=R32(c->r[3]+0x00000000u); // 8011213C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80112140
  c->ctr=c->r[12]; // 80112144
  if (true) { c->lr=0x8011214Cu; dispatch(c,c->ctr); } // 80112148
  c->r[3]=R32(c->r[31]+0x00000D44u); // 8011214C
  cmps(c,0,(int32_t)c->r[3],0); // 80112150
  if (crb(c,2)) { goto L_8011216C; } // 80112154
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112158
  c->r[4]=0u+0x00000001u; // 8011215C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112160
  c->ctr=c->r[12]; // 80112164
  if (true) { c->lr=0x8011216Cu; dispatch(c,c->ctr); } // 80112168
L_8011216C:;
  c->r[0]=0u+0x00000000u; // 8011216C
  W32(c->r[31]+0x00000D44u,c->r[0]); // 80112170
L_80112174:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112178
  c->lr=c->r[0]; // 8011217C
  c->r[1]=c->r[1]+0x00000010u; // 80112180
  return; // 80112184
}

// fn_80112188
void f_80112188(Ctx* __restrict c) {
  trace_call(0x80112188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112188
  c->r[0]=c->lr; // 8011218C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112194
  c->r[31]=c->r[3]|c->r[3]; // 80112198
  c->lr=0x801121A0u; f_8010F2EC(c); // 8011219C
  c->r[4]=R32(c->r[31]+0x00000D44u); // 801121A0
  c->r[3]=c->r[31]|c->r[31]; // 801121A4
  c->lr=0x801121ACu; f_8010F28C(c); // 801121A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801121AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801121B0
  c->lr=c->r[0]; // 801121B4
  c->r[1]=c->r[1]+0x00000010u; // 801121B8
  return; // 801121BC
}

// fn_801121C0
void f_801121C0(Ctx* __restrict c) {
  trace_call(0x801121C0u);
  f_8010F37C(c); return; // 801121C0
}

// fn_801121C4
void f_801121C4(Ctx* __restrict c) {
  trace_call(0x801121C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801121C4
  c->r[4]=0u+0x80470000u; // 801121C8
  {uint32_t ea=c->r[2]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801121CC
  c->r[3]=c->r[4]+0x00004BC0u; // 801121D0
  {uint32_t ea=c->r[2]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801121D4
  c->r[5]=0u+0x80470000u; // 801121D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801121DC
  c->r[8]=c->r[1]+0x00000008u; // 801121E0
  c->r[7]=c->r[1]+0x00000018u; // 801121E4
  c->r[6]=c->r[1]+0x00000028u; // 801121E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801121EC
  c->r[5]=c->r[5]+0x00004BD0u; // 801121F0
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 801121F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801121F8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801121FC
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,3,ea,0,0);} // 80112200
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80112204
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80112208
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 8011220C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80112210
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80112214
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,5,ea,0,0);} // 80112218
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8011221C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80112220
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 80112224
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80112228
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8011222C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,6,ea,0,0);} // 80112230
  {uint32_t ea=c->r[4]+0x00004BC0u; WF32(ea,c->f[1]);} // 80112234
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80112238
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8011223C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80112240
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80112244
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,0,0);} // 80112248
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,4,ea,0,0);} // 8011224C
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,5,ea,0,0);} // 80112250
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 80112254
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,3,ea,0,0);} // 80112258
  c->r[1]=c->r[1]+0x00000040u; // 8011225C
  return; // 80112260
}

// fn_80112264
void f_80112264(Ctx* __restrict c) {
  trace_call(0x80112264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112264
  c->r[0]=c->lr; // 80112268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011226C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112270
  c->r[31]=c->r[3]|c->r[3]; // 80112274
  c->lr=0x8011227Cu; f_8010E720(c); // 80112278
  c->r[4]=0u+0x80420000u; // 8011227C
  c->r[3]=c->r[31]|c->r[31]; // 80112280
  c->r[4]=c->r[4]+0x00002510u; // 80112284
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80112288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011228C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112290
  c->lr=c->r[0]; // 80112294
  c->r[1]=c->r[1]+0x00000010u; // 80112298
  return; // 8011229C
}

// fn_801122A0
void f_801122A0(Ctx* __restrict c) {
  trace_call(0x801122A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801122A0
  c->r[0]=c->lr; // 801122A4
  cmps(c,0,(int32_t)c->r[3],0); // 801122A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801122AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801122B0
  c->r[31]=c->r[4]|c->r[4]; // 801122B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801122B8
  c->r[30]=c->r[3]|c->r[3]; // 801122BC
  if (crb(c,2)) { goto L_801122DC; } // 801122C0
  c->r[4]=0u+0x00000000u; // 801122C4
  c->lr=0x801122CCu; f_8010E850(c); // 801122C8
  cmps(c,0,(int32_t)c->r[31],0); // 801122CC
  if (!crb(c,1)) { goto L_801122DC; } // 801122D0
  c->r[3]=c->r[30]|c->r[30]; // 801122D4
  c->lr=0x801122DCu; f_80244DC0(c); // 801122D8
L_801122DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801122DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801122E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801122E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801122E8
  c->lr=c->r[0]; // 801122EC
  c->r[1]=c->r[1]+0x00000010u; // 801122F0
  return; // 801122F4
}

// fn_801122F8
void f_801122F8(Ctx* __restrict c) {
  trace_call(0x801122F8u);
  f_802B2918(c); return; // 801122F8
}

// fn_801122FC
void f_801122FC(Ctx* __restrict c) {
  trace_call(0x801122FCu);
  f_802B2728(c); return; // 801122FC
}

// fn_80112300
void f_80112300(Ctx* __restrict c) {
  trace_call(0x80112300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112300
  c->r[0]=c->lr; // 80112304
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011230C
  c->r[31]=c->r[4]|c->r[4]; // 80112310
  W32(c->r[1]+0x00000008u,c->r[30]); // 80112314
  c->r[30]=c->r[3]|c->r[3]; // 80112318
  c->lr=0x80112320u; f_802B51B8(c); // 8011231C
  cmps(c,0,(int32_t)c->r[31],9); // 80112320
  if (!crb(c,2)) { goto L_80112344; } // 80112324
  c->r[3]=R32(c->r[30]+0x00000050u); // 80112328
  c->r[0]=0u+0x00000001u; // 8011232C
  c->r[3]=rotl(c->r[3],0)&0xEFFFFFFFu; // 80112330
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 80112334
  W32(c->r[30]+0x00000050u,c->r[3]); // 80112338
  c->r[3]=R32(c->r[13]+0xFFFFE820u); // 8011233C
  W8(c->r[3]+0x0000021Fu,c->r[0]); // 80112340
L_80112344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112348
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011234C
  c->lr=c->r[0]; // 80112350
  c->r[1]=c->r[1]+0x00000010u; // 80112354
  return; // 80112358
}

// fn_8011235C
void f_8011235C(Ctx* __restrict c) {
  trace_call(0x8011235Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011235C
  c->r[0]=c->lr; // 80112360
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112368
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011236C
  c->r[30]=c->r[3]|c->r[3]; // 80112370
  c->r[31]=R32(c->r[13]+0xFFFFE138u); // 80112374
  c->r[3]=c->r[31]|c->r[31]; // 80112378
  c->lr=0x80112380u; f_8002E624(c); // 8011237C
  c->r[3]=R32(c->r[31]+0x00000018u); // 80112380
  cmps(c,0,(int32_t)c->r[3],0); // 80112384
  if (crb(c,2)) { goto L_80112394; } // 80112388
  c->r[4]=0u+0x00000001u; // 8011238C
  c->lr=0x80112394u; f_8012E8E4(c); // 80112390
L_80112394:;
  c->r[4]=R32(c->r[13]+0xFFFFE834u); // 80112394
  c->r[0]=0u+0x00000000u; // 80112398
  {uint32_t ea=c->r[2]+0xFFFF88F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011239C
  c->r[3]=c->r[30]|c->r[30]; // 801123A0
  {uint32_t ea=c->r[4]+0x00000050u; WF32(ea,c->f[0]);} // 801123A4
  c->r[4]=R32(c->r[13]+0xFFFFE834u); // 801123A8
  W32(c->r[4]+0x00000054u,c->r[0]); // 801123AC
  c->lr=0x801123B4u; f_8010F2EC(c); // 801123B0
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 801123B4
  c->r[4]=R32(c->r[3]+0x00000014u); // 801123B8
  cmps(c,0,(int32_t)c->r[4],0); // 801123BC
  if (crb(c,2)) { goto L_801123D4; } // 801123C0
  c->r[5]=R32(c->r[13]+0xFFFFE140u); // 801123C4
  c->r[3]=R32(c->r[13]+0xFFFFE148u); // 801123C8
  c->r[5]=R32(c->r[5]+0x000000F8u); // 801123CC
  c->lr=0x801123D4u; f_80123788(c); // 801123D0
L_801123D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801123D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801123D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801123DC
  c->lr=c->r[0]; // 801123E0
  c->r[1]=c->r[1]+0x00000010u; // 801123E4
  return; // 801123E8
}

// fn_801123EC
void f_801123EC(Ctx* __restrict c) {
  trace_call(0x801123ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801123EC
  c->r[0]=c->lr; // 801123F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801123F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801123F8
  c->r[31]=c->r[3]|c->r[3]; // 801123FC
  c->lr=0x80112404u; f_8010F690(c); // 80112400
  c->r[3]=R32(c->r[31]+0x00000070u); // 80112404
  c->r[0]=R32(c->r[3]+0x00000108u); // 80112408
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 8011240C
  W32(c->r[3]+0x00000108u,c->r[0]); // 80112410
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112414
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112418
  c->lr=c->r[0]; // 8011241C
  c->r[1]=c->r[1]+0x00000010u; // 80112420
  return; // 80112424
}

// fn_80112428
void f_80112428(Ctx* __restrict c) {
  trace_call(0x80112428u);
  f_8010FAA4(c); return; // 80112428
}

// fn_8011242C
void f_8011242C(Ctx* __restrict c) {
  trace_call(0x8011242Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011242C
  c->r[4]=0u+0x80470000u; // 80112430
  {uint32_t ea=c->r[2]+0xFFFF88FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80112434
  c->r[3]=c->r[4]+0x00004C00u; // 80112438
  {uint32_t ea=c->r[2]+0xFFFF88F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011243C
  c->r[5]=0u+0x80470000u; // 80112440
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80112444
  c->r[8]=c->r[1]+0x00000008u; // 80112448
  c->r[7]=c->r[1]+0x00000018u; // 8011244C
  c->r[6]=c->r[1]+0x00000028u; // 80112450
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80112454
  c->r[5]=c->r[5]+0x00004C10u; // 80112458
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 8011245C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80112460
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80112464
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,3,ea,0,0);} // 80112468
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8011246C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80112470
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 80112474
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80112478
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8011247C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,5,ea,0,0);} // 80112480
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80112484
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80112488
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 8011248C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80112490
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80112494
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,6,ea,0,0);} // 80112498
  {uint32_t ea=c->r[4]+0x00004C00u; WF32(ea,c->f[1]);} // 8011249C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801124A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801124A4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801124A8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 801124AC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,0,0);} // 801124B0
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,4,ea,0,0);} // 801124B4
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,5,ea,0,0);} // 801124B8
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 801124BC
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,3,ea,0,0);} // 801124C0
  c->r[1]=c->r[1]+0x00000040u; // 801124C4
  return; // 801124C8
}

// fn_801124CC
void f_801124CC(Ctx* __restrict c) {
  trace_call(0x801124CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801124CC
  c->r[0]=c->lr; // 801124D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801124D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801124D8
  c->r[31]=c->r[3]|c->r[3]; // 801124DC
  c->lr=0x801124E4u; f_8010E720(c); // 801124E0
  c->r[5]=c->r[31]+0x00000DD4u; // 801124E4
  c->r[3]=c->r[31]+0x00000E04u; // 801124E8
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[1]=c->ps1[1]=RF32(ea);} // 801124EC
  c->r[4]=0u+0x80420000u; // 801124F0
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[0]=c->ps1[0]=RF32(ea);} // 801124F4
  c->r[4]=c->r[4]+0x000029B0u; // 801124F8
  cmpu(c,0,c->r[5],c->r[3]); // 801124FC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80112500
  {uint32_t ea=c->r[31]+0x00000DC4u; WF32(ea,c->f[1]);} // 80112504
  {uint32_t ea=c->r[31]+0x00000DC8u; WF32(ea,c->f[1]);} // 80112508
  {uint32_t ea=c->r[31]+0x00000DCCu; WF32(ea,c->f[0]);} // 8011250C
  {uint32_t ea=c->r[31]+0x00000DD0u; WF32(ea,c->f[0]);} // 80112510
  if (!crb(c,0)) { goto L_8011268C; } // 80112514
  c->r[6]=c->r[31]+0x00000DD4u; // 80112518
  c->r[4]=c->r[31]+0x00000D84u; // 8011251C
  c->r[7]=c->r[3]-c->r[6]; // 80112520
  c->r[8]=c->r[7]+0x0000000Fu; // 80112524
  c->r[0]=sraw(c,c->r[8],4); // 80112528
  c->r[9]=addc(c,c->r[0],0,c->xer_ca); // 8011252C
  c->r[10]=c->r[9]+0x00000001u; // 80112530
  cmps(c,0,(int32_t)c->r[10],8); // 80112534
  if (!crb(c,1)) { goto L_80112650; } // 80112538
  cmpu(c,0,c->r[6],c->r[3]); // 8011253C
  c->r[3]=0u+0x00000000u; // 80112540
  c->r[6]=0u+0x00000000u; // 80112544
  if (crb(c,1)) { goto L_80112570; } // 80112548
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 8011254C
  c->r[7]=0u+0x00000001u; // 80112550
  if (!crb(c,2)) { goto L_80112564; } // 80112554
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 80112558
  if (crb(c,2)) { goto L_80112564; } // 8011255C
  c->r[7]=0u+0x00000000u; // 80112560
L_80112564:;
  cmps(c,0,(int32_t)c->r[7],0); // 80112564
  if (crb(c,2)) { goto L_80112570; } // 80112568
  c->r[6]=0u+0x00000001u; // 8011256C
L_80112570:;
  cmps(c,0,(int32_t)c->r[6],0); // 80112570
  if (crb(c,2)) { goto L_801125A0; } // 80112574
  c->r[7]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[7]); // 80112578
  c->r[6]=0u+0x00000001u; // 8011257C
  if (!crb(c,2)) { goto L_80112594; } // 80112580
  c->r[0]=rotl(c->r[10],0)&0x80000000u; // 80112584
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80112588
  if (crb(c,2)) { goto L_80112594; } // 8011258C
  c->r[6]=0u+0x00000000u; // 80112590
L_80112594:;
  cmps(c,0,(int32_t)c->r[6],0); // 80112594
  if (crb(c,2)) { goto L_801125A0; } // 80112598
  c->r[3]=0u+0x00000001u; // 8011259C
L_801125A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801125A0
  if (crb(c,2)) { goto L_80112650; } // 801125A4
  c->r[0]=c->r[4]+0x0000007Fu; // 801125A8
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[1]=c->ps1[1]=RF32(ea);} // 801125AC
  c->r[0]=c->r[0]-c->r[5]; // 801125B0
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[0]=c->ps1[0]=RF32(ea);} // 801125B4
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 801125B8
  c->ctr=c->r[0]; // 801125BC
  cmpu(c,0,c->r[5],c->r[4]); // 801125C0
  if (!crb(c,0)) { goto L_80112650; } // 801125C4
L_801125C8:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801125C8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801125CC
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 801125D0
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801125D4
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 801125D8
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[1]);} // 801125DC
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 801125E0
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 801125E4
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[1]);} // 801125E8
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[1]);} // 801125EC
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 801125F0
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 801125F4
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 801125F8
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 801125FC
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 80112600
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 80112604
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[1]);} // 80112608
  {uint32_t ea=c->r[5]+0x00000044u; WF32(ea,c->f[1]);} // 8011260C
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[0]);} // 80112610
  {uint32_t ea=c->r[5]+0x0000004Cu; WF32(ea,c->f[0]);} // 80112614
  {uint32_t ea=c->r[5]+0x00000050u; WF32(ea,c->f[1]);} // 80112618
  {uint32_t ea=c->r[5]+0x00000054u; WF32(ea,c->f[1]);} // 8011261C
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 80112620
  {uint32_t ea=c->r[5]+0x0000005Cu; WF32(ea,c->f[0]);} // 80112624
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[1]);} // 80112628
  {uint32_t ea=c->r[5]+0x00000064u; WF32(ea,c->f[1]);} // 8011262C
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 80112630
  {uint32_t ea=c->r[5]+0x0000006Cu; WF32(ea,c->f[0]);} // 80112634
  {uint32_t ea=c->r[5]+0x00000070u; WF32(ea,c->f[1]);} // 80112638
  {uint32_t ea=c->r[5]+0x00000074u; WF32(ea,c->f[1]);} // 8011263C
  {uint32_t ea=c->r[5]+0x00000078u; WF32(ea,c->f[0]);} // 80112640
  {uint32_t ea=c->r[5]+0x0000007Cu; WF32(ea,c->f[0]);} // 80112644
  c->r[5]=c->r[5]+0x00000080u; // 80112648
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801125C8; } // 8011264C
L_80112650:;
  c->r[3]=c->r[31]+0x00000E04u; // 80112650
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[1]=c->ps1[1]=RF32(ea);} // 80112654
  c->r[0]=c->r[3]+0x0000000Fu; // 80112658
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011265C
  c->r[0]=c->r[0]-c->r[5]; // 80112660
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80112664
  c->ctr=c->r[0]; // 80112668
  cmpu(c,0,c->r[5],c->r[3]); // 8011266C
  if (!crb(c,0)) { goto L_8011268C; } // 80112670
L_80112674:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80112674
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 80112678
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 8011267C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 80112680
  c->r[5]=c->r[5]+0x00000010u; // 80112684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80112674; } // 80112688
L_8011268C:;
  c->r[0]=0u+0x00000000u; // 8011268C
  W8(c->r[31]+0x00000E04u,c->r[0]); // 80112690
  c->r[4]=0u+0x80FD0000u; // 80112694
  c->r[3]=c->r[31]|c->r[31]; // 80112698
  W8(c->r[31]+0x00000E05u,c->r[0]); // 8011269C
  c->r[0]=c->r[4]+0xFFFF9DB8u; // 801126A0
  W32(c->r[13]+0xFFFFE1D0u,c->r[0]); // 801126A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801126A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801126AC
  c->lr=c->r[0]; // 801126B0
  c->r[1]=c->r[1]+0x00000010u; // 801126B4
  return; // 801126B8
}

// fn_801126BC
void f_801126BC(Ctx* __restrict c) {
  trace_call(0x801126BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801126BC
  c->r[0]=c->lr; // 801126C0
  cmps(c,0,(int32_t)c->r[3],0); // 801126C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801126C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801126CC
  c->r[31]=c->r[4]|c->r[4]; // 801126D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801126D4
  c->r[30]=c->r[3]|c->r[3]; // 801126D8
  if (crb(c,2)) { goto L_80112710; } // 801126DC
  c->r[4]=0u+0x80420000u; // 801126E0
  c->r[0]=0u+0x00000000u; // 801126E4
  c->r[4]=c->r[4]+0x000029B0u; // 801126E8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801126EC
  c->r[4]=0u+0x00000000u; // 801126F0
  c->r[5]=R32(c->r[13]+0xFFFFE140u); // 801126F4
  W32(c->r[5]+0x000000F8u,c->r[0]); // 801126F8
  c->lr=0x80112700u; f_8010E850(c); // 801126FC
  cmps(c,0,(int32_t)c->r[31],0); // 80112700
  if (!crb(c,1)) { goto L_80112710; } // 80112704
  c->r[3]=c->r[30]|c->r[30]; // 80112708
  c->lr=0x80112710u; f_80244DC0(c); // 8011270C
L_80112710:;
  c->r[3]=c->r[30]|c->r[30]; // 80112710
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112714
  c->r[30]=R32(c->r[1]+0x00000008u); // 80112718
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011271C
  c->lr=c->r[0]; // 80112720
  c->r[1]=c->r[1]+0x00000010u; // 80112724
  return; // 80112728
}

// fn_8011272C
void f_8011272C(Ctx* __restrict c) {
  trace_call(0x8011272Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011272C
  c->r[0]=c->lr; // 80112730
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112738
  c->r[31]=c->r[4]|c->r[4]; // 8011273C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80112740
  c->r[30]=c->r[3]|c->r[3]; // 80112744
  c->lr=0x8011274Cu; f_802B51B8(c); // 80112748
  cmps(c,0,(int32_t)c->r[31],9); // 8011274C
  if (!crb(c,2)) { goto L_8011276C; } // 80112750
  c->r[3]=R32(c->r[30]+0x000000ACu); // 80112754
  c->r[3]=R32(c->r[3]+0x000001C8u); // 80112758
  cmps(c,0,(int32_t)c->r[3],0); // 8011275C
  if (crb(c,2)) { goto L_8011276C; } // 80112760
  {uint32_t ea=c->r[2]+0xFFFF8908u; c->f[0]=c->ps1[0]=RF32(ea);} // 80112764
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[0]);} // 80112768
L_8011276C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011276C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112770
  c->r[30]=R32(c->r[1]+0x00000008u); // 80112774
  c->lr=c->r[0]; // 80112778
  c->r[1]=c->r[1]+0x00000010u; // 8011277C
  return; // 80112780
}

// fn_80112784
void f_80112784(Ctx* __restrict c) {
  trace_call(0x80112784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112784
  c->r[0]=c->lr; // 80112788
  c->r[4]=0u+0x80420000u; // 8011278C
  c->r[5]=0u+0x00000000u; // 80112790
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112794
  c->r[4]=c->r[4]+0x00002638u; // 80112798
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011279C
  c->r[31]=c->r[3]|c->r[3]; // 801127A0
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 801127A4
  c->lr=0x801127ACu; f_8027EDC8(c); // 801127A8
  cmps(c,0,(int32_t)c->r[3],0); // 801127AC
  if (crb(c,2)) { goto L_801127E4; } // 801127B0
  c->r[0]=R32(c->r[3]+0x00000048u); // 801127B4
  cmps(c,0,(int32_t)c->r[0],2); // 801127B8
  if (!crb(c,2)) { goto L_801127D0; } // 801127BC
  c->r[4]=R32(c->r[3]+0x000000E0u); // 801127C0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801127C4
  cmps(c,0,(int32_t)c->r[0],0); // 801127C8
  if (crb(c,2)) { goto L_801127DC; } // 801127CC
L_801127D0:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 801127D0
  c->r[0]=rotl(c->r[0],0)&0x08000000u; cr0(c,c->r[0]); // 801127D4
  if (crb(c,2)) { goto L_801127E4; } // 801127D8
L_801127DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801127DC
  c->lr=0x801127E4u; f_802B4CFC(c); // 801127E0
L_801127E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801127E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801127E8
  c->lr=c->r[0]; // 801127EC
  c->r[1]=c->r[1]+0x00000010u; // 801127F0
  return; // 801127F4
}

// fn_801127F8
void f_801127F8(Ctx* __restrict c) {
  trace_call(0x801127F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801127F8
  c->r[0]=c->lr; // 801127FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80112800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80112804
  c->r[31]=c->r[3]|c->r[3]; // 80112808
  c->lr=0x80112810u; f_8010F690(c); // 8011280C
  c->r[4]=0u+0x80420000u; // 80112810
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80112814
  c->r[4]=c->r[4]+0x0000264Cu; // 80112818
  c->lr=0x80112820u; f_8002477C(c); // 8011281C
  c->r[3]=0u+0x00000084u; // 80112820
  c->r[4]=c->r[13]+0xFFFFBE50u; // 80112824
  c->r[5]=0u+0x00000000u; // 80112828
  c->r[6]=0u+0x00001001u; // 8011282C
  c->lr=0x80112834u; f_80244D20(c); // 80112830
  cmps(c,0,(int32_t)c->r[3],0); // 80112834
  if (crb(c,2)) { goto L_80112840; } // 80112838
  c->lr=0x80112840u; f_8010DDE0(c); // 8011283C
L_80112840:;
  W32(c->r[13]+0xFFFFE134u,c->r[3]); // 80112840
  c->r[3]=0u+0x00000018u; // 80112844
  c->r[4]=c->r[13]+0xFFFFBD48u; // 80112848
  c->r[5]=0u+0x00000000u; // 8011284C
  c->r[6]=0u+0x00001001u; // 80112850
  c->lr=0x80112858u; f_80244D20(c); // 80112854
  cmps(c,0,(int32_t)c->r[3],0); // 80112858
  if (crb(c,2)) { goto L_80112864; } // 8011285C
  c->lr=0x80112864u; f_80027DC4(c); // 80112860
L_80112864:;
  W32(c->r[13]+0xFFFFE1C4u,c->r[3]); // 80112864
  c->r[3]=0u+0x00001104u; // 80112868
  c->r[4]=c->r[13]+0xFFFFBD40u; // 8011286C
  c->r[5]=0u+0x00000000u; // 80112870
  c->r[6]=0u+0x00001001u; // 80112874
  c->lr=0x8011287Cu; f_80244D20(c); // 80112878
  cmps(c,0,(int32_t)c->r[3],0); // 8011287C
  if (crb(c,2)) { goto L_80112888; } // 80112880
  c->lr=0x80112888u; f_8015C3F0(c); // 80112884
L_80112888:;
  W32(c->r[13]+0xFFFFE1C0u,c->r[3]); // 80112888
  c->r[3]=0u+0x00002278u; // 8011288C
  c->r[4]=c->r[13]+0xFFFFBD38u; // 80112890
  c->r[5]=0u+0x00000000u; // 80112894
  c->r[6]=0u+0x00001001u; // 80112898
  c->lr=0x801128A0u; f_80244D20(c); // 8011289C
  cmps(c,0,(int32_t)c->r[3],0); // 801128A0
  if (crb(c,2)) { goto L_801128AC; } // 801128A4
  c->lr=0x801128ACu; f_8016146C(c); // 801128A8
L_801128AC:;
  W32(c->r[13]+0xFFFFE1BCu,c->r[3]); // 801128AC
  c->r[3]=0u+0x00000014u; // 801128B0
  c->r[4]=c->r[13]+0xFFFFBD30u; // 801128B4
  c->r[5]=0u+0x00000000u; // 801128B8
  c->r[6]=0u+0x00001001u; // 801128BC
  c->lr=0x801128C4u; f_80244D20(c); // 801128C0
  cmps(c,0,(int32_t)c->r[3],0); // 801128C4
  if (crb(c,2)) { goto L_801128D0; } // 801128C8
  c->lr=0x801128D0u; f_801378E8(c); // 801128CC
L_801128D0:;
  W32(c->r[13]+0xFFFFE1B8u,c->r[3]); // 801128D0
  c->r[3]=0u+0x00000284u; // 801128D4
  c->r[4]=c->r[13]+0xFFFFBE48u; // 801128D8
  c->r[5]=0u+0x00000000u; // 801128DC
  c->r[6]=0u+0x00001001u; // 801128E0
  c->lr=0x801128E8u; f_80244D20(c); // 801128E4
  cmps(c,0,(int32_t)c->r[3],0); // 801128E8
  if (crb(c,2)) { goto L_801128F4; } // 801128EC
  c->lr=0x801128F4u; f_801571A8(c); // 801128F0
L_801128F4:;
  W32(c->r[13]+0xFFFFE1D8u,c->r[3]); // 801128F4
  c->lr=0x801128FCu; f_80155A10(c); // 801128F8
  c->r[3]=0u+0x00000070u; // 801128FC
  c->r[4]=c->r[13]+0xFFFFBE40u; // 80112900
  c->r[5]=0u+0x00000000u; // 80112904
  c->r[6]=0u+0x00001001u; // 80112908
  c->lr=0x80112910u; f_80244D20(c); // 8011290C
  cmps(c,0,(int32_t)c->r[3],0); // 80112910
  if (crb(c,2)) { goto L_8011291C; } // 80112914
  c->lr=0x8011291Cu; f_8002E7BC(c); // 80112918
L_8011291C:;
  W32(c->r[13]+0xFFFFE150u,c->r[3]); // 8011291C
  c->r[3]=0u+0x000047C8u; // 80112920
  c->r[4]=c->r[13]+0xFFFFBE38u; // 80112924
  c->r[5]=0u+0x00000000u; // 80112928
  c->r[6]=0u+0x00001001u; // 8011292C
  c->lr=0x80112934u; f_80244D20(c); // 80112930
  cmps(c,0,(int32_t)c->r[3],0); // 80112934
  if (crb(c,2)) { goto L_80112940; } // 80112938
  c->lr=0x80112940u; f_80151A58(c); // 8011293C
L_80112940:;
  W32(c->r[13]+0xFFFFE1D4u,c->r[3]); // 80112940
  c->r[3]=0u+0x00000450u; // 80112944
  c->r[4]=c->r[13]+0xFFFFBE30u; // 80112948
  c->r[5]=0u+0x00000000u; // 8011294C
  c->r[6]=0u+0x00001001u; // 80112950
  c->lr=0x80112958u; f_80244D20(c); // 80112954
  cmps(c,0,(int32_t)c->r[3],0); // 80112958
  if (crb(c,2)) { goto L_80112964; } // 8011295C
  c->lr=0x80112964u; f_8016557C(c); // 80112960
L_80112964:;
  c->r[5]=R32(c->r[13]+0xFFFFE134u); // 80112964
  c->r[4]=0u+0x00000000u; // 80112968
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8011296C
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80112970
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80112974
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112978
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8011297C
  c->ctr=c->r[12]; // 80112980
  if (true) { c->lr=0x80112988u; dispatch(c,c->ctr); } // 80112984
  c->r[3]=0u+0x00010000u; // 80112988
  c->r[4]=c->r[13]+0xFFFFBD28u; // 8011298C
  c->r[3]=c->r[3]+0xFFFFD2BCu; // 80112990
  c->r[5]=0u+0x00000000u; // 80112994
  c->r[6]=0u+0x00001001u; // 80112998
  c->lr=0x801129A0u; f_80244D20(c); // 8011299C
  cmps(c,0,(int32_t)c->r[3],0); // 801129A0
  if (crb(c,2)) { goto L_801129AC; } // 801129A4
  c->lr=0x801129ACu; f_8002E038(c); // 801129A8
L_801129AC:;
  W32(c->r[13]+0xFFFFE138u,c->r[3]); // 801129AC
  c->r[3]=0u+0x0000012Cu; // 801129B0
  c->r[4]=c->r[13]+0xFFFFBD20u; // 801129B4
  c->r[5]=0u+0x00000000u; // 801129B8
  c->r[6]=0u+0x00001001u; // 801129BC
  c->lr=0x801129C4u; f_80244D20(c); // 801129C0
  cmps(c,0,(int32_t)c->r[3],0); // 801129C4
  if (crb(c,2)) { goto L_801129D0; } // 801129C8
  c->lr=0x801129D0u; f_8002B9F4(c); // 801129CC
L_801129D0:;
  W32(c->r[13]+0xFFFFE100u,c->r[3]); // 801129D0
  c->r[3]=0u+0x0000067Cu; // 801129D4
  c->r[4]=c->r[13]+0xFFFFBD18u; // 801129D8
  c->r[5]=0u+0x00000000u; // 801129DC
  c->r[6]=0u+0x00001001u; // 801129E0
  c->lr=0x801129E8u; f_80244D20(c); // 801129E4
  cmps(c,0,(int32_t)c->r[3],0); // 801129E8
  if (crb(c,2)) { goto L_801129F4; } // 801129EC
  c->lr=0x801129F4u; f_80035424(c); // 801129F0
L_801129F4:;
  W32(c->r[13]+0xFFFFE13Cu,c->r[3]); // 801129F4
  c->r[3]=0u+0x00000110u; // 801129F8
  c->r[4]=c->r[13]+0xFFFFBD10u; // 801129FC
  c->r[5]=0u+0x00000000u; // 80112A00
  c->r[6]=0u+0x00001001u; // 80112A04
  c->lr=0x80112A0Cu; f_80244D20(c); // 80112A08
  cmps(c,0,(int32_t)c->r[3],0); // 80112A0C
  if (crb(c,2)) { goto L_80112A18; } // 80112A10
  c->lr=0x80112A18u; f_801183F8(c); // 80112A14
L_80112A18:;
  W32(c->r[13]+0xFFFFE1C8u,c->r[3]); // 80112A18
  c->lr=0x80112A20u; f_8011881C(c); // 80112A1C
  c->r[3]=0u+0x00000024u; // 80112A20
  c->r[4]=c->r[13]+0xFFFFBD08u; // 80112A24
  c->r[5]=0u+0x00000000u; // 80112A28
  c->r[6]=0u+0x00001001u; // 80112A2C
  c->lr=0x80112A34u; f_80244D20(c); // 80112A30
  cmps(c,0,(int32_t)c->r[3],0); // 80112A34
  if (crb(c,2)) { goto L_80112A40; } // 80112A38
  c->lr=0x80112A40u; f_801236B4(c); // 80112A3C
L_80112A40:;
  W32(c->r[13]+0xFFFFE148u,c->r[3]); // 80112A40
  c->r[0]=0u+0x00000000u; // 80112A44
  W32(c->r[31]+0x00000D44u,c->r[0]); // 80112A48
  W32(c->r[31]+0x00000D48u,c->r[0]); // 80112A4C
  W32(c->r[31]+0x00000D4Cu,c->r[0]); // 80112A50
  W32(c->r[31]+0x00000D50u,c->r[0]); // 80112A54
  W32(c->r[31]+0x00000D54u,c->r[0]); // 80112A58
  W32(c->r[31]+0x00000D58u,c->r[0]); // 80112A5C
  W32(c->r[31]+0x00000D5Cu,c->r[0]); // 80112A60
  W32(c->r[31]+0x00000D60u,c->r[0]); // 80112A64
  W32(c->r[31]+0x00000D64u,c->r[0]); // 80112A68
  W32(c->r[31]+0x00000D68u,c->r[0]); // 80112A6C
  W32(c->r[31]+0x00000D6Cu,c->r[0]); // 80112A70
  W32(c->r[31]+0x00000D70u,c->r[0]); // 80112A74
  W32(c->r[31]+0x00000D74u,c->r[0]); // 80112A78
  W32(c->r[31]+0x00000D78u,c->r[0]); // 80112A7C
  W32(c->r[31]+0x00000D7Cu,c->r[0]); // 80112A80
  W32(c->r[31]+0x00000D80u,c->r[0]); // 80112A84
  W32(c->r[31]+0x00000D84u,c->r[0]); // 80112A88
  W32(c->r[31]+0x00000D88u,c->r[0]); // 80112A8C
  W32(c->r[31]+0x00000D8Cu,c->r[0]); // 80112A90
  W32(c->r[31]+0x00000D90u,c->r[0]); // 80112A94
  W32(c->r[31]+0x00000D94u,c->r[0]); // 80112A98
  W32(c->r[31]+0x00000D98u,c->r[0]); // 80112A9C
  W32(c->r[31]+0x00000D9Cu,c->r[0]); // 80112AA0
  W32(c->r[31]+0x00000DA0u,c->r[0]); // 80112AA4
  W32(c->r[31]+0x00000DA4u,c->r[0]); // 80112AA8
  W32(c->r[31]+0x00000DA8u,c->r[0]); // 80112AAC
  W32(c->r[31]+0x00000DACu,c->r[0]); // 80112AB0
  W32(c->r[31]+0x00000DB0u,c->r[0]); // 80112AB4
  W32(c->r[31]+0x00000DB4u,c->r[0]); // 80112AB8
  W32(c->r[31]+0x00000DB8u,c->r[0]); // 80112ABC
  W32(c->r[31]+0x00000DBCu,c->r[0]); // 80112AC0
  W32(c->r[31]+0x00000DC0u,c->r[0]); // 80112AC4
  c->lr=0x80112ACCu; f_80353A74(c); // 80112AC8
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80112ACC
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80112AD0
  c->r[0]=0u-c->r[4]; // 80112AD4
  c->r[0]=c->r[0]|c->r[4]; // 80112AD8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80112ADC
  c->lr=0x80112AE4u; f_801147DC(c); // 80112AE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80112AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80112AE8
  c->lr=c->r[0]; // 80112AEC
  c->r[1]=c->r[1]+0x00000010u; // 80112AF0
  return; // 80112AF4
}

// fn_80112AF8
void f_80112AF8(Ctx* __restrict c) {
  trace_call(0x80112AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112AF8
  c->r[0]=c->lr; // 80112AFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80112B00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80112B04
  c->r[31]=0u+0x80420000u; // 80112B08
  c->r[31]=c->r[31]+0x00002638u; // 80112B0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80112B10
  c->r[30]=c->r[4]|c->r[4]; // 80112B14
  c->r[4]=0u+0x00000000u; // 80112B18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80112B1C
  c->r[29]=c->r[3]|c->r[3]; // 80112B20
  c->r[3]=c->r[31]+0x00000028u; // 80112B24
  c->lr=0x80112B2Cu; f_8024D960(c); // 80112B28
  c->r[4]=c->r[3]|c->r[3]; // 80112B2C
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 80112B30
  c->lr=0x80112B38u; f_8027FE7C(c); // 80112B34
  c->r[3]=c->r[31]+0x00000038u; // 80112B38
  c->r[4]=0u+0x00000000u; // 80112B3C
  c->lr=0x80112B44u; f_8024D960(c); // 80112B40
  c->r[4]=c->r[3]|c->r[3]; // 80112B44
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 80112B48
  c->lr=0x80112B50u; f_8027FE7C(c); // 80112B4C
  c->r[0]=R8(c->r[29]+0x00000E05u); // 80112B50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80112B54
  if (crb(c,2)) { goto L_80112B68; } // 80112B58
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80112B5C
  c->r[4]=c->r[29]+0x00000E05u; // 80112B60
  c->lr=0x80112B68u; f_800248E4(c); // 80112B64
L_80112B68:;
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80112B68
  c->r[4]=c->r[31]+0x00000044u; // 80112B6C
  c->lr=0x80112B74u; f_800248E4(c); // 80112B70
  c->r[3]=c->r[29]|c->r[29]; // 80112B74
  c->r[4]=c->r[30]|c->r[30]; // 80112B78
  c->lr=0x80112B80u; f_8010FAA4(c); // 80112B7C
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80112B80
  c->lr=0x80112B88u; f_80025484(c); // 80112B84
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80112B88
  c->lr=0x80112B90u; f_80110E98(c); // 80112B8C
  c->r[3]=R32(c->r[13]+0xFFFFE100u); // 80112B90
  cmps(c,0,(int32_t)c->r[3],0); // 80112B94
  if (crb(c,2)) { goto L_80112BB0; } // 80112B98
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112B9C
  c->r[4]=0u+0x00000001u; // 80112BA0
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112BA4
  c->ctr=c->r[12]; // 80112BA8
  if (true) { c->lr=0x80112BB0u; dispatch(c,c->ctr); } // 80112BAC
L_80112BB0:;
  c->r[0]=R32(c->r[13]+0xFFFFE1C8u); // 80112BB0
  c->r[3]=0u+0x00000000u; // 80112BB4
  W32(c->r[13]+0xFFFFE100u,c->r[3]); // 80112BB8
  cmps(c,0,(int32_t)c->r[0],0); // 80112BBC
  if (crb(c,2)) { goto L_80112C24; } // 80112BC0
  c->r[30]=0u+0x00000000u; // 80112BC4
  goto L_80112BD8; // 80112BC8
L_80112BCC:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80112BCC
  c->r[4]=c->r[30]|c->r[30]; // 80112BD0
  c->lr=0x80112BD8u; f_80119A44(c); // 80112BD4
L_80112BD8:;
  c->r[4]=c->r[30]|c->r[30]; // 80112BD8
  c->r[5]=c->r[1]+0x00000008u; // 80112BDC
  c->r[3]=0u+0x00000001u; // 80112BE0
  c->lr=0x80112BE8u; f_8024D6D0(c); // 80112BE4
  cmps(c,0,(int32_t)c->r[3],0); // 80112BE8
  c->r[30]=c->r[3]|c->r[3]; // 80112BEC
  if (!crb(c,2)) { IRQCHK(c); goto L_80112BCC; } // 80112BF0
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80112BF4
  c->lr=0x80112BFCu; f_80119750(c); // 80112BF8
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80112BFC
  cmps(c,0,(int32_t)c->r[3],0); // 80112C00
  if (crb(c,2)) { goto L_80112C1C; } // 80112C04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112C08
  c->r[4]=0u+0x00000001u; // 80112C0C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112C10
  c->ctr=c->r[12]; // 80112C14
  if (true) { c->lr=0x80112C1Cu; dispatch(c,c->ctr); } // 80112C18
L_80112C1C:;
  c->r[0]=0u+0x00000000u; // 80112C1C
  W32(c->r[13]+0xFFFFE1C8u,c->r[0]); // 80112C20
L_80112C24:;
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 80112C24
  cmps(c,0,(int32_t)c->r[3],0); // 80112C28
  if (crb(c,2)) { goto L_80112C44; } // 80112C2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112C30
  c->r[4]=0u+0x00000001u; // 80112C34
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112C38
  c->ctr=c->r[12]; // 80112C3C
  if (true) { c->lr=0x80112C44u; dispatch(c,c->ctr); } // 80112C40
L_80112C44:;
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 80112C44
  c->r[0]=0u+0x00000000u; // 80112C48
  W32(c->r[13]+0xFFFFE13Cu,c->r[0]); // 80112C4C
  cmps(c,0,(int32_t)c->r[3],0); // 80112C50
  if (crb(c,2)) { goto L_80112C6C; } // 80112C54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112C58
  c->r[4]=0u+0x00000001u; // 80112C5C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112C60
  c->ctr=c->r[12]; // 80112C64
  if (true) { c->lr=0x80112C6Cu; dispatch(c,c->ctr); } // 80112C68
L_80112C6C:;
  c->r[0]=0u+0x00000000u; // 80112C6C
  W32(c->r[13]+0xFFFFE138u,c->r[0]); // 80112C70
  c->r[31]=R32(c->r[13]+0xFFFFE134u); // 80112C74
  c->r[30]=R32(c->r[31]+0x0000000Cu); // 80112C78
  cmps(c,0,(int32_t)c->r[30],0); // 80112C7C
  if (crb(c,2)) { goto L_80112CC0; } // 80112C80
  c->r[12]=R32(c->r[30]+0x00000000u); // 80112C84
  c->r[3]=c->r[30]|c->r[30]; // 80112C88
  c->r[12]=R32(c->r[12]+0x00000010u); // 80112C8C
  c->ctr=c->r[12]; // 80112C90
  if (true) { c->lr=0x80112C98u; dispatch(c,c->ctr); } // 80112C94
  cmps(c,0,(int32_t)c->r[30],0); // 80112C98
  if (crb(c,2)) { goto L_80112CB8; } // 80112C9C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80112CA0
  c->r[3]=c->r[30]|c->r[30]; // 80112CA4
  c->r[4]=0u+0x00000001u; // 80112CA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112CAC
  c->ctr=c->r[12]; // 80112CB0
  if (true) { c->lr=0x80112CB8u; dispatch(c,c->ctr); } // 80112CB4
L_80112CB8:;
  c->r[0]=0u+0x00000000u; // 80112CB8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80112CBC
L_80112CC0:;
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80112CC0
  cmps(c,0,(int32_t)c->r[3],0); // 80112CC4
  if (crb(c,2)) { goto L_80112CE0; } // 80112CC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112CCC
  c->r[4]=0u+0x00000001u; // 80112CD0
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112CD4
  c->ctr=c->r[12]; // 80112CD8
  if (true) { c->lr=0x80112CE0u; dispatch(c,c->ctr); } // 80112CDC
L_80112CE0:;
  c->r[31]=0u+0x00000000u; // 80112CE0
  W32(c->r[13]+0xFFFFE134u,c->r[31]); // 80112CE4
  c->r[3]=R32(c->r[13]+0xFFFFE1D4u); // 80112CE8
  c->r[4]=0u+0x00000001u; // 80112CEC
  c->lr=0x80112CF4u; f_80151AA4(c); // 80112CF0
  c->r[3]=R32(c->r[13]+0xFFFFE150u); // 80112CF4
  W32(c->r[13]+0xFFFFE1D4u,c->r[31]); // 80112CF8
  cmps(c,0,(int32_t)c->r[3],0); // 80112CFC
  if (crb(c,2)) { goto L_80112D18; } // 80112D00
  c->r[12]=R32(c->r[3]+0x0000006Cu); // 80112D04
  c->r[4]=0u+0x00000001u; // 80112D08
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112D0C
  c->ctr=c->r[12]; // 80112D10
  if (true) { c->lr=0x80112D18u; dispatch(c,c->ctr); } // 80112D14
L_80112D18:;
  c->r[3]=R32(c->r[13]+0xFFFFE148u); // 80112D18
  c->r[0]=0u+0x00000000u; // 80112D1C
  W32(c->r[13]+0xFFFFE150u,c->r[0]); // 80112D20
  cmps(c,0,(int32_t)c->r[3],0); // 80112D24
  if (crb(c,2)) { goto L_80112D40; } // 80112D28
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112D2C
  c->r[4]=0u+0x00000001u; // 80112D30
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112D34
  c->ctr=c->r[12]; // 80112D38
  if (true) { c->lr=0x80112D40u; dispatch(c,c->ctr); } // 80112D3C
L_80112D40:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C0u); // 80112D40
  c->r[0]=0u+0x00000000u; // 80112D44
  W32(c->r[13]+0xFFFFE148u,c->r[0]); // 80112D48
  cmps(c,0,(int32_t)c->r[3],0); // 80112D4C
  if (crb(c,2)) { goto L_80112D68; } // 80112D50
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112D54
  c->r[4]=0u+0x00000001u; // 80112D58
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112D5C
  c->ctr=c->r[12]; // 80112D60
  if (true) { c->lr=0x80112D68u; dispatch(c,c->ctr); } // 80112D64
L_80112D68:;
  c->r[3]=R32(c->r[13]+0xFFFFE1BCu); // 80112D68
  c->r[0]=0u+0x00000000u; // 80112D6C
  W32(c->r[13]+0xFFFFE1C0u,c->r[0]); // 80112D70
  cmps(c,0,(int32_t)c->r[3],0); // 80112D74
  if (crb(c,2)) { goto L_80112D90; } // 80112D78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112D7C
  c->r[4]=0u+0x00000001u; // 80112D80
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112D84
  c->ctr=c->r[12]; // 80112D88
  if (true) { c->lr=0x80112D90u; dispatch(c,c->ctr); } // 80112D8C
L_80112D90:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C4u); // 80112D90
  c->r[0]=0u+0x00000000u; // 80112D94
  W32(c->r[13]+0xFFFFE1BCu,c->r[0]); // 80112D98
  cmps(c,0,(int32_t)c->r[3],0); // 80112D9C
  if (crb(c,2)) { goto L_80112DB8; } // 80112DA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112DA4
  c->r[4]=0u+0x00000001u; // 80112DA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112DAC
  c->ctr=c->r[12]; // 80112DB0
  if (true) { c->lr=0x80112DB8u; dispatch(c,c->ctr); } // 80112DB4
L_80112DB8:;
  c->r[3]=R32(c->r[13]+0xFFFFE1B8u); // 80112DB8
  c->r[0]=0u+0x00000000u; // 80112DBC
  W32(c->r[13]+0xFFFFE1C4u,c->r[0]); // 80112DC0
  cmps(c,0,(int32_t)c->r[3],0); // 80112DC4
  if (crb(c,2)) { goto L_80112DE0; } // 80112DC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112DCC
  c->r[4]=0u+0x00000001u; // 80112DD0
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112DD4
  c->ctr=c->r[12]; // 80112DD8
  if (true) { c->lr=0x80112DE0u; dispatch(c,c->ctr); } // 80112DDC
L_80112DE0:;
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80112DE0
  c->r[0]=0u+0x00000000u; // 80112DE4
  W32(c->r[13]+0xFFFFE1B8u,c->r[0]); // 80112DE8
  W8(c->r[3]+0x00000011u,c->r[0]); // 80112DEC
  c->r[3]=R32(c->r[13]+0xFFFFE1D8u); // 80112DF0
  cmps(c,0,(int32_t)c->r[3],0); // 80112DF4
  if (crb(c,2)) { goto L_80112E10; } // 80112DF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80112DFC
  c->r[4]=0u+0x00000001u; // 80112E00
  c->r[12]=R32(c->r[12]+0x00000008u); // 80112E04
  c->ctr=c->r[12]; // 80112E08
  if (true) { c->lr=0x80112E10u; dispatch(c,c->ctr); } // 80112E0C
L_80112E10:;
  c->r[31]=0u+0x00000000u; // 80112E10
  W32(c->r[13]+0xFFFFE1D8u,c->r[31]); // 80112E14
  c->r[3]=R32(c->r[13]+0xFFFFE27Cu); // 80112E18
  c->lr=0x80112E20u; f_8022A2E0(c); // 80112E1C
  W32(c->r[13]+0xFFFFE27Cu,c->r[31]); // 80112E20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80112E24
  c->r[30]=R32(c->r[1]+0x00000018u); // 80112E28
  c->r[29]=R32(c->r[1]+0x00000014u); // 80112E2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80112E30
  c->lr=c->r[0]; // 80112E34
  c->r[1]=c->r[1]+0x00000020u; // 80112E38
  return; // 80112E3C
}

// fn_80112E40
void f_80112E40(Ctx* __restrict c) {
  trace_call(0x80112E40u);
  return; // 80112E40
}

// fn_80112E44
void f_80112E44(Ctx* __restrict c) {
  trace_call(0x80112E44u);
  {uint32_t ea=c->r[1]+0xFFFFF7B0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80112E44
  c->r[0]=c->lr; // 80112E48
  W32(c->r[1]+0x00000854u,c->r[0]); // 80112E4C
  W32(c->r[1]+0x0000084Cu,c->r[31]); // 80112E50
  W32(c->r[1]+0x00000848u,c->r[30]); // 80112E54
  c->r[30]=0u+0x80420000u; // 80112E58
  c->r[30]=c->r[30]+0x00002638u; // 80112E5C
  W32(c->r[1]+0x00000844u,c->r[29]); // 80112E60
  W32(c->r[1]+0x00000840u,c->r[28]); // 80112E64
  c->r[28]=c->r[3]|c->r[3]; // 80112E68
  c->lr=0x80112E70u; f_8010F6A4(c); // 80112E6C
  c->r[0]=R32(c->r[28]+0x000000A0u); // 80112E70
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 80112E74
  if (!crb(c,2)) { goto L_80112ED4; } // 80112E78
  c->r[31]=0u+0x163A0000u; // 80112E7C
  c->r[3]=c->r[31]+0x00006383u; // 80112E80
  c->lr=0x80112E88u; f_802455C0(c); // 80112E84
  c->r[9]=c->r[3]|c->r[3]; // 80112E88
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 80112E8C
  c->r[6]=c->r[30]+0x00000058u; // 80112E90
  c->r[4]=0u+0x00000005u; // 80112E94
  c->r[5]=0u+0x00002710u; // 80112E98
  c->r[7]=0u+0x00000000u; // 80112E9C
  c->r[8]=0u+0x00000000u; // 80112EA0
  c->lr=0x80112EA8u; f_8027FE10(c); // 80112EA4
  c->r[3]=c->r[31]+0x00006383u; // 80112EA8
  c->lr=0x80112EB0u; f_802455C0(c); // 80112EAC
  c->r[9]=c->r[3]|c->r[3]; // 80112EB0
  c->r[4]=0u+0x000B0000u; // 80112EB4
  c->r[5]=c->r[4]+0xFFFFFC80u; // 80112EB8
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 80112EBC
  c->r[6]=c->r[30]+0x00000068u; // 80112EC0
  c->r[4]=0u+0x00000001u; // 80112EC4
  c->r[7]=0u+0x00000000u; // 80112EC8
  c->r[8]=0u+0x00000000u; // 80112ECC
  c->lr=0x80112ED4u; f_8027FE10(c); // 80112ED0
L_80112ED4:;
  c->r[3]=c->r[28]|c->r[28]; // 80112ED4
  c->r[4]=c->r[30]+0x00000074u; // 80112ED8
  c->r[5]=0u+0x00000000u; // 80112EDC
  c->r[6]=0u+0x00000000u; // 80112EE0
  c->lr=0x80112EE8u; f_802BA98C(c); // 80112EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80112EE8
  if (!crb(c,2)) { goto L_80112F60; } // 80112EEC
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80112EF0
  c->r[4]=c->r[30]+0x00000088u; // 80112EF4
  {uint32_t ea=c->r[2]+0xFFFF890Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80112EF8
  c->r[5]=0u+0x000000FFu; // 80112EFC
  {uint32_t ea=c->r[2]+0xFFFF8910u; c->f[2]=c->ps1[2]=RF32(ea);} // 80112F00
  c->r[3]=c->r[3]+0x00000008u; // 80112F04
  {uint32_t ea=c->r[2]+0xFFFF8914u; c->f[3]=c->ps1[3]=RF32(ea);} // 80112F08
  c->r[6]=0u+0x00000000u; // 80112F0C
  c->r[7]=0u+0x00000000u; // 80112F10
  c->r[8]=0u+0x000000FFu; // 80112F14
  c->r[9]=0u+0x00000000u; // 80112F18
  c->lr=0x80112F20u; f_80034498(c); // 80112F1C
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80112F20
  c->r[4]=c->r[30]+0x000000C4u; // 80112F24
  {uint32_t ea=c->r[2]+0xFFFF890Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80112F28
  c->r[5]=0u+0x000000FFu; // 80112F2C
  {uint32_t ea=c->r[2]+0xFFFF8918u; c->f[2]=c->ps1[2]=RF32(ea);} // 80112F30
  c->r[3]=c->r[3]+0x00000008u; // 80112F34
  {uint32_t ea=c->r[2]+0xFFFF891Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80112F38
  c->r[6]=0u+0x00000000u; // 80112F3C
  c->r[7]=0u+0x00000000u; // 80112F40
  c->r[8]=0u+0x000000FFu; // 80112F44
  c->r[9]=0u+0x00000000u; // 80112F48
  c->lr=0x80112F50u; f_80034498(c); // 80112F4C
  c->r[3]=c->r[30]+0x000000D4u; // 80112F50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80112F54
  c->lr=0x80112F5Cu; f_8010DD08(c); // 80112F58
  goto L_801132BC; // 80112F5C
L_80112F60:;
  c->r[29]=R32(c->r[3]+0x0000004Cu); // 80112F60
  cmps(c,0,(int32_t)c->r[29],0); // 80112F64
  if (!crb(c,2)) { goto L_80112FDC; } // 80112F68
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80112F6C
  c->r[4]=c->r[30]+0x00000110u; // 80112F70
  {uint32_t ea=c->r[2]+0xFFFF890Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80112F74
  c->r[5]=0u+0x000000FFu; // 80112F78
  {uint32_t ea=c->r[2]+0xFFFF8910u; c->f[2]=c->ps1[2]=RF32(ea);} // 80112F7C
  c->r[3]=c->r[3]+0x00000008u; // 80112F80
  {uint32_t ea=c->r[2]+0xFFFF8914u; c->f[3]=c->ps1[3]=RF32(ea);} // 80112F84
  c->r[6]=0u+0x00000000u; // 80112F88
  c->r[7]=0u+0x00000000u; // 80112F8C
  c->r[8]=0u+0x000000FFu; // 80112F90
  c->r[9]=0u+0x00000000u; // 80112F94
  c->lr=0x80112F9Cu; f_80034498(c); // 80112F98
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80112F9C
  c->r[4]=c->r[30]+0x0000013Cu; // 80112FA0
  {uint32_t ea=c->r[2]+0xFFFF890Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80112FA4
  c->r[5]=0u+0x000000FFu; // 80112FA8
  {uint32_t ea=c->r[2]+0xFFFF8918u; c->f[2]=c->ps1[2]=RF32(ea);} // 80112FAC
  c->r[3]=c->r[3]+0x00000008u; // 80112FB0
  {uint32_t ea=c->r[2]+0xFFFF891Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80112FB4
  c->r[6]=0u+0x00000000u; // 80112FB8
  c->r[7]=0u+0x00000000u; // 80112FBC
  c->r[8]=0u+0x000000FFu; // 80112FC0
  c->r[9]=0u+0x00000000u; // 80112FC4
  c->lr=0x80112FCCu; f_80034498(c); // 80112FC8
  c->r[3]=c->r[30]+0x0000014Cu; // 80112FCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80112FD0
  c->lr=0x80112FD8u; f_8010DD08(c); // 80112FD4
  goto L_801132BC; // 80112FD8
L_80112FDC:;
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 80112FDC
  c->lr=0x80112FE4u; f_8002E514(c); // 80112FE0
  c->r[31]=R32(c->r[13]+0xFFFFE134u); // 80112FE4
  W32(c->r[31]+0x00000078u,c->r[29]); // 80112FE8
  c->r[0]=R32(c->r[28]+0x000000ACu); // 80112FEC
  W32(c->r[31]+0x00000074u,c->r[0]); // 80112FF0
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80112FF4
  c->r[0]=R32(c->r[28]+0x00000078u); // 80112FF8
  W32(c->r[3]+0x000000F8u,c->r[0]); // 80112FFC
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80113000
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80113004
  cmps(c,0,(int32_t)c->r[0],0); // 80113008
  if (crb(c,2)) { goto L_8011302C; } // 8011300C
  cmps(c,0,(int32_t)c->r[0],1); // 80113010
  if (crb(c,2)) { goto L_80113078; } // 80113014
  cmps(c,0,(int32_t)c->r[0],2); // 80113018
  if (crb(c,2)) { goto L_801130C4; } // 8011301C
  cmps(c,0,(int32_t)c->r[0],3); // 80113020
  if (crb(c,2)) { goto L_80113110; } // 80113024
  goto L_80113158; // 80113028
L_8011302C:;
  c->r[3]=c->r[29]+0x00000110u; // 8011302C
  c->lr=0x80113034u; f_803ADAA8(c); // 80113030
  cmps(c,0,(int32_t)c->r[3],0); // 80113034
  if (crb(c,2)) { goto L_80113158; } // 80113038
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 8011303C
  c->r[3]=c->r[1]+0x0000062Cu; // 80113040
  c->r[5]=c->r[29]+0x00000110u; // 80113044
  c->r[4]=0u+0x00000004u; // 80113048
  c->lr=0x80113050u; f_8010E674(c); // 8011304C
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80113050
  c->r[4]=c->r[1]+0x0000062Cu; // 80113054
  c->lr=0x8011305Cu; f_80110C20(c); // 80113058
  c->r[4]=c->r[3]|c->r[3]; // 8011305C
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80113060
  c->lr=0x80113068u; f_80110DE4(c); // 80113064
  c->r[3]=c->r[1]+0x0000062Cu; // 80113068
  c->r[4]=0u+0xFFFFFFFFu; // 8011306C
  c->lr=0x80113074u; f_8010E6E0(c); // 80113070
  goto L_80113158; // 80113074
L_80113078:;
  c->r[3]=c->r[29]+0x00000130u; // 80113078
  c->lr=0x80113080u; f_803ADAA8(c); // 8011307C
  cmps(c,0,(int32_t)c->r[3],0); // 80113080
  if (crb(c,2)) { goto L_80113158; } // 80113084
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 80113088
  c->r[3]=c->r[1]+0x00000420u; // 8011308C
  c->r[5]=c->r[29]+0x00000130u; // 80113090
  c->r[4]=0u+0x00000004u; // 80113094
  c->lr=0x8011309Cu; f_8010E674(c); // 80113098
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 8011309C
  c->r[4]=c->r[1]+0x00000420u; // 801130A0
  c->lr=0x801130A8u; f_80110C20(c); // 801130A4
  c->r[4]=c->r[3]|c->r[3]; // 801130A8
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801130AC
  c->lr=0x801130B4u; f_80110DE4(c); // 801130B0
  c->r[3]=c->r[1]+0x00000420u; // 801130B4
  c->r[4]=0u+0xFFFFFFFFu; // 801130B8
  c->lr=0x801130C0u; f_8010E6E0(c); // 801130BC
  goto L_80113158; // 801130C0
L_801130C4:;
  c->r[3]=c->r[29]+0x00000150u; // 801130C4
  c->lr=0x801130CCu; f_803ADAA8(c); // 801130C8
  cmps(c,0,(int32_t)c->r[3],0); // 801130CC
  if (crb(c,2)) { goto L_80113158; } // 801130D0
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 801130D4
  c->r[3]=c->r[1]+0x00000214u; // 801130D8
  c->r[5]=c->r[29]+0x00000150u; // 801130DC
  c->r[4]=0u+0x00000004u; // 801130E0
  c->lr=0x801130E8u; f_8010E674(c); // 801130E4
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801130E8
  c->r[4]=c->r[1]+0x00000214u; // 801130EC
  c->lr=0x801130F4u; f_80110C20(c); // 801130F0
  c->r[4]=c->r[3]|c->r[3]; // 801130F4
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801130F8
  c->lr=0x80113100u; f_80110DE4(c); // 801130FC
  c->r[3]=c->r[1]+0x00000214u; // 80113100
  c->r[4]=0u+0xFFFFFFFFu; // 80113104
  c->lr=0x8011310Cu; f_8010E6E0(c); // 80113108
  goto L_80113158; // 8011310C
L_80113110:;
  c->r[3]=c->r[29]+0x00000170u; // 80113110
  c->lr=0x80113118u; f_803ADAA8(c); // 80113114
  cmps(c,0,(int32_t)c->r[3],0); // 80113118
  if (crb(c,2)) { goto L_80113158; } // 8011311C
  c->r[6]=R32(c->r[13]+0xFFFFBCECu); // 80113120
  c->r[3]=c->r[1]+0x00000008u; // 80113124
  c->r[5]=c->r[29]+0x00000170u; // 80113128
  c->r[4]=0u+0x00000004u; // 8011312C
  c->lr=0x80113134u; f_8010E674(c); // 80113130
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80113134
  c->r[4]=c->r[1]+0x00000008u; // 80113138
  c->lr=0x80113140u; f_80110C20(c); // 8011313C
  c->r[4]=c->r[3]|c->r[3]; // 80113140
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80113144
  c->lr=0x8011314Cu; f_80110DE4(c); // 80113148
  c->r[3]=c->r[1]+0x00000008u; // 8011314C
  c->r[4]=0u+0xFFFFFFFFu; // 80113150
  c->lr=0x80113158u; f_8010E6E0(c); // 80113154
L_80113158:;
  c->r[3]=c->r[31]|c->r[31]; // 80113158
  c->lr=0x80113160u; f_8010DFA0(c); // 8011315C
  c->r[3]=c->r[28]|c->r[28]; // 80113160
  c->r[4]=c->r[30]+0x00000198u; // 80113164
  c->r[5]=0u+0x00000000u; // 80113168
  c->r[6]=0u+0x00000000u; // 8011316C
  c->lr=0x80113174u; f_802BA98C(c); // 80113170
  cmps(c,0,(int32_t)c->r[3],0); // 80113174
  if (!crb(c,2)) { goto L_8011318C; } // 80113178
  c->r[3]=c->r[30]+0x000001B0u; // 8011317C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80113180
  c->lr=0x80113188u; f_8010DD08(c); // 80113184
  goto L_801131B0; // 80113188
L_8011318C:;
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8011318C
  cmps(c,0,(int32_t)c->r[4],0); // 80113190
  if (!crb(c,2)) { goto L_801131A8; } // 80113194
  c->r[3]=c->r[30]+0x000001F0u; // 80113198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8011319C
  c->lr=0x801131A4u; f_8010DD08(c); // 801131A0
  goto L_801131B0; // 801131A4
L_801131A8:;
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 801131A8
  c->lr=0x801131B0u; f_80035A18(c); // 801131AC
L_801131B0:;
  c->r[3]=R32(c->r[29]+0x00000100u); // 801131B0
  cmps(c,0,(int32_t)c->r[3],0); // 801131B4
  if (crb(c,2)) { goto L_801131C0; } // 801131B8
  goto L_801131EC; // 801131BC
L_801131C0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801131C0
  cmps(c,0,(int32_t)c->r[3],0); // 801131C4
  if (crb(c,2)) { goto L_801131E8; } // 801131C8
  c->r[4]=R32(c->r[29]+0x000000F8u); // 801131CC
  c->r[5]=0u+0x00000000u; // 801131D0
  c->r[8]=R32(c->r[29]+0x000000FCu); // 801131D4
  c->r[6]=0u+0x00000000u; // 801131D8
  c->r[7]=0u+0x00000000u; // 801131DC
  c->lr=0x801131E4u; f_802BA9F4(c); // 801131E0
  goto L_801131EC; // 801131E4
L_801131E8:;
  c->r[3]=0u+0x00000000u; // 801131E8
L_801131EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801131EC
  if (crb(c,2)) { goto L_80113238; } // 801131F0
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 801131F4
  cmps(c,0,(int32_t)c->r[4],0); // 801131F8
  if (crb(c,2)) { goto L_80113228; } // 801131FC
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 80113200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80113204
  if (crb(c,2)) { goto L_80113244; } // 80113208
  c->r[3]=c->r[28]+0x00000E05u; // 8011320C
  c->r[4]=c->r[4]+0x0000001Cu; // 80113210
  c->lr=0x80113218u; f_803A6F10(c); // 80113214
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113218
  c->r[4]=c->r[28]+0x00000E05u; // 8011321C
  c->lr=0x80113224u; f_8002477C(c); // 80113220
  goto L_80113244; // 80113224
L_80113228:;
  c->r[3]=c->r[30]+0x00000240u; // 80113228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8011322C
  c->lr=0x80113234u; f_8010DD08(c); // 80113230
  goto L_80113244; // 80113234
L_80113238:;
  c->r[3]=c->r[30]+0x00000288u; // 80113238
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8011323C
  c->lr=0x80113244u; f_8010DD08(c); // 80113240
L_80113244:;
  c->r[3]=R32(c->r[28]+0x000000ACu); // 80113244
  c->r[4]=R32(c->r[3]+0x000001C8u); // 80113248
  cmps(c,0,(int32_t)c->r[4],0); // 8011324C
  if (crb(c,2)) { goto L_80113258; } // 80113250
  c->r[4]=c->r[4]+0x00000028u; // 80113254
L_80113258:;
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 80113258
  c->lr=0x80113260u; f_80037480(c); // 8011325C
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80113260
  cmps(c,0,(int32_t)c->r[3],0); // 80113264
  if (crb(c,2)) { goto L_80113270; } // 80113268
  c->lr=0x80113270u; f_801196C0(c); // 8011326C
L_80113270:;
  c->r[0]=R32(c->r[13]+0xFFFFE1C0u); // 80113270
  cmps(c,0,(int32_t)c->r[0],0); // 80113274
  if (crb(c,2)) { goto L_80113290; } // 80113278
  c->lr=0x80113280u; f_8015C4D8(c); // 8011327C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80113280
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80113284
  c->ctr=c->r[12]; // 80113288
  if (true) { c->lr=0x80113290u; dispatch(c,c->ctr); } // 8011328C
L_80113290:;
  c->r[0]=R32(c->r[13]+0xFFFFE1BCu); // 80113290
  cmps(c,0,(int32_t)c->r[0],0); // 80113294
  if (crb(c,2)) { goto L_801132B0; } // 80113298
  c->lr=0x801132A0u; f_8016153C(c); // 8011329C
  c->r[12]=R32(c->r[3]+0x00000040u); // 801132A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801132A4
  c->ctr=c->r[12]; // 801132A8
  if (true) { c->lr=0x801132B0u; dispatch(c,c->ctr); } // 801132AC
L_801132B0:;
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 801132B0
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[0]=c->ps1[0]=RF32(ea);} // 801132B4
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 801132B8
L_801132BC:;
  c->r[0]=R32(c->r[1]+0x00000854u); // 801132BC
  c->r[31]=R32(c->r[1]+0x0000084Cu); // 801132C0
  c->r[30]=R32(c->r[1]+0x00000848u); // 801132C4
  c->r[29]=R32(c->r[1]+0x00000844u); // 801132C8
  c->r[28]=R32(c->r[1]+0x00000840u); // 801132CC
  c->lr=c->r[0]; // 801132D0
  c->r[1]=c->r[1]+0x00000850u; // 801132D4
  return; // 801132D8
}

// fn_801132DC
void f_801132DC(Ctx* __restrict c) {
  trace_call(0x801132DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801132DC
  c->r[0]=c->lr; // 801132E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801132E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801132E8
  c->r[31]=c->r[3]|c->r[3]; // 801132EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801132F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801132F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801132F8
  c->r[0]=R8(c->r[3]+0x000008A4u); // 801132FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80113300
  if (crb(c,2)) { goto L_80113320; } // 80113304
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 80113308
  c->r[4]=c->r[31]+0x000008A4u; // 8011330C
  c->r[5]=0u+0x0C000000u; // 80113310
  c->lr=0x80113318u; f_8027FAE8(c); // 80113314
  cmps(c,0,(int32_t)c->r[3],0); // 80113318
  if (crb(c,2)) { goto L_80113444; } // 8011331C
L_80113320:;
  c->r[28]=0u+0x00000000u; // 80113320
  c->r[30]=0u+0x00000000u; // 80113324
  goto L_80113368; // 80113328
L_8011332C:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 8011332C
  c->r[4]=R32(c->r[3]+c->r[30]); // 80113330
  cmps(c,0,(int32_t)c->r[4],0); // 80113334
  if (crb(c,2)) { goto L_80113360; } // 80113338
  c->r[0]=R32(c->r[4]+0x00000120u); // 8011333C
  c->r[0]=rotl(c->r[0],9)&0x00000001u; cr0(c,c->r[0]); // 80113340
  if (crb(c,2)) { goto L_80113360; } // 80113344
  c->r[3]=R32(c->r[13]+0xFFFFE82Cu); // 80113348
  c->r[4]=c->r[4]+0x00000064u; // 8011334C
  c->r[5]=0u+0x0C000000u; // 80113350
  c->lr=0x80113358u; f_8027FAE8(c); // 80113354
  cmps(c,0,(int32_t)c->r[3],0); // 80113358
  if (crb(c,2)) { goto L_80113444; } // 8011335C
L_80113360:;
  c->r[30]=c->r[30]+0x00000004u; // 80113360
  c->r[28]=c->r[28]+0x00000001u; // 80113364
L_80113368:;
  c->r[0]=R32(c->r[31]+0x000000A4u); // 80113368
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8011336C
  if (crb(c,0)) { IRQCHK(c); goto L_8011332C; } // 80113370
  c->lr=0x80113378u; f_8000ED2C(c); // 80113374
  cmps(c,0,(int32_t)c->r[3],0); // 80113378
  if (crb(c,2)) { goto L_80113444; } // 8011337C
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80113380
  c->r[3]=c->r[31]|c->r[31]; // 80113384
  c->r[12]=R32(c->r[12]+0x000000ECu); // 80113388
  c->ctr=c->r[12]; // 8011338C
  if (true) { c->lr=0x80113394u; dispatch(c,c->ctr); } // 80113390
  c->r[29]=0u+0x00000000u; // 80113394
  c->r[30]=0u+0x00000000u; // 80113398
  goto L_801133DC; // 8011339C
L_801133A0:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 801133A0
  c->r[28]=R32(c->r[3]+c->r[30]); // 801133A4
  cmps(c,0,(int32_t)c->r[28],0); // 801133A8
  if (crb(c,2)) { goto L_801133D4; } // 801133AC
  c->r[12]=R32(c->r[28]+0x00000010u); // 801133B0
  c->r[3]=c->r[28]|c->r[28]; // 801133B4
  c->r[12]=R32(c->r[12]+0x00000038u); // 801133B8
  c->ctr=c->r[12]; // 801133BC
  if (true) { c->lr=0x801133C4u; dispatch(c,c->ctr); } // 801133C0
  c->r[3]=R32(c->r[28]+0x00000114u); // 801133C4
  cmps(c,0,(int32_t)c->r[3],0); // 801133C8
  if (crb(c,2)) { goto L_801133D4; } // 801133CC
  c->lr=0x801133D4u; f_802D6EF4(c); // 801133D0
L_801133D4:;
  c->r[30]=c->r[30]+0x00000004u; // 801133D4
  c->r[29]=c->r[29]+0x00000001u; // 801133D8
L_801133DC:;
  c->r[0]=R32(c->r[31]+0x000000A4u); // 801133DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801133E0
  if (crb(c,0)) { IRQCHK(c); goto L_801133A0; } // 801133E4
  c->r[28]=0u+0x00000000u; // 801133E8
  c->r[30]=0u+0x00000000u; // 801133EC
  goto L_80113414; // 801133F0
L_801133F4:;
  c->r[0]=R32(c->r[13]+0xFFFFE134u); // 801133F4
  c->r[3]=c->r[0]+c->r[30]; // 801133F8
  c->r[3]=R32(c->r[3]+0x00000030u); // 801133FC
  cmps(c,0,(int32_t)c->r[3],0); // 80113400
  if (crb(c,2)) { goto L_8011340C; } // 80113404
  c->lr=0x8011340Cu; f_8012F82C(c); // 80113408
L_8011340C:;
  c->r[28]=c->r[28]+0x00000001u; // 8011340C
  c->r[30]=c->r[30]+0x00000004u; // 80113410
L_80113414:;
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113414
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80113418
  cmpu(c,0,c->r[28],c->r[0]); // 8011341C
  if (crb(c,0)) { IRQCHK(c); goto L_801133F4; } // 80113420
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 80113424
  cmps(c,0,(int32_t)c->r[0],0); // 80113428
  if (!crb(c,2)) { goto L_8011343C; } // 8011342C
  c->r[0]=0u+0x00000004u; // 80113430
  W32(c->r[31]+0x00000098u,c->r[0]); // 80113434
  goto L_80113444; // 80113438
L_8011343C:;
  c->r[0]=0u+0x00000002u; // 8011343C
  W32(c->r[31]+0x00000098u,c->r[0]); // 80113440
L_80113444:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80113444
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80113448
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011344C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80113450
  c->r[28]=R32(c->r[1]+0x00000010u); // 80113454
  c->lr=c->r[0]; // 80113458
  c->r[1]=c->r[1]+0x00000020u; // 8011345C
  return; // 80113460
}

// fn_80113464
void f_80113464(Ctx* __restrict c) {
  trace_call(0x80113464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113464
  c->r[0]=c->lr; // 80113468
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011346C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80113470
  W32(c->r[1]+0x00000018u,c->r[30]); // 80113474
  W32(c->r[1]+0x00000014u,c->r[29]); // 80113478
  c->r[29]=c->r[4]|c->r[4]; // 8011347C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80113480
  c->r[28]=c->r[3]|c->r[3]; // 80113484
  c->r[0]=R32(c->r[4]+0x0000005Cu); // 80113488
  cmps(c,0,(int32_t)c->r[0],0); // 8011348C
  if (crb(c,2)) { goto L_801135AC; } // 80113490
  c->r[30]=0u+0x00000000u; // 80113494
  c->r[31]=0u+0x00000000u; // 80113498
  goto L_801135A0; // 8011349C
L_801134A0:;
  c->r[3]=R32(c->r[28]+0x000000A8u); // 801134A0
  c->r[3]=R32(c->r[3]+c->r[31]); // 801134A4
  c->r[0]=R32(c->r[3]+0x00000120u); // 801134A8
  c->r[0]=rotl(c->r[0],10)&0x00000001u; cr0(c,c->r[0]); // 801134AC
  if (crb(c,2)) { goto L_801134BC; } // 801134B0
  c->r[4]=0u+0x00000001u; // 801134B4
  goto L_80113588; // 801134B8
L_801134BC:;
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 801134BC
  c->r[5]=c->r[29]|c->r[29]; // 801134C0
  c->r[4]=0u+0x00000000u; // 801134C4
  c->ctr=c->r[0]; // 801134C8
  cmps(c,0,(int32_t)c->r[0],0); // 801134CC
  if (!crb(c,1)) { goto L_801134EC; } // 801134D0
L_801134D4:;
  c->r[0]=R32(c->r[5]+0x00000060u); // 801134D4
  cmpu(c,0,c->r[0],c->r[3]); // 801134D8
  if (!crb(c,2)) { goto L_801134E4; } // 801134DC
  c->r[4]=0u+0x00000001u; // 801134E0
L_801134E4:;
  c->r[5]=c->r[5]+0x00000004u; // 801134E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801134D4; } // 801134E8
L_801134EC:;
  c->r[0]=0u+0x00000004u; // 801134EC
  c->r[5]=c->r[28]|c->r[28]; // 801134F0
  c->r[6]=0u+0x00000000u; // 801134F4
  c->ctr=c->r[0]; // 801134F8
L_801134FC:;
  c->r[0]=R32(c->r[5]+0x00000D44u); // 801134FC
  cmpu(c,0,c->r[0],c->r[3]); // 80113500
  if (!crb(c,2)) { goto L_8011350C; } // 80113504
  c->r[4]=0u+0x00000001u; // 80113508
L_8011350C:;
  c->r[0]=R32(c->r[5]+0x00000D48u); // 8011350C
  cmpu(c,0,c->r[0],c->r[3]); // 80113510
  if (!crb(c,2)) { goto L_8011351C; } // 80113514
  c->r[4]=0u+0x00000001u; // 80113518
L_8011351C:;
  c->r[0]=R32(c->r[5]+0x00000D4Cu); // 8011351C
  cmpu(c,0,c->r[0],c->r[3]); // 80113520
  if (!crb(c,2)) { goto L_8011352C; } // 80113524
  c->r[4]=0u+0x00000001u; // 80113528
L_8011352C:;
  c->r[0]=R32(c->r[5]+0x00000D50u); // 8011352C
  cmpu(c,0,c->r[0],c->r[3]); // 80113530
  if (!crb(c,2)) { goto L_8011353C; } // 80113534
  c->r[4]=0u+0x00000001u; // 80113538
L_8011353C:;
  c->r[0]=R32(c->r[5]+0x00000D54u); // 8011353C
  cmpu(c,0,c->r[0],c->r[3]); // 80113540
  if (!crb(c,2)) { goto L_8011354C; } // 80113544
  c->r[4]=0u+0x00000001u; // 80113548
L_8011354C:;
  c->r[0]=R32(c->r[5]+0x00000D58u); // 8011354C
  cmpu(c,0,c->r[0],c->r[3]); // 80113550
  if (!crb(c,2)) { goto L_8011355C; } // 80113554
  c->r[4]=0u+0x00000001u; // 80113558
L_8011355C:;
  c->r[0]=R32(c->r[5]+0x00000D5Cu); // 8011355C
  cmpu(c,0,c->r[0],c->r[3]); // 80113560
  if (!crb(c,2)) { goto L_8011356C; } // 80113564
  c->r[4]=0u+0x00000001u; // 80113568
L_8011356C:;
  c->r[0]=R32(c->r[5]+0x00000D60u); // 8011356C
  cmpu(c,0,c->r[0],c->r[3]); // 80113570
  if (!crb(c,2)) { goto L_8011357C; } // 80113574
  c->r[4]=0u+0x00000001u; // 80113578
L_8011357C:;
  c->r[5]=c->r[5]+0x00000020u; // 8011357C
  c->r[6]=c->r[6]+0x00000007u; // 80113580
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801134FC; } // 80113584
L_80113588:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 80113588
  c->r[12]=R32(c->r[12]+0x00000058u); // 8011358C
  c->ctr=c->r[12]; // 80113590
  if (true) { c->lr=0x80113598u; dispatch(c,c->ctr); } // 80113594
  c->r[31]=c->r[31]+0x00000004u; // 80113598
  c->r[30]=c->r[30]+0x00000001u; // 8011359C
L_801135A0:;
  c->r[0]=R32(c->r[28]+0x000000A4u); // 801135A0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801135A4
  if (crb(c,0)) { IRQCHK(c); goto L_801134A0; } // 801135A8
L_801135AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801135AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801135B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801135B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801135B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801135BC
  c->lr=c->r[0]; // 801135C0
  c->r[1]=c->r[1]+0x00000020u; // 801135C4
  return; // 801135C8
}

// fn_801135CC
void f_801135CC(Ctx* __restrict c) {
  trace_call(0x801135CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801135CC
  c->r[0]=c->lr; // 801135D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801135D4
  c->r[11]=c->r[1]+0x00000020u; // 801135D8
  c->lr=0x801135E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801135DC
  c->r[0]=R8(c->r[3]+0x00000E04u); // 801135E0
  c->r[31]=c->r[3]|c->r[3]; // 801135E4
  cmps(c,0,(int32_t)c->r[0],0); // 801135E8
  if (!crb(c,2)) { goto L_801135FC; } // 801135EC
  c->r[0]=0u+0x00000001u; // 801135F0
  W8(c->r[3]+0x00000E04u,c->r[0]); // 801135F4
  c->lr=0x801135FCu; f_802185B0(c); // 801135F8
L_801135FC:;
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 801135FC
  c->r[0]=0u+0x00000001u; // 80113600
  W8(c->r[3]+0x00000011u,c->r[0]); // 80113604
  c->r[30]=R32(c->r[13]+0xFFFFE138u); // 80113608
  c->r[3]=c->r[30]|c->r[30]; // 8011360C
  c->lr=0x80113614u; f_8002E624(c); // 80113610
  c->r[3]=R32(c->r[30]+0x00000018u); // 80113614
  cmps(c,0,(int32_t)c->r[3],0); // 80113618
  if (crb(c,2)) { goto L_80113628; } // 8011361C
  c->r[4]=0u+0x00000000u; // 80113620
  c->lr=0x80113628u; f_8012E8E4(c); // 80113624
L_80113628:;
  c->r[3]=R32(c->r[13]+0xFFFFE238u); // 80113628
  cmps(c,0,(int32_t)c->r[3],0); // 8011362C
  if (crb(c,2)) { goto L_80113638; } // 80113630
  c->lr=0x80113638u; f_801546EC(c); // 80113634
L_80113638:;
  c->r[3]=c->r[31]|c->r[31]; // 80113638
  c->lr=0x80113640u; f_8010F2EC(c); // 8011363C
  c->r[28]=R32(c->r[13]+0xFFFFE134u); // 80113640
  c->r[3]=c->r[28]+0x00000018u; // 80113644
  c->lr=0x8011364Cu; f_801406C0(c); // 80113648
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 8011364C
  c->r[0]=R32(c->r[3]+0x000000F4u); // 80113650
  W32(c->r[28]+0x00000070u,c->r[0]); // 80113654
  c->r[3]=R32(c->r[13]+0xFFFFE150u); // 80113658
  c->lr=0x80113660u; f_8002F140(c); // 8011365C
  cmps(c,0,(int32_t)c->r[3],0); // 80113660
  if (!crb(c,2)) { goto L_80113710; } // 80113664
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 80113668
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011366C
  {uint32_t ea=c->r[3]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113670
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[1]=c->ps1[1]=RF32(ea);} // 80113674
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80113678
  {uint32_t ea=c->r[3]+0x00000154u; WF32(ea,c->f[0]);} // 8011367C
  {uint32_t ea=c->r[3]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113680
  fcmp(c,0,c->f[0],c->f[1]); // 80113684
  if (!crb(c,1)) { goto L_801136AC; } // 80113688
  c->r[0]=R8(c->r[3]+0x00000158u); // 8011368C
  cmps(c,0,(int32_t)c->r[0],0); // 80113690
  if (!crb(c,2)) { goto L_801136AC; } // 80113694
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80113698
  {uint32_t ea=c->r[3]+0x00000150u; WF32(ea,c->f[0]);} // 8011369C
  fcmp(c,0,c->f[0],c->f[1]); // 801136A0
  if (!crb(c,0)) { goto L_801136AC; } // 801136A4
  {uint32_t ea=c->r[3]+0x00000150u; WF32(ea,c->f[1]);} // 801136A8
L_801136AC:;
  c->r[30]=c->r[28]|c->r[28]; // 801136AC
  c->r[27]=0u+0x00000000u; // 801136B0
  c->r[29]=0u+0x00000000u; // 801136B4
L_801136B8:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 801136B8
  cmps(c,0,(int32_t)c->r[3],0); // 801136BC
  if (crb(c,2)) { goto L_801136FC; } // 801136C0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801136C4
  c->r[12]=R32(c->r[12]+0x00000134u); // 801136C8
  c->ctr=c->r[12]; // 801136CC
  if (true) { c->lr=0x801136D4u; dispatch(c,c->ctr); } // 801136D0
  cmps(c,0,(int32_t)c->r[3],0); // 801136D4
  if (crb(c,2)) { goto L_801136FC; } // 801136D8
  cmps(c,0,(int32_t)c->r[27],4); // 801136DC
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801136E0
  c->r[0]=R32(c->r[13]+0xFFFFE12Cu); // 801136E4
  if (!crb(c,0)) { goto L_801136FC; } // 801136E8
  c->r[3]=c->r[0]+c->r[29]; // 801136EC
  {uint32_t ea=c->r[3]+0x0000022Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801136F0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801136F4
  {uint32_t ea=c->r[3]+0x0000022Cu; WF32(ea,c->f[0]);} // 801136F8
L_801136FC:;
  c->r[27]=c->r[27]+0x00000001u; // 801136FC
  c->r[29]=c->r[29]+0x000000D8u; // 80113700
  cmps(c,0,(int32_t)c->r[27],4); // 80113704
  c->r[30]=c->r[30]+0x00000004u; // 80113708
  if (crb(c,0)) { IRQCHK(c); goto L_801136B8; } // 8011370C
L_80113710:;
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 80113710
  c->lr=0x80113718u; f_8014E2F4(c); // 80113714
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113718
  c->lr=0x80113720u; f_800244E4(c); // 8011371C
  c->r[3]=c->r[28]+0x00000008u; // 80113720
  c->lr=0x80113728u; f_80034494(c); // 80113724
  c->r[3]=R32(c->r[13]+0xFFFFE150u); // 80113728
  c->lr=0x80113730u; f_8002E958(c); // 8011372C
  c->lr=0x80113734u; f_8012D870(c); // 80113730
  c->r[3]=R32(c->r[13]+0xFFFFE1D8u); // 80113734
  {uint32_t ea=c->r[2]+0xFFFF8920u; c->f[1]=c->ps1[1]=RF32(ea);} // 80113738
  cmps(c,0,(int32_t)c->r[3],0); // 8011373C
  if (crb(c,2)) { goto L_80113750; } // 80113740
  {uint32_t ea=c->r[2]+0xFFFF8924u; c->f[2]=c->ps1[2]=RF32(ea);} // 80113744
  c->r[4]=R8(c->r[13]+0xFFFFC178u); // 80113748
  c->lr=0x80113750u; f_80157B24(c); // 8011374C
L_80113750:;
  c->lr=0x80113754u; f_80347CC4(c); // 80113750
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 80113754
  c->r[4]=R32(c->r[3]+0x00000014u); // 80113758
  cmps(c,0,(int32_t)c->r[4],0); // 8011375C
  if (crb(c,2)) { goto L_80113774; } // 80113760
  c->r[5]=R32(c->r[13]+0xFFFFE140u); // 80113764
  c->r[3]=R32(c->r[13]+0xFFFFE148u); // 80113768
  c->r[5]=R32(c->r[5]+0x000000F8u); // 8011376C
  c->lr=0x80113774u; f_80123788(c); // 80113770
L_80113774:;
  c->r[4]=R32(c->r[13]+0xFFFFE134u); // 80113774
  c->r[3]=c->r[31]|c->r[31]; // 80113778
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8011377C
  c->lr=0x80113784u; f_8010F28C(c); // 80113780
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[7]=c->ps1[7]=RF32(ea);} // 80113784
  c->r[0]=0u+0x00000004u; // 80113788
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011378C
  c->r[6]=0u+0x00000000u; // 80113790
  c->f[3]=c->f[7]; // 80113794
  {uint32_t ea=c->r[2]+0xFFFF8928u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113798
  c->r[4]=0u+0x00000000u; // 8011379C
  c->r[5]=0u+0x00000001u; // 801137A0
  c->ctr=c->r[0]; // 801137A4
L_801137A8:;
  {uint32_t ea=c->r[31]+0x00000DD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801137A8
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801137AC
  fcmp(c,0,c->f[1],c->f[4]); // 801137B0
  if (!crb(c,1)) { goto L_801137FC; } // 801137B4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 801137B8
  {uint32_t ea=c->r[31]+0x00000DD0u; WF32(ea,c->f[2]);} // 801137BC
  {uint32_t ea=c->r[31]+0x00000DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801137C0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801137C4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[1]); // 801137C8
  c->f[5]=(c->f[2]>=0.0)?c->f[1]:c->f[3]; // 801137CC
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[4]); // 801137D0
  c->f[5]=(c->f[1]>=0.0)?c->f[5]:c->f[4]; // 801137D4
  fcmp(c,0,c->f[5],c->f[4]); // 801137D8
  if (!crb(c,1)) { goto L_801137FC; } // 801137DC
  c->f[6]=c->ps1[6]=S(c->f[3]-c->f[5]); // 801137E0
  {uint32_t ea=c->r[31]+0x00000DC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801137E4
  {uint32_t ea=c->r[31]+0x00000DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801137E8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 801137EC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 801137F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801137F4
  goto L_80113800; // 801137F8
L_801137FC:;
  {uint32_t ea=c->r[31]+0x00000DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801137FC
L_80113800:;
  cmpu(c,0,c->r[6],0x00000002u); // 80113800
  if (!crb(c,2)) { goto L_80113828; } // 80113804
  fcmp(c,0,c->f[1],c->f[0]); // 80113808
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8011380C
  if (!crb(c,2)) { goto L_80113820; } // 80113810
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113814
  W8(c->r[3]+0x0000007Cu,c->r[5]); // 80113818
  goto L_80113828; // 8011381C
L_80113820:;
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113820
  W8(c->r[3]+0x0000007Cu,c->r[4]); // 80113824
L_80113828:;
  fcmp(c,0,c->f[1],c->f[7]); // 80113828
  if (!crb(c,0)) { goto L_80113834; } // 8011382C
  c->f[7]=c->f[1]; // 80113830
L_80113834:;
  c->r[31]=c->r[31]+0x00000010u; // 80113834
  c->r[6]=c->r[6]+0x00000001u; // 80113838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801137A8; } // 8011383C
  {uint32_t ea=c->r[2]+0xFFFF8928u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113840
  fcmp(c,0,c->f[7],c->f[0]); // 80113844
  if (!crb(c,1)) { goto L_80113868; } // 80113848
  c->r[3]=R32(c->r[13]+0xFFFFE834u); // 8011384C
  c->r[0]=0u+0x00000000u; // 80113850
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113854
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80113858
  c->r[3]=R32(c->r[13]+0xFFFFE834u); // 8011385C
  W32(c->r[3]+0x00000054u,c->r[0]); // 80113860
  goto L_8011387C; // 80113864
L_80113868:;
  c->r[3]=R32(c->r[13]+0xFFFFE834u); // 80113868
  c->r[0]=0u+0x00000001u; // 8011386C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[7]);} // 80113870
  c->r[3]=R32(c->r[13]+0xFFFFE834u); // 80113874
  W32(c->r[3]+0x00000054u,c->r[0]); // 80113878
L_8011387C:;
  c->r[11]=c->r[1]+0x00000020u; // 8011387C
  c->lr=0x80113884u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80113880
  c->r[0]=R32(c->r[1]+0x00000024u); // 80113884
  c->lr=c->r[0]; // 80113888
  c->r[1]=c->r[1]+0x00000020u; // 8011388C
  return; // 80113890
}

// fn_80113894
void f_80113894(Ctx* __restrict c) {
  trace_call(0x80113894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113894
  c->r[0]=c->lr; // 80113898
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011389C
  c->lr=0x801138A4u; f_802B3284(c); // 801138A0
  c->r[3]=R32(c->r[13]+0xFFFFE100u); // 801138A4
  c->lr=0x801138ACu; f_8002C20C(c); // 801138A8
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 801138AC
  c->r[3]=R32(c->r[3]+0x00000070u); // 801138B0
  cmps(c,0,(int32_t)c->r[3],0); // 801138B4
  if (crb(c,2)) { goto L_8011394C; } // 801138B8
  c->r[5]=R32(c->r[13]+0xFFFFE1BCu); // 801138BC
  cmps(c,0,(int32_t)c->r[5],0); // 801138C0
  if (crb(c,2)) { goto L_8011394C; } // 801138C4
  c->r[4]=R32(c->r[3]+0x000000DCu); // 801138C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801138CC
  {uint32_t ea=c->r[5]+0x00002220u; WF32(ea,c->f[0]);} // 801138D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801138D4
  {uint32_t ea=c->r[5]+0x00002224u; WF32(ea,c->f[0]);} // 801138D8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801138DC
  {uint32_t ea=c->r[5]+0x00002228u; WF32(ea,c->f[0]);} // 801138E0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801138E4
  {uint32_t ea=c->r[5]+0x0000222Cu; WF32(ea,c->f[0]);} // 801138E8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801138EC
  {uint32_t ea=c->r[5]+0x00002230u; WF32(ea,c->f[0]);} // 801138F0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801138F4
  {uint32_t ea=c->r[5]+0x00002234u; WF32(ea,c->f[0]);} // 801138F8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801138FC
  {uint32_t ea=c->r[5]+0x00002238u; WF32(ea,c->f[0]);} // 80113900
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80113904
  {uint32_t ea=c->r[5]+0x0000223Cu; WF32(ea,c->f[0]);} // 80113908
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011390C
  {uint32_t ea=c->r[5]+0x00002240u; WF32(ea,c->f[0]);} // 80113910
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113914
  {uint32_t ea=c->r[5]+0x00002244u; WF32(ea,c->f[0]);} // 80113918
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011391C
  {uint32_t ea=c->r[5]+0x00002248u; WF32(ea,c->f[0]);} // 80113920
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80113924
  {uint32_t ea=c->r[5]+0x0000224Cu; WF32(ea,c->f[0]);} // 80113928
  c->r[0]=R32(c->r[4]+0x00000034u); // 8011392C
  c->r[3]=R32(c->r[5]+0x00002254u); // 80113930
  c->r[3]=(rotl(c->r[0],0)&0x80000000u)|(c->r[3]&~0x80000000u); // 80113934
  W32(c->r[5]+0x00002254u,c->r[3]); // 80113938
  c->r[0]=R32(c->r[4]+0x00000034u); // 8011393C
  c->r[3]=(rotl(c->r[0],0)&0x40000000u)|(c->r[3]&~0x40000000u); // 80113940
  c->r[0]=c->r[3]|0x00100000u; // 80113944
  W32(c->r[5]+0x00002254u,c->r[0]); // 80113948
L_8011394C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011394C
  c->lr=c->r[0]; // 80113950
  c->r[1]=c->r[1]+0x00000010u; // 80113954
  return; // 80113958
}

// fn_8011395C
void f_8011395C(Ctx* __restrict c) {
  trace_call(0x8011395Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011395C
  c->r[0]=c->lr; // 80113960
  c->r[4]=0u+0x80490000u; // 80113964
  W32(c->r[1]+0x00000014u,c->r[0]); // 80113968
  c->r[4]=c->r[4]+0xFFFFABE0u; // 8011396C
  c->r[4]=c->r[4]+0x00000470u; // 80113970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80113974
  c->r[31]=c->r[3]|c->r[3]; // 80113978
  c->r[3]=0u+0x00000055u; // 8011397C
  {uint32_t ea=c->r[13]+0xFFFFC170u; c->f[1]=c->ps1[1]=RF32(ea);} // 80113980
  c->lr=0x80113988u; f_80155CF8(c); // 80113984
  c->r[0]=0u+0x00000001u; // 80113988
  W8(c->r[13]+0xFFFFE278u,c->r[0]); // 8011398C
  c->r[3]=c->r[31]|c->r[31]; // 80113990
  c->lr=0x80113998u; f_8010F37C(c); // 80113994
  c->r[31]=R32(c->r[13]+0xFFFFE134u); // 80113998
  c->r[0]=R32(c->r[31]+0x00000010u); // 8011399C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801139A0
  if (crb(c,2)) { goto L_801139B0; } // 801139A4
  c->r[3]=c->r[31]+0x00000004u; // 801139A8
  c->lr=0x801139B0u; f_800344A0(c); // 801139AC
L_801139B0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801139B0
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 801139B4
  if (crb(c,2)) { goto L_801139C4; } // 801139B8
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 801139BC
  c->lr=0x801139C4u; f_8002E7B4(c); // 801139C0
L_801139C4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801139C4
  c->r[0]=rotl(c->r[0],0)&0x08000000u; cr0(c,c->r[0]); // 801139C8
  if (crb(c,2)) { goto L_801139DC; } // 801139CC
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 801139D0
  c->r[4]=0u+0x00000000u; // 801139D4
  c->lr=0x801139DCu; f_8002E7B8(c); // 801139D8
L_801139DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801139DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801139E0
  c->lr=c->r[0]; // 801139E4
  c->r[1]=c->r[1]+0x00000010u; // 801139E8
  return; // 801139EC
}

// fn_801139F0
void f_801139F0(Ctx* __restrict c) {
  trace_call(0x801139F0u);
  c->r[0]=0u+0x00000004u; // 801139F0
  c->r[5]=c->r[3]|c->r[3]; // 801139F4
  c->r[7]=0u+0x00000020u; // 801139F8
  c->r[6]=0u+0x00000000u; // 801139FC
  c->ctr=c->r[0]; // 80113A00
L_80113A04:;
  c->r[0]=R32(c->r[5]+0x00000D44u); // 80113A04
  cmpu(c,0,c->r[0],c->r[4]); // 80113A08
  if (crb(c,2)) return; // 80113A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80113A10
  if (!crb(c,2)) { goto L_80113A1C; } // 80113A14
  c->r[7]=c->r[6]|c->r[6]; // 80113A18
L_80113A1C:;
  c->r[0]=R32(c->r[5]+0x00000D48u); // 80113A1C
  c->r[6]=c->r[6]+0x00000001u; // 80113A20
  cmpu(c,0,c->r[0],c->r[4]); // 80113A24
  if (crb(c,2)) return; // 80113A28
  cmps(c,0,(int32_t)c->r[0],0); // 80113A2C
  if (!crb(c,2)) { goto L_80113A38; } // 80113A30
  c->r[7]=c->r[6]|c->r[6]; // 80113A34
L_80113A38:;
  c->r[0]=R32(c->r[5]+0x00000D4Cu); // 80113A38
  c->r[6]=c->r[6]+0x00000001u; // 80113A3C
  cmpu(c,0,c->r[0],c->r[4]); // 80113A40
  if (crb(c,2)) return; // 80113A44
  cmps(c,0,(int32_t)c->r[0],0); // 80113A48
  if (!crb(c,2)) { goto L_80113A54; } // 80113A4C
  c->r[7]=c->r[6]|c->r[6]; // 80113A50
L_80113A54:;
  c->r[0]=R32(c->r[5]+0x00000D50u); // 80113A54
  c->r[6]=c->r[6]+0x00000001u; // 80113A58
  cmpu(c,0,c->r[0],c->r[4]); // 80113A5C
  if (crb(c,2)) return; // 80113A60
  cmps(c,0,(int32_t)c->r[0],0); // 80113A64
  if (!crb(c,2)) { goto L_80113A70; } // 80113A68
  c->r[7]=c->r[6]|c->r[6]; // 80113A6C
L_80113A70:;
  c->r[0]=R32(c->r[5]+0x00000D54u); // 80113A70
  c->r[6]=c->r[6]+0x00000001u; // 80113A74
  cmpu(c,0,c->r[0],c->r[4]); // 80113A78
  if (crb(c,2)) return; // 80113A7C
  cmps(c,0,(int32_t)c->r[0],0); // 80113A80
  if (!crb(c,2)) { goto L_80113A8C; } // 80113A84
  c->r[7]=c->r[6]|c->r[6]; // 80113A88
L_80113A8C:;
  c->r[0]=R32(c->r[5]+0x00000D58u); // 80113A8C
  c->r[6]=c->r[6]+0x00000001u; // 80113A90
  cmpu(c,0,c->r[0],c->r[4]); // 80113A94
  if (crb(c,2)) return; // 80113A98
  cmps(c,0,(int32_t)c->r[0],0); // 80113A9C
  if (!crb(c,2)) { goto L_80113AA8; } // 80113AA0
  c->r[7]=c->r[6]|c->r[6]; // 80113AA4
L_80113AA8:;
  c->r[0]=R32(c->r[5]+0x00000D5Cu); // 80113AA8
  c->r[6]=c->r[6]+0x00000001u; // 80113AAC
  cmpu(c,0,c->r[0],c->r[4]); // 80113AB0
  if (crb(c,2)) return; // 80113AB4
  cmps(c,0,(int32_t)c->r[0],0); // 80113AB8
  if (!crb(c,2)) { goto L_80113AC4; } // 80113ABC
  c->r[7]=c->r[6]|c->r[6]; // 80113AC0
L_80113AC4:;
  c->r[0]=R32(c->r[5]+0x00000D60u); // 80113AC4
  c->r[6]=c->r[6]+0x00000001u; // 80113AC8
  cmpu(c,0,c->r[0],c->r[4]); // 80113ACC
  if (crb(c,2)) return; // 80113AD0
  cmps(c,0,(int32_t)c->r[0],0); // 80113AD4
  if (!crb(c,2)) { goto L_80113AE0; } // 80113AD8
  c->r[7]=c->r[6]|c->r[6]; // 80113ADC
L_80113AE0:;
  c->r[5]=c->r[5]+0x00000020u; // 80113AE0
  c->r[6]=c->r[6]+0x00000001u; // 80113AE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80113A04; } // 80113AE8
  cmpu(c,0,c->r[7],0x00000020u); // 80113AEC
  if (!crb(c,2)) { goto L_80113B08; } // 80113AF0
  c->r[3]=0u+0x80420000u; // 80113AF4
  c->r[3]=c->r[3]+0x00002928u; // 80113AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80113AFC
  c->r[4]=c->r[4]+0x00000064u; // 80113B00
  f_8010DD08(c); return; // 80113B04
L_80113B08:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80113B08
  c->r[3]=c->r[3]+c->r[0]; // 80113B0C
  W32(c->r[3]+0x00000D44u,c->r[4]); // 80113B10
  return; // 80113B14
}

// fn_80113B18
void f_80113B18(Ctx* __restrict c) {
  trace_call(0x80113B18u);
  c->r[0]=0u+0x00000020u; // 80113B18
  c->r[5]=c->r[3]|c->r[3]; // 80113B1C
  c->r[6]=0u+0x00000000u; // 80113B20
  c->ctr=c->r[0]; // 80113B24
L_80113B28:;
  c->r[0]=R32(c->r[5]+0x00000D44u); // 80113B28
  cmpu(c,0,c->r[0],c->r[4]); // 80113B2C
  if (!crb(c,2)) { goto L_80113B48; } // 80113B30
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80113B34
  c->r[5]=0u+0x00000000u; // 80113B38
  c->r[3]=c->r[3]+c->r[0]; // 80113B3C
  W32(c->r[3]+0x00000D44u,c->r[5]); // 80113B40
  goto L_80113B54; // 80113B44
L_80113B48:;
  c->r[5]=c->r[5]+0x00000004u; // 80113B48
  c->r[6]=c->r[6]+0x00000001u; // 80113B4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80113B28; } // 80113B50
L_80113B54:;
  cmpu(c,0,c->r[6],0x00000020u); // 80113B54
  if (!crb(c,2)) return; // 80113B58
  c->r[3]=0u+0x80420000u; // 80113B5C
  c->r[3]=c->r[3]+0x00002970u; // 80113B60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80113B64
  c->r[4]=c->r[4]+0x00000064u; // 80113B68
  f_8010DD08(c); return; // 80113B6C
  return; // 80113B70
}

// fn_80113B74
void f_80113B74(Ctx* __restrict c) {
  trace_call(0x80113B74u);
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113B74
  fcmp(c,0,c->f[2],c->f[0]); // 80113B78
  if (!crb(c,1)) { goto L_80113BA4; } // 80113B7C
  c->r[5]=R32(c->r[13]+0xFFFFE834u); // 80113B80
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 80113B84
  c->r[3]=c->r[3]+c->r[0]; // 80113B88
  {uint32_t ea=c->r[5]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80113B8C
  {uint32_t ea=c->r[3]+0x00000DC4u; WF32(ea,c->f[0]);} // 80113B90
  {uint32_t ea=c->r[3]+0x00000DC8u; WF32(ea,c->f[1]);} // 80113B94
  {uint32_t ea=c->r[3]+0x00000DCCu; WF32(ea,c->f[2]);} // 80113B98
  {uint32_t ea=c->r[3]+0x00000DD0u; WF32(ea,c->f[2]);} // 80113B9C
  return; // 80113BA0
L_80113BA4:;
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 80113BA4
  c->r[3]=c->r[3]+c->r[0]; // 80113BA8
  {uint32_t ea=c->r[3]+0x00000DC4u; WF32(ea,c->f[1]);} // 80113BAC
  {uint32_t ea=c->r[3]+0x00000DC8u; WF32(ea,c->f[1]);} // 80113BB0
  {uint32_t ea=c->r[3]+0x00000DCCu; WF32(ea,c->f[0]);} // 80113BB4
  {uint32_t ea=c->r[3]+0x00000DD0u; WF32(ea,c->f[0]);} // 80113BB8
  return; // 80113BBC
}

// fn_80113BC0
void f_80113BC0(Ctx* __restrict c) {
  trace_call(0x80113BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113BC0
  c->r[0]=c->lr; // 80113BC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80113BC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80113BCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80113BD0
  c->r[30]=c->r[5]|c->r[5]; // 80113BD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80113BD8
  c->r[29]=c->r[4]|c->r[4]; // 80113BDC
  c->lr=0x80113BE4u; f_8010FB0C(c); // 80113BE0
  c->r[0]=R32(c->r[13]+0xFFFFE1C8u); // 80113BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80113BE8
  if (crb(c,2)) { goto L_80113C68; } // 80113BEC
  cmps(c,0,(int32_t)c->r[29],1); // 80113BF0
  if (crb(c,2)) { goto L_80113C00; } // 80113BF4
  cmps(c,0,(int32_t)c->r[29],4); // 80113BF8
  if (!crb(c,2)) { goto L_80113C68; } // 80113BFC
L_80113C00:;
  c->r[31]=0u+0x00000000u; // 80113C00
  goto L_80113C4C; // 80113C04
L_80113C08:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80113C08
  c->r[0]=R32(c->r[3]+0x00000000u); // 80113C0C
  c->r[3]=R32(c->r[4]+0x000000E0u); // 80113C10
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80113C14
  c->r[0]=R32(c->r[3]+0x00000000u); // 80113C18
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80113C1C
  cmpu(c,0,c->r[4],c->r[0]); // 80113C20
  if (!crb(c,2)) { goto L_80113C4C; } // 80113C24
  cmps(c,0,(int32_t)c->r[29],1); // 80113C28
  if (!crb(c,2)) { goto L_80113C40; } // 80113C2C
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80113C30
  c->r[4]=c->r[31]|c->r[31]; // 80113C34
  c->lr=0x80113C3Cu; f_8011979C(c); // 80113C38
  goto L_80113C4C; // 80113C3C
L_80113C40:;
  c->r[3]=R32(c->r[13]+0xFFFFE1C8u); // 80113C40
  c->r[4]=c->r[31]|c->r[31]; // 80113C44
  c->lr=0x80113C4Cu; f_80119A44(c); // 80113C48
L_80113C4C:;
  c->r[4]=c->r[31]|c->r[31]; // 80113C4C
  c->r[5]=c->r[1]+0x00000008u; // 80113C50
  c->r[3]=0u+0x00000001u; // 80113C54
  c->lr=0x80113C5Cu; f_8024D6D0(c); // 80113C58
  cmps(c,0,(int32_t)c->r[3],0); // 80113C5C
  c->r[31]=c->r[3]|c->r[3]; // 80113C60
  if (!crb(c,2)) { IRQCHK(c); goto L_80113C08; } // 80113C64
L_80113C68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80113C68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80113C6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80113C70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80113C74
  c->lr=c->r[0]; // 80113C78
  c->r[1]=c->r[1]+0x00000020u; // 80113C7C
  return; // 80113C80
}

// fn_80113C84
void f_80113C84(Ctx* __restrict c) {
  trace_call(0x80113C84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113C84
  c->r[0]=c->lr; // 80113C88
  W32(c->r[1]+0x00000024u,c->r[0]); // 80113C8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80113C90
  W32(c->r[1]+0x00000018u,c->r[30]); // 80113C94
  W32(c->r[1]+0x00000014u,c->r[29]); // 80113C98
  c->lr=0x80113CA0u; f_8010FB10(c); // 80113C9C
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113CA0
  c->r[29]=0u+0x00000000u; // 80113CA4
  c->r[31]=0u+0x00000000u; // 80113CA8
  c->r[30]=R32(c->r[3]+0x0000002Cu); // 80113CAC
  goto L_80113CE0; // 80113CB0
L_80113CB4:;
  c->r[0]=R32(c->r[13]+0xFFFFE134u); // 80113CB4
  c->r[3]=c->r[0]+c->r[31]; // 80113CB8
  c->r[3]=R32(c->r[3]+0x00000030u); // 80113CBC
  cmps(c,0,(int32_t)c->r[3],0); // 80113CC0
  if (crb(c,2)) { goto L_80113CD8; } // 80113CC4
  c->r[3]=R32(c->r[3]+0x000001E4u); // 80113CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80113CCC
  if (crb(c,2)) { goto L_80113CD8; } // 80113CD0
  c->lr=0x80113CD8u; f_801583AC(c); // 80113CD4
L_80113CD8:;
  c->r[29]=c->r[29]+0x00000001u; // 80113CD8
  c->r[31]=c->r[31]+0x00000004u; // 80113CDC
L_80113CE0:;
  cmpu(c,0,c->r[29],c->r[30]); // 80113CE0
  if (crb(c,0)) { IRQCHK(c); goto L_80113CB4; } // 80113CE4
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113CE8
  c->r[3]=c->r[3]+0x00000018u; // 80113CEC
  c->lr=0x80113CF4u; f_8014079C(c); // 80113CF0
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113CF4
  c->lr=0x80113CFCu; f_80025364(c); // 80113CF8
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113CFC
  c->lr=0x80113D04u; f_800255E0(c); // 80113D00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80113D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80113D08
  c->r[30]=R32(c->r[1]+0x00000018u); // 80113D0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80113D10
  c->lr=c->r[0]; // 80113D14
  c->r[1]=c->r[1]+0x00000020u; // 80113D18
  return; // 80113D1C
}

// fn_80113D20
void f_80113D20(Ctx* __restrict c) {
  trace_call(0x80113D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113D20
  c->r[0]=c->lr; // 80113D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80113D28
  c->lr=0x80113D30u; f_8010FB14(c); // 80113D2C
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80113D30
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 80113D34
  c->lr=0x80113D3Cu; f_80114B2C(c); // 80113D38
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113D3C
  c->lr=0x80113D44u; f_800253B8(c); // 80113D40
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113D44
  c->lr=0x80113D4Cu; f_8002562C(c); // 80113D48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80113D4C
  c->lr=c->r[0]; // 80113D50
  c->r[1]=c->r[1]+0x00000010u; // 80113D54
  return; // 80113D58
}

// fn_80113D5C
void f_80113D5C(Ctx* __restrict c) {
  trace_call(0x80113D5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113D5C
  c->r[0]=c->lr; // 80113D60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80113D64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80113D68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80113D6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80113D70
  c->lr=0x80113D78u; f_8010FB20(c); // 80113D74
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80113D78
  c->r[0]=R8(c->r[3]+0x00000010u); // 80113D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80113D80
  if (!crb(c,2)) { goto L_80113DEC; } // 80113D84
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113D88
  c->r[29]=0u+0x00000000u; // 80113D8C
  c->r[31]=0u+0x00000000u; // 80113D90
  c->r[30]=R32(c->r[3]+0x0000002Cu); // 80113D94
  goto L_80113DC8; // 80113D98
L_80113D9C:;
  c->r[0]=R32(c->r[13]+0xFFFFE134u); // 80113D9C
  c->r[3]=c->r[0]+c->r[31]; // 80113DA0
  c->r[3]=R32(c->r[3]+0x00000030u); // 80113DA4
  cmps(c,0,(int32_t)c->r[3],0); // 80113DA8
  if (crb(c,2)) { goto L_80113DC0; } // 80113DAC
  c->r[3]=R32(c->r[3]+0x000001E4u); // 80113DB0
  cmps(c,0,(int32_t)c->r[3],0); // 80113DB4
  if (crb(c,2)) { goto L_80113DC0; } // 80113DB8
  c->lr=0x80113DC0u; f_801583AC(c); // 80113DBC
L_80113DC0:;
  c->r[29]=c->r[29]+0x00000001u; // 80113DC0
  c->r[31]=c->r[31]+0x00000004u; // 80113DC4
L_80113DC8:;
  cmpu(c,0,c->r[29],c->r[30]); // 80113DC8
  if (crb(c,0)) { IRQCHK(c); goto L_80113D9C; } // 80113DCC
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113DD0
  c->r[3]=c->r[3]+0x00000018u; // 80113DD4
  c->lr=0x80113DDCu; f_8014079C(c); // 80113DD8
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113DDC
  c->lr=0x80113DE4u; f_80025364(c); // 80113DE0
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113DE4
  c->lr=0x80113DECu; f_800255E0(c); // 80113DE8
L_80113DEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80113DEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80113DF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80113DF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80113DF8
  c->lr=c->r[0]; // 80113DFC
  c->r[1]=c->r[1]+0x00000020u; // 80113E00
  return; // 80113E04
}

// fn_80113E08
void f_80113E08(Ctx* __restrict c) {
  trace_call(0x80113E08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113E08
  c->r[0]=c->lr; // 80113E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80113E10
  c->lr=0x80113E18u; f_8010FB24(c); // 80113E14
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80113E18
  c->r[0]=R8(c->r[3]+0x00000010u); // 80113E1C
  cmps(c,0,(int32_t)c->r[0],0); // 80113E20
  if (!crb(c,2)) { goto L_80113E38; } // 80113E24
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113E28
  c->lr=0x80113E30u; f_800253B8(c); // 80113E2C
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113E30
  c->lr=0x80113E38u; f_8002562C(c); // 80113E34
L_80113E38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80113E38
  c->lr=c->r[0]; // 80113E3C
  c->r[1]=c->r[1]+0x00000010u; // 80113E40
  return; // 80113E44
}

// fn_80113E48
void f_80113E48(Ctx* __restrict c) {
  trace_call(0x80113E48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113E48
  c->r[0]=c->lr; // 80113E4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80113E50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80113E54
  W32(c->r[1]+0x00000018u,c->r[30]); // 80113E58
  W32(c->r[1]+0x00000014u,c->r[29]); // 80113E5C
  c->lr=0x80113E64u; f_8010FB18(c); // 80113E60
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113E64
  c->r[29]=0u+0x00000000u; // 80113E68
  c->r[31]=0u+0x00000000u; // 80113E6C
  c->r[30]=R32(c->r[3]+0x0000002Cu); // 80113E70
  goto L_80113EA4; // 80113E74
L_80113E78:;
  c->r[0]=R32(c->r[13]+0xFFFFE134u); // 80113E78
  c->r[3]=c->r[0]+c->r[31]; // 80113E7C
  c->r[3]=R32(c->r[3]+0x00000030u); // 80113E80
  cmps(c,0,(int32_t)c->r[3],0); // 80113E84
  if (crb(c,2)) { goto L_80113E9C; } // 80113E88
  c->r[3]=R32(c->r[3]+0x000001E4u); // 80113E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80113E90
  if (crb(c,2)) { goto L_80113E9C; } // 80113E94
  c->lr=0x80113E9Cu; f_801583AC(c); // 80113E98
L_80113E9C:;
  c->r[29]=c->r[29]+0x00000001u; // 80113E9C
  c->r[31]=c->r[31]+0x00000004u; // 80113EA0
L_80113EA4:;
  cmpu(c,0,c->r[29],c->r[30]); // 80113EA4
  if (crb(c,0)) { IRQCHK(c); goto L_80113E78; } // 80113EA8
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80113EAC
  c->r[3]=c->r[3]+0x00000018u; // 80113EB0
  c->lr=0x80113EB8u; f_8014079C(c); // 80113EB4
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113EB8
  c->lr=0x80113EC0u; f_800255E0(c); // 80113EBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80113EC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80113EC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80113EC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80113ECC
  c->lr=c->r[0]; // 80113ED0
  c->r[1]=c->r[1]+0x00000020u; // 80113ED4
  return; // 80113ED8
}

// fn_80113EDC
void f_80113EDC(Ctx* __restrict c) {
  trace_call(0x80113EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113EDC
  c->r[0]=c->lr; // 80113EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80113EE4
  c->lr=0x80113EECu; f_8010FB1C(c); // 80113EE8
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80113EEC
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 80113EF0
  c->lr=0x80113EF8u; f_80114B2C(c); // 80113EF4
  c->r[3]=R32(c->r[13]+0xFFFFE140u); // 80113EF8
  c->lr=0x80113F00u; f_8002562C(c); // 80113EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80113F00
  c->lr=c->r[0]; // 80113F04
  c->r[1]=c->r[1]+0x00000010u; // 80113F08
  return; // 80113F0C
}

// fn_80113F10
void f_80113F10(Ctx* __restrict c) {
  trace_call(0x80113F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80113F10
  c->r[0]=c->lr; // 80113F14
  W32(c->r[1]+0x00000064u,c->r[0]); // 80113F18
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80113F1C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80113F20
  c->r[11]=c->r[1]+0x00000050u; // 80113F24
  c->lr=0x80113F2Cu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80113F28
  c->r[4]=0u+0x80490000u; // 80113F2C
  c->r[25]=c->r[3]|c->r[3]; // 80113F30
  c->r[4]=c->r[4]+0xFFFFABE0u; // 80113F34
  {uint32_t ea=c->r[2]+0xFFFF8938u; c->f[1]=c->ps1[1]=RF32(ea);} // 80113F38
  c->r[4]=c->r[4]+0x00000470u; // 80113F3C
  c->r[3]=0u+0x00000055u; // 80113F40
  c->lr=0x80113F48u; f_80155CF8(c); // 80113F44
  c->r[22]=0u+0x00000000u; // 80113F48
  W8(c->r[13]+0xFFFFE278u,c->r[22]); // 80113F4C
  c->r[31]=0u+0xFFFFFFFFu; // 80113F50
  c->r[30]=0u+0x00000000u; // 80113F54
  c->r[3]=R32(c->r[25]+0x000000C4u); // 80113F58
  c->r[29]=0u+0xFFFFFF7Fu; // 80113F5C
  c->r[28]=0u+0x00000000u; // 80113F60
  c->r[27]=0u+0x00000000u; // 80113F64
  cmps(c,0,(int32_t)c->r[3],0); // 80113F68
  c->r[26]=0u+0x00000000u; // 80113F6C
  if (crb(c,2)) { goto L_80114518; } // 80113F70
  c->r[21]=R32(c->r[3]+0x0000000Cu); // 80113F74
  cmps(c,0,(int32_t)c->r[21],0); // 80113F78
  if (crb(c,2)) { goto L_80114164; } // 80113F7C
  {uint32_t ea=c->r[2]+0xFFFF893Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80113F80
  c->r[17]=0u+0x00000000u; // 80113F84
  c->r[18]=0u+0x00000000u; // 80113F88
  c->r[19]=0u+0x00000000u; // 80113F8C
  c->r[23]=0u+0x00010000u; // 80113F90
  c->r[24]=0u+0x80000000u; // 80113F94
  goto L_80114150; // 80113F98
L_80113F9C:;
  c->r[4]=R32(c->r[25]+0x000000C4u); // 80113F9C
  c->r[3]=0u+0x00000000u; // 80113FA0
  c->r[0]=R32(c->r[25]+0x000000CCu); // 80113FA4
  c->r[4]=R32(c->r[4]+0x00000000u); // 80113FA8
  c->r[5]=rotl(c->r[0],0)&0x00000007u; // 80113FAC
  c->r[6]=c->r[4]+c->r[19]; // 80113FB0
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80113FB4
  c->r[20]=R32(c->r[6]+0x00000008u); // 80113FB8
  c->r[0]=rotl(c->r[4],12)&0x00000008u; cr0(c,c->r[0]); // 80113FBC
  c->r[0]=rotl(c->r[4],12)&0x00000007u; // 80113FC0
  if (crb(c,2)) { goto L_80113FD4; } // 80113FC4
  cmpu(c,0,c->r[0],c->r[5]); // 80113FC8
  if (!crb(c,2)) { goto L_80113FD4; } // 80113FCC
  c->r[3]=0u+0x00000001u; // 80113FD0
L_80113FD4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80113FD4
  if (!crb(c,2)) { goto L_801140D0; } // 80113FD8
  cmps(c,0,(int32_t)c->r[20],0); // 80113FDC
  if (crb(c,2)) { goto L_8011408C; } // 80113FE0
  c->r[4]=rotl(c->r[4],16)&0x0000000Fu; cr0(c,c->r[4]); // 80113FE4
  if (crb(c,2)) { goto L_80114008; } // 80113FE8
  cmpu(c,0,c->r[4],0x00000001u); // 80113FEC
  if (crb(c,2)) { goto L_80114014; } // 80113FF0
  cmpu(c,0,c->r[4],0x00000002u); // 80113FF4
  if (crb(c,2)) { goto L_80114020; } // 80113FF8
  cmpu(c,0,c->r[4],0x00000003u); // 80113FFC
  if (crb(c,2)) { goto L_8011402C; } // 80114000
  goto L_80114034; // 80114004
L_80114008:;
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80114008
  W16(c->r[20]+0x000000BCu,c->r[0]); // 8011400C
  goto L_80114034; // 80114010
L_80114014:;
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80114014
  W16(c->r[20]+0x000000BEu,c->r[0]); // 80114018
  goto L_80114034; // 8011401C
L_80114020:;
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80114020
  W16(c->r[20]+0x000000C0u,c->r[0]); // 80114024
  goto L_80114034; // 80114028
L_8011402C:;
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 8011402C
  W16(c->r[20]+0x000000C2u,c->r[0]); // 80114030
L_80114034:;
  c->r[12]=R32(c->r[20]+0x000000B4u); // 80114034
  c->r[3]=c->r[20]|c->r[20]; // 80114038
  c->r[12]=R32(c->r[12]+0x000000D8u); // 8011403C
  c->ctr=c->r[12]; // 80114040
  if (true) { c->lr=0x80114048u; dispatch(c,c->ctr); } // 80114044
  c->r[0]=R16(c->r[20]+0x000000BCu); // 80114048
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8011404C
  if (!crb(c,2)) { goto L_8011408C; } // 80114050
  c->r[0]=R16(c->r[20]+0x000000BEu); // 80114054
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80114058
  if (!crb(c,2)) { goto L_8011408C; } // 8011405C
  c->r[0]=R16(c->r[20]+0x000000C0u); // 80114060
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80114064
  if (!crb(c,2)) { goto L_8011408C; } // 80114068
  c->r[0]=R16(c->r[20]+0x000000C2u); // 8011406C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80114070
  if (!crb(c,2)) { goto L_8011408C; } // 80114074
  c->r[3]=R32(c->r[20]+0x00000018u); // 80114078
  c->r[0]=rotl(c->r[3],7)&0x00000001u; cr0(c,c->r[0]); // 8011407C
  if (crb(c,2)) { goto L_8011408C; } // 80114080
  c->r[0]=rotl(c->r[3],0)&0xFEFFFFFFu; // 80114084
  W32(c->r[20]+0x00000018u,c->r[0]); // 80114088
L_8011408C:;
  c->r[3]=R32(c->r[25]+0x000000C4u); // 8011408C
  c->r[4]=c->r[24]+0xFFFFFFFFu; // 80114090
  c->r[0]=R32(c->r[3]+0x00000000u); // 80114094
  c->r[3]=c->r[0]+c->r[19]; // 80114098
  W32(c->r[3]+0x00000008u,c->r[22]); // 8011409C
  c->r[3]=R32(c->r[25]+0x000000C4u); // 801140A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801140A4
  c->r[3]=c->r[0]+c->r[19]; // 801140A8
  W32(c->r[3]+0x0000000Cu,c->r[22]); // 801140AC
  c->r[3]=R32(c->r[25]+0x000000C4u); // 801140B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801140B4
  {uint32_t ea=c->r[3]+c->r[19]; WF32(ea,c->f[31]);} // 801140B8
  c->r[3]=R32(c->r[25]+0x000000C4u); // 801140BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801140C0
  c->r[3]=c->r[0]+c->r[19]; // 801140C4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801140C8
  goto L_80114148; // 801140CC
L_801140D0:;
  c->r[0]=rotl(c->r[4],16)&0x0000000Fu; cr0(c,c->r[0]); // 801140D0
  c->r[17]=c->r[18]|c->r[18]; // 801140D4
  if (crb(c,2)) { goto L_801140F8; } // 801140D8
  cmpu(c,0,c->r[0],0x00000001u); // 801140DC
  if (crb(c,2)) { goto L_80114100; } // 801140E0
  cmpu(c,0,c->r[0],0x00000002u); // 801140E4
  if (crb(c,2)) { goto L_80114108; } // 801140E8
  cmpu(c,0,c->r[0],0x00000003u); // 801140EC
  if (crb(c,2)) { goto L_80114110; } // 801140F0
  goto L_80114114; // 801140F4
L_801140F8:;
  W16(c->r[20]+0x000000BCu,c->r[18]); // 801140F8
  goto L_80114114; // 801140FC
L_80114100:;
  W16(c->r[20]+0x000000BEu,c->r[18]); // 80114100
  goto L_80114114; // 80114104
L_80114108:;
  W16(c->r[20]+0x000000C0u,c->r[18]); // 80114108
  goto L_80114114; // 8011410C
L_80114110:;
  W16(c->r[20]+0x000000C2u,c->r[18]); // 80114110
L_80114114:;
  c->r[3]=R32(c->r[20]+0x00000018u); // 80114114
  c->r[0]=rotl(c->r[3],12)&0x00000001u; cr0(c,c->r[0]); // 80114118
  if (crb(c,2)) { goto L_80114148; } // 8011411C
  c->r[0]=rotl(c->r[3],13)&0x00000001u; cr0(c,c->r[0]); // 80114120
  if (!crb(c,2)) { goto L_80114148; } // 80114124
  c->r[12]=R32(c->r[20]+0x000000B4u); // 80114128
  c->r[3]=c->r[20]|c->r[20]; // 8011412C
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80114130
  c->ctr=c->r[12]; // 80114134
  if (true) { c->lr=0x8011413Cu; dispatch(c,c->ctr); } // 80114138
  c->r[0]=R32(c->r[20]+0x00000018u); // 8011413C
  c->r[0]=c->r[0]|0x00080000u; // 80114140
  W32(c->r[20]+0x00000018u,c->r[0]); // 80114144
L_80114148:;
  c->r[19]=c->r[19]+0x00000010u; // 80114148
  c->r[18]=c->r[18]+0x00000001u; // 8011414C
L_80114150:;
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[21]); // 80114150
  if (crb(c,0)) { IRQCHK(c); goto L_80113F9C; } // 80114154
  c->r[3]=R32(c->r[25]+0x000000C4u); // 80114158
  c->r[0]=c->r[17]+0x00000001u; // 8011415C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80114160
L_80114164:;
  c->r[0]=R32(c->r[25]+0x000000DCu); // 80114164
  c->r[3]=0u+0x00000000u; // 80114168
  W32(c->r[25]+0x000000C8u,c->r[3]); // 8011416C
  cmps(c,0,(int32_t)c->r[0],0); // 80114170
  if (crb(c,2)) { goto L_80114188; } // 80114174
  c->r[3]=R32(c->r[25]+0x000000D8u); // 80114178
  c->r[31]=0u+0x00000000u; // 8011417C
  c->r[30]=R8(c->r[3]+0x0000000Cu); // 80114180
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 80114184
L_80114188:;
  c->r[19]=0u+0x00000000u; // 80114188
  c->r[22]=0u+0x00000000u; // 8011418C
  goto L_8011446C; // 80114190
L_80114194:;
  c->r[4]=R32(c->r[25]+0x000000C4u); // 80114194
  c->r[3]=0u+0x00000000u; // 80114198
  c->r[0]=R32(c->r[25]+0x000000CCu); // 8011419C
  c->r[5]=R32(c->r[4]+0x00000000u); // 801141A0
  c->r[4]=rotl(c->r[0],0)&0x00000007u; // 801141A4
  c->r[5]=c->r[5]+c->r[22]; // 801141A8
  c->r[24]=R32(c->r[5]+0x0000000Cu); // 801141AC
  c->r[0]=rotl(c->r[24],12)&0x00000008u; cr0(c,c->r[0]); // 801141B0
  c->r[0]=rotl(c->r[24],12)&0x00000007u; // 801141B4
  if (crb(c,2)) { goto L_801141C8; } // 801141B8
  cmpu(c,0,c->r[0],c->r[4]); // 801141BC
  if (!crb(c,2)) { goto L_801141C8; } // 801141C0
  c->r[3]=0u+0x00000001u; // 801141C4
L_801141C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801141C8
  if (crb(c,2)) { goto L_80114464; } // 801141CC
  c->r[0]=R32(c->r[25]+0x000000E8u); // 801141D0
  c->r[3]=rotl(c->r[24],20)&0x0000000Fu; // 801141D4
  cmpu(c,0,c->r[3],c->r[0]); // 801141D8
  if (!crb(c,2)) { goto L_80114464; } // 801141DC
  c->r[3]=R32(c->r[25]+0x000000C4u); // 801141E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801141E4
  c->r[3]=c->r[0]+c->r[22]; // 801141E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801141EC
  c->r[20]=R32(c->r[3]+0x00000008u); // 801141F0
  c->r[18]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801141F4
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[29]); // 801141F8
  if (crb(c,2)) { goto L_80114324; } // 801141FC
  cmps(c,0,(int32_t)c->r[31],-1); // 80114200
  if (crb(c,2)) { goto L_80114324; } // 80114204
  c->r[17]=rotl(c->r[31],4)&0xFFFFFFF0u; // 80114208
  c->r[23]=0u+0x00000001u; // 8011420C
  goto L_80114310; // 80114210
L_80114214:;
  c->r[0]=R32(c->r[25]+0x000000D8u); // 80114214
  c->r[23]=0u+0x00000000u; // 80114218
  c->r[3]=c->r[0]+c->r[17]; // 8011421C
  c->r[4]=R8(c->r[3]+0x0000000Du); // 80114220
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80114224
  if (crb(c,2)) { goto L_801142A0; } // 80114228
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 8011422C
  if (!crb(c,0)) { goto L_801142A0; } // 80114230
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80114234
  if (crb(c,2)) { goto L_80114244; } // 80114238
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[30]); // 8011423C
  if (!crb(c,2)) { goto L_80114260; } // 80114240
L_80114244:;
  c->r[0]=R32(c->r[25]+0x000000D8u); // 80114244
  c->r[3]=c->r[25]|c->r[25]; // 80114248
  c->r[12]=R32(c->r[17]+c->r[0]); // 8011424C
  c->r[4]=c->r[0]+c->r[17]; // 80114250
  c->r[4]=R32(c->r[4]+0x00000004u); // 80114254
  c->ctr=c->r[12]; // 80114258
  if (true) { c->lr=0x80114260u; dispatch(c,c->ctr); } // 8011425C
L_80114260:;
  c->r[4]=R32(c->r[25]+0x000000D8u); // 80114260
  c->r[3]=c->r[4]+c->r[17]; // 80114264
  c->r[0]=R8(c->r[3]+0x0000000Du); // 80114268
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8011426C
  if (!crb(c,2)) { goto L_801142A0; } // 80114270
  c->r[0]=R32(c->r[25]+0x000000DCu); // 80114274
  c->r[31]=c->r[31]+0x00000001u; // 80114278
  c->r[17]=c->r[17]+0x00000010u; // 8011427C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80114280
  if (!crb(c,2)) { goto L_80114290; } // 80114284
  c->r[31]=0u+0xFFFFFFFFu; // 80114288
  goto L_80114320; // 8011428C
L_80114290:;
  c->r[3]=c->r[4]+c->r[17]; // 80114290
  c->r[23]=0u+0x00000001u; // 80114294
  c->r[30]=R8(c->r[3]+0x0000000Cu); // 80114298
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8011429C
L_801142A0:;
  c->r[3]=R8(c->r[3]+0x0000000Du); // 801142A0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801142A4
  if (crb(c,2)) { goto L_80114310; } // 801142A8
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[30]); // 801142AC
  if (!crb(c,1)) { goto L_80114310; } // 801142B0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801142B4
  if (crb(c,2)) { goto L_801142C4; } // 801142B8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 801142BC
  if (!crb(c,2)) { goto L_801142E0; } // 801142C0
L_801142C4:;
  c->r[0]=R32(c->r[25]+0x000000D8u); // 801142C4
  c->r[3]=c->r[25]|c->r[25]; // 801142C8
  c->r[12]=R32(c->r[17]+c->r[0]); // 801142CC
  c->r[4]=c->r[0]+c->r[17]; // 801142D0
  c->r[4]=R32(c->r[4]+0x00000004u); // 801142D4
  c->ctr=c->r[12]; // 801142D8
  if (true) { c->lr=0x801142E0u; dispatch(c,c->ctr); } // 801142DC
L_801142E0:;
  c->r[0]=R32(c->r[25]+0x000000DCu); // 801142E0
  c->r[31]=c->r[31]+0x00000001u; // 801142E4
  c->r[17]=c->r[17]+0x00000010u; // 801142E8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801142EC
  if (!crb(c,2)) { goto L_801142FC; } // 801142F0
  c->r[31]=0u+0xFFFFFFFFu; // 801142F4
  goto L_80114320; // 801142F8
L_801142FC:;
  c->r[0]=R32(c->r[25]+0x000000D8u); // 801142FC
  c->r[23]=0u+0x00000001u; // 80114300
  c->r[3]=c->r[0]+c->r[17]; // 80114304
  c->r[30]=R8(c->r[3]+0x0000000Cu); // 80114308
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8011430C
L_80114310:;
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[30]); // 80114310
  if (crb(c,0)) { goto L_80114320; } // 80114314
  cmps(c,0,(int32_t)c->r[23],0); // 80114318
  if (!crb(c,2)) { IRQCHK(c); goto L_80114214; } // 8011431C
L_80114320:;
  c->r[29]=c->r[18]|c->r[18]; // 80114320
L_80114324:;
  c->r[0]=R32(c->r[25]+0x00000778u); // 80114324
  cmps(c,0,(int32_t)c->r[0],2); // 80114328
  if (crb(c,2)) { goto L_801143C8; } // 8011432C
  c->r[0]=R32(c->r[20]+0x00000028u); // 80114330
  cmpu(c,0,c->r[0],c->r[28]); // 80114334
  if (crb(c,2)) { goto L_80114344; } // 80114338
  c->r[28]=c->r[0]|c->r[0]; // 8011433C
  c->r[26]=0u+0x00000001u; // 80114340
L_80114344:;
  c->r[0]=R32(c->r[20]+0x0000002Cu); // 80114344
  cmpu(c,0,c->r[0],c->r[27]); // 80114348
  if (crb(c,2)) { goto L_80114358; } // 8011434C
  c->r[27]=c->r[0]|c->r[0]; // 80114350
  c->r[26]=0u+0x00000001u; // 80114354
L_80114358:;
  cmps(c,0,(int32_t)c->r[26],0); // 80114358
  if (crb(c,2)) { goto L_801143C8; } // 8011435C
  cmps(c,0,(int32_t)c->r[27],0); // 80114360
  c->r[26]=0u+0x00000000u; // 80114364
  if (crb(c,2)) { goto L_8011438C; } // 80114368
  c->r[0]=R32(c->r[27]+0x00000024u); // 8011436C
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80114370
  if (crb(c,2)) { goto L_8011438C; } // 80114374
  c->r[3]=R8(c->r[27]+0x00000028u); // 80114378
  c->r[4]=R8(c->r[27]+0x00000029u); // 8011437C
  c->r[5]=R8(c->r[27]+0x0000002Au); // 80114380
  c->lr=0x80114388u; f_80190810(c); // 80114384
  goto L_801143C8; // 80114388
L_8011438C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8011438C
  if (crb(c,2)) { goto L_801143B4; } // 80114390
  c->r[0]=R32(c->r[28]+0x00000120u); // 80114394
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80114398
  if (crb(c,2)) { goto L_801143B4; } // 8011439C
  c->r[3]=R8(c->r[28]+0x000000F0u); // 801143A0
  c->r[4]=R8(c->r[28]+0x000000F1u); // 801143A4
  c->r[5]=R8(c->r[28]+0x000000F2u); // 801143A8
  c->lr=0x801143B0u; f_80190810(c); // 801143AC
  goto L_801143C8; // 801143B0
L_801143B4:;
  c->r[5]=R32(c->r[25]+0x000000ACu); // 801143B4
  c->r[3]=R8(c->r[5]+0x000000F0u); // 801143B8
  c->r[4]=R8(c->r[5]+0x000000F1u); // 801143BC
  c->r[5]=R8(c->r[5]+0x000000F2u); // 801143C0
  c->lr=0x801143C8u; f_80190810(c); // 801143C4
L_801143C8:;
  c->r[0]=sraw(c,c->r[24],24); cr0(c,c->r[0]); // 801143C8
  if (!crb(c,0)) { goto L_801143D8; } // 801143CC
  c->r[4]=0u+0x00000000u; // 801143D0
  goto L_801143E4; // 801143D4
L_801143D8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801143D8
  c->r[3]=c->r[25]+c->r[0]; // 801143DC
  c->r[4]=c->r[3]+0x00000130u; // 801143E0
L_801143E4:;
  c->r[0]=rotl(c->r[24],16)&0x0000000Fu; cr0(c,c->r[0]); // 801143E4
  if (crb(c,2)) { goto L_80114408; } // 801143E8
  cmpu(c,0,c->r[0],0x00000001u); // 801143EC
  if (crb(c,2)) { goto L_80114420; } // 801143F0
  cmpu(c,0,c->r[0],0x00000002u); // 801143F4
  if (crb(c,2)) { goto L_80114438; } // 801143F8
  cmpu(c,0,c->r[0],0x00000003u); // 801143FC
  if (crb(c,2)) { goto L_80114450; } // 80114400
  goto L_80114464; // 80114404
L_80114408:;
  c->r[12]=R32(c->r[20]+0x000000B4u); // 80114408
  c->r[3]=c->r[20]|c->r[20]; // 8011440C
  c->r[12]=R32(c->r[12]+0x000000C4u); // 80114410
  c->ctr=c->r[12]; // 80114414
  if (true) { c->lr=0x8011441Cu; dispatch(c,c->ctr); } // 80114418
  goto L_80114464; // 8011441C
L_80114420:;
  c->r[12]=R32(c->r[20]+0x000000B4u); // 80114420
  c->r[3]=c->r[20]|c->r[20]; // 80114424
  c->r[12]=R32(c->r[12]+0x000000C8u); // 80114428
  c->ctr=c->r[12]; // 8011442C
  if (true) { c->lr=0x80114434u; dispatch(c,c->ctr); } // 80114430
  goto L_80114464; // 80114434
L_80114438:;
  c->r[12]=R32(c->r[20]+0x000000B4u); // 80114438
  c->r[3]=c->r[20]|c->r[20]; // 8011443C
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80114440
  c->ctr=c->r[12]; // 80114444
  if (true) { c->lr=0x8011444Cu; dispatch(c,c->ctr); } // 80114448
  goto L_80114464; // 8011444C
L_80114450:;
  c->r[12]=R32(c->r[20]+0x000000B4u); // 80114450
  c->r[3]=c->r[20]|c->r[20]; // 80114454
  c->r[12]=R32(c->r[12]+0x000000D0u); // 80114458
  c->ctr=c->r[12]; // 8011445C
  if (true) { c->lr=0x80114464u; dispatch(c,c->ctr); } // 80114460
L_80114464:;
  c->r[22]=c->r[22]+0x00000010u; // 80114464
  c->r[19]=c->r[19]+0x00000001u; // 80114468
L_8011446C:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[21]); // 8011446C
  if (crb(c,0)) { IRQCHK(c); goto L_80114194; } // 80114470
  c->r[17]=rotl(c->r[31],4)&0xFFFFFFF0u; // 80114474
  goto L_80114504; // 80114478
L_8011447C:;
  c->r[0]=R32(c->r[25]+0x000000D8u); // 8011447C
  c->r[3]=c->r[0]+c->r[17]; // 80114480
  c->r[4]=R8(c->r[3]+0x0000000Du); // 80114484
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80114488
  if (crb(c,2)) { goto L_801144A0; } // 8011448C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80114490
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80114494
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80114498
  if (!crb(c,2)) { goto L_801144FC; } // 8011449C
L_801144A0:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801144A0
  if (crb(c,2)) { goto L_801144D4; } // 801144A4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801144A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801144AC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801144B0
  if (!crb(c,0)) { goto L_801144D4; } // 801144B4
  c->r[0]=R32(c->r[25]+0x000000D8u); // 801144B8
  c->r[3]=c->r[25]|c->r[25]; // 801144BC
  c->r[12]=R32(c->r[17]+c->r[0]); // 801144C0
  c->r[4]=c->r[0]+c->r[17]; // 801144C4
  c->r[4]=R32(c->r[4]+0x00000004u); // 801144C8
  c->ctr=c->r[12]; // 801144CC
  if (true) { c->lr=0x801144D4u; dispatch(c,c->ctr); } // 801144D0
L_801144D4:;
  c->r[0]=R32(c->r[25]+0x000000D8u); // 801144D4
  c->r[4]=c->r[0]+c->r[17]; // 801144D8
  c->r[0]=R8(c->r[4]+0x0000000Du); // 801144DC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801144E0
  if (crb(c,2)) { goto L_801144FC; } // 801144E4
  c->r[12]=R32(c->r[4]+0x00000000u); // 801144E8
  c->r[3]=c->r[25]|c->r[25]; // 801144EC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801144F0
  c->ctr=c->r[12]; // 801144F4
  if (true) { c->lr=0x801144FCu; dispatch(c,c->ctr); } // 801144F8
L_801144FC:;
  c->r[17]=c->r[17]+0x00000010u; // 801144FC
  c->r[31]=c->r[31]+0x00000001u; // 80114500
L_80114504:;
  cmps(c,0,(int32_t)c->r[31],0); // 80114504
  if (crb(c,0)) { goto L_80114518; } // 80114508
  c->r[0]=R32(c->r[25]+0x000000DCu); // 8011450C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80114510
  if (crb(c,0)) { IRQCHK(c); goto L_8011447C; } // 80114514
L_80114518:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80114518
  c->r[11]=c->r[1]+0x00000050u; // 8011451C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80114520
  c->lr=0x80114528u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80114524
  c->r[0]=R32(c->r[1]+0x00000064u); // 80114528
  c->lr=c->r[0]; // 8011452C
  c->r[1]=c->r[1]+0x00000060u; // 80114530
  return; // 80114534
}

// fn_80114538
void f_80114538(Ctx* __restrict c) {
  trace_call(0x80114538u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114538
  c->r[0]=c->lr; // 8011453C
  c->r[5]=0u+0x00000001u; // 80114540
  W32(c->r[1]+0x00000034u,c->r[0]); // 80114544
  c->r[0]=0u+0x43300000u; // 80114548
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8011454C
  c->r[31]=c->r[3]|c->r[3]; // 80114550
  c->r[3]=c->r[1]+0x00000008u; // 80114554
  W32(c->r[1]+0x00000010u,c->r[0]); // 80114558
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 8011455C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80114560
  c->lr=0x80114568u; f_80244160(c); // 80114564
  c->r[0]=R32(c->r[31]+0x000009C8u); // 80114568
  c->r[4]=R32(c->r[1]+0x00000008u); // 8011456C
  c->r[3]=c->r[0]^0x80000000u; // 80114570
  W32(c->r[1]+0x00000014u,c->r[3]); // 80114574
  c->r[4]=c->r[4]+0xFFFE0000u; // 80114578
  {uint32_t ea=c->r[2]+0xFFFF8930u; c->f[3]=RF64(ea);} // 8011457C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80114580
  c->r[4]=c->r[4]+0x00007960u; // 80114584
  c->r[0]=c->r[4]^0x80000000u; // 80114588
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8011458C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 80114590
  {uint32_t ea=c->r[2]+0xFFFF8940u; c->f[2]=c->ps1[2]=RF32(ea);} // 80114594
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80114598
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8011459C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801145A0
  fcmp(c,0,c->f[1],c->f[0]); // 801145A4
  if (!crb(c,1)) { goto L_801145BC; } // 801145A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801145AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801145B0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 801145B4
  goto L_801145CC; // 801145B8
L_801145BC:;
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801145BC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801145C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801145C4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 801145C8
L_801145CC:;
  c->lr=0x801145D0u; f_803ADC14(c); // 801145CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801145D0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801145D4
  c->lr=c->r[0]; // 801145D8
  c->r[1]=c->r[1]+0x00000030u; // 801145DC
  return; // 801145E0
}

// fn_801145E4
void f_801145E4(Ctx* __restrict c) {
  trace_call(0x801145E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801145E4
  c->r[4]=0u+0x80470000u; // 801145E8
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[1]=c->ps1[1]=RF32(ea);} // 801145EC
  c->r[3]=c->r[4]+0x00004C40u; // 801145F0
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[0]=c->ps1[0]=RF32(ea);} // 801145F4
  c->r[5]=0u+0x80470000u; // 801145F8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801145FC
  c->r[8]=c->r[1]+0x00000008u; // 80114600
  c->r[7]=c->r[1]+0x00000018u; // 80114604
  c->r[6]=c->r[1]+0x00000028u; // 80114608
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8011460C
  c->r[5]=c->r[5]+0x00004C50u; // 80114610
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 80114614
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80114618
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8011461C
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,3,ea,0,0);} // 80114620
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80114624
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80114628
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 8011462C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80114630
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80114634
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,5,ea,0,0);} // 80114638
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8011463C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80114640
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 80114644
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80114648
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8011464C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,6,ea,0,0);} // 80114650
  {uint32_t ea=c->r[4]+0x00004C40u; WF32(ea,c->f[1]);} // 80114654
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80114658
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8011465C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80114660
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80114664
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,0,0);} // 80114668
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,4,ea,0,0);} // 8011466C
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,5,ea,0,0);} // 80114670
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 80114674
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,3,ea,0,0);} // 80114678
  c->r[1]=c->r[1]+0x00000040u; // 8011467C
  return; // 80114680
}

// fn_80114684
void f_80114684(Ctx* __restrict c) {
  trace_call(0x80114684u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114684
  c->r[0]=c->lr; // 80114688
  c->r[4]=0u+0x80420000u; // 8011468C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80114690
  c->r[0]=0u+0x00000002u; // 80114694
  c->r[4]=c->r[4]+0x00002B20u; // 80114698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011469C
  c->r[31]=c->r[3]+0x00000078u; // 801146A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801146A4
  c->r[30]=c->r[3]+0x00000038u; // 801146A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801146AC
  c->r[29]=c->r[3]|c->r[3]; // 801146B0
  W32(c->r[3]+0x00000098u,c->r[4]); // 801146B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801146B8
L_801146BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801146BC
  c->lr=0x801146C4u; f_8002E018(c); // 801146C0
  c->r[30]=c->r[30]+0x00000010u; // 801146C4
  cmpu(c,0,c->r[30],c->r[31]); // 801146C8
  if (crb(c,0)) { IRQCHK(c); goto L_801146BC; } // 801146CC
  c->r[6]=0u+0x00000000u; // 801146D0
  W32(c->r[29]+0x000000B8u,c->r[6]); // 801146D4
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 801146D8
  c->r[5]=0u+0x00000001u; // 801146DC
  c->r[4]=0u+0xFFFFFFFFu; // 801146E0
  {uint32_t ea=c->r[2]+0xFFFF894Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801146E4
  c->r[0]=c->r[6]|0x00000001u; // 801146E8
  W8(c->r[29]+0x0000009Cu,c->r[6]); // 801146EC
  c->r[3]=c->r[29]|c->r[29]; // 801146F0
  W8(c->r[29]+0x0000009Du,c->r[6]); // 801146F4
  W32(c->r[29]+0x000000A0u,c->r[6]); // 801146F8
  W8(c->r[29]+0x000000A4u,c->r[6]); // 801146FC
  W8(c->r[29]+0x000000A5u,c->r[6]); // 80114700
  W32(c->r[29]+0x000000A8u,c->r[6]); // 80114704
  W8(c->r[29]+0x000000ACu,c->r[6]); // 80114708
  W8(c->r[29]+0x000000ADu,c->r[5]); // 8011470C
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 80114710
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[0]);} // 80114714
  W32(c->r[29]+0x00000004u,c->r[5]); // 80114718
  W32(c->r[29]+0x00000014u,c->r[6]); // 8011471C
  W32(c->r[29]+0x00000028u,c->r[6]); // 80114720
  W8(c->r[29]+0x00000024u,c->r[6]); // 80114724
  W32(c->r[31]+0x00000000u,c->r[5]); // 80114728
  W32(c->r[29]+0x0000007Cu,c->r[4]); // 8011472C
  W32(c->r[29]+0x00000008u,c->r[5]); // 80114730
  W32(c->r[29]+0x00000018u,c->r[6]); // 80114734
  W32(c->r[29]+0x0000002Cu,c->r[6]); // 80114738
  W8(c->r[29]+0x00000025u,c->r[6]); // 8011473C
  W32(c->r[31]+0x00000008u,c->r[5]); // 80114740
  W32(c->r[29]+0x00000084u,c->r[4]); // 80114744
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 80114748
  W32(c->r[29]+0x0000001Cu,c->r[6]); // 8011474C
  W32(c->r[29]+0x00000030u,c->r[6]); // 80114750
  W8(c->r[29]+0x00000026u,c->r[6]); // 80114754
  W32(c->r[31]+0x00000010u,c->r[5]); // 80114758
  W32(c->r[29]+0x0000008Cu,c->r[4]); // 8011475C
  W32(c->r[29]+0x00000010u,c->r[5]); // 80114760
  W32(c->r[29]+0x00000020u,c->r[6]); // 80114764
  W32(c->r[29]+0x00000034u,c->r[6]); // 80114768
  W8(c->r[29]+0x00000027u,c->r[6]); // 8011476C
  W32(c->r[31]+0x00000018u,c->r[5]); // 80114770
  W32(c->r[29]+0x00000094u,c->r[4]); // 80114774
  W32(c->r[29]+0x000000B8u,c->r[0]); // 80114778
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011477C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80114780
  c->r[29]=R32(c->r[1]+0x00000014u); // 80114784
  c->r[0]=R32(c->r[1]+0x00000024u); // 80114788
  c->lr=c->r[0]; // 8011478C
  c->r[1]=c->r[1]+0x00000020u; // 80114790
  return; // 80114794
}

// fn_80114798
void f_80114798(Ctx* __restrict c) {
  trace_call(0x80114798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114798
  c->r[0]=c->lr; // 8011479C
  cmps(c,0,(int32_t)c->r[3],0); // 801147A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801147A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801147A8
  c->r[31]=c->r[3]|c->r[3]; // 801147AC
  if (crb(c,2)) { goto L_801147C0; } // 801147B0
  cmps(c,0,(int32_t)c->r[4],0); // 801147B4
  if (!crb(c,1)) { goto L_801147C0; } // 801147B8
  c->lr=0x801147C0u; f_80244DC0(c); // 801147BC
L_801147C0:;
  c->r[3]=c->r[31]|c->r[31]; // 801147C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801147C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801147C8
  c->lr=c->r[0]; // 801147CC
  c->r[1]=c->r[1]+0x00000010u; // 801147D0
  return; // 801147D4
}

// fn_801147D8
void f_801147D8(Ctx* __restrict c) {
  trace_call(0x801147D8u);
  return; // 801147D8
}

// fn_801147DC
void f_801147DC(Ctx* __restrict c) {
  trace_call(0x801147DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801147DC
  c->r[0]=c->lr; // 801147E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801147E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801147E8
  c->r[31]=c->r[4]|c->r[4]; // 801147EC
  W8(c->r[3]+0x0000009Cu,c->r[4]); // 801147F0
  c->r[3]=R32(c->r[13]+0xFFFFE100u); // 801147F4
  cmps(c,0,(int32_t)c->r[3],0); // 801147F8
  if (crb(c,2)) { goto L_80114804; } // 801147FC
  c->lr=0x80114804u; f_8002CCC4(c); // 80114800
L_80114804:;
  c->r[3]=R32(c->r[13]+0xFFFFE1B8u); // 80114804
  cmps(c,0,(int32_t)c->r[3],0); // 80114808
  if (crb(c,2)) { goto L_80114818; } // 8011480C
  c->r[4]=c->r[31]|c->r[31]; // 80114810
  c->lr=0x80114818u; f_8013794C(c); // 80114814
L_80114818:;
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80114818
  cmps(c,0,(int32_t)c->r[3],0); // 8011481C
  if (crb(c,2)) { goto L_8011482C; } // 80114820
  c->r[4]=c->r[31]|c->r[31]; // 80114824
  c->lr=0x8011482Cu; f_801110CC(c); // 80114828
L_8011482C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011482C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80114830
  c->lr=c->r[0]; // 80114834
  c->r[1]=c->r[1]+0x00000010u; // 80114838
  return; // 8011483C
}

// fn_80114840
void f_80114840(Ctx* __restrict c) {
  trace_call(0x80114840u);
  c->r[3]=R8(c->r[3]+0x0000009Cu); // 80114840
  return; // 80114844
}

// fn_80114848
void f_80114848(Ctx* __restrict c) {
  trace_call(0x80114848u);
  return; // 80114848
}

// fn_8011484C
void f_8011484C(Ctx* __restrict c) {
  trace_call(0x8011484Cu);
  c->r[5]=R32(c->r[13]+0xFFFFE130u); // 8011484C
  cmps(c,0,(int32_t)c->r[5],0); // 80114850
  if (crb(c,2)) return; // 80114854
  c->r[0]=R8(c->r[3]+0x00000034u); // 80114858
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011485C
  if (crb(c,2)) { goto L_80114884; } // 80114860
  c->r[0]=R32(c->r[3]+0x00000030u); // 80114864
  c->r[3]=0u+0x00000001u; // 80114868
  c->r[4]=R32(c->r[5]+0x000000B8u); // 8011486C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80114870
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80114874
  c->r[0]=c->r[4]|c->r[0]; // 80114878
  W32(c->r[5]+0x000000B8u,c->r[0]); // 8011487C
  return; // 80114880
L_80114884:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 80114884
  c->r[3]=0u+0x00000001u; // 80114888
  c->r[4]=R32(c->r[5]+0x000000B8u); // 8011488C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80114890
  c->r[0]=c->r[4]&~c->r[0]; // 80114894
  W32(c->r[5]+0x000000B8u,c->r[0]); // 80114898
  return; // 8011489C
}

// fn_801148A0
void f_801148A0(Ctx* __restrict c) {
  trace_call(0x801148A0u);
  c->r[4]=R32(c->r[13]+0xFFFFE130u); // 801148A0
  cmps(c,0,(int32_t)c->r[4],0); // 801148A4
  if (crb(c,2)) { goto L_801148D4; } // 801148A8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801148AC
  c->r[3]=0u+0x00000001u; // 801148B0
  c->r[4]=R32(c->r[4]+0x000000B8u); // 801148B4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801148B8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801148BC
  c->r[3]=c->r[4]&c->r[0]; // 801148C0
  c->r[0]=0u-c->r[3]; // 801148C4
  c->r[0]=c->r[0]|c->r[3]; // 801148C8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801148CC
  return; // 801148D0
L_801148D4:;
  c->r[3]=0u+0x00000000u; // 801148D4
  return; // 801148D8
}

// fn_801148DC
void f_801148DC(Ctx* __restrict c) {
  trace_call(0x801148DCu);
  c->r[4]=R32(c->r[13]+0xFFFFE130u); // 801148DC
  cmps(c,0,(int32_t)c->r[4],0); // 801148E0
  if (crb(c,2)) { goto L_80114958; } // 801148E4
  c->r[5]=R32(c->r[4]+0x000000B8u); // 801148E8
  c->r[6]=0u+0x00000000u; // 801148EC
  c->r[4]=0u+0x00000001u; // 801148F0
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]<<((c->r[6])&31)); // 801148F4
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 801148F8
  if (crb(c,2)) { goto L_80114904; } // 801148FC
  c->r[6]=0u+0x00000001u; // 80114900
L_80114904:;
  c->r[0]=0u+0x00000001u; // 80114904
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 80114908
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 8011490C
  if (crb(c,2)) { goto L_80114918; } // 80114910
  c->r[6]=c->r[6]+0x00000001u; // 80114914
L_80114918:;
  c->r[0]=0u+0x00000002u; // 80114918
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8011491C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80114920
  if (crb(c,2)) { goto L_8011492C; } // 80114924
  c->r[6]=c->r[6]+0x00000001u; // 80114928
L_8011492C:;
  c->r[0]=0u+0x00000003u; // 8011492C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 80114930
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80114934
  if (crb(c,2)) { goto L_80114940; } // 80114938
  c->r[6]=c->r[6]+0x00000001u; // 8011493C
L_80114940:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80114940
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80114944
  cmpu(c,0,c->r[6],c->r[0]); // 80114948
  if (!crb(c,2)) { goto L_80114958; } // 8011494C
  c->r[3]=0u+0x00000001u; // 80114950
  return; // 80114954
L_80114958:;
  c->r[3]=0u+0x00000000u; // 80114958
  return; // 8011495C
}

// fn_80114960
void f_80114960(Ctx* __restrict c) {
  trace_call(0x80114960u);
  c->r[6]=0u+0x00000002u; // 80114960
  c->r[5]=0u+0x00000001u; // 80114964
  W32(c->r[4]+0x00000000u,c->r[6]); // 80114968
  c->r[0]=0u+0x00000000u; // 8011496C
  W32(c->r[4]+0x00000004u,c->r[5]); // 80114970
  W32(c->r[3]+0x00000000u,c->r[6]); // 80114974
  W32(c->r[3]+0x00000004u,c->r[5]); // 80114978
  W32(c->r[3]+0x00000008u,c->r[5]); // 8011497C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80114980
  W32(c->r[3]+0x00000018u,c->r[0]); // 80114984
  return; // 80114988
}

// fn_8011498C
void f_8011498C(Ctx* __restrict c) {
  trace_call(0x8011498Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011498C
  c->r[0]=c->lr; // 80114990
  W32(c->r[1]+0x00000024u,c->r[0]); // 80114994
  c->r[11]=c->r[1]+0x00000020u; // 80114998
  c->lr=0x801149A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011499C
  c->r[7]=R32(c->r[4]+0x0000015Cu); // 801149A0
  c->r[31]=c->r[3]|c->r[3]; // 801149A4
  cmps(c,0,(int32_t)c->r[7],0); // 801149A8
  if (crb(c,2)) { goto L_80114B14; } // 801149AC
  c->r[12]=0u+0x00000004u; // 801149B0
  c->r[6]=c->r[31]|c->r[31]; // 801149B4
  c->r[9]=c->r[31]|c->r[31]; // 801149B8
  c->r[10]=c->r[31]|c->r[31]; // 801149BC
  c->r[5]=c->r[4]+0x00000164u; // 801149C0
  c->r[11]=0u+0x00000000u; // 801149C4
  c->r[8]=0u+0x00000000u; // 801149C8
  c->r[0]=0u+0x00000001u; // 801149CC
  c->r[28]=0u+0xFFFFFFFFu; // 801149D0
  c->ctr=c->r[12]; // 801149D4
L_801149D8:;
  c->r[12]=rotl(c->r[11],0)&0x000000FFu; // 801149D8
  c->r[29]=R32(c->r[3]+0x000000B8u); // 801149DC
  c->r[12]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 801149E0
  c->r[12]=c->r[29]&c->r[12]; cr0(c,c->r[12]); // 801149E4
  if (crb(c,2)) { goto L_801149F4; } // 801149E8
  c->r[27]=c->r[5]|c->r[5]; // 801149EC
  goto L_801149F8; // 801149F0
L_801149F4:;
  c->r[27]=c->r[4]+0x00000164u; // 801149F4
L_801149F8:;
  c->r[12]=R32(c->r[3]+0x000000A0u); // 801149F8
  cmps(c,0,(int32_t)c->r[12],0); // 801149FC
  if (!crb(c,2)) { goto L_80114A18; } // 80114A00
  c->r[12]=R32(c->r[27]+0x000000B8u); // 80114A04
  W32(c->r[6]+0x00000078u,c->r[12]); // 80114A08
  c->r[12]=R32(c->r[27]+0x000000BCu); // 80114A0C
  W32(c->r[6]+0x0000007Cu,c->r[12]); // 80114A10
  goto L_80114A20; // 80114A14
L_80114A18:;
  W32(c->r[6]+0x00000078u,c->r[0]); // 80114A18
  W32(c->r[6]+0x0000007Cu,c->r[28]); // 80114A1C
L_80114A20:;
  c->r[30]=R32(c->r[13]+0xFFFFE130u); // 80114A20
  c->r[12]=c->r[3]+c->r[11]; // 80114A24
  c->r[29]=R32(c->r[7]+0x000001D0u); // 80114A28
  c->r[5]=c->r[5]+0x000000D8u; // 80114A2C
  c->r[27]=c->r[30]+c->r[8]; // 80114A30
  c->r[30]=R32(c->r[7]+0x000001CCu); // 80114A34
  W32(c->r[27]+0x00000038u,c->r[30]); // 80114A38
  c->r[6]=c->r[6]+0x00000008u; // 80114A3C
  c->r[8]=c->r[8]+0x00000010u; // 80114A40
  c->r[11]=c->r[11]+0x00000001u; // 80114A44
  W32(c->r[27]+0x0000003Cu,c->r[29]); // 80114A48
  c->r[30]=R32(c->r[7]+0x000001D8u); // 80114A4C
  c->r[29]=R32(c->r[7]+0x000001D4u); // 80114A50
  W32(c->r[27]+0x00000040u,c->r[29]); // 80114A54
  W32(c->r[27]+0x00000044u,c->r[30]); // 80114A58
  W32(c->r[9]+0x00000004u,c->r[0]); // 80114A5C
  c->r[30]=R32(c->r[7]+0x000001E0u); // 80114A60
  W32(c->r[9]+0x00000014u,c->r[30]); // 80114A64
  c->r[9]=c->r[9]+0x00000004u; // 80114A68
  c->r[30]=R8(c->r[7]+0x000001DEu); // 80114A6C
  W8(c->r[12]+0x00000024u,c->r[30]); // 80114A70
  c->r[12]=R32(c->r[7]+0x000001D0u); // 80114A74
  c->r[30]=R32(c->r[7]+0x000001CCu); // 80114A78
  W32(c->r[10]+0x00000038u,c->r[30]); // 80114A7C
  W32(c->r[10]+0x0000003Cu,c->r[12]); // 80114A80
  c->r[12]=R32(c->r[7]+0x000001D8u); // 80114A84
  c->r[30]=R32(c->r[7]+0x000001D4u); // 80114A88
  c->r[7]=c->r[7]+0x00000088u; // 80114A8C
  W32(c->r[10]+0x00000040u,c->r[30]); // 80114A90
  W32(c->r[10]+0x00000044u,c->r[12]); // 80114A94
  c->r[10]=c->r[10]+0x00000010u; // 80114A98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801149D8; } // 80114A9C
  c->lr=0x80114AA4u; f_80353A74(c); // 80114AA0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80114AA4
  c->r[0]=0u-c->r[3]; // 80114AA8
  c->r[0]=c->r[0]|c->r[3]; // 80114AAC
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 80114AB0
  W8(c->r[31]+0x0000009Cu,c->r[27]); // 80114AB4
  c->r[3]=R32(c->r[13]+0xFFFFE100u); // 80114AB8
  cmps(c,0,(int32_t)c->r[3],0); // 80114ABC
  if (crb(c,2)) { goto L_80114ACC; } // 80114AC0
  c->r[4]=c->r[27]|c->r[27]; // 80114AC4
  c->lr=0x80114ACCu; f_8002CCC4(c); // 80114AC8
L_80114ACC:;
  c->r[3]=R32(c->r[13]+0xFFFFE1B8u); // 80114ACC
  cmps(c,0,(int32_t)c->r[3],0); // 80114AD0
  if (crb(c,2)) { goto L_80114AE0; } // 80114AD4
  c->r[4]=c->r[27]|c->r[27]; // 80114AD8
  c->lr=0x80114AE0u; f_8013794C(c); // 80114ADC
L_80114AE0:;
  c->r[3]=R32(c->r[13]+0xFFFFE168u); // 80114AE0
  cmps(c,0,(int32_t)c->r[3],0); // 80114AE4
  if (crb(c,2)) { goto L_80114AF4; } // 80114AE8
  c->r[4]=c->r[27]|c->r[27]; // 80114AEC
  c->lr=0x80114AF4u; f_801110CC(c); // 80114AF0
L_80114AF4:;
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[0]=c->ps1[0]=RF32(ea);} // 80114AF4
  c->r[3]=0u+0x00000004u; // 80114AF8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 80114AFC
  c->r[0]=0u+0x00000001u; // 80114B00
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 80114B04
  c->r[4]=R32(c->r[4]+0x0000015Cu); // 80114B08
  W32(c->r[4]+0x00000114u,c->r[3]); // 80114B0C
  W8(c->r[31]+0x0000009Du,c->r[0]); // 80114B10
L_80114B14:;
  c->r[11]=c->r[1]+0x00000020u; // 80114B14
  c->lr=0x80114B1Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80114B18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80114B1C
  c->lr=c->r[0]; // 80114B20
  c->r[1]=c->r[1]+0x00000020u; // 80114B24
  return; // 80114B28
}

// fn_80114B2C
void f_80114B2C(Ctx* __restrict c) {
  trace_call(0x80114B2Cu);
  c->r[7]=R32(c->r[4]+0x0000015Cu); // 80114B2C
  cmps(c,0,(int32_t)c->r[7],0); // 80114B30
  if (crb(c,2)) return; // 80114B34
  c->r[0]=0u+0x00000002u; // 80114B38
  c->r[9]=c->r[3]|c->r[3]; // 80114B3C
  c->r[10]=c->r[3]|c->r[3]; // 80114B40
  c->r[12]=0u+0x00000000u; // 80114B44
  c->r[8]=0u+0x00000000u; // 80114B48
  c->r[6]=0u+0x00000001u; // 80114B4C
  c->ctr=c->r[0]; // 80114B50
L_80114B54:;
  c->r[4]=R32(c->r[13]+0xFFFFE130u); // 80114B54
  c->r[5]=c->r[3]+c->r[12]; // 80114B58
  c->r[0]=R32(c->r[7]+0x000001D0u); // 80114B5C
  c->r[12]=c->r[12]+0x00000001u; // 80114B60
  c->r[11]=c->r[4]+c->r[8]; // 80114B64
  c->r[4]=R32(c->r[7]+0x000001CCu); // 80114B68
  W32(c->r[11]+0x00000038u,c->r[4]); // 80114B6C
  c->r[8]=c->r[8]+0x00000010u; // 80114B70
  W32(c->r[11]+0x0000003Cu,c->r[0]); // 80114B74
  c->r[0]=R32(c->r[7]+0x000001D8u); // 80114B78
  c->r[4]=R32(c->r[7]+0x000001D4u); // 80114B7C
  W32(c->r[11]+0x00000040u,c->r[4]); // 80114B80
  W32(c->r[11]+0x00000044u,c->r[0]); // 80114B84
  W32(c->r[9]+0x00000004u,c->r[6]); // 80114B88
  c->r[0]=R32(c->r[7]+0x000001E0u); // 80114B8C
  W32(c->r[9]+0x00000014u,c->r[0]); // 80114B90
  c->r[0]=R8(c->r[7]+0x000001DEu); // 80114B94
  W8(c->r[5]+0x00000024u,c->r[0]); // 80114B98
  c->r[5]=c->r[3]+c->r[12]; // 80114B9C
  c->r[12]=c->r[12]+0x00000001u; // 80114BA0
  c->r[0]=R32(c->r[7]+0x000001D0u); // 80114BA4
  c->r[4]=R32(c->r[7]+0x000001CCu); // 80114BA8
  W32(c->r[10]+0x00000038u,c->r[4]); // 80114BAC
  W32(c->r[10]+0x0000003Cu,c->r[0]); // 80114BB0
  c->r[0]=R32(c->r[7]+0x000001D8u); // 80114BB4
  c->r[4]=R32(c->r[7]+0x000001D4u); // 80114BB8
  W32(c->r[10]+0x00000040u,c->r[4]); // 80114BBC
  W32(c->r[10]+0x00000044u,c->r[0]); // 80114BC0
  c->r[4]=R32(c->r[13]+0xFFFFE130u); // 80114BC4
  c->r[0]=R32(c->r[7]+0x00000258u); // 80114BC8
  c->r[11]=c->r[4]+c->r[8]; // 80114BCC
  c->r[4]=R32(c->r[7]+0x00000254u); // 80114BD0
  W32(c->r[11]+0x00000038u,c->r[4]); // 80114BD4
  c->r[8]=c->r[8]+0x00000010u; // 80114BD8
  W32(c->r[11]+0x0000003Cu,c->r[0]); // 80114BDC
  c->r[0]=R32(c->r[7]+0x00000260u); // 80114BE0
  c->r[4]=R32(c->r[7]+0x0000025Cu); // 80114BE4
  W32(c->r[11]+0x00000040u,c->r[4]); // 80114BE8
  W32(c->r[11]+0x00000044u,c->r[0]); // 80114BEC
  W32(c->r[9]+0x00000008u,c->r[6]); // 80114BF0
  c->r[0]=R32(c->r[7]+0x00000268u); // 80114BF4
  W32(c->r[9]+0x00000018u,c->r[0]); // 80114BF8
  c->r[9]=c->r[9]+0x00000008u; // 80114BFC
  c->r[0]=R8(c->r[7]+0x00000266u); // 80114C00
  W8(c->r[5]+0x00000024u,c->r[0]); // 80114C04
  c->r[0]=R32(c->r[7]+0x00000258u); // 80114C08
  c->r[4]=R32(c->r[7]+0x00000254u); // 80114C0C
  W32(c->r[10]+0x00000048u,c->r[4]); // 80114C10
  W32(c->r[10]+0x0000004Cu,c->r[0]); // 80114C14
  c->r[0]=R32(c->r[7]+0x00000260u); // 80114C18
  c->r[4]=R32(c->r[7]+0x0000025Cu); // 80114C1C
  c->r[7]=c->r[7]+0x00000110u; // 80114C20
  W32(c->r[10]+0x00000050u,c->r[4]); // 80114C24
  W32(c->r[10]+0x00000054u,c->r[0]); // 80114C28
  c->r[10]=c->r[10]+0x00000020u; // 80114C2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80114B54; } // 80114C30
  return; // 80114C34
}

// fn_80114C38
void f_80114C38(Ctx* __restrict c) {
  trace_call(0x80114C38u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 80114C38
  c->r[0]=0u+0x00000004u; // 80114C3C
  c->r[4]=R32(c->r[13]+0xFFFFE130u); // 80114C40
  cmps(c,0,(int32_t)c->r[3],0); // 80114C44
  W32(c->r[4]+0x000000A0u,c->r[3]); // 80114C48
  if (!crb(c,2)) { goto L_80114C54; } // 80114C4C
  c->r[0]=0u+0x00000002u; // 80114C50
L_80114C54:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 80114C54
  return; // 80114C58
}

// fn_80114C5C
void f_80114C5C(Ctx* __restrict c) {
  trace_call(0x80114C5Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 80114C5C
  W32(c->r[3]+0x000000A0u,c->r[4]); // 80114C60
  c->r[0]=0u+0x00000004u; // 80114C64
  if (!crb(c,2)) { goto L_80114C70; } // 80114C68
  c->r[0]=0u+0x00000002u; // 80114C6C
L_80114C70:;
  W32(c->r[3]+0x00000000u,c->r[0]); // 80114C70
  return; // 80114C74
}

// fn_80114C78
void f_80114C78(Ctx* __restrict c) {
  trace_call(0x80114C78u);
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80114C78
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80114C7C
  fcmp(c,0,c->f[1],c->f[0]); // 80114C80
  if (!crb(c,1)) { goto L_80114C90; } // 80114C84
  c->r[0]=0u+0x00000001u; // 80114C88
  W8(c->r[3]+0x000000ADu,c->r[0]); // 80114C8C
L_80114C90:;
  c->r[3]=R8(c->r[3]+0x000000ADu); // 80114C90
  return; // 80114C94
}

// fn_80114C98
void f_80114C98(Ctx* __restrict c) {
  trace_call(0x80114C98u);
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80114C98
  {uint32_t ea=c->r[2]+0xFFFF8950u; c->f[1]=c->ps1[1]=RF32(ea);} // 80114C9C
  W8(c->r[3]+0x000000ADu,c->r[4]); // 80114CA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80114CA4
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 80114CA8
  return; // 80114CAC
}

// fn_80114CB0
void f_80114CB0(Ctx* __restrict c) {
  trace_call(0x80114CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114CB0
  c->r[0]=c->lr; // 80114CB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80114CB8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80114CBC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80114CC0
  c->r[11]=c->r[1]+0x00000020u; // 80114CC4
  c->lr=0x80114CCCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80114CC8
  c->r[4]=R8(c->r[3]+0x00000030u); // 80114CCC
  c->r[27]=0u+0x00000000u; // 80114CD0
  c->r[0]=R8(c->r[3]+0x00000038u); // 80114CD4
  c->r[31]=0u+0x00000000u; // 80114CD8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80114CDC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[31]=c->ps1[31]=RF32(ea);} // 80114CE0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80114CE4
  c->r[4]=0u-c->r[5]; // 80114CE8
  c->r[0]=0u-c->r[3]; // 80114CEC
  c->r[4]=c->r[4]|c->r[5]; // 80114CF0
  c->r[0]=c->r[0]|c->r[3]; // 80114CF4
  c->r[29]=rotl(c->r[4],1)&0x00000001u; // 80114CF8
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 80114CFC
L_80114D00:;
  c->r[0]=R32(c->r[13]+0xFFFFE134u); // 80114D00
  c->r[3]=c->r[0]+c->r[31]; // 80114D04
  c->r[28]=R32(c->r[3]+0x00000040u); // 80114D08
  cmps(c,0,(int32_t)c->r[28],0); // 80114D0C
  if (crb(c,2)) { goto L_80114D40; } // 80114D10
  c->r[3]=R32(c->r[28]+0x000002B0u); // 80114D14
  cmps(c,0,(int32_t)c->r[3],0); // 80114D18
  if (crb(c,2)) { goto L_80114D40; } // 80114D1C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80114D20
  c->r[12]=R32(c->r[12]+0x00000138u); // 80114D24
  c->ctr=c->r[12]; // 80114D28
  if (true) { c->lr=0x80114D30u; dispatch(c,c->ctr); } // 80114D2C
  cmps(c,0,(int32_t)c->r[3],0); // 80114D30
  if (crb(c,2)) { goto L_80114D40; } // 80114D34
  W8(c->r[28]+0x000002A4u,c->r[29]); // 80114D38
  {uint32_t ea=c->r[28]+0x000002ACu; WF32(ea,c->f[31]);} // 80114D3C
L_80114D40:;
  c->r[27]=c->r[27]+0x00000001u; // 80114D40
  c->r[31]=c->r[31]+0x00000004u; // 80114D44
  cmpu(c,0,c->r[27],0x00000004u); // 80114D48
  if (crb(c,0)) { IRQCHK(c); goto L_80114D00; } // 80114D4C
  cmps(c,0,(int32_t)c->r[29],0); // 80114D50
  if (!crb(c,2)) { goto L_80114D6C; } // 80114D54
  cmps(c,0,(int32_t)c->r[30],0); // 80114D58
  if (crb(c,2)) { goto L_80114D74; } // 80114D5C
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80114D60
  c->lr=0x80114D68u; f_8010E254(c); // 80114D64
  goto L_80114D74; // 80114D68
L_80114D6C:;
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80114D6C
  c->lr=0x80114D74u; f_8010E1A8(c); // 80114D70
L_80114D74:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80114D74
  c->r[11]=c->r[1]+0x00000020u; // 80114D78
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80114D7C
  c->lr=0x80114D84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80114D80
  c->r[0]=R32(c->r[1]+0x00000034u); // 80114D84
  c->lr=c->r[0]; // 80114D88
  c->r[1]=c->r[1]+0x00000030u; // 80114D8C
  return; // 80114D90
}

// fn_80114D94
void f_80114D94(Ctx* __restrict c) {
  trace_call(0x80114D94u);
  c->r[0]=R32(c->r[3]+0x00000030u); // 80114D94
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80114D98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80114D9C
  c->r[3]=c->r[3]+c->r[0]; // 80114DA0
  c->r[3]=R32(c->r[3]+0x00000040u); // 80114DA4
  cmps(c,0,(int32_t)c->r[3],0); // 80114DA8
  if (crb(c,2)) return; // 80114DAC
  c->r[0]=R8(c->r[3]+0x000002A5u); // 80114DB0
  c->r[0]=cntlz(c->r[0]); // 80114DB4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80114DB8
  W8(c->r[3]+0x000002A5u,c->r[0]); // 80114DBC
  return; // 80114DC0
}

// fn_80114DC4
void f_80114DC4(Ctx* __restrict c) {
  trace_call(0x80114DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114DC4
  c->r[0]=0u+0x43300000u; // 80114DC8
  {uint32_t ea=c->r[2]+0xFFFF8958u; c->f[1]=RF64(ea);} // 80114DCC
  c->r[4]=R16(c->r[3]+0x00000032u); // 80114DD0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80114DD4
  c->r[4]=R8(c->r[3]+0x00000034u); // 80114DD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80114DDC
  c->r[0]=R8(c->r[3]+0x00000030u); // 80114DE0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80114DE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80114DE8
  c->r[3]=0u-c->r[4]; // 80114DEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80114DF0
  c->r[0]=c->r[3]|c->r[4]; // 80114DF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80114DF8
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 80114DFC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80114E00
  if (crb(c,2)) { goto L_80114E0C; } // 80114E04
  {uint32_t ea=c->r[3]+0x00000150u; WF32(ea,c->f[0]);} // 80114E08
L_80114E0C:;
  W8(c->r[3]+0x00000158u,c->r[0]); // 80114E0C
  c->r[1]=c->r[1]+0x00000010u; // 80114E10
  return; // 80114E14
}

// fn_80114E18
void f_80114E18(Ctx* __restrict c) {
  trace_call(0x80114E18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114E18
  c->r[0]=c->lr; // 80114E1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80114E20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80114E24
  c->r[31]=c->r[3]|c->r[3]; // 80114E28
  c->lr=0x80114E30u; f_8030554C(c); // 80114E2C
  c->r[4]=R32(c->r[31]+0x00000018u); // 80114E30
  c->r[0]=0u+0x00000000u; // 80114E34
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80114E38
  c->r[3]=0u+0x80420000u; // 80114E3C
  {uint32_t ea=c->r[2]+0xFFFF8964u; c->f[0]=c->ps1[0]=RF32(ea);} // 80114E40
  c->r[3]=c->r[3]+0x00002B30u; // 80114E44
  c->r[4]=c->r[4]|0x80000000u; // 80114E48
  c->r[5]=0u+0x00000001u; // 80114E4C
  W32(c->r[31]+0x000000B4u,c->r[3]); // 80114E50
  c->r[3]=c->r[31]|c->r[31]; // 80114E54
  W32(c->r[31]+0x00000018u,c->r[4]); // 80114E58
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[1]);} // 80114E5C
  {uint32_t ea=c->r[31]+0x0000027Cu; WF32(ea,c->f[1]);} // 80114E60
  W32(c->r[31]+0x00000268u,c->r[0]); // 80114E64
  {uint32_t ea=c->r[31]+0x00000288u; WF32(ea,c->f[0]);} // 80114E68
  W8(c->r[31]+0x00000284u,c->r[5]); // 80114E6C
  W8(c->r[31]+0x00000278u,c->r[0]); // 80114E70
  W8(c->r[31]+0x00000279u,c->r[0]); // 80114E74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80114E78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80114E7C
  c->lr=c->r[0]; // 80114E80
  c->r[1]=c->r[1]+0x00000010u; // 80114E84
  return; // 80114E88
}

// fn_80114E8C
void f_80114E8C(Ctx* __restrict c) {
  trace_call(0x80114E8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114E8C
  c->r[0]=c->lr; // 80114E90
  cmps(c,0,(int32_t)c->r[3],0); // 80114E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80114E98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80114E9C
  c->r[31]=c->r[4]|c->r[4]; // 80114EA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80114EA4
  c->r[30]=c->r[3]|c->r[3]; // 80114EA8
  if (crb(c,2)) { goto L_80114EC8; } // 80114EAC
  c->r[4]=0u+0x00000000u; // 80114EB0
  c->lr=0x80114EB8u; f_803055E0(c); // 80114EB4
  cmps(c,0,(int32_t)c->r[31],0); // 80114EB8
  if (!crb(c,1)) { goto L_80114EC8; } // 80114EBC
  c->r[3]=c->r[30]|c->r[30]; // 80114EC0
  c->lr=0x80114EC8u; f_80244DC0(c); // 80114EC4
L_80114EC8:;
  c->r[3]=c->r[30]|c->r[30]; // 80114EC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80114ECC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80114ED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80114ED4
  c->lr=c->r[0]; // 80114ED8
  c->r[1]=c->r[1]+0x00000010u; // 80114EDC
  return; // 80114EE0
}

// fn_80114EE4
void f_80114EE4(Ctx* __restrict c) {
  trace_call(0x80114EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80114EE4
  c->r[0]=c->lr; // 80114EE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80114EEC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80114EF0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80114EF4
  c->r[11]=c->r[1]+0x00000030u; // 80114EF8
  c->lr=0x80114F00u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80114EFC
  c->r[0]=0u+0x43300000u; // 80114F00
  W32(c->r[1]+0x00000008u,c->r[0]); // 80114F04
  c->r[27]=c->r[3]|c->r[3]; // 80114F08
  W32(c->r[1]+0x00000010u,c->r[0]); // 80114F0C
  c->lr=0x80114F14u; f_802D825C(c); // 80114F10
  c->r[31]=R32(c->r[27]+0x0000004Cu); // 80114F14
  c->r[30]=R32(c->r[31]+0x00000028u); // 80114F18
  cmps(c,0,(int32_t)c->r[30],0); // 80114F1C
  if (crb(c,2)) { goto L_80114F28; } // 80114F20
  goto L_80114F58; // 80114F24
L_80114F28:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80114F28
  cmps(c,0,(int32_t)c->r[3],0); // 80114F2C
  if (crb(c,2)) { goto L_80114F50; } // 80114F30
  c->r[4]=R32(c->r[31]+0x00000020u); // 80114F34
  c->r[5]=0u+0x00000000u; // 80114F38
  c->r[8]=R32(c->r[31]+0x00000024u); // 80114F3C
  c->r[6]=0u+0x00000000u; // 80114F40
  c->r[7]=0u+0x00000000u; // 80114F44
  c->lr=0x80114F4Cu; f_802BA9F4(c); // 80114F48
  goto L_80114F54; // 80114F4C
L_80114F50:;
  c->r[3]=0u+0x00000000u; // 80114F50
L_80114F54:;
  c->r[30]=c->r[3]|c->r[3]; // 80114F54
L_80114F58:;
  c->r[29]=R32(c->r[31]+0x00000038u); // 80114F58
  cmps(c,0,(int32_t)c->r[29],0); // 80114F5C
  if (crb(c,2)) { goto L_80114F68; } // 80114F60
  goto L_80114F98; // 80114F64
L_80114F68:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80114F68
  cmps(c,0,(int32_t)c->r[3],0); // 80114F6C
  if (crb(c,2)) { goto L_80114F90; } // 80114F70
  c->r[4]=R32(c->r[31]+0x00000030u); // 80114F74
  c->r[5]=0u+0x00000000u; // 80114F78
  c->r[8]=R32(c->r[31]+0x00000034u); // 80114F7C
  c->r[6]=0u+0x00000000u; // 80114F80
  c->r[7]=0u+0x00000000u; // 80114F84
  c->lr=0x80114F8Cu; f_802BA9F4(c); // 80114F88
  goto L_80114F94; // 80114F8C
L_80114F90:;
  c->r[3]=0u+0x00000000u; // 80114F90
L_80114F94:;
  c->r[29]=c->r[3]|c->r[3]; // 80114F94
L_80114F98:;
  {uint32_t ea=c->r[27]+0x00000288u; c->f[1]=c->ps1[1]=RF32(ea);} // 80114F98
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80114F9C
  fcmp(c,0,c->f[1],c->f[0]); // 80114FA0
  if (!crb(c,0)) { goto L_80114FB0; } // 80114FA4
  {uint32_t ea=c->r[27]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80114FA8
  {uint32_t ea=c->r[27]+0x00000288u; WF32(ea,c->f[0]);} // 80114FAC
L_80114FB0:;
  c->r[3]=R32(c->r[27]+0x00000268u); // 80114FB0
  cmps(c,0,(int32_t)c->r[3],0); // 80114FB4
  if (crb(c,2)) { goto L_801152D0; } // 80114FB8
  c->r[0]=R32(c->r[27]+0x00000274u); // 80114FBC
  cmps(c,0,(int32_t)c->r[0],0); // 80114FC0
  if (crb(c,2)) { goto L_80114FEC; } // 80114FC4
  cmps(c,0,(int32_t)c->r[0],1); // 80114FC8
  if (crb(c,2)) { goto L_80115068; } // 80114FCC
  cmps(c,0,(int32_t)c->r[0],3); // 80114FD0
  if (crb(c,2)) { goto L_801150F4; } // 80114FD4
  cmps(c,0,(int32_t)c->r[0],5); // 80114FD8
  if (crb(c,2)) { goto L_801151B4; } // 80114FDC
  cmps(c,0,(int32_t)c->r[0],4); // 80114FE0
  if (crb(c,2)) { goto L_80115230; } // 80114FE4
  goto L_801152D0; // 80114FE8
L_80114FEC:;
  c->r[0]=R32(c->r[27]+0x0000026Cu); // 80114FEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80114FF0
  {uint32_t ea=c->r[2]+0xFFFF8980u; c->f[2]=RF64(ea);} // 80114FF4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80114FF8
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80114FFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115000
  fcmp(c,0,c->f[3],c->f[0]); // 80115004
  if (!crb(c,0)) { goto L_80115018; } // 80115008
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011500C
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 80115010
  goto L_801152D0; // 80115014
L_80115018:;
  c->r[3]=R32(c->r[27]+0x00000270u); // 80115018
  W32(c->r[1]+0x00000014u,c->r[3]); // 8011501C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80115020
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115024
  fcmp(c,0,c->f[3],c->f[0]); // 80115028
  if (!crb(c,1)) { goto L_8011503C; } // 8011502C
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115030
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 80115034
  goto L_801152D0; // 80115038
L_8011503C:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8011503C
  c->r[0]=c->r[3]-c->r[0]; // 80115040
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80115044
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115048
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8011504C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80115050
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80115054
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115058
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011505C
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 80115060
  goto L_801152D0; // 80115064
L_80115068:;
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80115068
  c->lr=0x80115070u; f_80010AA8(c); // 8011506C
  c->f[3]=c->ps1[3]=S(c->f[31]/c->f[1]); // 80115070
  c->r[0]=R32(c->r[27]+0x0000026Cu); // 80115074
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80115078
  {uint32_t ea=c->r[2]+0xFFFF896Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011507C
  {uint32_t ea=c->r[2]+0xFFFF8980u; c->f[2]=RF64(ea);} // 80115080
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80115084
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80115088
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011508C
  fcmp(c,0,c->f[3],c->f[0]); // 80115090
  if (!crb(c,0)) { goto L_801150A4; } // 80115094
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115098
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 8011509C
  goto L_801152D0; // 801150A0
L_801150A4:;
  c->r[3]=R32(c->r[27]+0x00000270u); // 801150A4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801150A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801150AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801150B0
  fcmp(c,0,c->f[3],c->f[0]); // 801150B4
  if (!crb(c,1)) { goto L_801150C8; } // 801150B8
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 801150BC
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801150C0
  goto L_801152D0; // 801150C4
L_801150C8:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801150C8
  c->r[0]=c->r[3]-c->r[0]; // 801150CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801150D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801150D4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801150D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801150DC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801150E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801150E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801150E8
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801150EC
  goto L_801152D0; // 801150F0
L_801150F4:;
  c->r[28]=R32(c->r[3]+0x00000194u); // 801150F4
  cmps(c,0,(int32_t)c->r[28],0); // 801150F8
  if (crb(c,2)) { goto L_80115144; } // 801150FC
  c->r[12]=R32(c->r[28]+0x00000000u); // 80115100
  c->r[3]=c->r[28]|c->r[28]; // 80115104
  c->r[12]=R32(c->r[12]+0x00000044u); // 80115108
  c->ctr=c->r[12]; // 8011510C
  if (true) { c->lr=0x80115114u; dispatch(c,c->ctr); } // 80115110
  cmps(c,0,(int32_t)c->r[3],16); // 80115114
  if (!crb(c,2)) { goto L_80115144; } // 80115118
  c->r[3]=R32(c->r[28]+0x00000044u); // 8011511C
  c->r[0]=0u+0x00000001u; // 80115120
  {uint32_t ea=c->r[28]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80115124
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115128
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011512C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80115130
  W8(c->r[27]+0x00000279u,c->r[0]); // 80115134
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80115138
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 8011513C
  goto L_801152D0; // 80115140
L_80115144:;
  cmps(c,0,(int32_t)c->r[28],0); // 80115144
  if (crb(c,2)) { goto L_80115190; } // 80115148
  c->r[12]=R32(c->r[28]+0x00000000u); // 8011514C
  c->r[3]=c->r[28]|c->r[28]; // 80115150
  c->r[12]=R32(c->r[12]+0x00000044u); // 80115154
  c->ctr=c->r[12]; // 80115158
  if (true) { c->lr=0x80115160u; dispatch(c,c->ctr); } // 8011515C
  cmps(c,0,(int32_t)c->r[3],17); // 80115160
  if (!crb(c,2)) { goto L_80115190; } // 80115164
  c->r[3]=R32(c->r[28]+0x00000044u); // 80115168
  c->r[0]=0u+0x00000001u; // 8011516C
  {uint32_t ea=c->r[28]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80115170
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115174
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115178
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8011517C
  W8(c->r[27]+0x00000279u,c->r[0]); // 80115180
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80115184
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 80115188
  goto L_801152D0; // 8011518C
L_80115190:;
  c->r[0]=R8(c->r[27]+0x00000279u); // 80115190
  cmps(c,0,(int32_t)c->r[0],0); // 80115194
  if (crb(c,2)) { goto L_801151A8; } // 80115198
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011519C
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801151A0
  goto L_801152D0; // 801151A4
L_801151A8:;
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 801151A8
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801151AC
  goto L_801152D0; // 801151B0
L_801151B4:;
  c->r[0]=R32(c->r[27]+0x0000026Cu); // 801151B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801151B8
  {uint32_t ea=c->r[2]+0xFFFF8980u; c->f[2]=RF64(ea);} // 801151BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801151C0
  {uint32_t ea=c->r[3]+0x00000474u; c->f[3]=c->ps1[3]=RF32(ea);} // 801151C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801151C8
  fcmp(c,0,c->f[3],c->f[0]); // 801151CC
  if (!crb(c,0)) { goto L_801151E0; } // 801151D0
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[0]=c->ps1[0]=RF32(ea);} // 801151D4
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801151D8
  goto L_801152D0; // 801151DC
L_801151E0:;
  c->r[3]=R32(c->r[27]+0x00000270u); // 801151E0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801151E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801151E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801151EC
  fcmp(c,0,c->f[3],c->f[0]); // 801151F0
  if (!crb(c,1)) { goto L_80115204; } // 801151F4
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 801151F8
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801151FC
  goto L_801152D0; // 80115200
L_80115204:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80115204
  c->r[0]=c->r[3]-c->r[0]; // 80115208
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8011520C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115210
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80115214
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80115218
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 8011521C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115220
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80115224
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 80115228
  goto L_801152D0; // 8011522C
L_80115230:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80115230
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[4]=c->ps1[4]=RF32(ea);} // 80115234
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80115238
  {uint32_t ea=c->r[4]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011523C
  fcmp(c,0,c->f[4],c->f[0]); // 80115240
  if (!crb(c,2)) { goto L_80115250; } // 80115244
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[4]);} // 80115248
  goto L_801152D0; // 8011524C
L_80115250:;
  {uint32_t ea=c->r[3]+0x00000474u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115250
  c->r[0]=R32(c->r[27]+0x0000026Cu); // 80115254
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 80115258
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8011525C
  {uint32_t ea=c->r[2]+0xFFFF896Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80115260
  {uint32_t ea=c->r[2]+0xFFFF8980u; c->f[2]=RF64(ea);} // 80115264
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80115268
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8011526C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115270
  fcmp(c,0,c->f[3],c->f[0]); // 80115274
  if (!crb(c,0)) { goto L_80115284; } // 80115278
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[4]);} // 8011527C
  goto L_801152D0; // 80115280
L_80115284:;
  c->r[3]=R32(c->r[27]+0x00000270u); // 80115284
  W32(c->r[1]+0x00000014u,c->r[3]); // 80115288
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8011528C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115290
  fcmp(c,0,c->f[3],c->f[0]); // 80115294
  if (!crb(c,1)) { goto L_801152A8; } // 80115298
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011529C
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801152A0
  goto L_801152D0; // 801152A4
L_801152A8:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801152A8
  c->r[0]=c->r[3]-c->r[0]; // 801152AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801152B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801152B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801152B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801152BC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801152C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801152C4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801152C8
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801152CC
L_801152D0:;
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 801152D0
  c->r[28]=0u+0x00000000u; // 801152D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801152D8
  if (crb(c,2)) { goto L_801153B0; } // 801152DC
  c->r[26]=R32(c->r[27]+0x0000009Cu); // 801152E0
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 801152E4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801152E8
  c->r[0]=c->r[3]+0x3FFE0000u; // 801152EC
  cmpu(c,0,c->r[0],0x0000E12Cu); // 801152F0
  if (!crb(c,2)) { goto L_801153E4; } // 801152F4
  cmps(c,0,(int32_t)c->r[26],0); // 801152F8
  if (crb(c,2)) { goto L_801153E4; } // 801152FC
  c->r[3]=c->r[26]|c->r[26]; // 80115300
  c->lr=0x80115308u; f_8013385C(c); // 80115304
  cmps(c,0,(int32_t)c->r[3],0); // 80115308
  if (crb(c,2)) { goto L_801153E4; } // 8011530C
  c->r[0]=R8(c->r[31]+0x0000003Cu); // 80115310
  c->r[28]=R8(c->r[26]+0x000002A4u); // 80115314
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80115318
  if (crb(c,2)) { goto L_80115368; } // 8011531C
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80115320
  c->r[0]=R8(c->r[3]+0x000000ACu); // 80115324
  cmps(c,0,(int32_t)c->r[0],0); // 80115328
  if (crb(c,2)) { goto L_801153E4; } // 8011532C
  c->r[3]=c->r[26]|c->r[26]; // 80115330
  c->lr=0x80115338u; f_8013385C(c); // 80115334
  c->r[4]=R32(c->r[3]+0x00000240u); // 80115338
  c->r[3]=c->r[26]|c->r[26]; // 8011533C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80115340
  c->r[0]=cntlz(c->r[0]); // 80115344
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80115348
  W8(c->r[27]+0x00000278u,c->r[0]); // 8011534C
  c->lr=0x80115354u; f_8013385C(c); // 80115350
  {uint32_t ea=c->r[3]+0x0000024Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80115354
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115358
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011535C
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 80115360
  goto L_801153E4; // 80115364
L_80115368:;
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 80115368
  c->r[0]=R8(c->r[3]+0x000000ACu); // 8011536C
  cmps(c,0,(int32_t)c->r[0],0); // 80115370
  if (!crb(c,2)) { goto L_801153E4; } // 80115374
  c->r[3]=c->r[26]|c->r[26]; // 80115378
  c->lr=0x80115380u; f_8013385C(c); // 8011537C
  c->r[4]=R32(c->r[3]+0x00000240u); // 80115380
  c->r[3]=c->r[26]|c->r[26]; // 80115384
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80115388
  c->r[0]=cntlz(c->r[0]); // 8011538C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80115390
  W8(c->r[27]+0x00000278u,c->r[0]); // 80115394
  c->lr=0x8011539Cu; f_8013385C(c); // 80115398
  {uint32_t ea=c->r[3]+0x0000024Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011539C
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 801153A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801153A4
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[0]);} // 801153A8
  goto L_801153E4; // 801153AC
L_801153B0:;
  c->r[4]=R32(c->r[13]+0xFFFFE134u); // 801153B0
  cmps(c,0,(int32_t)c->r[4],0); // 801153B4
  if (crb(c,2)) { goto L_801153E4; } // 801153B8
  c->r[3]=R32(c->r[4]+0x00000040u); // 801153BC
  c->r[28]=0u+0x00000000u; // 801153C0
  c->r[4]=R32(c->r[4]+0x00000044u); // 801153C4
  c->r[0]=R8(c->r[3]+0x000002A4u); // 801153C8
  cmps(c,0,(int32_t)c->r[0],0); // 801153CC
  if (!crb(c,2)) { goto L_801153E0; } // 801153D0
  c->r[0]=R8(c->r[4]+0x000002A4u); // 801153D4
  cmps(c,0,(int32_t)c->r[0],0); // 801153D8
  if (crb(c,2)) { goto L_801153E4; } // 801153DC
L_801153E0:;
  c->r[28]=0u+0x00000001u; // 801153E0
L_801153E4:;
  {uint32_t ea=c->r[27]+0x0000027Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801153E4
  cmps(c,0,(int32_t)c->r[28],0); // 801153E8
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 801153EC
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[0]=c->ps1[0]=RF32(ea);} // 801153F0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 801153F4
  c->f[2]=(c->f[3]>=0.0)?c->f[2]:c->f[1]; // 801153F8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 801153FC
  c->f[2]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 80115400
  {uint32_t ea=c->r[27]+0x0000027Cu; WF32(ea,c->f[2]);} // 80115404
  if (crb(c,2)) { goto L_80115480; } // 80115408
  c->r[3]=R8(c->r[27]+0x00000278u); // 8011540C
  c->r[0]=R8(c->r[27]+0x00000284u); // 80115410
  cmpu(c,0,c->r[3],c->r[0]); // 80115414
  if (crb(c,2)) { goto L_801154A0; } // 80115418
  cmps(c,0,(int32_t)c->r[3],0); // 8011541C
  if (crb(c,2)) { goto L_8011545C; } // 80115420
  c->r[12]=R32(c->r[27]+0x000000B4u); // 80115424
  c->r[3]=c->r[27]|c->r[27]; // 80115428
  c->r[4]=0u+0x00000001u; // 8011542C
  c->r[5]=0u+0x00000000u; // 80115430
  c->r[12]=R32(c->r[12]+0x00000060u); // 80115434
  c->ctr=c->r[12]; // 80115438
  if (true) { c->lr=0x80115440u; dispatch(c,c->ctr); } // 8011543C
  {uint32_t ea=c->r[2]+0xFFFF8970u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115440
  c->r[3]=c->r[27]|c->r[27]; // 80115444
  c->r[4]=0u+0x0000007Fu; // 80115448
  c->r[5]=0u+0x00000002u; // 8011544C
  c->r[6]=0u+0x00000000u; // 80115450
  c->lr=0x80115458u; f_802F0738(c); // 80115454
  goto L_80115474; // 80115458
L_8011545C:;
  {uint32_t ea=c->r[2]+0xFFFF8970u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011545C
  c->r[3]=c->r[27]|c->r[27]; // 80115460
  c->r[4]=0u+0x00000000u; // 80115464
  c->r[5]=0u+0x00000002u; // 80115468
  c->r[6]=0u+0x00000000u; // 8011546C
  c->lr=0x80115474u; f_802F0738(c); // 80115470
L_80115474:;
  c->r[0]=R8(c->r[27]+0x00000278u); // 80115474
  W8(c->r[27]+0x00000284u,c->r[0]); // 80115478
  goto L_801154A0; // 8011547C
L_80115480:;
  {uint32_t ea=c->r[2]+0xFFFF8970u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115480
  c->r[3]=c->r[27]|c->r[27]; // 80115484
  c->r[4]=0u+0x00000000u; // 80115488
  c->r[5]=0u+0x00000002u; // 8011548C
  c->r[6]=0u+0x00000000u; // 80115490
  c->lr=0x80115498u; f_802F0738(c); // 80115494
  c->r[0]=0u+0x00000000u; // 80115498
  W8(c->r[27]+0x00000284u,c->r[0]); // 8011549C
L_801154A0:;
  {uint32_t ea=c->r[27]+0x00000280u; c->f[1]=c->ps1[1]=RF32(ea);} // 801154A0
  {uint32_t ea=c->r[27]+0x0000027Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801154A4
  fcmp(c,0,c->f[1],c->f[0]); // 801154A8
  if (crb(c,2)) { goto L_801155C4; } // 801154AC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801154B0
  {uint32_t ea=c->r[2]+0xFFFF8974u; c->f[0]=c->ps1[0]=RF32(ea);} // 801154B4
  c->f[2]=std::fabs(c->f[3]); // 801154B8
  fcmp(c,0,c->f[2],c->f[0]); // 801154BC
  if (!crb(c,1)) { goto L_801154E4; } // 801154C0
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 801154C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801154C8
  if (!crb(c,2)) { goto L_801154E4; } // 801154CC
  {uint32_t ea=c->r[2]+0xFFFF8978u; c->f[0]=c->ps1[0]=RF32(ea);} // 801154D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 801154D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801154D8
  {uint32_t ea=c->r[27]+0x00000280u; WF32(ea,c->f[0]);} // 801154DC
  goto L_801154EC; // 801154E0
L_801154E4:;
  {uint32_t ea=c->r[27]+0x0000027Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801154E4
  {uint32_t ea=c->r[27]+0x00000280u; WF32(ea,c->f[0]);} // 801154E8
L_801154EC:;
  {uint32_t ea=c->r[27]+0x00000288u; c->f[1]=c->ps1[1]=RF32(ea);} // 801154EC
  cmps(c,0,(int32_t)c->r[29],0); // 801154F0
  {uint32_t ea=c->r[27]+0x00000280u; c->f[3]=c->ps1[3]=RF32(ea);} // 801154F4
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[3]); // 801154F8
  if (crb(c,2)) { goto L_8011555C; } // 801154FC
  {uint32_t ea=c->r[27]+0x0000027Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80115500
  fcmp(c,0,c->f[0],c->f[3]); // 80115504
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80115508
  if (!crb(c,2)) { goto L_80115534; } // 8011550C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80115510
  c->r[3]=c->r[27]|c->r[27]; // 80115514
  c->lr=0x8011551Cu; f_802EF8A8(c); // 80115518
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011551C
  c->r[3]=c->r[27]|c->r[27]; // 80115520
  {uint32_t ea=c->r[27]+0x0000027Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80115524
  c->f[2]=c->f[1]; // 80115528
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011552C
  c->lr=0x80115534u; f_80306294(c); // 80115530
L_80115534:;
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115534
  c->r[3]=c->r[29]|c->r[29]; // 80115538
  {uint32_t ea=c->r[27]+0x00000280u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011553C
  c->f[2]=c->f[1]; // 80115540
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[4]=c->ps1[4]=RF32(ea);} // 80115544
  c->lr=0x8011554Cu; f_80306294(c); // 80115548
  c->f[1]=c->f[31]; // 8011554C
  c->r[3]=c->r[29]|c->r[29]; // 80115550
  c->lr=0x80115558u; f_802EF8A8(c); // 80115554
  goto L_8011557C; // 80115558
L_8011555C:;
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011555C
  c->r[3]=c->r[27]|c->r[27]; // 80115560
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[4]=c->ps1[4]=RF32(ea);} // 80115564
  c->f[2]=c->f[1]; // 80115568
  c->lr=0x80115570u; f_80306294(c); // 8011556C
  c->f[1]=c->f[31]; // 80115570
  c->r[3]=c->r[27]|c->r[27]; // 80115574
  c->lr=0x8011557Cu; f_802EF8A8(c); // 80115578
L_8011557C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8011557C
  if (crb(c,2)) { goto L_801155E4; } // 80115580
  c->r[0]=R8(c->r[27]+0x00000284u); // 80115584
  cmps(c,0,(int32_t)c->r[0],0); // 80115588
  if (crb(c,2)) { goto L_801155E4; } // 8011558C
  {uint32_t ea=c->r[2]+0xFFFF8970u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115590
  c->r[3]=c->r[30]|c->r[30]; // 80115594
  c->r[4]=0u+0x0000007Fu; // 80115598
  c->r[5]=0u+0x00000002u; // 8011559C
  c->r[6]=0u+0x00000000u; // 801155A0
  c->lr=0x801155A8u; f_802F0738(c); // 801155A4
  c->f[1]=c->f[31]; // 801155A8
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[2]=c->ps1[2]=RF32(ea);} // 801155AC
  c->r[3]=c->r[30]|c->r[30]; // 801155B0
  c->r[4]=0u+0x00000000u; // 801155B4
  c->r[5]=0u+0x00000000u; // 801155B8
  c->lr=0x801155C0u; f_802F0A30(c); // 801155BC
  goto L_801155E4; // 801155C0
L_801155C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801155C4
  if (crb(c,2)) { goto L_801155E4; } // 801155C8
  {uint32_t ea=c->r[2]+0xFFFF897Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801155CC
  c->r[3]=c->r[30]|c->r[30]; // 801155D0
  c->r[4]=0u+0x00000000u; // 801155D4
  c->r[5]=0u+0x00000002u; // 801155D8
  c->r[6]=0u+0x00000000u; // 801155DC
  c->lr=0x801155E4u; f_802F0738(c); // 801155E0
L_801155E4:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801155E4
  c->r[11]=c->r[1]+0x00000030u; // 801155E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801155EC
  c->lr=0x801155F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801155F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801155F4
  c->lr=c->r[0]; // 801155F8
  c->r[1]=c->r[1]+0x00000040u; // 801155FC
  return; // 80115600
}

// fn_80115604
void f_80115604(Ctx* __restrict c) {
  trace_call(0x80115604u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115604
  c->r[0]=c->lr; // 80115608
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011560C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115610
  c->r[31]=c->r[3]|c->r[3]; // 80115614
  c->r[4]=R32(c->r[13]+0xFFFFE168u); // 80115618
  c->r[0]=R8(c->r[4]+0x00000010u); // 8011561C
  cmps(c,0,(int32_t)c->r[0],0); // 80115620
  if (!crb(c,2)) { goto L_80115640; } // 80115624
  c->r[3]=R32(c->r[13]+0xFFFFE150u); // 80115628
  c->lr=0x80115630u; f_8002F140(c); // 8011562C
  cmps(c,0,(int32_t)c->r[3],0); // 80115630
  if (!crb(c,2)) { goto L_80115640; } // 80115634
  c->r[3]=c->r[31]|c->r[31]; // 80115638
  c->lr=0x80115640u; f_80305A38(c); // 8011563C
L_80115640:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115640
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115644
  c->lr=c->r[0]; // 80115648
  c->r[1]=c->r[1]+0x00000010u; // 8011564C
  return; // 80115650
}

// fn_80115654
void f_80115654(Ctx* __restrict c) {
  trace_call(0x80115654u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115654
  c->r[0]=c->lr; // 80115658
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011565C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115660
  W32(c->r[1]+0x00000008u,c->r[30]); // 80115664
  c->r[30]=c->r[3]|c->r[3]; // 80115668
  c->r[31]=R32(c->r[3]+0x00000038u); // 8011566C
  cmps(c,0,(int32_t)c->r[31],0); // 80115670
  if (crb(c,2)) { goto L_8011567C; } // 80115674
  goto L_801156AC; // 80115678
L_8011567C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011567C
  cmps(c,0,(int32_t)c->r[3],0); // 80115680
  if (crb(c,2)) { goto L_801156A4; } // 80115684
  c->r[4]=R32(c->r[30]+0x00000030u); // 80115688
  c->r[5]=0u+0x00000000u; // 8011568C
  c->r[8]=R32(c->r[30]+0x00000034u); // 80115690
  c->r[6]=0u+0x00000000u; // 80115694
  c->r[7]=0u+0x00000000u; // 80115698
  c->lr=0x801156A0u; f_802BA9F4(c); // 8011569C
  goto L_801156A8; // 801156A0
L_801156A4:;
  c->r[3]=0u+0x00000000u; // 801156A4
L_801156A8:;
  c->r[31]=c->r[3]|c->r[3]; // 801156A8
L_801156AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801156AC
  if (crb(c,2)) { goto L_80115774; } // 801156B0
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 801156B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801156B8
  if (crb(c,2)) { goto L_8011576C; } // 801156BC
  c->r[3]=R32(c->r[30]+0x00000048u); // 801156C0
  cmps(c,0,(int32_t)c->r[3],0); // 801156C4
  if (crb(c,2)) { goto L_801156D0; } // 801156C8
  goto L_801156FC; // 801156CC
L_801156D0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801156D0
  cmps(c,0,(int32_t)c->r[3],0); // 801156D4
  if (crb(c,2)) { goto L_801156F8; } // 801156D8
  c->r[4]=R32(c->r[30]+0x00000040u); // 801156DC
  c->r[5]=0u+0x00000000u; // 801156E0
  c->r[8]=R32(c->r[30]+0x00000044u); // 801156E4
  c->r[6]=0u+0x00000000u; // 801156E8
  c->r[7]=0u+0x00000000u; // 801156EC
  c->lr=0x801156F4u; f_802BA9F4(c); // 801156F0
  goto L_801156FC; // 801156F4
L_801156F8:;
  c->r[3]=0u+0x00000000u; // 801156F8
L_801156FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801156FC
  if (crb(c,2)) { goto L_80115730; } // 80115700
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80115704
  goto L_80115720; // 80115708
L_8011570C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8011570C
  cmps(c,0,(int32_t)c->r[0],17); // 80115710
  if (!crb(c,2)) { goto L_8011571C; } // 80115714
  goto L_80115734; // 80115718
L_8011571C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8011571C
L_80115720:;
  cmps(c,0,(int32_t)c->r[3],0); // 80115720
  if (!crb(c,2)) { IRQCHK(c); goto L_8011570C; } // 80115724
  c->r[3]=0u+0x00000000u; // 80115728
  goto L_80115734; // 8011572C
L_80115730:;
  c->r[3]=0u+0x00000000u; // 80115730
L_80115734:;
  cmps(c,0,(int32_t)c->r[3],0); // 80115734
  if (crb(c,2)) { goto L_80115774; } // 80115738
  W32(c->r[31]+0x00000268u,c->r[3]); // 8011573C
  c->r[3]=0u+0x00000001u; // 80115740
  c->r[0]=0u+0x00000000u; // 80115744
  c->r[4]=R32(c->r[30]+0x00000050u); // 80115748
  W32(c->r[31]+0x0000026Cu,c->r[4]); // 8011574C
  c->r[4]=R32(c->r[30]+0x00000054u); // 80115750
  W32(c->r[31]+0x00000270u,c->r[4]); // 80115754
  c->r[4]=R32(c->r[30]+0x0000004Cu); // 80115758
  W32(c->r[31]+0x00000274u,c->r[4]); // 8011575C
  W8(c->r[31]+0x00000278u,c->r[3]); // 80115760
  W8(c->r[31]+0x00000279u,c->r[0]); // 80115764
  goto L_80115774; // 80115768
L_8011576C:;
  c->r[0]=0u+0x00000000u; // 8011576C
  W8(c->r[31]+0x00000278u,c->r[0]); // 80115770
L_80115774:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115778
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011577C
  c->lr=c->r[0]; // 80115780
  c->r[1]=c->r[1]+0x00000010u; // 80115784
  return; // 80115788
}

// fn_8011578C
void f_8011578C(Ctx* __restrict c) {
  trace_call(0x8011578Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011578C
  c->r[0]=c->lr; // 80115790
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115798
  c->r[31]=c->r[3]|c->r[3]; // 8011579C
  c->lr=0x801157A4u; f_80301EAC(c); // 801157A0
  c->r[0]=R32(c->r[31]+0x00000018u); // 801157A4
  c->r[3]=0u+0x80420000u; // 801157A8
  c->r[3]=c->r[3]+0x00002C08u; // 801157AC
  W32(c->r[31]+0x000000B4u,c->r[3]); // 801157B0
  c->r[0]=c->r[0]|0x80000000u; // 801157B4
  c->r[4]=0u+0x00000000u; // 801157B8
  W32(c->r[31]+0x00000018u,c->r[0]); // 801157BC
  c->r[3]=c->r[31]|c->r[31]; // 801157C0
  c->r[5]=0u+0x00000000u; // 801157C4
  c->r[12]=R32(c->r[31]+0x000000B4u); // 801157C8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801157CC
  c->ctr=c->r[12]; // 801157D0
  if (true) { c->lr=0x801157D8u; dispatch(c,c->ctr); } // 801157D4
  c->r[0]=0u+0x00000000u; // 801157D8
  W32(c->r[31]+0x0000022Cu,c->r[0]); // 801157DC
  c->r[3]=c->r[31]|c->r[31]; // 801157E0
  W32(c->r[31]+0x00000230u,c->r[0]); // 801157E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801157E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801157EC
  c->lr=c->r[0]; // 801157F0
  c->r[1]=c->r[1]+0x00000010u; // 801157F4
  return; // 801157F8
}

// fn_801157FC
void f_801157FC(Ctx* __restrict c) {
  trace_call(0x801157FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801157FC
  c->r[0]=c->lr; // 80115800
  W32(c->r[1]+0x00000074u,c->r[0]); // 80115804
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80115808
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8011580C
  {uint32_t ea=c->r[2]+0xFFFF8988u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115810
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80115814
  W32(c->r[1]+0x00000058u,c->r[30]); // 80115818
  W32(c->r[1]+0x00000054u,c->r[29]); // 8011581C
  c->r[29]=c->r[3]|c->r[3]; // 80115820
  W32(c->r[1]+0x00000050u,c->r[28]); // 80115824
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 80115828
  c->r[28]=R32(c->r[3]+0x0000004Cu); // 8011582C
  {uint32_t ea=c->r[4]+0x00000150u; c->f[31]=c->ps1[31]=RF32(ea);} // 80115830
  fcmp(c,0,c->f[0],c->f[31]); // 80115834
  if (crb(c,2)) { goto L_80115A04; } // 80115838
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011583C
  c->r[4]=0u+0x00000001u; // 80115840
  c->r[5]=0u+0x00000000u; // 80115844
  c->r[12]=R32(c->r[12]+0x00000060u); // 80115848
  c->ctr=c->r[12]; // 8011584C
  if (true) { c->lr=0x80115854u; dispatch(c,c->ctr); } // 80115850
  c->f[1]=c->f[31]; // 80115854
  c->lr=0x8011585Cu; f_803ADC14(c); // 80115858
  c->r[4]=0u+0x88890000u; // 8011585C
  c->r[31]=c->r[3]|c->r[3]; // 80115860
  c->r[0]=c->r[4]+0xFFFF8889u; // 80115864
  c->r[3]=c->r[1]+0x00000010u; // 80115868
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[31])>>32); // 8011586C
  c->r[4]=0u+0x80420000u; // 80115870
  c->r[6]=0u+0x0000003Au; // 80115874
  c->r[4]=c->r[4]+0x00002BF8u; // 80115878
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011587C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 80115880
  c->r[7]=c->r[31]-c->r[0]; // 80115884
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80115888
  c->lr=0x80115890u; f_8024EE90(c); // 8011588C
  c->r[12]=R32(c->r[29]+0x000000B4u); // 80115890
  c->r[3]=c->r[29]|c->r[29]; // 80115894
  c->r[4]=c->r[1]+0x00000010u; // 80115898
  c->r[12]=R32(c->r[12]+0x000000C4u); // 8011589C
  c->ctr=c->r[12]; // 801158A0
  if (true) { c->lr=0x801158A8u; dispatch(c,c->ctr); } // 801158A4
  c->r[3]=R8(c->r[28]+0x0000001Cu); // 801158A8
  c->r[0]=0u+0x00000005u; // 801158AC
  c->r[6]=R8(c->r[28]+0x0000001Du); // 801158B0
  c->r[7]=c->r[28]+0x00000020u; // 801158B4
  c->r[5]=R8(c->r[28]+0x0000001Eu); // 801158B8
  c->r[30]=0u+0x00000000u; // 801158BC
  c->r[4]=R8(c->r[28]+0x0000001Fu); // 801158C0
  W8(c->r[1]+0x00000008u,c->r[3]); // 801158C4
  c->r[3]=0u+0x43300000u; // 801158C8
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[2]=RF64(ea);} // 801158CC
  W8(c->r[1]+0x00000009u,c->r[6]); // 801158D0
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801158D4
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801158D8
  c->ctr=c->r[0]; // 801158DC
L_801158E0:;
  W32(c->r[1]+0x00000044u,c->r[31]); // 801158E0
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801158E4
  W32(c->r[1]+0x00000040u,c->r[3]); // 801158E8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 801158EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801158F0
  fcmp(c,0,c->f[0],c->f[1]); // 801158F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801158F8
  if (!crb(c,2)) { goto L_80115918; } // 801158FC
  cmps(c,0,(int32_t)c->r[30],0); // 80115900
  if (crb(c,2)) { goto L_80115914; } // 80115904
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115908
  fcmp(c,0,c->f[1],c->f[0]); // 8011590C
  if (!crb(c,0)) { goto L_80115918; } // 80115910
L_80115914:;
  c->r[30]=c->r[7]|c->r[7]; // 80115914
L_80115918:;
  c->r[7]=c->r[7]+0x00000020u; // 80115918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801158E0; } // 8011591C
  cmps(c,0,(int32_t)c->r[30],0); // 80115920
  if (crb(c,2)) { goto L_801159D0; } // 80115924
  c->r[0]=R32(c->r[29]+0x0000022Cu); // 80115928
  c->r[5]=R8(c->r[30]+0x00000004u); // 8011592C
  c->r[4]=R8(c->r[30]+0x00000005u); // 80115930
  cmpu(c,0,c->r[31],c->r[0]); // 80115934
  c->r[3]=R8(c->r[30]+0x00000006u); // 80115938
  c->r[0]=R8(c->r[30]+0x00000007u); // 8011593C
  W8(c->r[1]+0x00000008u,c->r[5]); // 80115940
  W8(c->r[1]+0x00000009u,c->r[4]); // 80115944
  W8(c->r[1]+0x0000000Au,c->r[3]); // 80115948
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8011594C
  if (crb(c,2)) { goto L_801159D0; } // 80115950
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80115954
  cmps(c,0,(int32_t)c->r[3],0); // 80115958
  if (crb(c,2)) { goto L_801159D0; } // 8011595C
  c->r[0]=divwu(c->r[31],c->r[3]); // 80115960
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80115964
  c->r[0]=c->r[31]-c->r[0]; cr0(c,c->r[0]); // 80115968
  if (!crb(c,2)) { goto L_801159D0; } // 8011596C
  c->r[4]=R8(c->r[30]+0x00000008u); // 80115970
  c->r[3]=c->r[29]|c->r[29]; // 80115974
  c->r[5]=R8(c->r[30]+0x00000009u); // 80115978
  c->r[7]=0u+0x00000000u; // 8011597C
  c->r[6]=R8(c->r[30]+0x0000000Au); // 80115980
  c->r[8]=0u+0x00000000u; // 80115984
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115988
  c->lr=0x80115990u; f_802F07A0(c); // 8011598C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80115990
  c->r[3]=c->r[29]|c->r[29]; // 80115994
  {uint32_t ea=c->r[30]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80115998
  c->r[4]=0u+0x00000000u; // 8011599C
  c->f[2]=c->f[1]; // 801159A0
  c->r[5]=0u+0x00000000u; // 801159A4
  c->lr=0x801159ACu; f_802F0BE0(c); // 801159A8
  c->r[3]=R32(c->r[30]+0x00000018u); // 801159AC
  cmps(c,0,(int32_t)c->r[3],0); // 801159B0
  if (crb(c,2)) { goto L_801159CC; } // 801159B4
  c->r[4]=0u+0x000000FFu; // 801159B8
  c->r[5]=0u+0x00000000u; // 801159BC
  c->r[6]=0u+0x00000000u; // 801159C0
  c->r[7]=0u+0x00000000u; // 801159C4
  c->lr=0x801159CCu; f_8010C430(c); // 801159C8
L_801159CC:;
  W32(c->r[29]+0x0000022Cu,c->r[31]); // 801159CC
L_801159D0:;
  c->r[0]=R32(c->r[29]+0x00000230u); // 801159D0
  cmpu(c,0,c->r[30],c->r[0]); // 801159D4
  if (crb(c,2)) { goto L_80115A1C; } // 801159D8
  c->r[4]=R8(c->r[1]+0x00000008u); // 801159DC
  c->r[3]=c->r[29]|c->r[29]; // 801159E0
  c->r[5]=R8(c->r[1]+0x00000009u); // 801159E4
  c->r[7]=0u+0x00000000u; // 801159E8
  c->r[6]=R8(c->r[1]+0x0000000Au); // 801159EC
  c->r[8]=0u+0x00000000u; // 801159F0
  {uint32_t ea=c->r[2]+0xFFFF898Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801159F4
  c->lr=0x801159FCu; f_802F0648(c); // 801159F8
  W32(c->r[29]+0x00000230u,c->r[30]); // 801159FC
  goto L_80115A1C; // 80115A00
L_80115A04:;
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80115A04
  c->r[4]=0u+0x00000000u; // 80115A08
  c->r[5]=0u+0x00000000u; // 80115A0C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80115A10
  c->ctr=c->r[12]; // 80115A14
  if (true) { c->lr=0x80115A1Cu; dispatch(c,c->ctr); } // 80115A18
L_80115A1C:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80115A1C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80115A20
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80115A24
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80115A28
  c->r[30]=R32(c->r[1]+0x00000058u); // 80115A2C
  c->r[29]=R32(c->r[1]+0x00000054u); // 80115A30
  c->r[28]=R32(c->r[1]+0x00000050u); // 80115A34
  c->lr=c->r[0]; // 80115A38
  c->r[1]=c->r[1]+0x00000070u; // 80115A3C
  return; // 80115A40
}

// fn_80115A44
void f_80115A44(Ctx* __restrict c) {
  trace_call(0x80115A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115A44
  c->r[0]=c->lr; // 80115A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115A50
  c->r[31]=c->r[3]|c->r[3]; // 80115A54
  c->r[3]=R32(c->r[13]+0xFFFFE150u); // 80115A58
  c->lr=0x80115A60u; f_8002F140(c); // 80115A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80115A60
  if (!crb(c,2)) { goto L_80115A70; } // 80115A64
  c->r[3]=c->r[31]|c->r[31]; // 80115A68
  c->lr=0x80115A70u; f_80304A5C(c); // 80115A6C
L_80115A70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115A70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115A74
  c->lr=c->r[0]; // 80115A78
  c->r[1]=c->r[1]+0x00000010u; // 80115A7C
  return; // 80115A80
}

// fn_80115A84
void f_80115A84(Ctx* __restrict c) {
  trace_call(0x80115A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115A84
  c->r[0]=c->lr; // 80115A88
  cmps(c,0,(int32_t)c->r[3],0); // 80115A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115A94
  c->r[31]=c->r[4]|c->r[4]; // 80115A98
  W32(c->r[1]+0x00000008u,c->r[30]); // 80115A9C
  c->r[30]=c->r[3]|c->r[3]; // 80115AA0
  if (crb(c,2)) { goto L_80115AC0; } // 80115AA4
  c->r[4]=0u+0x00000000u; // 80115AA8
  c->lr=0x80115AB0u; f_80302058(c); // 80115AAC
  cmps(c,0,(int32_t)c->r[31],0); // 80115AB0
  if (!crb(c,1)) { goto L_80115AC0; } // 80115AB4
  c->r[3]=c->r[30]|c->r[30]; // 80115AB8
  c->lr=0x80115AC0u; f_80244DC0(c); // 80115ABC
L_80115AC0:;
  c->r[3]=c->r[30]|c->r[30]; // 80115AC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115AC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80115AC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115ACC
  c->lr=c->r[0]; // 80115AD0
  c->r[1]=c->r[1]+0x00000010u; // 80115AD4
  return; // 80115AD8
}

// fn_80115ADC
void f_80115ADC(Ctx* __restrict c) {
  trace_call(0x80115ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115ADC
  c->r[0]=c->lr; // 80115AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115AE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115AE8
  c->r[31]=c->r[3]|c->r[3]; // 80115AEC
  c->lr=0x80115AF4u; f_801408F8(c); // 80115AF0
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115AF4
  c->r[4]=0u+0x80420000u; // 80115AF8
  c->r[0]=0u+0x00000000u; // 80115AFC
  W32(c->r[31]+0x0000018Cu,c->r[0]); // 80115B00
  c->r[4]=c->r[4]+0x00002D00u; // 80115B04
  c->r[3]=c->r[31]|c->r[31]; // 80115B08
  W32(c->r[31]+0x00000020u,c->r[4]); // 80115B0C
  W32(c->r[31]+0x00000190u,c->r[0]); // 80115B10
  W32(c->r[31]+0x000001A0u,c->r[0]); // 80115B14
  W32(c->r[31]+0x000001A4u,c->r[0]); // 80115B18
  W32(c->r[31]+0x00000194u,c->r[0]); // 80115B1C
  W32(c->r[31]+0x00000198u,c->r[0]); // 80115B20
  W8(c->r[31]+0x000001A9u,c->r[0]); // 80115B24
  {uint32_t ea=c->r[31]+0x000001ACu; WF32(ea,c->f[0]);} // 80115B28
  W32(c->r[31]+0x000001B4u,c->r[0]); // 80115B2C
  W32(c->r[31]+0x000001BCu,c->r[0]); // 80115B30
  W32(c->r[31]+0x000001C0u,c->r[0]); // 80115B34
  W32(c->r[31]+0x000001B8u,c->r[0]); // 80115B38
  W32(c->r[31]+0x000001C4u,c->r[0]); // 80115B3C
  W8(c->r[31]+0x000001A8u,c->r[0]); // 80115B40
  W32(c->r[31]+0x000001B0u,c->r[0]); // 80115B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115B48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115B4C
  c->lr=c->r[0]; // 80115B50
  c->r[1]=c->r[1]+0x00000010u; // 80115B54
  return; // 80115B58
}

// fn_80115B5C
void f_80115B5C(Ctx* __restrict c) {
  trace_call(0x80115B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115B5C
  c->r[0]=c->lr; // 80115B60
  cmps(c,0,(int32_t)c->r[3],0); // 80115B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115B6C
  c->r[31]=c->r[4]|c->r[4]; // 80115B70
  W32(c->r[1]+0x00000008u,c->r[30]); // 80115B74
  c->r[30]=c->r[3]|c->r[3]; // 80115B78
  if (crb(c,2)) { goto L_80115B98; } // 80115B7C
  c->r[4]=0u+0x00000000u; // 80115B80
  c->lr=0x80115B88u; f_801409F8(c); // 80115B84
  cmps(c,0,(int32_t)c->r[31],0); // 80115B88
  if (!crb(c,1)) { goto L_80115B98; } // 80115B8C
  c->r[3]=c->r[30]|c->r[30]; // 80115B90
  c->lr=0x80115B98u; f_80244DC0(c); // 80115B94
L_80115B98:;
  c->r[3]=c->r[30]|c->r[30]; // 80115B98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115B9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80115BA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115BA4
  c->lr=c->r[0]; // 80115BA8
  c->r[1]=c->r[1]+0x00000010u; // 80115BAC
  return; // 80115BB0
}

// fn_80115BB4
void f_80115BB4(Ctx* __restrict c) {
  trace_call(0x80115BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115BB4
  c->r[0]=c->lr; // 80115BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115BBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115BC0
  c->r[31]=c->r[3]|c->r[3]; // 80115BC4
  c->lr=0x80115BCCu; f_80140C24(c); // 80115BC8
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115BCC
  cmps(c,0,(int32_t)c->r[3],0); // 80115BD0
  if (crb(c,2)) { goto L_80115C40; } // 80115BD4
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 80115BD8
  cmps(c,0,(int32_t)c->r[4],0); // 80115BDC
  if (crb(c,2)) { goto L_80115C40; } // 80115BE0
  c->r[0]=R32(c->r[4]+0x000000ACu); // 80115BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80115BE8
  if (crb(c,2)) { goto L_80115C40; } // 80115BEC
  c->r[3]=R32(c->r[3]+0x00000038u); // 80115BF0
  cmps(c,0,(int32_t)c->r[3],0); // 80115BF4
  if (crb(c,2)) { goto L_80115C40; } // 80115BF8
  c->r[0]=R32(c->r[3]+0x00000068u); // 80115BFC
  cmps(c,0,(int32_t)c->r[0],0); // 80115C00
  if (!crb(c,2)) { goto L_80115C40; } // 80115C04
  c->r[3]=R32(c->r[3]+0x00000088u); // 80115C08
  cmps(c,0,(int32_t)c->r[3],0); // 80115C0C
  if (crb(c,2)) { goto L_80115C40; } // 80115C10
  c->r[3]=R32(c->r[3]+0x00000028u); // 80115C14
  c->r[4]=0u+0x00000200u; // 80115C18
  c->r[5]=0u+0x00000200u; // 80115C1C
  c->lr=0x80115C24u; f_801E3150(c); // 80115C20
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115C24
  c->r[4]=0u+0x00000100u; // 80115C28
  c->r[5]=0u+0x00000100u; // 80115C2C
  c->r[3]=R32(c->r[3]+0x00000038u); // 80115C30
  c->r[3]=R32(c->r[3]+0x00000088u); // 80115C34
  c->r[3]=R32(c->r[3]+0x00000028u); // 80115C38
  c->lr=0x80115C40u; f_801E3150(c); // 80115C3C
L_80115C40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80115C40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80115C44
  c->lr=c->r[0]; // 80115C48
  c->r[1]=c->r[1]+0x00000010u; // 80115C4C
  return; // 80115C50
}

// fn_80115C54
void f_80115C54(Ctx* __restrict c) {
  trace_call(0x80115C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115C54
  c->r[0]=c->lr; // 80115C58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80115C5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80115C60
  c->r[31]=c->r[3]|c->r[3]; // 80115C64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80115C68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80115C6C
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 80115C70
  cmps(c,0,(int32_t)c->r[0],0); // 80115C74
  if (crb(c,2)) { goto L_80115CC8; } // 80115C78
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115C7C
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80115C80
  fcmp(c,0,c->f[0],c->f[2]); // 80115C84
  if (crb(c,2)) { goto L_80115CC8; } // 80115C88
  c->r[4]=R32(c->r[3]+0x000001B0u); // 80115C8C
  {uint32_t ea=c->r[4]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80115C90
  fcmp(c,0,c->f[0],c->f[1]); // 80115C94
  if (crb(c,2)) { goto L_80115CC8; } // 80115C98
  c->r[0]=R8(c->r[3]+0x00000066u); // 80115C9C
  cmps(c,0,(int32_t)c->r[0],0); // 80115CA0
  if (!crb(c,2)) { goto L_80115CC8; } // 80115CA4
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80115CA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80115CAC
  fcmp(c,0,c->f[0],c->f[1]); // 80115CB0
  if (!crb(c,1)) { goto L_80115CC8; } // 80115CB4
  c->r[12]=R32(c->r[3]+0x00000020u); // 80115CB8
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80115CBC
  c->ctr=c->r[12]; // 80115CC0
  if (true) { c->lr=0x80115CC8u; dispatch(c,c->ctr); } // 80115CC4
L_80115CC8:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115CC8
  c->r[3]=R32(c->r[3]+0x00000028u); // 80115CCC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80115CD0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80115CD4
  if (crb(c,2)) { goto L_80115F60; } // 80115CD8
  c->lr=0x80115CE0u; f_802C00A8(c); // 80115CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80115CE0
  if (!crb(c,2)) { goto L_80115CEC; } // 80115CE4
  goto L_80115F60; // 80115CE8
L_80115CEC:;
  c->r[3]=c->r[31]|c->r[31]; // 80115CEC
  c->lr=0x80115CF4u; f_80141634(c); // 80115CF0
  c->r[0]=R8(c->r[31]+0x00000066u); // 80115CF4
  cmps(c,0,(int32_t)c->r[0],0); // 80115CF8
  if (crb(c,2)) { goto L_80115F0C; } // 80115CFC
  c->r[3]=R32(c->r[31]+0x00000198u); // 80115D00
  c->r[0]=0u+0x00000001u; // 80115D04
  cmps(c,0,(int32_t)c->r[3],0); // 80115D08
  if (crb(c,2)) { goto L_80115D24; } // 80115D0C
  c->r[4]=R32(c->r[31]+0x00000018u); // 80115D10
  c->lr=0x80115D18u; f_8030D2B0(c); // 80115D14
  c->r[0]=0u-c->r[3]; // 80115D18
  c->r[0]=c->r[0]|c->r[3]; // 80115D1C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80115D20
L_80115D24:;
  cmps(c,0,(int32_t)c->r[0],0); // 80115D24
  if (crb(c,2)) { goto L_80115D50; } // 80115D28
  {uint32_t ea=c->r[31]+0x000001ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80115D2C
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80115D30
  c->r[3]=R32(c->r[31]+0x000001B0u); // 80115D34
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80115D38
  {uint32_t ea=c->r[31]+0x000001ACu; WF32(ea,c->f[1]);} // 80115D3C
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115D40
  fcmp(c,0,c->f[1],c->f[0]); // 80115D44
  if (!crb(c,0)) { goto L_80115D50; } // 80115D48
  c->r[0]=0u+0x00000000u; // 80115D4C
L_80115D50:;
  cmps(c,0,(int32_t)c->r[0],0); // 80115D50
  if (crb(c,2)) { goto L_80115F48; } // 80115D54
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115D58
  c->r[3]=R32(c->r[3]+0x00000038u); // 80115D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80115D60
  if (crb(c,2)) { goto L_80115DE8; } // 80115D64
  c->r[4]=R32(c->r[3]+0x00000088u); // 80115D68
  cmps(c,0,(int32_t)c->r[4],0); // 80115D6C
  if (crb(c,2)) { goto L_80115DE8; } // 80115D70
  c->r[0]=R32(c->r[3]+0x00000068u); // 80115D74
  cmps(c,0,(int32_t)c->r[0],0); // 80115D78
  if (crb(c,2)) { goto L_80115D8C; } // 80115D7C
  cmps(c,0,(int32_t)c->r[0],1); // 80115D80
  if (crb(c,2)) { goto L_80115D98; } // 80115D84
  goto L_80115DE8; // 80115D88
L_80115D8C:;
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 80115D8C
  c->lr=0x80115D94u; f_800365C8(c); // 80115D90
  goto L_80115DE8; // 80115D94
L_80115D98:;
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 80115D98
  cmps(c,0,(int32_t)c->r[4],0); // 80115D9C
  if (crb(c,2)) { goto L_80115DAC; } // 80115DA0
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 80115DA4
  c->lr=0x80115DACu; f_800365C8(c); // 80115DA8
L_80115DAC:;
  c->r[29]=0u+0x00000000u; // 80115DAC
  c->r[30]=0u+0x00000000u; // 80115DB0
  goto L_80115DD0; // 80115DB4
L_80115DB8:;
  c->r[4]=R32(c->r[3]+0x000000F8u); // 80115DB8
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 80115DBC
  c->r[4]=R32(c->r[4]+c->r[30]); // 80115DC0
  c->lr=0x80115DC8u; f_800365C8(c); // 80115DC4
  c->r[30]=c->r[30]+0x00000004u; // 80115DC8
  c->r[29]=c->r[29]+0x00000001u; // 80115DCC
L_80115DD0:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115DD0
  c->r[3]=R32(c->r[3]+0x00000038u); // 80115DD4
  c->r[3]=R32(c->r[3]+0x00000088u); // 80115DD8
  c->r[0]=R32(c->r[3]+0x00000040u); // 80115DDC
  cmpu(c,0,c->r[29],c->r[0]); // 80115DE0
  if (crb(c,0)) { IRQCHK(c); goto L_80115DB8; } // 80115DE4
L_80115DE8:;
  c->r[5]=R32(c->r[31]+0x000001B0u); // 80115DE8
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115DEC
  c->r[4]=R8(c->r[5]+0x000000A9u); // 80115DF0
  c->r[0]=R8(c->r[5]+0x000000AAu); // 80115DF4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80115DF8
  c->r[6]=R8(c->r[5]+0x000000ABu); // 80115DFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80115E00
  c->r[4]=cntlz(c->r[4]); // 80115E04
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80115E08
  c->r[0]=cntlz(c->r[0]); // 80115E0C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80115E10
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 80115E14
  c->lr=0x80115E1Cu; f_802DA950(c); // 80115E18
  c->r[3]=R32(c->r[31]+0x000001B0u); // 80115E1C
  c->r[0]=R8(c->r[3]+0x000000A8u); // 80115E20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80115E24
  if (crb(c,2)) { goto L_80115E4C; } // 80115E28
  c->r[0]=R8(c->r[3]+0x000000ABu); // 80115E2C
  c->r[4]=0u+0x00000000u; // 80115E30
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115E34
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80115E38
  c->r[0]=0u-c->r[5]; // 80115E3C
  c->r[0]=c->r[0]|c->r[5]; // 80115E40
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80115E44
  c->lr=0x80115E4Cu; f_8010BE84(c); // 80115E48
L_80115E4C:;
  c->r[3]=R32(c->r[31]+0x000001B4u); // 80115E4C
  cmps(c,0,(int32_t)c->r[3],0); // 80115E50
  if (crb(c,2)) { goto L_80115F48; } // 80115E54
  c->r[3]=R32(c->r[3]+0x00000018u); // 80115E58
  c->r[4]=0u+0x00000000u; // 80115E5C
  c->r[5]=0u+0x00000000u; // 80115E60
  c->r[6]=0u+0x00000001u; // 80115E64
  c->lr=0x80115E6Cu; f_802DA950(c); // 80115E68
  c->r[3]=R32(c->r[31]+0x000001B4u); // 80115E6C
  c->r[3]=R32(c->r[3]+0x00000018u); // 80115E70
  c->r[29]=R32(c->r[3]+0x0000005Cu); // 80115E74
  cmps(c,0,(int32_t)c->r[29],0); // 80115E78
  if (crb(c,2)) { goto L_80115EFC; } // 80115E7C
L_80115E80:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80115E80
  cmps(c,0,(int32_t)c->r[3],0); // 80115E84
  if (crb(c,2)) { goto L_80115EC4; } // 80115E88
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80115E8C
  goto L_80115EA8; // 80115E90
L_80115E94:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80115E94
  cmps(c,0,(int32_t)c->r[0],9); // 80115E98
  if (!crb(c,2)) { goto L_80115EA4; } // 80115E9C
  goto L_80115EB4; // 80115EA0
L_80115EA4:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 80115EA4
L_80115EA8:;
  cmps(c,0,(int32_t)c->r[4],0); // 80115EA8
  if (!crb(c,2)) { IRQCHK(c); goto L_80115E94; } // 80115EAC
  c->r[4]=0u+0x00000000u; // 80115EB0
L_80115EB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 80115EB4
  if (crb(c,2)) { goto L_80115EC4; } // 80115EB8
  c->r[0]=0u+0x00000001u; // 80115EBC
  goto L_80115EC8; // 80115EC0
L_80115EC4:;
  c->r[0]=0u+0x00000000u; // 80115EC4
L_80115EC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80115EC8
  if (crb(c,2)) { goto L_80115EE4; } // 80115ECC
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80115ED0
  c->r[4]=0u+0x00000001u; // 80115ED4
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80115ED8
  c->ctr=c->r[12]; // 80115EDC
  if (true) { c->lr=0x80115EE4u; dispatch(c,c->ctr); } // 80115EE0
L_80115EE4:;
  c->r[3]=R32(c->r[31]+0x000001B4u); // 80115EE4
  c->r[29]=R32(c->r[29]+0x00000020u); // 80115EE8
  c->r[3]=R32(c->r[3]+0x00000018u); // 80115EEC
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80115EF0
  cmpu(c,0,c->r[29],c->r[0]); // 80115EF4
  if (!crb(c,2)) { IRQCHK(c); goto L_80115E80; } // 80115EF8
L_80115EFC:;
  c->lr=0x80115F00u; f_802DB11C(c); // 80115EFC
  c->r[0]=0u+0x00000000u; // 80115F00
  W32(c->r[31]+0x000001B4u,c->r[0]); // 80115F04
  goto L_80115F48; // 80115F08
L_80115F0C:;
  c->r[3]=R32(c->r[31]+0x000001BCu); // 80115F0C
  cmps(c,0,(int32_t)c->r[3],0); // 80115F10
  if (crb(c,2)) { goto L_80115F48; } // 80115F14
  c->r[0]=R32(c->r[31]+0x000001C0u); // 80115F18
  cmps(c,0,(int32_t)c->r[0],0); // 80115F1C
  if (!crb(c,2)) { goto L_80115F48; } // 80115F20
  c->r[3]=R32(c->r[3]+0x00000018u); // 80115F24
  c->r[4]=0u+0x00000001u; // 80115F28
  c->r[5]=R32(c->r[31]+0x00000018u); // 80115F2C
  c->r[6]=0u+0x00000000u; // 80115F30
  c->r[7]=0u+0x80000000u; // 80115F34
  c->r[8]=0u+0x00000000u; // 80115F38
  c->r[9]=0u+0x00000000u; // 80115F3C
  c->lr=0x80115F44u; f_802DE190(c); // 80115F40
  W32(c->r[31]+0x000001C0u,c->r[3]); // 80115F44
L_80115F48:;
  c->r[0]=R8(c->r[31]+0x000001A9u); // 80115F48
  cmps(c,0,(int32_t)c->r[0],0); // 80115F4C
  if (crb(c,2)) { goto L_80115F60; } // 80115F50
  c->r[3]=R32(c->r[31]+0x00000194u); // 80115F54
  c->r[4]=R32(c->r[31]+0x00000018u); // 80115F58
  c->lr=0x80115F60u; f_8030D2B0(c); // 80115F5C
L_80115F60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80115F60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80115F64
  c->r[30]=R32(c->r[1]+0x00000018u); // 80115F68
  c->r[29]=R32(c->r[1]+0x00000014u); // 80115F6C
  c->lr=c->r[0]; // 80115F70
  c->r[1]=c->r[1]+0x00000020u; // 80115F74
  return; // 80115F78
}

// fn_80115F7C
void f_80115F7C(Ctx* __restrict c) {
  trace_call(0x80115F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80115F7C
  c->r[0]=c->lr; // 80115F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80115F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80115F88
  c->r[31]=c->r[3]|c->r[3]; // 80115F8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80115F90
  c->r[30]=c->r[5]|c->r[5]; // 80115F94
  c->lr=0x80115F9Cu; f_80141844(c); // 80115F98
  cmps(c,0,(int32_t)c->r[30],2); // 80115F9C
  if (!crb(c,2)) { goto L_801162A4; } // 80115FA0
  c->r[3]=R32(c->r[31]+0x00000018u); // 80115FA4
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 80115FA8
  W32(c->r[31]+0x000001B0u,c->r[5]); // 80115FAC
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80115FB0
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[0]);} // 80115FB4
  c->r[0]=R32(c->r[5]+0x000000ACu); // 80115FB8
  W32(c->r[31]+0x0000019Cu,c->r[0]); // 80115FBC
  c->r[0]=R32(c->r[5]+0x000000A0u); // 80115FC0
  W32(c->r[31]+0x00000198u,c->r[0]); // 80115FC4
  c->r[0]=R32(c->r[5]+0x00000058u); // 80115FC8
  W32(c->r[31]+0x00000194u,c->r[0]); // 80115FCC
  c->r[0]=R8(c->r[5]+0x00000034u); // 80115FD0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80115FD4
  c->r[0]=0u-c->r[3]; // 80115FD8
  c->r[0]=c->r[0]|c->r[3]; // 80115FDC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80115FE0
  W8(c->r[31]+0x000001A8u,c->r[0]); // 80115FE4
  c->r[3]=R32(c->r[5]+0x0000009Cu); // 80115FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80115FEC
  if (crb(c,2)) { goto L_80115FF8; } // 80115FF0
  goto L_80116024; // 80115FF4
L_80115FF8:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80115FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80115FFC
  if (crb(c,2)) { goto L_80116020; } // 80116000
  c->r[4]=R32(c->r[5]+0x00000094u); // 80116004
  c->r[6]=0u+0x00000000u; // 80116008
  c->r[8]=R32(c->r[5]+0x00000098u); // 8011600C
  c->r[5]=0u+0x00000000u; // 80116010
  c->r[7]=0u+0x00000000u; // 80116014
  c->lr=0x8011601Cu; f_802BA9F4(c); // 80116018
  goto L_80116024; // 8011601C
L_80116020:;
  c->r[3]=0u+0x00000000u; // 80116020
L_80116024:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116024
  if (crb(c,2)) { goto L_80116058; } // 80116028
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8011602C
  goto L_80116048; // 80116030
L_80116034:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80116034
  cmps(c,0,(int32_t)c->r[0],9); // 80116038
  if (!crb(c,2)) { goto L_80116044; } // 8011603C
  goto L_8011605C; // 80116040
L_80116044:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80116044
L_80116048:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116048
  if (!crb(c,2)) { IRQCHK(c); goto L_80116034; } // 8011604C
  c->r[3]=0u+0x00000000u; // 80116050
  goto L_8011605C; // 80116054
L_80116058:;
  c->r[3]=0u+0x00000000u; // 80116058
L_8011605C:;
  W32(c->r[31]+0x000001B8u,c->r[3]); // 8011605C
  c->r[5]=R32(c->r[31]+0x000001B0u); // 80116060
  c->r[3]=R32(c->r[5]+0x00000048u); // 80116064
  cmps(c,0,(int32_t)c->r[3],0); // 80116068
  if (crb(c,2)) { goto L_80116074; } // 8011606C
  goto L_801160A0; // 80116070
L_80116074:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80116074
  cmps(c,0,(int32_t)c->r[3],0); // 80116078
  if (crb(c,2)) { goto L_8011609C; } // 8011607C
  c->r[4]=R32(c->r[5]+0x00000040u); // 80116080
  c->r[6]=0u+0x00000000u; // 80116084
  c->r[8]=R32(c->r[5]+0x00000044u); // 80116088
  c->r[5]=0u+0x00000000u; // 8011608C
  c->r[7]=0u+0x00000000u; // 80116090
  c->lr=0x80116098u; f_802BA9F4(c); // 80116094
  goto L_801160A0; // 80116098
L_8011609C:;
  c->r[3]=0u+0x00000000u; // 8011609C
L_801160A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801160A0
  if (crb(c,2)) { goto L_801160D4; } // 801160A4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801160A8
  goto L_801160C4; // 801160AC
L_801160B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801160B0
  cmps(c,0,(int32_t)c->r[0],9); // 801160B4
  if (!crb(c,2)) { goto L_801160C0; } // 801160B8
  goto L_801160D8; // 801160BC
L_801160C0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801160C0
L_801160C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801160C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801160B0; } // 801160C8
  c->r[3]=0u+0x00000000u; // 801160CC
  goto L_801160D8; // 801160D0
L_801160D4:;
  c->r[3]=0u+0x00000000u; // 801160D4
L_801160D8:;
  W32(c->r[31]+0x000001BCu,c->r[3]); // 801160D8
  c->r[5]=R32(c->r[31]+0x000001B0u); // 801160DC
  c->r[3]=R32(c->r[5]+0x00000064u); // 801160E0
  cmps(c,0,(int32_t)c->r[3],0); // 801160E4
  if (crb(c,2)) { goto L_801160F0; } // 801160E8
  goto L_8011611C; // 801160EC
L_801160F0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801160F0
  cmps(c,0,(int32_t)c->r[3],0); // 801160F4
  if (crb(c,2)) { goto L_80116118; } // 801160F8
  c->r[4]=R32(c->r[5]+0x0000005Cu); // 801160FC
  c->r[6]=0u+0x00000000u; // 80116100
  c->r[8]=R32(c->r[5]+0x00000060u); // 80116104
  c->r[5]=0u+0x00000000u; // 80116108
  c->r[7]=0u+0x00000000u; // 8011610C
  c->lr=0x80116114u; f_802BA9F4(c); // 80116110
  goto L_8011611C; // 80116114
L_80116118:;
  c->r[3]=0u+0x00000000u; // 80116118
L_8011611C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011611C
  if (crb(c,2)) { goto L_80116150; } // 80116120
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80116124
  goto L_80116140; // 80116128
L_8011612C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8011612C
  cmps(c,0,(int32_t)c->r[0],9); // 80116130
  if (!crb(c,2)) { goto L_8011613C; } // 80116134
  goto L_80116154; // 80116138
L_8011613C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8011613C
L_80116140:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116140
  if (!crb(c,2)) { IRQCHK(c); goto L_8011612C; } // 80116144
  c->r[3]=0u+0x00000000u; // 80116148
  goto L_80116154; // 8011614C
L_80116150:;
  c->r[3]=0u+0x00000000u; // 80116150
L_80116154:;
  W32(c->r[31]+0x0000018Cu,c->r[3]); // 80116154
  c->r[5]=R32(c->r[31]+0x000001B0u); // 80116158
  c->r[3]=R32(c->r[5]+0x00000070u); // 8011615C
  cmps(c,0,(int32_t)c->r[3],0); // 80116160
  if (crb(c,2)) { goto L_8011616C; } // 80116164
  goto L_80116198; // 80116168
L_8011616C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011616C
  cmps(c,0,(int32_t)c->r[3],0); // 80116170
  if (crb(c,2)) { goto L_80116194; } // 80116174
  c->r[4]=R32(c->r[5]+0x00000068u); // 80116178
  c->r[6]=0u+0x00000000u; // 8011617C
  c->r[8]=R32(c->r[5]+0x0000006Cu); // 80116180
  c->r[5]=0u+0x00000000u; // 80116184
  c->r[7]=0u+0x00000000u; // 80116188
  c->lr=0x80116190u; f_802BA9F4(c); // 8011618C
  goto L_80116198; // 80116190
L_80116194:;
  c->r[3]=0u+0x00000000u; // 80116194
L_80116198:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116198
  if (crb(c,2)) { goto L_801161B4; } // 8011619C
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 801161A0
  cmps(c,0,(int32_t)c->r[3],0); // 801161A4
  if (crb(c,2)) { goto L_801161B4; } // 801161A8
  c->r[0]=c->r[3]+0x0000001Cu; // 801161AC
  W32(c->r[31]+0x00000190u,c->r[0]); // 801161B0
L_801161B4:;
  c->r[5]=R32(c->r[31]+0x000001B0u); // 801161B4
  c->r[3]=R32(c->r[5]+0x000000C4u); // 801161B8
  cmps(c,0,(int32_t)c->r[3],0); // 801161BC
  if (crb(c,2)) { goto L_801161C8; } // 801161C0
  goto L_801161F4; // 801161C4
L_801161C8:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801161C8
  cmps(c,0,(int32_t)c->r[3],0); // 801161CC
  if (crb(c,2)) { goto L_801161F0; } // 801161D0
  c->r[4]=R32(c->r[5]+0x000000BCu); // 801161D4
  c->r[6]=0u+0x00000000u; // 801161D8
  c->r[8]=R32(c->r[5]+0x000000C0u); // 801161DC
  c->r[5]=0u+0x00000000u; // 801161E0
  c->r[7]=0u+0x00000000u; // 801161E4
  c->lr=0x801161ECu; f_802BA9F4(c); // 801161E8
  goto L_801161F4; // 801161EC
L_801161F0:;
  c->r[3]=0u+0x00000000u; // 801161F0
L_801161F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801161F4
  if (crb(c,2)) { goto L_80116228; } // 801161F8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801161FC
  goto L_80116218; // 80116200
L_80116204:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80116204
  cmps(c,0,(int32_t)c->r[0],9); // 80116208
  if (!crb(c,2)) { goto L_80116214; } // 8011620C
  goto L_8011622C; // 80116210
L_80116214:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80116214
L_80116218:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116218
  if (!crb(c,2)) { IRQCHK(c); goto L_80116204; } // 8011621C
  c->r[3]=0u+0x00000000u; // 80116220
  goto L_8011622C; // 80116224
L_80116228:;
  c->r[3]=0u+0x00000000u; // 80116228
L_8011622C:;
  W32(c->r[31]+0x000001A0u,c->r[3]); // 8011622C
  c->r[5]=R32(c->r[31]+0x000001B0u); // 80116230
  c->r[3]=R32(c->r[5]+0x000000D0u); // 80116234
  cmps(c,0,(int32_t)c->r[3],0); // 80116238
  if (crb(c,2)) { goto L_80116244; } // 8011623C
  goto L_80116270; // 80116240
L_80116244:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80116244
  cmps(c,0,(int32_t)c->r[3],0); // 80116248
  if (crb(c,2)) { goto L_8011626C; } // 8011624C
  c->r[4]=R32(c->r[5]+0x000000C8u); // 80116250
  c->r[6]=0u+0x00000000u; // 80116254
  c->r[8]=R32(c->r[5]+0x000000CCu); // 80116258
  c->r[5]=0u+0x00000000u; // 8011625C
  c->r[7]=0u+0x00000000u; // 80116260
  c->lr=0x80116268u; f_802BA9F4(c); // 80116264
  goto L_80116270; // 80116268
L_8011626C:;
  c->r[3]=0u+0x00000000u; // 8011626C
L_80116270:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116270
  if (crb(c,2)) { goto L_8011628C; } // 80116274
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 80116278
  cmps(c,0,(int32_t)c->r[3],0); // 8011627C
  if (crb(c,2)) { goto L_8011628C; } // 80116280
  c->r[0]=c->r[3]+0x0000001Cu; // 80116284
  W32(c->r[31]+0x000001A4u,c->r[0]); // 80116288
L_8011628C:;
  c->r[3]=R32(c->r[31]+0x000001B0u); // 8011628C
  c->r[0]=R8(c->r[3]+0x00000035u); // 80116290
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116294
  if (crb(c,2)) { goto L_801162A4; } // 80116298
  c->r[0]=0u+0x00000001u; // 8011629C
  W8(c->r[31]+0x00000066u,c->r[0]); // 801162A0
L_801162A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801162A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801162A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801162AC
  c->lr=c->r[0]; // 801162B0
  c->r[1]=c->r[1]+0x00000010u; // 801162B4
  return; // 801162B8
}

// fn_801162BC
void f_801162BC(Ctx* __restrict c) {
  trace_call(0x801162BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801162BC
  c->r[0]=c->lr; // 801162C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 801162C4
  c->r[11]=c->r[1]+0x00000070u; // 801162C8
  c->lr=0x801162D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801162CC
  c->r[5]=R32(c->r[3]+0x000001B0u); // 801162D0
  c->r[30]=c->r[3]|c->r[3]; // 801162D4
  c->r[31]=c->r[4]|c->r[4]; // 801162D8
  c->r[0]=R8(c->r[5]+0x0000003Cu); // 801162DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801162E0
  if (crb(c,2)) { goto L_801162F4; } // 801162E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801162E8
  cmps(c,0,(int32_t)c->r[0],5); // 801162EC
  if (crb(c,2)) { goto L_8011659C; } // 801162F0
L_801162F4:;
  c->r[0]=R8(c->r[3]+0x00000066u); // 801162F4
  cmps(c,0,(int32_t)c->r[0],0); // 801162F8
  if (crb(c,2)) { goto L_80116304; } // 801162FC
  goto L_8011659C; // 80116300
L_80116304:;
  c->r[0]=0u+0x00000001u; // 80116304
  W8(c->r[3]+0x000001A9u,c->r[0]); // 80116308
  c->r[4]=R32(c->r[3]+0x000001B0u); // 8011630C
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80116310
  cmps(c,0,(int32_t)c->r[4],0); // 80116314
  if (crb(c,2)) { goto L_8011632C; } // 80116318
  c->r[3]=R32(c->r[3]+0x00000040u); // 8011631C
  c->r[5]=0u+0x00000000u; // 80116320
  c->r[6]=0u+0x00000000u; // 80116324
  c->lr=0x8011632Cu; f_80286224(c); // 80116328
L_8011632C:;
  c->r[3]=R32(c->r[30]+0x00000194u); // 8011632C
  cmps(c,0,(int32_t)c->r[3],0); // 80116330
  if (crb(c,2)) { goto L_8011633C; } // 80116334
  c->lr=0x8011633Cu; f_8030D188(c); // 80116338
L_8011633C:;
  c->r[0]=R8(c->r[30]+0x000001A8u); // 8011633C
  cmps(c,0,(int32_t)c->r[0],0); // 80116340
  if (!crb(c,2)) { goto L_8011659C; } // 80116344
  c->r[3]=R32(c->r[30]+0x000001B0u); // 80116348
  c->r[0]=R8(c->r[3]+0x00000036u); // 8011634C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116350
  if (crb(c,2)) { goto L_80116364; } // 80116354
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116358
  {uint32_t ea=c->r[30]+0x00000188u; WF32(ea,c->f[0]);} // 8011635C
  goto L_80116374; // 80116360
L_80116364:;
  {uint32_t ea=c->r[30]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116364
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116368
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8011636C
  {uint32_t ea=c->r[30]+0x00000188u; WF32(ea,c->f[0]);} // 80116370
L_80116374:;
  c->r[3]=R32(c->r[30]+0x000001B0u); // 80116374
  c->r[0]=R8(c->r[3]+0x000000B8u); // 80116378
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011637C
  if (crb(c,2)) { goto L_8011656C; } // 80116380
  c->r[4]=R32(c->r[31]+0x00000004u); // 80116384
  cmps(c,0,(int32_t)c->r[4],0); // 80116388
  if (crb(c,2)) { goto L_8011656C; } // 8011638C
  c->r[0]=R32(c->r[30]+0x000001A0u); // 80116390
  cmps(c,0,(int32_t)c->r[0],0); // 80116394
  if (crb(c,2)) { goto L_801163F0; } // 80116398
  c->r[3]=c->r[1]+0x00000018u; // 8011639C
  c->r[4]=c->r[4]+0x00000070u; // 801163A0
  c->r[5]=0u+0x00000040u; // 801163A4
  c->lr=0x801163ACu; f_8000626C(c); // 801163A8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801163AC
  c->r[5]=c->r[1]+0x00000018u; // 801163B0
  c->r[4]=0u+0x00000001u; // 801163B4
  c->r[6]=0u+0x00000000u; // 801163B8
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 801163BC
  c->r[7]=0u+0x00000000u; // 801163C0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801163C4
  c->r[8]=0u+0x00000000u; // 801163C8
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 801163CC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801163D0
  {uint32_t ea=c->r[3]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 801163D4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 801163D8
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801163DC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801163E0
  c->r[3]=R32(c->r[30]+0x000001A0u); // 801163E4
  c->r[3]=R32(c->r[3]+0x00000018u); // 801163E8
  c->lr=0x801163F0u; f_802DDF8C(c); // 801163EC
L_801163F0:;
  c->r[8]=R32(c->r[30]+0x000001A4u); // 801163F0
  cmps(c,0,(int32_t)c->r[8],0); // 801163F4
  if (crb(c,2)) { goto L_80116440; } // 801163F8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801163FC
  c->r[5]=c->r[1]+0x00000008u; // 80116400
  c->r[4]=0u+0x000000FFu; // 80116404
  c->r[6]=0u+0x00000000u; // 80116408
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011640C
  c->r[7]=0u+0x00000000u; // 80116410
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80116414
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116418
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8011641C
  {uint32_t ea=c->r[3]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116420
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80116424
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80116428
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8011642C
  c->r[3]=R32(c->r[8]+0x00000004u); // 80116430
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116434
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80116438
  c->lr=0x80116440u; f_8010C600(c); // 8011643C
L_80116440:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80116440
  c->r[3]=R32(c->r[3]+0x00000034u); // 80116444
  cmps(c,0,(int32_t)c->r[3],0); // 80116448
  if (crb(c,2)) { goto L_80116468; } // 8011644C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80116450
  cmps(c,0,(int32_t)c->r[3],0); // 80116454
  if (crb(c,2)) { goto L_80116468; } // 80116458
  c->r[4]=0u+0x00000000u; // 8011645C
  c->r[5]=0u+0x00007000u; // 80116460
  c->lr=0x80116468u; f_80183770(c); // 80116464
L_80116468:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80116468
  c->r[4]=0u+0x00000002u; // 8011646C
  c->r[5]=0u+0x00000002u; // 80116470
  c->lr=0x80116478u; f_8019B500(c); // 80116474
  c->r[3]=R32(c->r[31]+0x00000004u); // 80116478
  c->r[4]=0u+0x00000000u; // 8011647C
  c->r[5]=0u+0x00000001u; // 80116480
  c->r[6]=0u+0x00000000u; // 80116484
  c->lr=0x8011648Cu; f_80198230(c); // 80116488
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 8011648C
  c->r[4]=R32(c->r[31]+0x00000004u); // 80116490
  c->lr=0x80116498u; f_800365C8(c); // 80116494
  c->r[3]=R32(c->r[31]+0x00000004u); // 80116498
  c->r[0]=R32(c->r[3]+0x00000044u); // 8011649C
  cmps(c,0,(int32_t)c->r[0],0); // 801164A0
  if (crb(c,2)) { goto L_8011656C; } // 801164A4
  c->r[27]=0u+0x00000000u; // 801164A8
  c->r[29]=0u+0x00000000u; // 801164AC
  goto L_801164FC; // 801164B0
L_801164B4:;
  c->r[3]=R32(c->r[5]+0x000000FCu); // 801164B4
  c->r[5]=R32(c->r[31]+0x00000004u); // 801164B8
  c->r[28]=R32(c->r[3]+c->r[29]); // 801164BC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801164C0
  cmpu(c,0,c->r[0],c->r[5]); // 801164C4
  if (crb(c,2)) { goto L_801164D8; } // 801164C8
  c->r[0]=R32(c->r[28]+0x00000000u); // 801164CC
  cmpu(c,0,c->r[0],c->r[4]); // 801164D0
  if (!crb(c,2)) { goto L_801164F4; } // 801164D4
L_801164D8:;
  c->r[3]=c->r[28]|c->r[28]; // 801164D8
  c->r[4]=0u+0x00000001u; // 801164DC
  c->r[5]=0u+0x00000000u; // 801164E0
  c->lr=0x801164E8u; f_801FBB00(c); // 801164E4
  c->r[0]=R32(c->r[28]+0x00000008u); // 801164E8
  c->r[0]=c->r[0]|0x00000100u; // 801164EC
  W32(c->r[28]+0x00000008u,c->r[0]); // 801164F0
L_801164F4:;
  c->r[29]=c->r[29]+0x00000004u; // 801164F4
  c->r[27]=c->r[27]+0x00000001u; // 801164F8
L_801164FC:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 801164FC
  c->r[5]=R32(c->r[4]+0x00000044u); // 80116500
  c->r[0]=R32(c->r[5]+0x00000044u); // 80116504
  cmpu(c,0,c->r[27],c->r[0]); // 80116508
  if (crb(c,0)) { IRQCHK(c); goto L_801164B4; } // 8011650C
  c->r[0]=R32(c->r[5]+0x00000040u); // 80116510
  c->r[6]=0u+0x00000001u; // 80116514
  c->r[4]=0u+0x00000000u; // 80116518
  c->ctr=c->r[0]; // 8011651C
  cmpu(c,0,c->r[0],0x00000000u); // 80116520
  if (!crb(c,1)) { goto L_80116548; } // 80116524
L_80116528:;
  c->r[3]=R32(c->r[5]+0x000000F8u); // 80116528
  c->r[3]=R32(c->r[3]+c->r[4]); // 8011652C
  c->r[0]=R32(c->r[3]+0x00000048u); // 80116530
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80116534
  if (!crb(c,2)) { goto L_80116540; } // 80116538
  c->r[6]=0u+0x00000000u; // 8011653C
L_80116540:;
  c->r[4]=c->r[4]+0x00000004u; // 80116540
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80116528; } // 80116544
L_80116548:;
  cmps(c,0,(int32_t)c->r[6],0); // 80116548
  if (crb(c,2)) { goto L_8011656C; } // 8011654C
  c->r[12]=R32(c->r[30]+0x00000020u); // 80116550
  c->r[3]=c->r[30]|c->r[30]; // 80116554
  c->r[5]=R32(c->r[31]+0x00000000u); // 80116558
  c->r[4]=0u+0x00000001u; // 8011655C
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80116560
  c->ctr=c->r[12]; // 80116564
  if (true) { c->lr=0x8011656Cu; dispatch(c,c->ctr); } // 80116568
L_8011656C:;
  {uint32_t ea=c->r[30]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011656C
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116570
  fcmp(c,0,c->f[1],c->f[0]); // 80116574
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80116578
  if (!crb(c,2)) { goto L_8011659C; } // 8011657C
  c->r[12]=R32(c->r[30]+0x00000020u); // 80116580
  c->r[3]=c->r[30]|c->r[30]; // 80116584
  c->r[5]=R32(c->r[31]+0x00000000u); // 80116588
  c->r[4]=0u+0x00000001u; // 8011658C
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80116590
  c->ctr=c->r[12]; // 80116594
  if (true) { c->lr=0x8011659Cu; dispatch(c,c->ctr); } // 80116598
L_8011659C:;
  c->r[11]=c->r[1]+0x00000070u; // 8011659C
  c->lr=0x801165A4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801165A0
  c->r[0]=R32(c->r[1]+0x00000074u); // 801165A4
  c->lr=c->r[0]; // 801165A8
  c->r[1]=c->r[1]+0x00000070u; // 801165AC
  return; // 801165B0
}

// fn_801165B4
void f_801165B4(Ctx* __restrict c) {
  trace_call(0x801165B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801165B4
  c->r[0]=c->lr; // 801165B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801165BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801165C0
  c->r[31]=c->r[3]|c->r[3]; // 801165C4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801165C8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801165CC
  c->r[29]=c->r[5]|c->r[5]; // 801165D0
  c->r[0]=R8(c->r[3]+0x00000066u); // 801165D4
  cmpu(c,0,c->r[0],c->r[4]); // 801165D8
  if (crb(c,2)) { goto L_80116980; } // 801165DC
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 801165E0
  W8(c->r[3]+0x00000066u,c->r[4]); // 801165E4
  if (crb(c,2)) { goto L_8011692C; } // 801165E8
  c->r[4]=R32(c->r[3]+0x0000018Cu); // 801165EC
  cmps(c,0,(int32_t)c->r[4],0); // 801165F0
  if (crb(c,2)) { goto L_80116608; } // 801165F4
  c->r[3]=R32(c->r[13]+0xFFFFE13Cu); // 801165F8
  c->r[6]=0u+0x00000001u; // 801165FC
  c->r[5]=R32(c->r[31]+0x00000018u); // 80116600
  c->lr=0x80116608u; f_800373D0(c); // 80116604
L_80116608:;
  c->r[8]=R32(c->r[31]+0x00000190u); // 80116608
  cmps(c,0,(int32_t)c->r[8],0); // 8011660C
  if (crb(c,2)) { goto L_8011665C; } // 80116610
  c->r[3]=R32(c->r[31]+0x00000018u); // 80116614
  c->r[5]=c->r[1]+0x00000008u; // 80116618
  c->r[4]=0u+0x000000FFu; // 8011661C
  c->r[6]=0u+0x00000000u; // 80116620
  c->r[3]=R32(c->r[3]+0x00000030u); // 80116624
  c->r[7]=0u+0x00000000u; // 80116628
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011662C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80116630
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116634
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80116638
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011663C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80116640
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80116644
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80116648
  c->r[3]=R32(c->r[8]+0x00000004u); // 8011664C
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116650
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80116654
  c->lr=0x8011665Cu; f_8010C600(c); // 80116658
L_8011665C:;
  c->r[3]=R32(c->r[31]+0x000001C0u); // 8011665C
  cmps(c,0,(int32_t)c->r[3],0); // 80116660
  if (crb(c,2)) { goto L_80116698; } // 80116664
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80116668
  c->r[4]=0u+0x00000001u; // 8011666C
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80116670
  c->ctr=c->r[12]; // 80116674
  if (true) { c->lr=0x8011667Cu; dispatch(c,c->ctr); } // 80116678
  c->r[3]=R32(c->r[31]+0x000001C0u); // 8011667C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80116680
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80116684
  c->ctr=c->r[12]; // 80116688
  if (true) { c->lr=0x80116690u; dispatch(c,c->ctr); } // 8011668C
  c->r[0]=0u+0x00000000u; // 80116690
  W32(c->r[31]+0x000001C0u,c->r[0]); // 80116694
L_80116698:;
  c->r[0]=R32(c->r[31]+0x0000019Cu); // 80116698
  cmps(c,0,(int32_t)c->r[0],0); // 8011669C
  if (crb(c,2)) { goto L_801166F8; } // 801166A0
  cmps(c,0,(int32_t)c->r[29],0); // 801166A4
  if (crb(c,2)) { goto L_801166F8; } // 801166A8
  c->r[12]=R32(c->r[29]+0x00000020u); // 801166AC
  c->r[3]=c->r[29]|c->r[29]; // 801166B0
  c->r[12]=R32(c->r[12]+0x00000120u); // 801166B4
  c->ctr=c->r[12]; // 801166B8
  if (true) { c->lr=0x801166C0u; dispatch(c,c->ctr); } // 801166BC
  cmps(c,0,(int32_t)c->r[3],0); // 801166C0
  if (crb(c,2)) { goto L_801166F8; } // 801166C4
  c->r[30]=c->r[29]|c->r[29]; // 801166C8
  c->r[3]=c->r[29]|c->r[29]; // 801166CC
  c->lr=0x801166D4u; f_80131858(c); // 801166D0
  cmps(c,0,(int32_t)c->r[3],0); // 801166D4
  if (crb(c,2)) { goto L_801166E4; } // 801166D8
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 801166DC
  c->r[30]=R32(c->r[3]+0x00000030u); // 801166E0
L_801166E4:;
  c->r[5]=R32(c->r[31]+0x000001B0u); // 801166E4
  c->r[3]=c->r[30]|c->r[30]; // 801166E8
  c->r[4]=R32(c->r[31]+0x0000019Cu); // 801166EC
  c->r[5]=R32(c->r[5]+0x000000B0u); // 801166F0
  c->lr=0x801166F8u; f_80130A70(c); // 801166F4
L_801166F8:;
  W32(c->r[31]+0x000001C4u,c->r[29]); // 801166F8
  c->r[3]=R32(c->r[31]+0x000001B0u); // 801166FC
  c->r[4]=R32(c->r[3]+0x00000074u); // 80116700
  cmps(c,0,(int32_t)c->r[4],0); // 80116704
  if (crb(c,2)) { goto L_8011671C; } // 80116708
  c->r[3]=R32(c->r[31]+0x00000040u); // 8011670C
  c->r[5]=0u+0x00000000u; // 80116710
  c->r[6]=0u+0x00000000u; // 80116714
  c->lr=0x8011671Cu; f_80286224(c); // 80116718
L_8011671C:;
  c->r[5]=R32(c->r[31]+0x000001B0u); // 8011671C
  c->r[3]=R32(c->r[5]+0x00000088u); // 80116720
  cmps(c,0,(int32_t)c->r[3],0); // 80116724
  if (crb(c,2)) { goto L_80116730; } // 80116728
  goto L_8011675C; // 8011672C
L_80116730:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80116730
  cmps(c,0,(int32_t)c->r[3],0); // 80116734
  if (crb(c,2)) { goto L_80116758; } // 80116738
  c->r[4]=R32(c->r[5]+0x00000080u); // 8011673C
  c->r[6]=0u+0x00000000u; // 80116740
  c->r[8]=R32(c->r[5]+0x00000084u); // 80116744
  c->r[5]=0u+0x00000000u; // 80116748
  c->r[7]=0u+0x00000000u; // 8011674C
  c->lr=0x80116754u; f_802BA9F4(c); // 80116750
  goto L_8011675C; // 80116754
L_80116758:;
  c->r[3]=0u+0x00000000u; // 80116758
L_8011675C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011675C
  if (crb(c,2)) { goto L_80116790; } // 80116760
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80116764
  goto L_80116780; // 80116768
L_8011676C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8011676C
  cmps(c,0,(int32_t)c->r[0],17); // 80116770
  if (!crb(c,2)) { goto L_8011677C; } // 80116774
  goto L_80116794; // 80116778
L_8011677C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8011677C
L_80116780:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116780
  if (!crb(c,2)) { IRQCHK(c); goto L_8011676C; } // 80116784
  c->r[3]=0u+0x00000000u; // 80116788
  goto L_80116794; // 8011678C
L_80116790:;
  c->r[3]=0u+0x00000000u; // 80116790
L_80116794:;
  cmps(c,0,(int32_t)c->r[3],0); // 80116794
  if (crb(c,2)) { goto L_80116980; } // 80116798
  c->r[3]=R32(c->r[3]+0x00000018u); // 8011679C
  c->r[4]=0u+0x00000000u; // 801167A0
  c->r[5]=0u+0x00000000u; // 801167A4
  c->r[12]=R32(c->r[3]+0x000000B4u); // 801167A8
  c->r[12]=R32(c->r[12]+0x000000E0u); // 801167AC
  c->ctr=c->r[12]; // 801167B0
  if (true) { c->lr=0x801167B8u; dispatch(c,c->ctr); } // 801167B4
  cmps(c,0,(int32_t)c->r[3],0); // 801167B8
  c->r[30]=0u+0x00000000u; // 801167BC
  if (crb(c,2)) { goto L_801167EC; } // 801167C0
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 801167C4
  goto L_801167E0; // 801167C8
L_801167CC:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801167CC
  cmps(c,0,(int32_t)c->r[0],17); // 801167D0
  if (!crb(c,2)) { goto L_801167DC; } // 801167D4
  goto L_801167EC; // 801167D8
L_801167DC:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 801167DC
L_801167E0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801167E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801167CC; } // 801167E4
  c->r[30]=0u+0x00000000u; // 801167E8
L_801167EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801167EC
  if (crb(c,2)) { goto L_801168CC; } // 801167F0
  c->r[3]=R32(c->r[30]+0x00000018u); // 801167F4
  c->r[5]=0u+0x00000001u; // 801167F8
  c->r[4]=R32(c->r[31]+0x00000018u); // 801167FC
  c->r[6]=0u+0x00000001u; // 80116800
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80116804
  c->r[7]=0u+0x00000001u; // 80116808
  c->r[12]=R32(c->r[12]+0x00000058u); // 8011680C
  c->ctr=c->r[12]; // 80116810
  if (true) { c->lr=0x80116818u; dispatch(c,c->ctr); } // 80116814
  c->r[3]=R32(c->r[30]+0x00000018u); // 80116818
  c->r[4]=0u+0x00000001u; // 8011681C
  c->r[5]=0u+0x00000001u; // 80116820
  c->r[6]=0u+0x00000001u; // 80116824
  c->lr=0x8011682Cu; f_802DA950(c); // 80116828
  c->r[3]=R32(c->r[31]+0x000001B0u); // 8011682C
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 80116830
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116834
  if (crb(c,2)) { goto L_801168B4; } // 80116838
  c->r[3]=R32(c->r[30]+0x00000018u); // 8011683C
  c->r[4]=0u+0x00000000u; // 80116840
  c->r[5]=0u+0x00000001u; // 80116844
  c->lr=0x8011684Cu; f_8010D368(c); // 80116848
  c->r[5]=R32(c->r[31]+0x000001B0u); // 8011684C
  c->r[3]=c->r[30]|c->r[30]; // 80116850
  c->r[4]=R32(c->r[31]+0x000001B8u); // 80116854
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116858
  c->lr=0x80116860u; f_8010C220(c); // 8011685C
  c->r[3]=R32(c->r[31]+0x00000018u); // 80116860
  c->r[4]=0u+0x00000000u; // 80116864
  c->r[5]=0u+0x00000000u; // 80116868
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011686C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80116870
  c->ctr=c->r[12]; // 80116874
  if (true) { c->lr=0x8011687Cu; dispatch(c,c->ctr); } // 80116878
  c->r[3]=R32(c->r[31]+0x000001B0u); // 8011687C
  c->r[0]=R8(c->r[3]+0x000000A8u); // 80116880
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116884
  if (crb(c,2)) { goto L_801168AC; } // 80116888
  c->r[0]=R8(c->r[3]+0x000000ABu); // 8011688C
  c->r[4]=0u+0x00000000u; // 80116890
  c->r[3]=R32(c->r[31]+0x00000018u); // 80116894
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80116898
  c->r[0]=0u-c->r[5]; // 8011689C
  c->r[0]=c->r[0]|c->r[5]; // 801168A0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801168A4
  c->lr=0x801168ACu; f_8010BE84(c); // 801168A8
L_801168AC:;
  W32(c->r[31]+0x000001B4u,c->r[30]); // 801168AC
  goto L_80116980; // 801168B0
L_801168B4:;
  c->r[3]=R32(c->r[31]+0x000001B4u); // 801168B4
  c->r[4]=0u+0x00000001u; // 801168B8
  c->r[5]=0u+0x00000001u; // 801168BC
  c->r[3]=R32(c->r[3]+0x00000018u); // 801168C0
  c->lr=0x801168C8u; f_8010BE84(c); // 801168C4
  goto L_80116980; // 801168C8
L_801168CC:;
  c->r[3]=R32(c->r[31]+0x000001B0u); // 801168CC
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 801168D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801168D4
  if (crb(c,2)) { goto L_80116980; } // 801168D8
  c->r[3]=R32(c->r[31]+0x00000018u); // 801168DC
  c->r[4]=0u+0x00000000u; // 801168E0
  c->r[5]=0u+0x00000000u; // 801168E4
  c->r[12]=R32(c->r[3]+0x000000B4u); // 801168E8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801168EC
  c->ctr=c->r[12]; // 801168F0
  if (true) { c->lr=0x801168F8u; dispatch(c,c->ctr); } // 801168F4
  c->r[3]=R32(c->r[31]+0x000001B0u); // 801168F8
  c->r[0]=R8(c->r[3]+0x000000A8u); // 801168FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116900
  if (crb(c,2)) { goto L_80116980; } // 80116904
  c->r[0]=R8(c->r[3]+0x000000ABu); // 80116908
  c->r[4]=0u+0x00000000u; // 8011690C
  c->r[3]=R32(c->r[31]+0x00000018u); // 80116910
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80116914
  c->r[0]=0u-c->r[5]; // 80116918
  c->r[0]=c->r[0]|c->r[5]; // 8011691C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80116920
  c->lr=0x80116928u; f_8010BE84(c); // 80116924
  goto L_80116980; // 80116928
L_8011692C:;
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011692C
  {uint32_t ea=c->r[3]+0x000001ACu; WF32(ea,c->f[0]);} // 80116930
  c->r[3]=R32(c->r[3]+0x00000194u); // 80116934
  c->lr=0x8011693Cu; f_8030D188(c); // 80116938
  c->r[3]=R32(c->r[31]+0x00000198u); // 8011693C
  c->lr=0x80116944u; f_8030D188(c); // 80116940
  c->r[0]=0u+0x00000000u; // 80116944
  W8(c->r[31]+0x000001A9u,c->r[0]); // 80116948
  c->r[6]=R32(c->r[31]+0x000001B0u); // 8011694C
  c->r[4]=0u+0x00000001u; // 80116950
  c->r[3]=R32(c->r[31]+0x00000018u); // 80116954
  c->r[5]=0u+0x00000001u; // 80116958
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011695C
  c->r[6]=0u+0x00000001u; // 80116960
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[0]);} // 80116964
  W32(c->r[31]+0x000001C4u,c->r[0]); // 80116968
  c->lr=0x80116970u; f_802DA950(c); // 8011696C
  c->r[3]=R32(c->r[31]+0x00000018u); // 80116970
  c->r[4]=0u+0x00000001u; // 80116974
  c->r[5]=0u+0x00000001u; // 80116978
  c->lr=0x80116980u; f_8010BE84(c); // 8011697C
L_80116980:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80116980
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80116984
  c->r[30]=R32(c->r[1]+0x00000028u); // 80116988
  c->r[29]=R32(c->r[1]+0x00000024u); // 8011698C
  c->lr=c->r[0]; // 80116990
  c->r[1]=c->r[1]+0x00000030u; // 80116994
  return; // 80116998
}

// fn_8011699C
void f_8011699C(Ctx* __restrict c) {
  trace_call(0x8011699Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011699C
  c->r[0]=c->lr; // 801169A0
  W32(c->r[1]+0x00000134u,c->r[0]); // 801169A4
  c->r[11]=c->r[1]+0x00000130u; // 801169A8
  c->lr=0x801169B0u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801169AC
  c->r[0]=R32(c->r[6]+0x00000070u); // 801169B0
  c->r[22]=c->r[3]|c->r[3]; // 801169B4
  c->r[18]=c->r[4]|c->r[4]; // 801169B8
  c->r[20]=c->r[5]|c->r[5]; // 801169BC
  c->r[0]=c->r[0]|0x00000002u; // 801169C0
  c->r[19]=c->r[6]|c->r[6]; // 801169C4
  cmps(c,0,(int32_t)c->r[0],0); // 801169C8
  if (crb(c,2)) { goto L_80116BE8; } // 801169CC
  c->r[4]=R32(c->r[3]+0x000001B0u); // 801169D0
  c->r[0]=R8(c->r[4]+0x000000D4u); // 801169D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801169D8
  if (crb(c,2)) { goto L_80116A2C; } // 801169DC
  {uint32_t ea=c->r[6]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801169E0
  {uint32_t ea=c->r[6]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801169E4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 801169E8
  {uint32_t ea=c->r[6]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 801169EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 801169F0
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801169F4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801169F8
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[0]); // 801169FC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 80116A00
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80116A04
  fcmp(c,0,c->f[0],c->f[4]); // 80116A08
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80116A0C
  if (!crb(c,2)) { goto L_80116A2C; } // 80116A10
  c->r[12]=R32(c->r[3]+0x00000020u); // 80116A14
  c->r[4]=0u+0x00000001u; // 80116A18
  c->r[5]=0u+0x00000000u; // 80116A1C
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80116A20
  c->ctr=c->r[12]; // 80116A24
  if (true) { c->lr=0x80116A2Cu; dispatch(c,c->ctr); } // 80116A28
L_80116A2C:;
  c->r[3]=R32(c->r[22]+0x000001B0u); // 80116A2C
  c->r[0]=R8(c->r[3]+0x000000DCu); // 80116A30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116A34
  if (crb(c,2)) { goto L_80116BE8; } // 80116A38
  {uint32_t ea=c->r[19]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116A3C
  {uint32_t ea=c->r[19]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116A40
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 80116A44
  {uint32_t ea=c->r[19]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80116A48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80116A4C
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116A50
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80116A54
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[0]); // 80116A58
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 80116A5C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80116A60
  fcmp(c,0,c->f[0],c->f[4]); // 80116A64
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80116A68
  if (!crb(c,2)) { goto L_80116BE8; } // 80116A6C
  c->r[3]=c->r[18]|c->r[18]; // 80116A70
  c->lr=0x80116A78u; f_80142378(c); // 80116A74
  c->r[18]=c->r[3]|c->r[3]; // 80116A78
  c->r[3]=c->r[20]|c->r[20]; // 80116A7C
  c->lr=0x80116A84u; f_80142378(c); // 80116A80
  cmps(c,0,(int32_t)c->r[18],0); // 80116A84
  c->r[21]=c->r[3]|c->r[3]; // 80116A88
  if (crb(c,2)) { goto L_80116BE8; } // 80116A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80116A90
  if (crb(c,2)) { goto L_80116BE8; } // 80116A94
  {uint32_t ea=c->r[19]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116A98
  c->r[11]=0u+0x80480000u; // 80116A9C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80116AA0
  c->r[11]=c->r[11]+0xFFFFF648u; // 80116AA4
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116AA8
  c->r[4]=c->r[18]|c->r[18]; // 80116AAC
  {uint32_t ea=c->r[19]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116AB0
  c->r[5]=c->r[20]|c->r[20]; // 80116AB4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80116AB8
  c->r[3]=c->r[1]+0x00000090u; // 80116ABC
  c->r[9]=c->r[1]+0x0000001Cu; // 80116AC0
  c->r[10]=c->r[1]+0x00000010u; // 80116AC4
  {uint32_t ea=c->r[19]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116AC8
  c->r[6]=0u+0x00000006u; // 80116ACC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80116AD0
  c->r[7]=0u+0x00000000u; // 80116AD4
  c->r[8]=0u+0x00000000u; // 80116AD8
  {uint32_t ea=c->r[19]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116ADC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80116AE0
  {uint32_t ea=c->r[19]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116AE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80116AE8
  {uint32_t ea=c->r[19]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116AEC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80116AF0
  W32(c->r[1]+0x00000008u,c->r[11]); // 80116AF4
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 80116AF8
  c->r[11]=R32(c->r[22]+0x000001B0u); // 80116AFC
  {uint32_t ea=c->r[11]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116B00
  c->lr=0x80116B08u; f_80140844(c); // 80116B04
  c->r[19]=R32(c->r[1]+0x00000090u); // 80116B08
  c->r[3]=c->r[21]|c->r[21]; // 80116B0C
  c->r[20]=R32(c->r[1]+0x00000094u); // 80116B10
  c->r[18]=0u+0x00000000u; // 80116B14
  c->r[21]=R32(c->r[1]+0x00000098u); // 80116B18
  c->r[4]=c->r[1]+0x00000028u; // 80116B1C
  c->r[22]=R32(c->r[1]+0x0000009Cu); // 80116B20
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116B24
  c->r[23]=R8(c->r[1]+0x000000A4u); // 80116B28
  c->r[24]=R32(c->r[1]+0x000000A8u); // 80116B2C
  c->r[25]=R32(c->r[1]+0x000000ACu); // 80116B30
  c->r[26]=R32(c->r[1]+0x000000B0u); // 80116B34
  c->r[27]=R32(c->r[1]+0x000000B4u); // 80116B38
  c->r[28]=R32(c->r[1]+0x000000B8u); // 80116B3C
  c->r[29]=R32(c->r[1]+0x000000BCu); // 80116B40
  c->r[30]=R32(c->r[1]+0x000000C0u); // 80116B44
  c->r[31]=R32(c->r[1]+0x000000C4u); // 80116B48
  c->r[12]=R32(c->r[1]+0x000000C8u); // 80116B4C
  c->r[11]=R32(c->r[1]+0x000000CCu); // 80116B50
  c->r[10]=R32(c->r[1]+0x000000D0u); // 80116B54
  c->r[9]=R32(c->r[1]+0x000000D4u); // 80116B58
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116B5C
  c->r[8]=R32(c->r[1]+0x000000DCu); // 80116B60
  c->r[7]=R32(c->r[1]+0x000000E0u); // 80116B64
  c->r[6]=R32(c->r[1]+0x000000E4u); // 80116B68
  c->r[5]=R32(c->r[1]+0x000000E8u); // 80116B6C
  c->r[0]=R32(c->r[1]+0x000000ECu); // 80116B70
  W32(c->r[1]+0x00000028u,c->r[18]); // 80116B74
  W32(c->r[1]+0x0000002Cu,c->r[19]); // 80116B78
  W32(c->r[1]+0x00000030u,c->r[20]); // 80116B7C
  W32(c->r[1]+0x00000034u,c->r[21]); // 80116B80
  W32(c->r[1]+0x00000038u,c->r[22]); // 80116B84
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80116B88
  W8(c->r[1]+0x00000040u,c->r[23]); // 80116B8C
  W32(c->r[1]+0x00000044u,c->r[24]); // 80116B90
  W32(c->r[1]+0x00000048u,c->r[25]); // 80116B94
  W32(c->r[1]+0x0000004Cu,c->r[26]); // 80116B98
  W32(c->r[1]+0x00000050u,c->r[27]); // 80116B9C
  W32(c->r[1]+0x00000054u,c->r[28]); // 80116BA0
  W32(c->r[1]+0x00000058u,c->r[29]); // 80116BA4
  W32(c->r[1]+0x0000005Cu,c->r[30]); // 80116BA8
  W32(c->r[1]+0x00000060u,c->r[31]); // 80116BAC
  W32(c->r[1]+0x00000064u,c->r[12]); // 80116BB0
  W32(c->r[1]+0x00000068u,c->r[11]); // 80116BB4
  W32(c->r[1]+0x0000006Cu,c->r[10]); // 80116BB8
  W32(c->r[1]+0x00000070u,c->r[9]); // 80116BBC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80116BC0
  W32(c->r[1]+0x00000078u,c->r[8]); // 80116BC4
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 80116BC8
  W32(c->r[1]+0x00000080u,c->r[6]); // 80116BCC
  W32(c->r[1]+0x00000084u,c->r[5]); // 80116BD0
  W32(c->r[1]+0x00000088u,c->r[0]); // 80116BD4
  c->r[12]=R32(c->r[3]+0x00000020u); // 80116BD8
  c->r[12]=R32(c->r[12]+0x000000C8u); // 80116BDC
  c->ctr=c->r[12]; // 80116BE0
  if (true) { c->lr=0x80116BE8u; dispatch(c,c->ctr); } // 80116BE4
L_80116BE8:;
  c->r[11]=c->r[1]+0x00000130u; // 80116BE8
  c->r[3]=0u+0x00000001u; // 80116BEC
  c->lr=0x80116BF4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80116BF0
  c->r[0]=R32(c->r[1]+0x00000134u); // 80116BF4
  c->lr=c->r[0]; // 80116BF8
  c->r[1]=c->r[1]+0x00000130u; // 80116BFC
  return; // 80116C00
}

// fn_80116C04
void f_80116C04(Ctx* __restrict c) {
  trace_call(0x80116C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80116C04
  c->r[0]=c->lr; // 80116C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80116C0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80116C10
  W32(c->r[1]+0x00000008u,c->r[30]); // 80116C14
  c->r[30]=c->r[3]|c->r[3]; // 80116C18
  c->lr=0x80116C20u; f_80141598(c); // 80116C1C
  c->r[3]=R32(c->r[30]+0x000001B0u); // 80116C20
  c->r[31]=R32(c->r[3]+0x000000E8u); // 80116C24
  cmps(c,0,(int32_t)c->r[31],0); // 80116C28
  if (crb(c,2)) { goto L_80116C48; } // 80116C2C
  c->r[3]=c->r[31]|c->r[31]; // 80116C30
  c->lr=0x80116C38u; f_8030D188(c); // 80116C34
  c->r[4]=R32(c->r[30]+0x00000018u); // 80116C38
  c->r[3]=c->r[31]|c->r[31]; // 80116C3C
  c->r[5]=0u+0x00000000u; // 80116C40
  c->lr=0x80116C48u; f_8030D51C(c); // 80116C44
L_80116C48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80116C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80116C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80116C50
  c->lr=c->r[0]; // 80116C54
  c->r[1]=c->r[1]+0x00000010u; // 80116C58
  return; // 80116C5C
}

// fn_80116C60
void f_80116C60(Ctx* __restrict c) {
  trace_call(0x80116C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80116C60
  c->r[0]=c->lr; // 80116C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80116C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80116C6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80116C70
  c->r[30]=c->r[3]|c->r[3]; // 80116C74
  c->lr=0x80116C7Cu; f_801410F0(c); // 80116C78
  c->r[3]=R32(c->r[30]+0x000001B0u); // 80116C7C
  c->r[31]=R32(c->r[3]+0x000000ECu); // 80116C80
  cmps(c,0,(int32_t)c->r[31],0); // 80116C84
  if (crb(c,2)) { goto L_80116CA4; } // 80116C88
  c->r[3]=c->r[31]|c->r[31]; // 80116C8C
  c->lr=0x80116C94u; f_8030D188(c); // 80116C90
  c->r[4]=R32(c->r[30]+0x00000018u); // 80116C94
  c->r[3]=c->r[31]|c->r[31]; // 80116C98
  c->r[5]=0u+0x00000000u; // 80116C9C
  c->lr=0x80116CA4u; f_8030D51C(c); // 80116CA0
L_80116CA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80116CA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80116CA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80116CAC
  c->lr=c->r[0]; // 80116CB0
  c->r[1]=c->r[1]+0x00000010u; // 80116CB4
  return; // 80116CB8
}

// fn_80116CBC
void f_80116CBC(Ctx* __restrict c) {
  trace_call(0x80116CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80116CBC
  c->r[0]=c->lr; // 80116CC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80116CC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80116CC8
  c->r[31]=c->r[4]|c->r[4]; // 80116CCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80116CD0
  c->r[30]=c->r[3]|c->r[3]; // 80116CD4
  c->lr=0x80116CDCu; f_80143368(c); // 80116CD8
  cmps(c,0,(int32_t)c->r[31],0); // 80116CDC
  if (crb(c,2)) { goto L_80116D24; } // 80116CE0
  c->r[3]=R32(c->r[30]+0x000001BCu); // 80116CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80116CE8
  if (crb(c,2)) { goto L_80116D60; } // 80116CEC
  c->r[0]=R32(c->r[30]+0x000001C0u); // 80116CF0
  cmps(c,0,(int32_t)c->r[0],0); // 80116CF4
  if (!crb(c,2)) { goto L_80116D60; } // 80116CF8
  c->r[3]=R32(c->r[3]+0x00000018u); // 80116CFC
  c->r[4]=0u+0x00000001u; // 80116D00
  c->r[5]=R32(c->r[30]+0x00000018u); // 80116D04
  c->r[6]=0u+0x00000000u; // 80116D08
  c->r[7]=0u+0x80000000u; // 80116D0C
  c->r[8]=0u+0x00000000u; // 80116D10
  c->r[9]=0u+0x00000000u; // 80116D14
  c->lr=0x80116D1Cu; f_802DE190(c); // 80116D18
  W32(c->r[30]+0x000001C0u,c->r[3]); // 80116D1C
  goto L_80116D60; // 80116D20
L_80116D24:;
  c->r[3]=R32(c->r[30]+0x000001C0u); // 80116D24
  cmps(c,0,(int32_t)c->r[3],0); // 80116D28
  if (crb(c,2)) { goto L_80116D60; } // 80116D2C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80116D30
  c->r[4]=0u+0x00000001u; // 80116D34
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80116D38
  c->ctr=c->r[12]; // 80116D3C
  if (true) { c->lr=0x80116D44u; dispatch(c,c->ctr); } // 80116D40
  c->r[3]=R32(c->r[30]+0x000001C0u); // 80116D44
  c->r[12]=R32(c->r[3]+0x000000B4u); // 80116D48
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80116D4C
  c->ctr=c->r[12]; // 80116D50
  if (true) { c->lr=0x80116D58u; dispatch(c,c->ctr); } // 80116D54
  c->r[0]=0u+0x00000000u; // 80116D58
  W32(c->r[30]+0x000001C0u,c->r[0]); // 80116D5C
L_80116D60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80116D60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80116D64
  c->r[30]=R32(c->r[1]+0x00000008u); // 80116D68
  c->lr=c->r[0]; // 80116D6C
  c->r[1]=c->r[1]+0x00000010u; // 80116D70
  return; // 80116D74
}

// fn_80116D78
void f_80116D78(Ctx* __restrict c) {
  trace_call(0x80116D78u);
  c->r[3]=0u+0x00000001u; // 80116D78
  return; // 80116D7C
}

// fn_80116D80
void f_80116D80(Ctx* __restrict c) {
  trace_call(0x80116D80u);
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116D80
  c->r[5]=0u+0x80420000u; // 80116D84
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116D88
  c->r[4]=c->r[3]+0x0000000Cu; // 80116D8C
  c->r[5]=c->r[5]+0x00002E70u; // 80116D90
  c->r[0]=0u+0x00000000u; // 80116D94
  W32(c->r[3]+0x00000004u,c->r[0]); // 80116D98
  W32(c->r[3]+0x00000000u,c->r[5]); // 80116D9C
  W32(c->r[3]+0x00000008u,c->r[4]); // 80116DA0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80116DA4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80116DA8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80116DAC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80116DB0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80116DB4
  return; // 80116DB8
}

// fn_80116DBC
void f_80116DBC(Ctx* __restrict c) {
  trace_call(0x80116DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80116DBC
  c->r[0]=c->lr; // 80116DC0
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80116DC4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80116DC8
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116DCC
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80116DD0
  c->r[31]=c->r[5]|c->r[5]; // 80116DD4
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116DD8
  W32(c->r[1]+0x00000098u,c->r[30]); // 80116DDC
  c->r[30]=c->r[4]|c->r[4]; // 80116DE0
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116DE4
  W32(c->r[1]+0x00000094u,c->r[29]); // 80116DE8
  c->r[29]=c->r[3]|c->r[3]; // 80116DEC
  c->r[3]=R32(c->r[4]+0x000000C8u); // 80116DF0
  c->r[4]=c->r[1]+0x00000078u; // 80116DF4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80116DF8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80116DFC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80116E00
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 80116E04
  c->lr=0x80116E0Cu; f_80262310(c); // 80116E08
  c->r[5]=R32(c->r[31]+0x00000160u); // 80116E0C
  c->r[4]=c->r[1]+0x00000068u; // 80116E10
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80116E14
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80116E18
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116E1C
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116E20
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116E24
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80116E28
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80116E2C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[2]);} // 80116E30
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[3]);} // 80116E34
  c->lr=0x80116E3Cu; f_80262310(c); // 80116E38
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116E3C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116E40
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80116E44
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80116E48
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80116E4C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116E50
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 80116E54
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116E58
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 80116E5C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80116E60
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 80116E64
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 80116E68
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116E6C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 80116E70
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80116E74
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80116E78
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[5]);} // 80116E7C
  {uint32_t ea=c->r[2]+0xFFFF89ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80116E80
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 80116E84
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 80116E88
  fcmp(c,0,c->f[3],c->f[0]); // 80116E8C
  if (!crb(c,0)) { goto L_80116E9C; } // 80116E90
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116E94
  goto L_80116EB8; // 80116E98
L_80116E9C:;
  c->f[0]=frsqrte(c->f[3]); // 80116E9C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80116EA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 80116EA4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 80116EA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80116EAC
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[3]; // 80116EB0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[0]); // 80116EB4
L_80116EB8:;
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116EB8
  c->r[3]=c->r[1]+0x00000048u; // 80116EBC
  c->r[4]=c->r[1]+0x00000058u; // 80116EC0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80116EC4
  c->lr=0x80116ECCu; f_8025DFB0(c); // 80116EC8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116ECC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116ED0
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80116ED4
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 80116ED8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80116EDC
  c->r[0]=R32(c->r[31]+0x00000160u); // 80116EE0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80116EE4
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116EE8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116EEC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116EF0
  cmps(c,0,(int32_t)c->r[0],0); // 80116EF4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 80116EF8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80116EFC
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116F00
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 80116F04
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80116F08
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80116F0C
  if (crb(c,2)) { goto L_80116FEC; } // 80116F10
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80116F14
  c->r[4]=c->r[1]+0x00000028u; // 80116F18
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116F1C
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116F20
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116F24
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80116F28
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80116F2C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80116F30
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80116F34
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80116F38
  c->lr=0x80116F40u; f_80262310(c); // 80116F3C
  c->r[5]=R32(c->r[31]+0x00000160u); // 80116F40
  c->r[4]=c->r[1]+0x00000018u; // 80116F44
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80116F48
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80116F4C
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116F50
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116F54
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116F58
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80116F5C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80116F60
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80116F64
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 80116F68
  c->lr=0x80116F70u; f_80262310(c); // 80116F6C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116F70
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116F74
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80116F78
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80116F7C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80116F80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80116F84
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 80116F88
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116F8C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 80116F90
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80116F94
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80116F98
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 80116F9C
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80116FA0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 80116FA4
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80116FA8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80116FAC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 80116FB0
  {uint32_t ea=c->r[2]+0xFFFF89ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80116FB4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 80116FB8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 80116FBC
  fcmp(c,0,c->f[3],c->f[0]); // 80116FC0
  if (!crb(c,0)) { goto L_80116FD0; } // 80116FC4
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80116FC8
  goto L_80116FEC; // 80116FCC
L_80116FD0:;
  c->f[0]=frsqrte(c->f[3]); // 80116FD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80116FD4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 80116FD8
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 80116FDC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80116FE0
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[3]; // 80116FE4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 80116FE8
L_80116FEC:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 80116FEC
  c->r[3]=c->r[29]|c->r[29]; // 80116FF0
  c->r[0]=R8(c->r[4]+0x00000008u); // 80116FF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80116FF8
  if (crb(c,2)) { goto L_80117014; } // 80116FFC
  {uint32_t ea=c->r[2]+0xFFFF89B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117000
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80117004
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80117008
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 8011700C
  goto L_80117018; // 80117010
L_80117014:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117014
L_80117018:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117018
  c->r[12]=R32(c->r[12]+0x00000028u); // 8011701C
  c->ctr=c->r[12]; // 80117020
  if (true) { c->lr=0x80117028u; dispatch(c,c->ctr); } // 80117024
  c->r[12]=R32(c->r[29]+0x00000000u); // 80117028
  c->r[3]=c->r[29]|c->r[29]; // 8011702C
  c->r[4]=c->r[1]+0x00000038u; // 80117030
  c->r[12]=R32(c->r[12]+0x00000018u); // 80117034
  c->ctr=c->r[12]; // 80117038
  if (true) { c->lr=0x80117040u; dispatch(c,c->ctr); } // 8011703C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80117040
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80117044
  c->r[30]=R32(c->r[1]+0x00000098u); // 80117048
  c->r[29]=R32(c->r[1]+0x00000094u); // 8011704C
  c->lr=c->r[0]; // 80117050
  c->r[1]=c->r[1]+0x000000A0u; // 80117054
  return; // 80117058
}

// fn_8011705C
void f_8011705C(Ctx* __restrict c) {
  trace_call(0x8011705Cu);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8011705C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80117060
  return; // 80117064
}

// fn_80117068
void f_80117068(Ctx* __restrict c) {
  trace_call(0x80117068u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80117068
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011706C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80117070
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117074
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80117078
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011707C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80117080
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80117084
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80117088
  return; // 8011708C
}

// fn_80117090
void f_80117090(Ctx* __restrict c) {
  trace_call(0x80117090u);
  return; // 80117090
}

// fn_80117094
void f_80117094(Ctx* __restrict c) {
  trace_call(0x80117094u);
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117094
  c->r[5]=0u+0x80420000u; // 80117098
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011709C
  c->r[4]=c->r[3]+0x0000000Cu; // 801170A0
  c->r[5]=c->r[5]+0x00002E38u; // 801170A4
  c->r[0]=0u+0x00000000u; // 801170A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801170AC
  W32(c->r[3]+0x00000000u,c->r[5]); // 801170B0
  W32(c->r[3]+0x00000008u,c->r[4]); // 801170B4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801170B8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801170BC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801170C0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801170C4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801170C8
  c->r[4]=R32(c->r[3]+0x00000008u); // 801170CC
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[1]);} // 801170D0
  c->r[4]=R32(c->r[3]+0x00000008u); // 801170D4
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[1]);} // 801170D8
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 801170DC
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[1]);} // 801170E0
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 801170E4
  return; // 801170E8
}

// fn_801170EC
void f_801170EC(Ctx* __restrict c) {
  trace_call(0x801170ECu);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801170EC
  c->r[0]=c->lr; // 801170F0
  W32(c->r[1]+0x00000184u,c->r[0]); // 801170F4
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 801170F8
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 801170FC
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[30]);} // 80117100
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,30,ea,0,0);} // 80117104
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80117108
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 8011710C
  c->r[31]=c->r[5]|c->r[5]; // 80117110
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80117114
  W32(c->r[1]+0x00000158u,c->r[30]); // 80117118
  c->r[30]=c->r[4]|c->r[4]; // 8011711C
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117120
  W32(c->r[1]+0x00000154u,c->r[29]); // 80117124
  c->r[29]=c->r[3]|c->r[3]; // 80117128
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011712C
  c->r[3]=R32(c->r[4]+0x000000C8u); // 80117130
  c->r[4]=c->r[1]+0x000000F8u; // 80117134
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80117138
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 8011713C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 80117140
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[3]);} // 80117144
  c->lr=0x8011714Cu; f_80262310(c); // 80117148
  c->r[5]=R32(c->r[31]+0x00000160u); // 8011714C
  c->r[4]=c->r[1]+0x000000E8u; // 80117150
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80117154
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80117158
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011715C
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117160
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117164
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80117168
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 8011716C
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[2]);} // 80117170
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[3]);} // 80117174
  c->lr=0x8011717Cu; f_80262310(c); // 80117178
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011717C
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117180
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80117184
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80117188
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011718C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117190
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 80117194
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117198
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 8011719C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801171A0
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[3]);} // 801171A4
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 801171A8
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801171AC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 801171B0
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801171B4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801171B8
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[5]);} // 801171BC
  {uint32_t ea=c->r[2]+0xFFFF89ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801171C0
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[4]);} // 801171C4
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801171C8
  fcmp(c,0,c->f[3],c->f[0]); // 801171CC
  if (!crb(c,0)) { goto L_801171DC; } // 801171D0
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801171D4
  goto L_801171F8; // 801171D8
L_801171DC:;
  c->f[0]=frsqrte(c->f[3]); // 801171DC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 801171E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 801171E4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 801171E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801171EC
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[3]; // 801171F0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[0]); // 801171F4
L_801171F8:;
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801171F8
  c->r[3]=c->r[1]+0x000000C8u; // 801171FC
  c->r[4]=c->r[1]+0x000000D8u; // 80117200
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80117204
  c->lr=0x8011720Cu; f_8025DFB0(c); // 80117208
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011720C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117210
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[4]=c->ps1[4]=RF32(ea);} // 80117214
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 80117218
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011721C
  c->r[0]=R32(c->r[31]+0x00000160u); // 80117220
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80117224
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117228
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011722C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117230
  cmps(c,0,(int32_t)c->r[0],0); // 80117234
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[5]);} // 80117238
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8011723C
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80117240
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[3]);} // 80117244
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80117248
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8011724C
  if (crb(c,2)) { goto L_8011732C; } // 80117250
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80117254
  c->r[4]=c->r[1]+0x000000A8u; // 80117258
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011725C
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117260
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117264
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 80117268
  c->r[3]=R32(c->r[30]+0x000000C8u); // 8011726C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 80117270
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[2]);} // 80117274
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 80117278
  c->lr=0x80117280u; f_80262310(c); // 8011727C
  c->r[5]=R32(c->r[31]+0x00000160u); // 80117280
  c->r[4]=c->r[1]+0x00000098u; // 80117284
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80117288
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011728C
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80117290
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117294
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117298
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8011729C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 801172A0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 801172A4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[3]);} // 801172A8
  c->lr=0x801172B0u; f_80262310(c); // 801172AC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801172B0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801172B4
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801172B8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801172BC
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801172C0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801172C4
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801172C8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801172CC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 801172D0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801172D4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 801172D8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 801172DC
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801172E0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 801172E4
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801172E8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801172EC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[5]);} // 801172F0
  {uint32_t ea=c->r[2]+0xFFFF89ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801172F4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[4]);} // 801172F8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801172FC
  fcmp(c,0,c->f[3],c->f[0]); // 80117300
  if (!crb(c,0)) { goto L_80117310; } // 80117304
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80117308
  goto L_8011732C; // 8011730C
L_80117310:;
  c->f[0]=frsqrte(c->f[3]); // 80117310
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80117314
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 80117318
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 8011731C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80117320
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[3]; // 80117324
  c->f[31]=c->ps1[31]=S(c->f[3]*c->f[0]); // 80117328
L_8011732C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 8011732C
  c->r[0]=R8(c->r[4]+0x00000014u); // 80117330
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80117334
  if (crb(c,2)) { goto L_80117350; } // 80117338
  {uint32_t ea=c->r[2]+0xFFFF89B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011733C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117340
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80117344
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[0]); // 80117348
  goto L_80117354; // 8011734C
L_80117350:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80117350
L_80117354:;
  c->r[0]=R8(c->r[4]+0x00000020u); // 80117354
  c->r[3]=c->r[29]|c->r[29]; // 80117358
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011735C
  if (crb(c,2)) { goto L_80117378; } // 80117360
  {uint32_t ea=c->r[2]+0xFFFF89B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117364
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117368
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011736C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 80117370
  goto L_8011737C; // 80117374
L_80117378:;
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117378
L_8011737C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8011737C
  c->r[12]=R32(c->r[12]+0x00000028u); // 80117380
  c->ctr=c->r[12]; // 80117384
  if (true) { c->lr=0x8011738Cu; dispatch(c,c->ctr); } // 80117388
  c->r[12]=R32(c->r[29]+0x00000000u); // 8011738C
  c->f[1]=c->f[30]; // 80117390
  c->r[3]=c->r[29]|c->r[29]; // 80117394
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80117398
  c->ctr=c->r[12]; // 8011739C
  if (true) { c->lr=0x801173A4u; dispatch(c,c->ctr); } // 801173A0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801173A4
  c->r[3]=c->r[29]|c->r[29]; // 801173A8
  c->r[12]=R32(c->r[12]+0x00000034u); // 801173AC
  c->ctr=c->r[12]; // 801173B0
  if (true) { c->lr=0x801173B8u; dispatch(c,c->ctr); } // 801173B4
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801173B8
  c->r[3]=c->r[1]+0x00000078u; // 801173BC
  c->r[4]=c->r[1]+0x000000C8u; // 801173C0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801173C4
  c->lr=0x801173CCu; f_8025DFB0(c); // 801173C8
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801173CC
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801173D0
  fcmp(c,0,c->f[1],c->f[0]); // 801173D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801173D8
  if (!crb(c,2)) { goto L_80117414; } // 801173DC
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801173E0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801173E4
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801173E8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801173EC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801173F0
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801173F4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801173F8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801173FC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 80117400
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80117404
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 80117408
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8011740C
  goto L_80117444; // 80117410
L_80117414:;
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117414
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117418
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011741C
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 80117420
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80117424
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117428
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011742C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80117430
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 80117434
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80117438
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 8011743C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80117440
L_80117444:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80117444
  c->r[3]=c->r[29]|c->r[29]; // 80117448
  c->r[4]=c->r[1]+0x00000068u; // 8011744C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80117450
  c->ctr=c->r[12]; // 80117454
  if (true) { c->lr=0x8011745Cu; dispatch(c,c->ctr); } // 80117458
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011745C
  c->r[3]=c->r[1]+0x00000058u; // 80117460
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117464
  c->r[4]=c->r[3]|c->r[3]; // 80117468
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011746C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80117470
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80117474
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117478
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011747C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 80117480
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[4]);} // 80117484
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80117488
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8011748C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80117490
  c->lr=0x80117498u; f_8025DD90(c); // 80117494
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80117498
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011749C
  c->f[3]=std::fabs(c->f[1]); // 801174A0
  {uint32_t ea=c->r[2]+0xFFFF89B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801174A4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 801174A8
  c->f[3]=c->ps1[3]=S(c->f[3]); // 801174AC
  fcmp(c,0,c->f[3],c->f[0]); // 801174B0
  if (!crb(c,1)) { goto L_801174D0; } // 801174B4
  c->f[0]=-c->f[1]; // 801174B8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801174BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801174C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801174C4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801174C8
  goto L_801174E8; // 801174CC
L_801174D0:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801174D0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801174D4
  c->f[0]=-c->f[0]; // 801174D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801174DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801174E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801174E4
L_801174E8:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=c->ps1[7]=RF32(ea);} // 801174E8
  c->r[3]=c->r[1]+0x00000048u; // 801174EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801174F0
  c->r[4]=c->r[3]|c->r[3]; // 801174F4
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[7]); // 801174F8
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801174FC
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[5]); // 80117500
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 80117504
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117508
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[10]); // 8011750C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 80117510
  {uint32_t ea=c->r[1]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 80117514
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 80117518
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8011751C
  c->f[3]=c->ps1[3]=S(c->f[8]+c->f[3]); // 80117520
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[9]=c->ps1[9]=RF32(ea);} // 80117524
  {uint32_t ea=c->r[2]+0xFFFF89ACu; c->f[8]=c->ps1[8]=RF32(ea);} // 80117528
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8011752C
  c->f[12]=frsqrte(c->f[3]); // 80117530
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[1]);} // 80117534
  c->f[11]=c->ps1[11]=S(c->f[12]*c->f[12]); // 80117538
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[2]);} // 8011753C
  c->f[9]=c->ps1[9]=S(c->f[12]*c->f[9]); // 80117540
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[4]);} // 80117544
  c->f[11]=c->ps1[11]=S(-std::fma(c->f[11],c->f[3],-c->f[8])); // 80117548
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[6]);} // 8011754C
  c->f[12]=c->ps1[12]=S(c->f[11]*c->f[9]); // 80117550
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[0]);} // 80117554
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 80117558
  c->f[3]=(c->f[12]>=0.0)?c->f[12]:c->f[3]; // 8011755C
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 80117560
  c->f[9]=c->ps1[9]=S(c->f[7]*c->f[3]); // 80117564
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 80117568
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[3]); // 8011756C
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[3]); // 80117570
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[9]);} // 80117574
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[9]); // 80117578
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[7]); // 8011757C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[8]);} // 80117580
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[8]); // 80117584
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[7]); // 80117588
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[7]);} // 8011758C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 80117590
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[8]); // 80117594
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[9]);} // 80117598
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 8011759C
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[9]); // 801175A0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 801175A4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[4]);} // 801175A8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801175AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 801175B0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801175B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801175B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801175BC
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[8]);} // 801175C0
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[7]);} // 801175C4
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[4]);} // 801175C8
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 801175CC
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 801175D0
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 801175D4
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 801175D8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 801175DC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 801175E0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 801175E4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801175E8
  c->lr=0x801175F0u; f_8025DD90(c); // 801175EC
  {uint32_t ea=c->r[2]+0xFFFF89BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801175F0
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801175F4
  fcmp(c,0,c->f[31],c->f[0]); // 801175F8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 801175FC
  if (!crb(c,1)) { goto L_80117618; } // 80117600
  c->r[3]=c->r[1]+0x00000038u; // 80117604
  c->r[4]=c->r[1]+0x00000048u; // 80117608
  c->r[5]=0u+0x00000000u; // 8011760C
  c->lr=0x80117614u; f_80260500(c); // 80117610
  goto L_8011762C; // 80117614
L_80117618:;
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117618
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8011761C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80117620
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80117624
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80117628
L_8011762C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8011762C
  c->r[3]=c->r[29]|c->r[29]; // 80117630
  c->r[4]=c->r[1]+0x00000038u; // 80117634
  c->r[12]=R32(c->r[12]+0x00000030u); // 80117638
  c->ctr=c->r[12]; // 8011763C
  if (true) { c->lr=0x80117644u; dispatch(c,c->ctr); } // 80117640
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 80117644
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 80117648
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,30,ea,0,0);} // 8011764C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[30]=RF64(ea);} // 80117650
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 80117654
  c->r[30]=R32(c->r[1]+0x00000158u); // 80117658
  c->r[0]=R32(c->r[1]+0x00000184u); // 8011765C
  c->r[29]=R32(c->r[1]+0x00000154u); // 80117660
  c->lr=c->r[0]; // 80117664
  c->r[1]=c->r[1]+0x00000180u; // 80117668
  return; // 8011766C
}

// fn_80117670
void f_80117670(Ctx* __restrict c) {
  trace_call(0x80117670u);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 80117670
  return; // 80117674
}

// fn_80117678
void f_80117678(Ctx* __restrict c) {
  trace_call(0x80117678u);
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80117678
  return; // 8011767C
}

// fn_80117680
void f_80117680(Ctx* __restrict c) {
  trace_call(0x80117680u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117680
  return; // 80117684
}

// fn_80117688
void f_80117688(Ctx* __restrict c) {
  trace_call(0x80117688u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80117688
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011768C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117690
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80117694
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 80117698
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8011769C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801176A0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801176A4
  return; // 801176A8
}

// fn_801176AC
void f_801176AC(Ctx* __restrict c) {
  trace_call(0x801176ACu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801176AC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801176B0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801176B4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801176B8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 801176BC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 801176C0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 801176C4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801176C8
  return; // 801176CC
}

// fn_801176D0
void f_801176D0(Ctx* __restrict c) {
  trace_call(0x801176D0u);
  return; // 801176D0
}

// GetFormat__Q44nw4r3snd6detail5VoiceCFv
void f_801176D4(Ctx* __restrict c) {
  trace_call(0x801176D4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801176D4
  cmps(c,0,(int32_t)c->r[3],0); // 801176D8
  if (crb(c,2)) { goto L_801176E8; } // 801176DC
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 801176E0
  return; // 801176E4
L_801176E8:;
  c->r[3]=0u+0x00000000u; // 801176E8
  return; // 801176EC
}

// fn_801176F0
void f_801176F0(Ctx* __restrict c) {
  trace_call(0x801176F0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801176F0
  return; // 801176F4
}

// fn_801176F8
void f_801176F8(Ctx* __restrict c) {
  trace_call(0x801176F8u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 801176F8
  return; // 801176FC
}

// fn_80117700
void f_80117700(Ctx* __restrict c) {
  trace_call(0x80117700u);
  c->r[3]=0u+0x0000000Cu; // 80117700
  return; // 80117704
}

// fn_80117708
void f_80117708(Ctx* __restrict c) {
  trace_call(0x80117708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80117708
  c->r[0]=c->lr; // 8011770C
  cmps(c,0,(int32_t)c->r[3],0); // 80117710
  W32(c->r[1]+0x00000014u,c->r[0]); // 80117714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80117718
  c->r[31]=c->r[3]|c->r[3]; // 8011771C
  if (crb(c,2)) { goto L_80117730; } // 80117720
  cmps(c,0,(int32_t)c->r[4],0); // 80117724
  if (!crb(c,1)) { goto L_80117730; } // 80117728
  c->lr=0x80117730u; f_80244DC0(c); // 8011772C
L_80117730:;
  c->r[3]=c->r[31]|c->r[31]; // 80117730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80117734
  c->r[0]=R32(c->r[1]+0x00000014u); // 80117738
  c->lr=c->r[0]; // 8011773C
  c->r[1]=c->r[1]+0x00000010u; // 80117740
  return; // 80117744
}

// fn_80117748
void f_80117748(Ctx* __restrict c) {
  trace_call(0x80117748u);
  c->r[3]=0u+0x0000000Au; // 80117748
  return; // 8011774C
}

// fn_80117750
void f_80117750(Ctx* __restrict c) {
  trace_call(0x80117750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80117750
  c->r[0]=c->lr; // 80117754
  cmps(c,0,(int32_t)c->r[3],0); // 80117758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011775C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80117760
  c->r[31]=c->r[3]|c->r[3]; // 80117764
  if (crb(c,2)) { goto L_80117778; } // 80117768
  cmps(c,0,(int32_t)c->r[4],0); // 8011776C
  if (!crb(c,1)) { goto L_80117778; } // 80117770
  c->lr=0x80117778u; f_80244DC0(c); // 80117774
L_80117778:;
  c->r[3]=c->r[31]|c->r[31]; // 80117778
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011777C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80117780
  c->lr=c->r[0]; // 80117784
  c->r[1]=c->r[1]+0x00000010u; // 80117788
  return; // 8011778C
}

// fn_80117790
void f_80117790(Ctx* __restrict c) {
  trace_call(0x80117790u);
  {uint32_t ea=c->r[2]+0xFFFF89C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117790
  c->r[4]=0u+0x80420000u; // 80117794
  c->r[0]=0u+0x00000000u; // 80117798
  {uint32_t ea=c->r[2]+0xFFFF89C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011779C
  c->r[4]=c->r[4]+0x00002EA0u; // 801177A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801177A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801177A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801177AC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801177B0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801177B4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801177B8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801177BC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801177C0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801177C4
  W8(c->r[3]+0x00000034u,c->r[0]); // 801177C8
  W32(c->r[3]+0x00000030u,c->r[0]); // 801177CC
  return; // 801177D0
}

// fn_801177D4
void f_801177D4(Ctx* __restrict c) {
  trace_call(0x801177D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801177D4
  c->r[0]=c->lr; // 801177D8
  cmps(c,0,(int32_t)c->r[3],0); // 801177DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801177E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801177E4
  c->r[31]=c->r[4]|c->r[4]; // 801177E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801177EC
  c->r[30]=c->r[3]|c->r[3]; // 801177F0
  if (crb(c,2)) { goto L_80117820; } // 801177F4
  c->r[12]=0u+0x80420000u; // 801177F8
  c->r[12]=c->r[12]+0x00002EA0u; // 801177FC
  W32(c->r[3]+0x00000000u,c->r[12]); // 80117800
  c->r[12]=R32(c->r[12]+0x00000014u); // 80117804
  c->ctr=c->r[12]; // 80117808
  if (true) { c->lr=0x80117810u; dispatch(c,c->ctr); } // 8011780C
  cmps(c,0,(int32_t)c->r[31],0); // 80117810
  if (!crb(c,1)) { goto L_80117820; } // 80117814
  c->r[3]=c->r[30]|c->r[30]; // 80117818
  c->lr=0x80117820u; f_80244DC0(c); // 8011781C
L_80117820:;
  c->r[3]=c->r[30]|c->r[30]; // 80117820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80117824
  c->r[30]=R32(c->r[1]+0x00000008u); // 80117828
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011782C
  c->lr=c->r[0]; // 80117830
  c->r[1]=c->r[1]+0x00000010u; // 80117834
  return; // 80117838
}

// fn_8011783C
void f_8011783C(Ctx* __restrict c) {
  trace_call(0x8011783Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011783C
  c->r[0]=c->lr; // 80117840
  W32(c->r[1]+0x00000024u,c->r[0]); // 80117844
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80117848
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011784C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80117850
  W32(c->r[1]+0x00000010u,c->r[28]); // 80117854
  c->r[28]=c->r[3]|c->r[3]; // 80117858
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8011785C
  cmps(c,0,(int32_t)c->r[0],0); // 80117860
  if (crb(c,2)) { goto L_801178CC; } // 80117864
  c->r[29]=0u+0x00000000u; // 80117868
  c->r[30]=0u+0x00000000u; // 8011786C
  c->r[31]=0u+0x00000000u; // 80117870
  goto L_801178B0; // 80117874
L_80117878:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80117878
  c->r[3]=R32(c->r[3]+c->r[30]); // 8011787C
  cmps(c,0,(int32_t)c->r[3],0); // 80117880
  if (crb(c,2)) { goto L_801178A8; } // 80117884
  if (crb(c,2)) { goto L_801178A0; } // 80117888
  c->r[12]=R32(c->r[3]+0x00000000u); // 8011788C
  c->r[4]=0u+0x00000001u; // 80117890
  c->r[12]=R32(c->r[12]+0x00000008u); // 80117894
  c->ctr=c->r[12]; // 80117898
  if (true) { c->lr=0x801178A0u; dispatch(c,c->ctr); } // 8011789C
L_801178A0:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801178A0
  W32(c->r[3]+c->r[30],c->r[31]); // 801178A4
L_801178A8:;
  c->r[30]=c->r[30]+0x00000004u; // 801178A8
  c->r[29]=c->r[29]+0x00000001u; // 801178AC
L_801178B0:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801178B0
  cmpu(c,0,c->r[29],c->r[0]); // 801178B4
  if (crb(c,0)) { IRQCHK(c); goto L_80117878; } // 801178B8
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801178BC
  c->lr=0x801178C4u; f_80244DD0(c); // 801178C0
  c->r[0]=0u+0x00000000u; // 801178C4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801178C8
L_801178CC:;
  {uint32_t ea=c->r[2]+0xFFFF89C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801178CC
  c->r[0]=0u+0x00000000u; // 801178D0
  {uint32_t ea=c->r[2]+0xFFFF89C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801178D4
  W32(c->r[28]+0x00000004u,c->r[0]); // 801178D8
  W32(c->r[28]+0x00000008u,c->r[0]); // 801178DC
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[1]);} // 801178E0
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[1]);} // 801178E4
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[1]);} // 801178E8
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 801178EC
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 801178F0
  W8(c->r[28]+0x00000034u,c->r[0]); // 801178F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801178F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801178FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80117900
  c->r[28]=R32(c->r[1]+0x00000010u); // 80117904
  c->r[0]=R32(c->r[1]+0x00000024u); // 80117908
  c->lr=c->r[0]; // 8011790C
  c->r[1]=c->r[1]+0x00000020u; // 80117910
  return; // 80117914
}

// fn_80117918
void f_80117918(Ctx* __restrict c) {
  trace_call(0x80117918u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 80117918
  W32(c->r[3]+0x00000030u,c->r[5]); // 8011791C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117920
  c->r[12]=R32(c->r[12]+0x00000010u); // 80117924
  c->ctr=c->r[12]; // 80117928
  if (true) { dispatch(c,c->ctr); return; } // 8011792C
}

// fn_80117930
void f_80117930(Ctx* __restrict c) {
  trace_call(0x80117930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80117930
  c->r[0]=c->lr; // 80117934
  W32(c->r[1]+0x00000024u,c->r[0]); // 80117938
  c->r[11]=c->r[1]+0x00000020u; // 8011793C
  c->lr=0x80117944u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80117940
  c->r[4]=R32(c->r[3]+0x00000004u); // 80117944
  c->r[30]=c->r[3]|c->r[3]; // 80117948
  cmps(c,0,(int32_t)c->r[4],0); // 8011794C
  if (crb(c,2)) { goto L_80117AF8; } // 80117950
  c->r[4]=R32(c->r[4]+0x000000C8u); // 80117954
  cmps(c,0,(int32_t)c->r[4],0); // 80117958
  if (crb(c,2)) { goto L_80117AF8; } // 8011795C
  c->r[4]=R32(c->r[4]+0x000001A4u); // 80117960
  c->r[4]=R32(c->r[4]+0x00000060u); // 80117964
  cmpu(c,0,c->r[4],0x00000001u); // 80117968
  if (!crb(c,0)) { goto L_80117974; } // 8011796C
  goto L_80117AF8; // 80117970
L_80117974:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 80117974
  cmps(c,0,(int32_t)c->r[0],0); // 80117978
  if (crb(c,2)) { goto L_80117AF8; } // 8011797C
  W32(c->r[3]+0x00000008u,c->r[4]); // 80117980
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80117984
  c->r[4]=c->r[13]+0xFFFFBE58u; // 80117988
  c->r[5]=0u+0x00000000u; // 8011798C
  c->r[6]=0u+0x00001001u; // 80117990
  c->lr=0x80117998u; f_80244D50(c); // 80117994
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 80117998
  c->r[6]=0u+0x00000000u; // 8011799C
  c->r[5]=0u+0x00000000u; // 801179A0
  c->r[4]=0u+0x00000000u; // 801179A4
  goto L_801179BC; // 801179A8
L_801179AC:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801179AC
  c->r[6]=c->r[6]+0x00000001u; // 801179B0
  W32(c->r[3]+c->r[5],c->r[4]); // 801179B4
  c->r[5]=c->r[5]+0x00000004u; // 801179B8
L_801179BC:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801179BC
  cmpu(c,0,c->r[6],c->r[0]); // 801179C0
  if (crb(c,0)) { IRQCHK(c); goto L_801179AC; } // 801179C4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801179C8
  c->r[31]=0u+0x00000000u; // 801179CC
  c->r[28]=0u+0x00000000u; // 801179D0
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801179D4
  c->r[27]=R32(c->r[3]+0x000001A4u); // 801179D8
  c->r[29]=c->r[27]|c->r[27]; // 801179DC
  goto L_80117AC4; // 801179E0
L_801179E4:;
  c->r[0]=0u+0x00000028u; // 801179E4
  c->r[5]=R32(c->r[29]+0x00000064u); // 801179E8
  c->r[4]=0u+0x00000000u; // 801179EC
  c->ctr=c->r[0]; // 801179F0
L_801179F4:;
  c->r[0]=R32(c->r[30]+0x00000030u); // 801179F4
  c->r[26]=c->r[0]+c->r[4]; // 801179F8
  {uint32_t ea=c->r[26]+0x00000020u; c->r[0]=R32(ea); c->r[26]=ea;} // 801179FC
  cmpu(c,0,c->r[0],c->r[5]); // 80117A00
  if (!crb(c,2)) { goto L_80117AB0; } // 80117A04
  c->r[0]=R32(c->r[26]+0x00000004u); // 80117A08
  cmps(c,0,(int32_t)c->r[0],1); // 80117A0C
  if (crb(c,2)) { goto L_80117A20; } // 80117A10
  cmps(c,0,(int32_t)c->r[0],2); // 80117A14
  if (crb(c,2)) { goto L_80117A68; } // 80117A18
  goto L_80117AB8; // 80117A1C
L_80117A20:;
  c->r[3]=0u+0x0000002Cu; // 80117A20
  c->r[4]=c->r[13]+0xFFFFBE60u; // 80117A24
  c->r[5]=0u+0x00000000u; // 80117A28
  c->r[6]=0u+0x00001001u; // 80117A2C
  c->lr=0x80117A34u; f_80244D20(c); // 80117A30
  cmps(c,0,(int32_t)c->r[3],0); // 80117A34
  if (crb(c,2)) { goto L_80117A40; } // 80117A38
  c->lr=0x80117A40u; f_80116D80(c); // 80117A3C
L_80117A40:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80117A40
  c->r[4]=c->r[26]|c->r[26]; // 80117A44
  W32(c->r[5]+c->r[28],c->r[3]); // 80117A48
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80117A4C
  c->r[3]=R32(c->r[3]+c->r[28]); // 80117A50
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117A54
  c->r[12]=R32(c->r[12]+0x00000014u); // 80117A58
  c->ctr=c->r[12]; // 80117A5C
  if (true) { c->lr=0x80117A64u; dispatch(c,c->ctr); } // 80117A60
  goto L_80117AB8; // 80117A64
L_80117A68:;
  c->r[3]=0u+0x00000034u; // 80117A68
  c->r[4]=c->r[13]+0xFFFFBE68u; // 80117A6C
  c->r[5]=0u+0x00000000u; // 80117A70
  c->r[6]=0u+0x00001001u; // 80117A74
  c->lr=0x80117A7Cu; f_80244D20(c); // 80117A78
  cmps(c,0,(int32_t)c->r[3],0); // 80117A7C
  if (crb(c,2)) { goto L_80117A88; } // 80117A80
  c->lr=0x80117A88u; f_80117094(c); // 80117A84
L_80117A88:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80117A88
  c->r[4]=c->r[26]|c->r[26]; // 80117A8C
  W32(c->r[5]+c->r[28],c->r[3]); // 80117A90
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80117A94
  c->r[3]=R32(c->r[3]+c->r[28]); // 80117A98
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117A9C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80117AA0
  c->ctr=c->r[12]; // 80117AA4
  if (true) { c->lr=0x80117AACu; dispatch(c,c->ctr); } // 80117AA8
  goto L_80117AB8; // 80117AAC
L_80117AB0:;
  c->r[4]=c->r[4]+0x00000030u; // 80117AB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801179F4; } // 80117AB4
L_80117AB8:;
  c->r[29]=c->r[29]+0x00000190u; // 80117AB8
  c->r[28]=c->r[28]+0x00000004u; // 80117ABC
  c->r[31]=c->r[31]+0x00000001u; // 80117AC0
L_80117AC4:;
  c->r[0]=R32(c->r[27]+0x00000060u); // 80117AC4
  cmpu(c,0,c->r[31],c->r[0]); // 80117AC8
  if (crb(c,0)) { IRQCHK(c); goto L_801179E4; } // 80117ACC
  c->r[4]=R32(c->r[30]+0x00000030u); // 80117AD0
  c->r[0]=0u+0x00000001u; // 80117AD4
  c->r[3]=c->r[30]|c->r[30]; // 80117AD8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80117ADC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 80117AE0
  W8(c->r[30]+0x00000034u,c->r[0]); // 80117AE4
  c->r[12]=R32(c->r[30]+0x00000000u); // 80117AE8
  c->r[12]=R32(c->r[12]+0x00000018u); // 80117AEC
  c->ctr=c->r[12]; // 80117AF0
  if (true) { c->lr=0x80117AF8u; dispatch(c,c->ctr); } // 80117AF4
L_80117AF8:;
  c->r[11]=c->r[1]+0x00000020u; // 80117AF8
  c->lr=0x80117B00u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80117AFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80117B00
  c->lr=c->r[0]; // 80117B04
  c->r[1]=c->r[1]+0x00000020u; // 80117B08
  return; // 80117B0C
}

// fn_80117B10
void f_80117B10(Ctx* __restrict c) {
  trace_call(0x80117B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80117B10
  c->r[0]=c->lr; // 80117B14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80117B18
  c->r[11]=c->r[1]+0x00000020u; // 80117B1C
  c->lr=0x80117B24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80117B20
  c->r[0]=R8(c->r[3]+0x00000034u); // 80117B24
  c->r[31]=c->r[3]|c->r[3]; // 80117B28
  cmps(c,0,(int32_t)c->r[0],0); // 80117B2C
  if (!crb(c,2)) { goto L_80117B44; } // 80117B30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117B34
  c->r[12]=R32(c->r[12]+0x00000010u); // 80117B38
  c->ctr=c->r[12]; // 80117B3C
  if (true) { c->lr=0x80117B44u; dispatch(c,c->ctr); } // 80117B40
L_80117B44:;
  c->r[0]=R8(c->r[31]+0x00000034u); // 80117B44
  cmps(c,0,(int32_t)c->r[0],0); // 80117B48
  if (crb(c,2)) { goto L_80117C6C; } // 80117B4C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80117B50
  cmps(c,0,(int32_t)c->r[0],0); // 80117B54
  if (crb(c,2)) { goto L_80117C6C; } // 80117B58
  c->r[3]=R32(c->r[31]+0x00000004u); // 80117B5C
  cmps(c,0,(int32_t)c->r[3],0); // 80117B60
  if (crb(c,2)) { goto L_80117C6C; } // 80117B64
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80117B68
  cmps(c,0,(int32_t)c->r[3],0); // 80117B6C
  if (crb(c,2)) { goto L_80117C6C; } // 80117B70
  c->r[28]=R32(c->r[3]+0x000001A4u); // 80117B74
  c->r[0]=R32(c->r[28]+0x00000060u); // 80117B78
  cmpu(c,0,c->r[0],0x00000001u); // 80117B7C
  if (!crb(c,0)) { goto L_80117B88; } // 80117B80
  goto L_80117C6C; // 80117B84
L_80117B88:;
  c->r[30]=c->r[28]|c->r[28]; // 80117B88
  c->r[27]=0u+0x00000000u; // 80117B8C
  c->r[29]=0u+0x00000000u; // 80117B90
  goto L_80117BE0; // 80117B94
L_80117B98:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80117B98
  cmps(c,0,(int32_t)c->r[3],0); // 80117B9C
  if (crb(c,2)) { goto L_80117C6C; } // 80117BA0
  c->r[0]=R32(c->r[30]+0x00000160u); // 80117BA4
  cmps(c,0,(int32_t)c->r[0],0); // 80117BA8
  if (crb(c,2)) { goto L_80117BD4; } // 80117BAC
  c->r[3]=R32(c->r[3]+c->r[29]); // 80117BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80117BB4
  if (crb(c,2)) { goto L_80117BD4; } // 80117BB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117BBC
  c->r[5]=c->r[30]|c->r[30]; // 80117BC0
  c->r[4]=R32(c->r[31]+0x00000004u); // 80117BC4
  c->r[12]=R32(c->r[12]+0x00000010u); // 80117BC8
  c->ctr=c->r[12]; // 80117BCC
  if (true) { c->lr=0x80117BD4u; dispatch(c,c->ctr); } // 80117BD0
L_80117BD4:;
  c->r[30]=c->r[30]+0x00000190u; // 80117BD4
  c->r[29]=c->r[29]+0x00000004u; // 80117BD8
  c->r[27]=c->r[27]+0x00000001u; // 80117BDC
L_80117BE0:;
  c->r[0]=R32(c->r[28]+0x00000060u); // 80117BE0
  cmpu(c,0,c->r[27],c->r[0]); // 80117BE4
  if (crb(c,0)) { IRQCHK(c); goto L_80117B98; } // 80117BE8
  c->r[3]=c->r[13]+0xFFFFBE70u; // 80117BEC
  c->r[4]=0u+0x00000000u; // 80117BF0
  c->lr=0x80117BF8u; f_8024D960(c); // 80117BF4
  c->r[4]=c->r[3]|c->r[3]; // 80117BF8
  c->r[3]=R32(c->r[31]+0x00000004u); // 80117BFC
  c->lr=0x80117C04u; f_80285B84(c); // 80117C00
  cmps(c,0,(int32_t)c->r[3],0); // 80117C04
  c->r[5]=c->r[3]|c->r[3]; // 80117C08
  if (crb(c,2)) { goto L_80117C40; } // 80117C0C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80117C10
  c->r[4]=c->r[31]+0x00000010u; // 80117C14
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80117C18
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80117C1C
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80117C20
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80117C24
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117C28
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 80117C2C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 80117C30
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 80117C34
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[3]);} // 80117C38
  c->lr=0x80117C40u; f_80262310(c); // 80117C3C
L_80117C40:;
  c->r[3]=R32(c->r[13]+0xFFFFE134u); // 80117C40
  c->r[3]=R32(c->r[3]+0x00000010u); // 80117C44
  c->r[0]=rotl(c->r[3],0)&0x00800000u; cr0(c,c->r[0]); // 80117C48
  if (!crb(c,2)) { goto L_80117C58; } // 80117C4C
  c->r[0]=rotl(c->r[3],0)&0x00400000u; cr0(c,c->r[0]); // 80117C50
  if (crb(c,2)) { goto L_80117C6C; } // 80117C54
L_80117C58:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80117C58
  c->r[3]=c->r[31]|c->r[31]; // 80117C5C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80117C60
  c->ctr=c->r[12]; // 80117C64
  if (true) { c->lr=0x80117C6Cu; dispatch(c,c->ctr); } // 80117C68
L_80117C6C:;
  c->r[11]=c->r[1]+0x00000020u; // 80117C6C
  c->lr=0x80117C74u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80117C70
  c->r[0]=R32(c->r[1]+0x00000024u); // 80117C74
  c->lr=c->r[0]; // 80117C78
  c->r[1]=c->r[1]+0x00000020u; // 80117C7C
  return; // 80117C80
}

// fn_80117C84
void f_80117C84(Ctx* __restrict c) {
  trace_call(0x80117C84u);
  return; // 80117C84
}

// fn_80117C88
void f_80117C88(Ctx* __restrict c) {
  trace_call(0x80117C88u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80117C88
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80117C8C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80117C90
  cmps(c,0,(int32_t)c->r[3],0); // 80117C94
  if (crb(c,2)) { goto L_80117CAC; } // 80117C98
  c->r[12]=R32(c->r[3]+0x00000000u); // 80117C9C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80117CA0
  c->ctr=c->r[12]; // 80117CA4
  if (true) { dispatch(c,c->ctr); return; } // 80117CA8
L_80117CAC:;
  c->r[3]=0u+0x00000000u; // 80117CAC
  return; // 80117CB0
}

// fn_80117CB4
void f_80117CB4(Ctx* __restrict c) {
  trace_call(0x80117CB4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80117CB4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80117CB8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80117CBC
  return; // 80117CC0
}

// fn_80117CC4
void f_80117CC4(Ctx* __restrict c) {
  trace_call(0x80117CC4u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80117CC4
  return; // 80117CC8
}

// fn_80117CCC
void f_80117CCC(Ctx* __restrict c) {
  trace_call(0x80117CCCu);
  cmps(c,0,(int32_t)c->r[3],18497); // 80117CCC
  if (crb(c,2)) { goto L_80117E70; } // 80117CD0
  if (!crb(c,0)) { goto L_80117DA8; } // 80117CD4
  cmps(c,0,(int32_t)c->r[3],113); // 80117CD8
  if (crb(c,2)) { goto L_80117EC0; } // 80117CDC
  if (!crb(c,0)) { goto L_80117D48; } // 80117CE0
  cmps(c,0,(int32_t)c->r[3],104); // 80117CE4
  if (crb(c,2)) { goto L_80117E70; } // 80117CE8
  if (!crb(c,0)) { goto L_80117D18; } // 80117CEC
  cmps(c,0,(int32_t)c->r[3],100); // 80117CF0
  if (crb(c,2)) { goto L_80117E98; } // 80117CF4
  if (!crb(c,0)) { goto L_80117D08; } // 80117CF8
  cmps(c,0,(int32_t)c->r[3],98); // 80117CFC
  if (crb(c,2)) { goto L_80117E80; } // 80117D00
  goto L_80117EC0; // 80117D04
L_80117D08:;
  cmps(c,0,(int32_t)c->r[3],102); // 80117D08
  if (crb(c,2)) { goto L_80117E88; } // 80117D0C
  if (!crb(c,0)) { goto L_80117E98; } // 80117D10
  goto L_80117EC0; // 80117D14
L_80117D18:;
  cmps(c,0,(int32_t)c->r[3],109); // 80117D18
  if (crb(c,2)) { goto L_80117E80; } // 80117D1C
  if (!crb(c,0)) { goto L_80117D38; } // 80117D20
  cmps(c,0,(int32_t)c->r[3],108); // 80117D24
  if (!crb(c,0)) { goto L_80117E90; } // 80117D28
  cmps(c,0,(int32_t)c->r[3],106); // 80117D2C
  if (!crb(c,0)) { goto L_80117E98; } // 80117D30
  goto L_80117EC0; // 80117D34
L_80117D38:;
  cmps(c,0,(int32_t)c->r[3],111); // 80117D38
  if (crb(c,2)) { goto L_80117EC0; } // 80117D3C
  if (!crb(c,0)) { goto L_80117E80; } // 80117D40
  goto L_80117E98; // 80117D44
L_80117D48:;
  cmps(c,0,(int32_t)c->r[3],122); // 80117D48
  if (crb(c,2)) { goto L_80117E98; } // 80117D4C
  if (!crb(c,0)) { goto L_80117D84; } // 80117D50
  cmps(c,0,(int32_t)c->r[3],118); // 80117D54
  if (crb(c,2)) { goto L_80117E88; } // 80117D58
  if (!crb(c,0)) { goto L_80117D74; } // 80117D5C
  cmps(c,0,(int32_t)c->r[3],117); // 80117D60
  if (!crb(c,0)) { goto L_80117EC0; } // 80117D64
  cmps(c,0,(int32_t)c->r[3],115); // 80117D68
  if (!crb(c,0)) { goto L_80117E98; } // 80117D6C
  goto L_80117EB8; // 80117D70
L_80117D74:;
  cmps(c,0,(int32_t)c->r[3],120); // 80117D74
  if (crb(c,2)) { goto L_80117E80; } // 80117D78
  if (!crb(c,0)) { goto L_80117E78; } // 80117D7C
  goto L_80117EA8; // 80117D80
L_80117D84:;
  cmps(c,0,(int32_t)c->r[3],17729); // 80117D84
  if (crb(c,2)) { goto L_80117E70; } // 80117D88
  if (!crb(c,0)) { goto L_80117D9C; } // 80117D8C
  cmps(c,0,(int32_t)c->r[3],16705); // 80117D90
  if (crb(c,2)) { goto L_80117E68; } // 80117D94
  goto L_80117EC0; // 80117D98
L_80117D9C:;
  cmps(c,0,(int32_t)c->r[3],18254); // 80117D9C
  if (crb(c,2)) { goto L_80117E98; } // 80117DA0
  goto L_80117EC0; // 80117DA4
L_80117DA8:;
  cmps(c,0,(int32_t)c->r[3],22337); // 80117DA8
  if (crb(c,2)) { goto L_80117EB0; } // 80117DAC
  if (!crb(c,0)) { goto L_80117E14; } // 80117DB0
  cmps(c,0,(int32_t)c->r[3],18517); // 80117DB4
  if (crb(c,2)) { goto L_80117EA0; } // 80117DB8
  if (!crb(c,0)) { goto L_80117DF0; } // 80117DBC
  cmps(c,0,(int32_t)c->r[3],18505); // 80117DC0
  if (crb(c,2)) { goto L_80117E70; } // 80117DC4
  if (!crb(c,0)) { goto L_80117DE4; } // 80117DC8
  cmps(c,0,(int32_t)c->r[3],18501); // 80117DCC
  if (crb(c,2)) { goto L_80117E78; } // 80117DD0
  if (!crb(c,0)) { goto L_80117EC0; } // 80117DD4
  cmps(c,0,(int32_t)c->r[3],18499); // 80117DD8
  if (!crb(c,0)) { goto L_80117E98; } // 80117DDC
  goto L_80117EC0; // 80117DE0
L_80117DE4:;
  cmps(c,0,(int32_t)c->r[3],18515); // 80117DE4
  if (!crb(c,0)) { goto L_80117E98; } // 80117DE8
  goto L_80117EC0; // 80117DEC
L_80117DF0:;
  cmps(c,0,(int32_t)c->r[3],20289); // 80117DF0
  if (crb(c,2)) { goto L_80117E68; } // 80117DF4
  if (!crb(c,0)) { goto L_80117E08; } // 80117DF8
  cmps(c,0,(int32_t)c->r[3],18522); // 80117DFC
  if (crb(c,2)) { goto L_80117E98; } // 80117E00
  goto L_80117EC0; // 80117E04
L_80117E08:;
  cmps(c,0,(int32_t)c->r[3],21061); // 80117E08
  if (crb(c,2)) { goto L_80117EB8; } // 80117E0C
  goto L_80117EC0; // 80117E10
L_80117E14:;
  cmps(c,0,(int32_t)c->r[3],22853); // 80117E14
  if (crb(c,2)) { goto L_80117E70; } // 80117E18
  if (!crb(c,0)) { goto L_80117E44; } // 80117E1C
  cmps(c,0,(int32_t)c->r[3],22357); // 80117E20
  if (crb(c,2)) { goto L_80117EA0; } // 80117E24
  if (!crb(c,0)) { goto L_80117E38; } // 80117E28
  cmps(c,0,(int32_t)c->r[3],22351); // 80117E2C
  if (crb(c,2)) { goto L_80117E68; } // 80117E30
  goto L_80117EC0; // 80117E34
L_80117E38:;
  cmps(c,0,(int32_t)c->r[3],22849); // 80117E38
  if (crb(c,2)) { goto L_80117E70; } // 80117E3C
  goto L_80117EC0; // 80117E40
L_80117E44:;
  cmps(c,0,(int32_t)c->r[3],22863); // 80117E44
  if (crb(c,2)) { goto L_80117EA0; } // 80117E48
  if (!crb(c,0)) { goto L_80117E5C; } // 80117E4C
  cmps(c,0,(int32_t)c->r[3],22857); // 80117E50
  if (crb(c,2)) { goto L_80117E78; } // 80117E54
  goto L_80117EC0; // 80117E58
L_80117E5C:;
  cmps(c,0,(int32_t)c->r[3],27749); // 80117E5C
  if (crb(c,2)) { goto L_80117E90; } // 80117E60
  goto L_80117EC0; // 80117E64
L_80117E68:;
  c->r[3]=0u+0x00000000u; // 80117E68
  return; // 80117E6C
L_80117E70:;
  c->r[3]=0u+0x00000001u; // 80117E70
  return; // 80117E74
L_80117E78:;
  c->r[3]=0u+0x00000002u; // 80117E78
  return; // 80117E7C
L_80117E80:;
  c->r[3]=0u+0x00000003u; // 80117E80
  return; // 80117E84
L_80117E88:;
  c->r[3]=0u+0x00000004u; // 80117E88
  return; // 80117E8C
L_80117E90:;
  c->r[3]=0u+0x00000005u; // 80117E90
  return; // 80117E94
L_80117E98:;
  c->r[3]=0u+0x00000006u; // 80117E98
  return; // 80117E9C
L_80117EA0:;
  c->r[3]=0u+0x00000007u; // 80117EA0
  return; // 80117EA4
L_80117EA8:;
  c->r[3]=0u+0x00000008u; // 80117EA8
  return; // 80117EAC
L_80117EB0:;
  c->r[3]=0u+0x00000009u; // 80117EB0
  return; // 80117EB4
L_80117EB8:;
  c->r[3]=0u+0x0000000Au; // 80117EB8
  return; // 80117EBC
L_80117EC0:;
  c->r[3]=0u+0x00000003u; // 80117EC0
  return; // 80117EC4
}

// fn_80117EC8
void f_80117EC8(Ctx* __restrict c) {
  trace_call(0x80117EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80117EC8
  c->r[0]=c->lr; // 80117ECC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80117ED0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80117ED4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80117ED8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80117EDC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80117EE0
  c->f[30]=c->f[1]; // 80117EE4
  c->f[31]=c->f[2]; // 80117EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80117EEC
  c->r[31]=c->r[3]|c->r[3]; // 80117EF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80117EF4
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80117EF8
  cmps(c,0,(int32_t)c->r[4],0); // 80117EFC
  if (!crb(c,2)) { goto L_80117F0C; } // 80117F00
  c->r[3]=0u+0x00000000u; // 80117F04
  goto L_8011803C; // 80117F08
L_80117F0C:;
  c->r[3]=R32(c->r[4]+0x00000018u); // 80117F0C
  c->r[3]=R32(c->r[3]+0x00000028u); // 80117F10
  c->lr=0x80117F18u; f_802C00A8(c); // 80117F14
  cmps(c,0,(int32_t)c->r[3],0); // 80117F18
  if (!crb(c,2)) { goto L_80117F28; } // 80117F1C
  c->r[3]=0u+0x00000000u; // 80117F20
  goto L_8011803C; // 80117F24
L_80117F28:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80117F28
  c->r[12]=R32(c->r[3]+0x00000020u); // 80117F2C
  c->r[12]=R32(c->r[12]+0x00000138u); // 80117F30
  c->ctr=c->r[12]; // 80117F34
  if (true) { c->lr=0x80117F3Cu; dispatch(c,c->ctr); } // 80117F38
  cmps(c,0,(int32_t)c->r[3],0); // 80117F3C
  if (crb(c,2)) { goto L_80117F50; } // 80117F40
  cmps(c,0,(int32_t)c->r[3],1); // 80117F44
  if (crb(c,2)) { goto L_80117F64; } // 80117F48
  goto L_80118038; // 80117F4C
L_80117F50:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80117F50
  c->r[12]=R32(c->r[3]+0x00000020u); // 80117F54
  c->r[12]=R32(c->r[12]+0x00000144u); // 80117F58
  c->ctr=c->r[12]; // 80117F5C
  if (true) { c->lr=0x80117F64u; dispatch(c,c->ctr); } // 80117F60
L_80117F64:;
  {uint32_t ea=c->r[2]+0xFFFF89C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80117F64
  c->r[30]=R32(c->r[31]+0x00000000u); // 80117F68
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 80117F6C
  c->lr=0x80117F74u; f_803ADC14(c); // 80117F70
  c->r[0]=0u+0x00000002u; // 80117F74
  W32(c->r[30]+0x00000038u,c->r[0]); // 80117F78
  c->r[0]=0u+0x00000000u; // 80117F7C
  W32(c->r[30]+0x00000040u,c->r[0]); // 80117F80
L_80117F84:;
  c->r[5]=R32(c->r[30]+0x00000040u); // 80117F84
  c->r[0]=R32(c->r[30]+0x00000044u); // 80117F88
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80117F8C
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 80117F90
  cmpu(c,0,c->r[3],c->r[0]); // 80117F94
  c->r[4]=R32(c->r[4]+0x00000004u); // 80117F98
  if (crb(c,0)) { goto L_80117FAC; } // 80117F9C
  cmpu(c,0,c->r[3],c->r[4]); // 80117FA0
  if (!crb(c,0)) { goto L_80117FAC; } // 80117FA4
  goto L_80117FDC; // 80117FA8
L_80117FAC:;
  c->r[4]=R32(c->r[30]+0x0000003Cu); // 80117FAC
  cmpu(c,0,c->r[5],c->r[4]); // 80117FB0
  if (!crb(c,0)) { goto L_80117FC4; } // 80117FB4
  c->r[0]=R32(c->r[30]+0x00000048u); // 80117FB8
  cmpu(c,0,c->r[3],c->r[0]); // 80117FBC
  if (!crb(c,1)) { goto L_80117FCC; } // 80117FC0
L_80117FC4:;
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80117FC4
  goto L_80117FDC; // 80117FC8
L_80117FCC:;
  c->r[4]=R32(c->r[30]+0x00000040u); // 80117FCC
  c->r[0]=c->r[4]+0x00000001u; // 80117FD0
  W32(c->r[30]+0x00000040u,c->r[0]); // 80117FD4
  IRQCHK(c); goto L_80117F84; // 80117FD8
L_80117FDC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80117FDC
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 80117FE0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80117FE4
  cmpu(c,0,c->r[5],c->r[0]); // 80117FE8
  if (!crb(c,2)) { goto L_80117FF8; } // 80117FEC
  c->r[3]=0u+0x00000000u; // 80117FF0
  goto L_8011803C; // 80117FF4
L_80117FF8:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80117FF8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80117FFC
  c->r[4]=R32(c->r[4]+0x00000044u); // 80118000
  c->r[12]=R32(c->r[3]+0x00000020u); // 80118004
  c->r[4]=c->r[4]+c->r[0]; // 80118008
  c->r[12]=R32(c->r[12]+0x00000158u); // 8011800C
  c->r[4]=R8(c->r[4]+0x00000024u); // 80118010
  c->ctr=c->r[12]; // 80118014
  if (true) { c->lr=0x8011801Cu; dispatch(c,c->ctr); } // 80118018
  c->r[4]=c->r[3]|c->r[3]; // 8011801C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80118020
  c->f[1]=c->f[31]; // 80118024
  c->r[12]=R32(c->r[3]+0x00000020u); // 80118028
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 8011802C
  c->ctr=c->r[12]; // 80118030
  if (true) { c->lr=0x80118038u; dispatch(c,c->ctr); } // 80118034
L_80118038:;
  c->r[3]=0u+0x00000001u; // 80118038
L_8011803C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8011803C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80118040
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80118044
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80118048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011804C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80118050
  c->r[30]=R32(c->r[1]+0x00000008u); // 80118054
  c->lr=c->r[0]; // 80118058
  c->r[1]=c->r[1]+0x00000030u; // 8011805C
  return; // 80118060
}

// fn_80118064
void f_80118064(Ctx* __restrict c) {
  trace_call(0x80118064u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80118064
  c->r[0]=c->lr; // 80118068
  c->r[6]=0u+0x00000000u; // 8011806C
  c->r[7]=0u+0x00000000u; // 80118070
  W32(c->r[1]+0x00000044u,c->r[0]); // 80118074
  c->r[0]=0u+0x00000000u; // 80118078
  c->r[5]=c->r[1]+0x0000000Cu; // 8011807C
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80118080
  c->r[28]=c->r[3]|c->r[3]; // 80118084
  c->r[3]=c->r[4]|c->r[4]; // 80118088
  c->r[4]=0u+0x00000000u; // 8011808C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80118090
  c->lr=0x80118098u; f_80248820(c); // 80118094
  cmps(c,0,(int32_t)c->r[3],0); // 80118098
  c->r[30]=c->r[3]|c->r[3]; // 8011809C
  if (!crb(c,2)) { goto L_801180AC; } // 801180A0
  c->r[3]=0u+0x00000000u; // 801180A4
  goto L_801182B0; // 801180A8
L_801180AC:;
  c->r[5]=c->r[28]+0x00000013u; // 801180AC
  c->r[4]=c->r[13]+0xFFFFBE78u; // 801180B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801180B4
  c->lr=0x801180BCu; f_803A6E30(c); // 801180B8
  c->r[3]=c->r[30]|c->r[30]; // 801180BC
  c->r[4]=0u+0x0000000Au; // 801180C0
  c->lr=0x801180C8u; f_803A719C(c); // 801180C4
  c->r[31]=c->r[3]+0x00000001u; // 801180C8
  c->r[26]=0u+0x80420000u; // 801180CC
  c->r[25]=c->r[31]|c->r[31]; // 801180D0
L_801180D4:;
  c->r[3]=c->r[25]|c->r[25]; // 801180D4
  c->r[5]=c->r[1]+0x00000010u; // 801180D8
  c->r[4]=c->r[13]+0xFFFFBE7Cu; // 801180DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801180E0
  c->lr=0x801180E8u; f_803A6E30(c); // 801180E4
  c->r[3]=c->r[1]+0x00000010u; // 801180E8
  c->r[4]=c->r[26]+0x00002ED0u; // 801180EC
  c->lr=0x801180F4u; f_803A7040(c); // 801180F0
  cmps(c,0,(int32_t)c->r[3],0); // 801180F4
  if (crb(c,2)) { goto L_8011811C; } // 801180F8
  c->r[3]=c->r[25]|c->r[25]; // 801180FC
  c->r[4]=0u+0x0000000Au; // 80118100
  c->lr=0x80118108u; f_803A719C(c); // 80118104
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 80118108
  c->r[25]=c->r[3]+0x00000001u; // 8011810C
  c->r[0]=c->r[4]+0x00000001u; // 80118110
  W32(c->r[28]+0x0000003Cu,c->r[0]); // 80118114
  IRQCHK(c); goto L_801180D4; // 80118118
L_8011811C:;
  c->r[25]=R32(c->r[28]+0x0000003Cu); // 8011811C
  cmps(c,0,(int32_t)c->r[25],0); // 80118120
  if (!crb(c,2)) { goto L_80118130; } // 80118124
  c->r[3]=0u+0x00000000u; // 80118128
  goto L_801182B0; // 8011812C
L_80118130:;
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)24); // 80118130
  c->r[4]=c->r[13]+0xFFFFBE80u; // 80118134
  c->r[5]=0u+0x00000000u; // 80118138
  c->r[6]=0u+0x00001001u; // 8011813C
  c->r[3]=c->r[3]+0x00000010u; // 80118140
  c->lr=0x80118148u; f_80244D50(c); // 80118144
  c->r[4]=0u+0x80120000u; // 80118148
  c->r[5]=0u+0x80110000u; // 8011814C
  c->r[7]=c->r[25]|c->r[25]; // 80118150
  c->r[6]=0u+0x00000018u; // 80118154
  c->r[4]=c->r[4]+0xFFFF82C4u; // 80118158
  c->r[5]=c->r[5]+0xFFFFB9CCu; // 8011815C
  c->lr=0x80118164u; f_803AD5CC(c); // 80118160
  W32(c->r[28]+0x00000044u,c->r[3]); // 80118164
  c->r[29]=0u+0x00000000u; // 80118168
  c->r[25]=0u+0x00000000u; // 8011816C
  c->r[26]=0u+0x80420000u; // 80118170
  c->r[27]=0u+0x00000032u; // 80118174
  goto L_80118200; // 80118178
L_8011817C:;
  c->r[0]=R32(c->r[28]+0x00000044u); // 8011817C
  c->r[3]=c->r[31]|c->r[31]; // 80118180
  c->r[4]=c->r[26]+0x00002EE0u; // 80118184
  c->r[5]=c->r[1]+0x00000010u; // 80118188
  c->r[6]=c->r[0]+c->r[25]; // 8011818C
  c->r[9]=c->r[1]+0x00000008u; // 80118190
  c->r[7]=c->r[6]+0x00000004u; // 80118194
  c->r[8]=c->r[6]+0x00000008u; // 80118198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8011819C
  c->lr=0x801181A4u; f_803A6E30(c); // 801181A0
  c->r[0]=R8(c->r[1]+0x00000009u); // 801181A4
  c->r[3]=R8(c->r[1]+0x00000008u); // 801181A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801181AC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801181B0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801181B4
  c->r[0]=c->r[3]+c->r[0]; // 801181B8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801181BC
  c->lr=0x801181C4u; f_80117CCC(c); // 801181C0
  c->r[0]=R32(c->r[28]+0x00000044u); // 801181C4
  c->r[4]=c->r[0]+c->r[25]; // 801181C8
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 801181CC
  c->r[0]=R32(c->r[28]+0x00000044u); // 801181D0
  c->r[3]=c->r[0]+c->r[25]; // 801181D4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801181D8
  cmps(c,0,(int32_t)c->r[0],0); // 801181DC
  if (!crb(c,2)) { goto L_801181E8; } // 801181E0
  W32(c->r[3]+0x00000008u,c->r[27]); // 801181E4
L_801181E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801181E8
  c->r[4]=0u+0x0000000Au; // 801181EC
  c->lr=0x801181F4u; f_803A719C(c); // 801181F0
  c->r[31]=c->r[3]+0x00000001u; // 801181F4
  c->r[25]=c->r[25]+0x00000018u; // 801181F8
  c->r[29]=c->r[29]+0x00000001u; // 801181FC
L_80118200:;
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 80118200
  cmpu(c,0,c->r[29],c->r[0]); // 80118204
  if (crb(c,0)) { IRQCHK(c); goto L_8011817C; } // 80118208
  c->r[6]=0u+0x00000001u; // 8011820C
  c->r[3]=0u+0x00000018u; // 80118210
  goto L_8011826C; // 80118214
L_80118218:;
  c->r[0]=R32(c->r[28]+0x00000044u); // 80118218
  c->r[4]=c->r[0]+c->r[3]; // 8011821C
  c->r[5]=R8(c->r[4]+0x0000000Cu); // 80118220
  c->r[0]=R8(c->r[4]+0x00000024u); // 80118224
  cmpu(c,0,c->r[5],c->r[0]); // 80118228
  if (crb(c,2)) { goto L_80118264; } // 8011822C
  cmpu(c,0,c->r[5],0x00000003u); // 80118230
  if (!crb(c,2)) { goto L_80118264; } // 80118234
  c->r[5]=R32(c->r[4]+0x00000004u); // 80118238
  c->r[0]=R32(c->r[4]+0x00000000u); // 8011823C
  c->r[0]=c->r[5]-c->r[0]; // 80118240
  cmpu(c,0,c->r[0],0x000003E8u); // 80118244
  if (!crb(c,1)) { goto L_80118264; } // 80118248
  c->r[0]=c->r[5]+0xFFFFFC18u; // 8011824C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80118250
  c->r[0]=R32(c->r[28]+0x00000044u); // 80118254
  c->r[4]=c->r[0]+c->r[3]; // 80118258
  c->r[0]=R32(c->r[3]+c->r[0]); // 8011825C
  W32(c->r[4]+0xFFFFFFECu,c->r[0]); // 80118260
L_80118264:;
  c->r[3]=c->r[3]+0x00000018u; // 80118264
  c->r[6]=c->r[6]+0x00000001u; // 80118268
L_8011826C:;
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 8011826C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80118270
  cmpu(c,0,c->r[6],c->r[0]); // 80118274
  if (crb(c,0)) { IRQCHK(c); goto L_80118218; } // 80118278
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8011827C
  c->r[6]=R32(c->r[28]+0x00000044u); // 80118280
  c->r[4]=0u+0x00000000u; // 80118284
  c->r[0]=0u+0x00000001u; // 80118288
  c->r[5]=c->r[6]+c->r[3]; // 8011828C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80118290
  c->r[3]=c->r[30]|c->r[30]; // 80118294
  W32(c->r[28]+0x00000048u,c->r[5]); // 80118298
  W32(c->r[6]+0x00000000u,c->r[4]); // 8011829C
  W32(c->r[28]+0x00000038u,c->r[0]); // 801182A0
  W32(c->r[28]+0x00000040u,c->r[4]); // 801182A4
  c->lr=0x801182ACu; f_80243520(c); // 801182A8
  c->r[3]=0u+0x00000001u; // 801182AC
L_801182B0:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801182B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801182B4
  c->lr=c->r[0]; // 801182B8
  c->r[1]=c->r[1]+0x00000040u; // 801182BC
  return; // 801182C0
}

// fn_801182C4
void f_801182C4(Ctx* __restrict c) {
  trace_call(0x801182C4u);
  c->r[5]=0u+0x80420000u; // 801182C4
  c->r[4]=0u+0x00000000u; // 801182C8
  c->r[5]=c->r[5]+0x00002EFCu; // 801182CC
  c->r[0]=0u+0x00000001u; // 801182D0
  W32(c->r[3]+0x00000014u,c->r[5]); // 801182D4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801182D8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801182DC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801182E0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801182E4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801182E8
  return; // 801182EC
}

// fn_801182F0
void f_801182F0(Ctx* __restrict c) {
  trace_call(0x801182F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801182F0
  c->r[10]=0u+0x80420000u; // 801182F4
  c->r[10]=c->r[10]+0x00002EF0u; // 801182F8
  c->r[0]=0u+0x43300000u; // 801182FC
  W32(c->r[3]+0x0000002Cu,c->r[10]); // 80118300
  {uint32_t ea=c->r[2]+0xFFFF89D0u; c->f[5]=RF64(ea);} // 80118304
  W32(c->r[3]+0x00000000u,c->r[4]); // 80118308
  {uint32_t ea=c->r[2]+0xFFFF89C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011830C
  W32(c->r[3]+0x00000004u,c->r[9]); // 80118310
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80118314
  W32(c->r[3]+0x00000008u,c->r[6]); // 80118318
  c->r[4]=R32(c->r[4]+0x00000048u); // 8011831C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80118320
  W32(c->r[1]+0x00000008u,c->r[0]); // 80118324
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80118328
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 8011832C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 80118330
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 80118334
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 80118338
  W32(c->r[3]+0x00000020u,c->r[8]); // 8011833C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 80118340
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 80118344
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80118348
  c->r[1]=c->r[1]+0x00000010u; // 8011834C
  return; // 80118350
}

// fn_80118354
void f_80118354(Ctx* __restrict c) {
  trace_call(0x80118354u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80118354
  c->r[0]=c->lr; // 80118358
  cmps(c,0,(int32_t)c->r[3],0); // 8011835C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80118360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80118364
  c->r[31]=c->r[4]|c->r[4]; // 80118368
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011836C
  c->r[30]=c->r[3]|c->r[3]; // 80118370
  if (crb(c,2)) { goto L_801183DC; } // 80118374
  c->r[0]=R32(c->r[3]+0x00000000u); // 80118378
  c->r[4]=0u+0x80420000u; // 8011837C
  c->r[4]=c->r[4]+0x00002EF0u; // 80118380
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 80118384
  cmps(c,0,(int32_t)c->r[0],0); // 80118388
  if (crb(c,2)) { goto L_801183A8; } // 8011838C
  c->r[3]=c->r[0]|c->r[0]; // 80118390
  c->r[4]=0u+0x00000001u; // 80118394
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 80118398
  c->r[12]=R32(c->r[12]+0x00000008u); // 8011839C
  c->ctr=c->r[12]; // 801183A0
  if (true) { c->lr=0x801183A8u; dispatch(c,c->ctr); } // 801183A4
L_801183A8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801183A8
  cmps(c,0,(int32_t)c->r[3],0); // 801183AC
  if (crb(c,2)) { goto L_801183CC; } // 801183B0
  if (crb(c,2)) { goto L_801183CC; } // 801183B4
  c->r[12]=R32(c->r[3]+0x00000014u); // 801183B8
  c->r[4]=0u+0x00000001u; // 801183BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801183C0
  c->ctr=c->r[12]; // 801183C4
  if (true) { c->lr=0x801183CCu; dispatch(c,c->ctr); } // 801183C8
L_801183CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801183CC
  if (!crb(c,1)) { goto L_801183DC; } // 801183D0
  c->r[3]=c->r[30]|c->r[30]; // 801183D4
  c->lr=0x801183DCu; f_80244DC0(c); // 801183D8
L_801183DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801183DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801183E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801183E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801183E8
  c->lr=c->r[0]; // 801183EC
  c->r[1]=c->r[1]+0x00000010u; // 801183F0
  return; // 801183F4
}

// fn_801183F8
void f_801183F8(Ctx* __restrict c) {
  trace_call(0x801183F8u);
  c->r[4]=0u+0x80420000u; // 801183F8
  c->r[0]=0u+0x00000000u; // 801183FC
  c->r[4]=c->r[4]+0x00002F5Cu; // 80118400
  W32(c->r[3]+0x00000000u,c->r[4]); // 80118404
  W32(c->r[3]+0x00000004u,c->r[0]); // 80118408
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8011840C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80118410
  W32(c->r[3]+0x00000018u,c->r[0]); // 80118414
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80118418
  W32(c->r[3]+0x00000020u,c->r[0]); // 8011841C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80118420
  W32(c->r[3]+0x00000024u,c->r[0]); // 80118424
  W32(c->r[3]+0x00000028u,c->r[0]); // 80118428
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8011842C
  W32(c->r[3]+0x00000030u,c->r[0]); // 80118430
  W32(c->r[3]+0x00000008u,c->r[0]); // 80118434
  return; // 80118438
}

// fn_8011843C
void f_8011843C(Ctx* __restrict c) {
  trace_call(0x8011843Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011843C
  c->r[0]=c->lr; // 80118440
  cmps(c,0,(int32_t)c->r[3],0); // 80118444
  W32(c->r[1]+0x00000014u,c->r[0]); // 80118448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011844C
  c->r[31]=c->r[4]|c->r[4]; // 80118450
  W32(c->r[1]+0x00000008u,c->r[30]); // 80118454
  c->r[30]=c->r[3]|c->r[3]; // 80118458
  if (crb(c,2)) { goto L_80118570; } // 8011845C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80118460
  c->r[4]=0u+0x80420000u; // 80118464
  c->r[4]=c->r[4]+0x00002F5Cu; // 80118468
  W32(c->r[3]+0x00000000u,c->r[4]); // 8011846C
  cmps(c,0,(int32_t)c->r[0],0); // 80118470
  if (crb(c,2)) { goto L_80118488; } // 80118474
  c->r[3]=c->r[0]|c->r[0]; // 80118478
  c->lr=0x80118480u; f_80232E90(c); // 8011847C
  c->r[0]=0u+0x00000000u; // 80118480
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80118484
L_80118488:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80118488
  cmps(c,0,(int32_t)c->r[3],0); // 8011848C
  if (crb(c,2)) { goto L_801184A0; } // 80118490
  c->lr=0x80118498u; f_80232E90(c); // 80118494
  c->r[0]=0u+0x00000000u; // 80118498
  W32(c->r[30]+0x00000010u,c->r[0]); // 8011849C
L_801184A0:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 801184A0
  cmps(c,0,(int32_t)c->r[3],0); // 801184A4
  if (crb(c,2)) { goto L_801184B8; } // 801184A8
  c->lr=0x801184B0u; f_80232E90(c); // 801184AC
  c->r[0]=0u+0x00000000u; // 801184B0
  W32(c->r[30]+0x00000018u,c->r[0]); // 801184B4
L_801184B8:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801184B8
  cmps(c,0,(int32_t)c->r[3],0); // 801184BC
  if (crb(c,2)) { goto L_801184D0; } // 801184C0
  c->lr=0x801184C8u; f_80232E90(c); // 801184C4
  c->r[0]=0u+0x00000000u; // 801184C8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801184CC
L_801184D0:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 801184D0
  cmps(c,0,(int32_t)c->r[3],0); // 801184D4
  if (crb(c,2)) { goto L_801184E8; } // 801184D8
  c->lr=0x801184E0u; f_80232E90(c); // 801184DC
  c->r[0]=0u+0x00000000u; // 801184E0
  W32(c->r[30]+0x00000020u,c->r[0]); // 801184E4
L_801184E8:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801184E8
  cmps(c,0,(int32_t)c->r[3],0); // 801184EC
  if (crb(c,2)) { goto L_80118500; } // 801184F0
  c->lr=0x801184F8u; f_80232E90(c); // 801184F4
  c->r[0]=0u+0x00000000u; // 801184F8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801184FC
L_80118500:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 80118500
  cmps(c,0,(int32_t)c->r[3],0); // 80118504
  if (crb(c,2)) { goto L_80118518; } // 80118508
  c->lr=0x80118510u; f_80232E90(c); // 8011850C
  c->r[0]=0u+0x00000000u; // 80118510
  W32(c->r[30]+0x00000024u,c->r[0]); // 80118514
L_80118518:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 80118518
  cmps(c,0,(int32_t)c->r[3],0); // 8011851C
  if (crb(c,2)) { goto L_80118530; } // 80118520
  c->lr=0x80118528u; f_80232E90(c); // 80118524
  c->r[0]=0u+0x00000000u; // 80118528
  W32(c->r[30]+0x00000028u,c->r[0]); // 8011852C
L_80118530:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80118530
  cmps(c,0,(int32_t)c->r[3],0); // 80118534
  if (crb(c,2)) { goto L_80118548; } // 80118538
  c->lr=0x80118540u; f_80232E90(c); // 8011853C
  c->r[0]=0u+0x00000000u; // 80118540
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80118544
L_80118548:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 80118548
  cmps(c,0,(int32_t)c->r[3],0); // 8011854C
  if (crb(c,2)) { goto L_80118560; } // 80118550
  c->lr=0x80118558u; f_80232E90(c); // 80118554
  c->r[0]=0u+0x00000000u; // 80118558
  W32(c->r[30]+0x00000030u,c->r[0]); // 8011855C
L_80118560:;
  cmps(c,0,(int32_t)c->r[31],0); // 80118560
  if (!crb(c,1)) { goto L_80118570; } // 80118564
  c->r[3]=c->r[30]|c->r[30]; // 80118568
  c->lr=0x80118570u; f_80244DC0(c); // 8011856C
L_80118570:;
  c->r[3]=c->r[30]|c->r[30]; // 80118570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80118574
  c->r[30]=R32(c->r[1]+0x00000008u); // 80118578
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011857C
  c->lr=c->r[0]; // 80118580
  c->r[1]=c->r[1]+0x00000010u; // 80118584
  return; // 80118588
}

// fn_8011858C
void f_8011858C(Ctx* __restrict c) {
  trace_call(0x8011858Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011858C
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)136); // 80118590
  c->r[6]=0u+0x00000000u; // 80118594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80118598
  c->r[31]=0u+0x00000033u; // 8011859C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801185A0
  c->r[12]=0u+0x00000055u; // 801185A4
  c->r[3]=R32(c->r[4]+0x00000024u); // 801185A8
  c->r[11]=0u+0x0000000Cu; // 801185AC
  c->r[9]=0u+0x0000000Fu; // 801185B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801185B4
  c->r[7]=R32(c->r[3]+0x0000001Cu); // 801185B8
  c->r[3]=0u+0x00000004u; // 801185BC
  W8(c->r[7]+c->r[8],c->r[6]); // 801185C0
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 801185C4
  c->r[10]=R32(c->r[4]+0x00000024u); // 801185C8
  c->r[10]=R32(c->r[10]+0x00000000u); // 801185CC
  c->r[10]=R32(c->r[10]+0x00000020u); // 801185D0
  W32(c->r[10]+c->r[0],c->r[6]); // 801185D4
  c->r[10]=R32(c->r[4]+0x00000024u); // 801185D8
  c->r[10]=R32(c->r[10]+0x00000000u); // 801185DC
  c->r[10]=R32(c->r[10]+0x00000020u); // 801185E0
  c->r[10]=c->r[10]+c->r[0]; // 801185E4
  W32(c->r[10]+0x00000004u,c->r[6]); // 801185E8
  c->r[10]=R32(c->r[4]+0x00000024u); // 801185EC
  c->r[10]=R32(c->r[10]+0x00000000u); // 801185F0
  c->r[10]=R32(c->r[10]+0x00000020u); // 801185F4
  c->r[10]=c->r[10]+c->r[0]; // 801185F8
  W32(c->r[10]+0x00000008u,c->r[31]); // 801185FC
  c->r[10]=R32(c->r[4]+0x00000024u); // 80118600
  c->r[10]=R32(c->r[10]+0x00000000u); // 80118604
  c->r[10]=R32(c->r[10]+0x00000020u); // 80118608
  c->r[10]=c->r[10]+c->r[0]; // 8011860C
  W8(c->r[10]+0x0000000Cu,c->r[6]); // 80118610
  c->r[10]=R32(c->r[4]+0x00000024u); // 80118614
  c->r[10]=R32(c->r[10]+0x00000000u); // 80118618
  c->r[10]=R32(c->r[10]+0x00000020u); // 8011861C
  c->r[10]=c->r[10]+c->r[0]; // 80118620
  W32(c->r[10]+0x00000010u,c->r[12]); // 80118624
  c->r[10]=R32(c->r[4]+0x00000024u); // 80118628
  c->r[10]=R32(c->r[10]+0x00000000u); // 8011862C
  c->r[0]=R32(c->r[10]+0x00000000u); // 80118630
  c->r[10]=c->r[0]+c->r[7]; // 80118634
  W32(c->r[10]+0x0000000Cu,c->r[5]); // 80118638
  c->r[10]=R32(c->r[4]+0x00000024u); // 8011863C
  c->r[10]=R32(c->r[10]+0x00000000u); // 80118640
  c->r[0]=R32(c->r[10]+0x00000000u); // 80118644
  c->r[10]=c->r[0]+c->r[7]; // 80118648
  W32(c->r[10]+0x00000014u,c->r[11]); // 8011864C
  c->r[10]=R32(c->r[4]+0x00000024u); // 80118650
  c->r[10]=R32(c->r[10]+0x00000000u); // 80118654
  c->r[0]=R32(c->r[10]+0x00000000u); // 80118658
  c->r[7]=c->r[0]+c->r[7]; // 8011865C
  W32(c->r[7]+0x00000018u,c->r[3]); // 80118660
  c->r[7]=R32(c->r[4]+0x00000024u); // 80118664
  c->r[7]=R32(c->r[7]+0x00000000u); // 80118668
  c->r[0]=R32(c->r[7]+0x0000001Cu); // 8011866C
  c->r[7]=c->r[0]+c->r[8]; // 80118670
  W32(c->r[7]+0x00000008u,c->r[5]); // 80118674
  c->r[7]=R32(c->r[4]+0x00000024u); // 80118678
  c->r[7]=R32(c->r[7]+0x00000000u); // 8011867C
  c->r[0]=R32(c->r[7]+0x0000001Cu); // 80118680
  c->r[7]=c->r[0]+c->r[8]; // 80118684
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 80118688
  c->r[5]=R32(c->r[4]+0x00000024u); // 8011868C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80118690
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80118694
  c->r[5]=c->r[0]+c->r[8]; // 80118698
  W32(c->r[5]+0x00000010u,c->r[3]); // 8011869C
  c->r[5]=R32(c->r[4]+0x00000024u); // 801186A0
  c->r[5]=R32(c->r[5]+0x00000000u); // 801186A4
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801186A8
  c->r[5]=c->r[0]+c->r[8]; // 801186AC
  W32(c->r[5]+0x00000014u,c->r[9]); // 801186B0
  c->r[5]=R32(c->r[4]+0x00000024u); // 801186B4
  c->r[5]=R32(c->r[5]+0x00000000u); // 801186B8
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801186BC
  c->r[5]=c->r[0]+c->r[8]; // 801186C0
  W32(c->r[5]+0x00000018u,c->r[9]); // 801186C4
  c->r[5]=R32(c->r[4]+0x00000024u); // 801186C8
  c->r[5]=R32(c->r[5]+0x00000000u); // 801186CC
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801186D0
  c->r[5]=c->r[0]+c->r[8]; // 801186D4
  W32(c->r[5]+0x0000001Cu,c->r[9]); // 801186D8
  c->r[5]=R32(c->r[4]+0x00000024u); // 801186DC
  c->r[5]=R32(c->r[5]+0x00000000u); // 801186E0
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801186E4
  c->r[5]=c->r[0]+c->r[8]; // 801186E8
  W32(c->r[5]+0x00000020u,c->r[6]); // 801186EC
  c->r[5]=R32(c->r[4]+0x00000024u); // 801186F0
  c->r[0]=0u+0x00000001u; // 801186F4
  c->r[7]=0u+0x00000007u; // 801186F8
  c->r[5]=R32(c->r[5]+0x00000000u); // 801186FC
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80118700
  c->r[5]=c->r[5]+c->r[8]; // 80118704
  W32(c->r[5]+0x00000034u,c->r[6]); // 80118708
  c->r[5]=R32(c->r[4]+0x00000024u); // 8011870C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80118710
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80118714
  c->r[5]=c->r[5]+c->r[8]; // 80118718
  W32(c->r[5]+0x00000038u,c->r[6]); // 8011871C
  c->r[5]=R32(c->r[4]+0x00000024u); // 80118720
  c->r[5]=R32(c->r[5]+0x00000000u); // 80118724
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80118728
  c->r[5]=c->r[5]+c->r[8]; // 8011872C
  W32(c->r[5]+0x0000003Cu,c->r[6]); // 80118730
  c->r[5]=R32(c->r[4]+0x00000024u); // 80118734
  c->r[5]=R32(c->r[5]+0x00000000u); // 80118738
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 8011873C
  c->r[5]=c->r[5]+c->r[8]; // 80118740
  W8(c->r[5]+0x00000040u,c->r[0]); // 80118744
  c->r[5]=R32(c->r[4]+0x00000024u); // 80118748
  c->r[5]=R32(c->r[5]+0x00000000u); // 8011874C
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80118750
  c->r[5]=c->r[5]+c->r[8]; // 80118754
  W32(c->r[5]+0x00000044u,c->r[6]); // 80118758
  c->r[5]=R32(c->r[4]+0x00000024u); // 8011875C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80118760
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80118764
  c->r[5]=c->r[5]+c->r[8]; // 80118768
  W32(c->r[5]+0x00000024u,c->r[7]); // 8011876C
  c->r[5]=R32(c->r[4]+0x00000024u); // 80118770
  c->r[5]=R32(c->r[5]+0x00000000u); // 80118774
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80118778
  c->r[5]=c->r[5]+c->r[8]; // 8011877C
  W32(c->r[5]+0x00000028u,c->r[3]); // 80118780
  c->r[3]=R32(c->r[4]+0x00000024u); // 80118784
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118788
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8011878C
  c->r[3]=c->r[3]+c->r[8]; // 80118790
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 80118794
  c->r[3]=R32(c->r[4]+0x00000024u); // 80118798
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011879C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801187A0
  c->r[3]=c->r[3]+c->r[8]; // 801187A4
  W32(c->r[3]+0x00000030u,c->r[7]); // 801187A8
  c->r[3]=R32(c->r[4]+0x00000024u); // 801187AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801187B0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801187B4
  c->r[3]=c->r[3]+c->r[8]; // 801187B8
  W32(c->r[3]+0x00000048u,c->r[6]); // 801187BC
  c->r[3]=R32(c->r[4]+0x00000024u); // 801187C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801187C4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801187C8
  c->r[3]=c->r[3]+c->r[8]; // 801187CC
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 801187D0
  c->r[3]=R32(c->r[4]+0x00000024u); // 801187D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801187D8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801187DC
  c->r[3]=c->r[3]+c->r[8]; // 801187E0
  W32(c->r[3]+0x00000050u,c->r[6]); // 801187E4
  c->r[3]=R32(c->r[4]+0x00000024u); // 801187E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801187EC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801187F0
  c->r[3]=c->r[3]+c->r[8]; // 801187F4
  W8(c->r[3]+0x00000054u,c->r[0]); // 801187F8
  c->r[3]=R32(c->r[4]+0x00000024u); // 801187FC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118800
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80118804
  c->r[3]=c->r[0]+c->r[8]; // 80118808
  W32(c->r[3]+0x00000058u,c->r[6]); // 8011880C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80118810
  c->r[1]=c->r[1]+0x00000010u; // 80118814
  return; // 80118818
}

// fn_8011881C
void f_8011881C(Ctx* __restrict c) {
  trace_call(0x8011881Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011881C
  c->r[0]=c->lr; // 80118820
  W32(c->r[1]+0x00000184u,c->r[0]); // 80118824
  c->r[11]=c->r[1]+0x00000180u; // 80118828
  c->lr=0x80118830u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011882C
  c->r[21]=c->r[3]|c->r[3]; // 80118830
  c->r[3]=R32(c->r[13]+0xFFFFE52Cu); // 80118834
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80118838
  c->lr=0x80118840u; f_80235170(c); // 8011883C
  W32(c->r[21]+0x0000000Cu,c->r[3]); // 80118840
  c->r[22]=0u+0x00000004u; // 80118844
  c->r[23]=0u+0x00000000u; // 80118848
  c->r[24]=0u+0x0000000Fu; // 8011884C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118850
  c->r[25]=0u+0x00000008u; // 80118854
  c->r[26]=0u+0x00000001u; // 80118858
  c->r[27]=0u+0x00000007u; // 8011885C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118860
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118864
  W32(c->r[3]+0x00000018u,c->r[22]); // 80118868
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 8011886C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118870
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118874
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118878
  W32(c->r[3]+0x00000048u,c->r[22]); // 8011887C
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118880
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118884
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118888
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8011888C
  W8(c->r[3]+0x00000088u,c->r[23]); // 80118890
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118894
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118898
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011889C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801188A0
  W32(c->r[3]+0x0000009Cu,c->r[24]); // 801188A4
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 801188A8
  c->r[3]=R32(c->r[3]+0x00000024u); // 801188AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801188B0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801188B4
  W32(c->r[3]+0x000000A0u,c->r[23]); // 801188B8
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 801188BC
  c->r[3]=R32(c->r[3]+0x00000024u); // 801188C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801188C4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801188C8
  W32(c->r[3]+0x000000A4u,c->r[25]); // 801188CC
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 801188D0
  c->r[3]=R32(c->r[3]+0x00000024u); // 801188D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801188D8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801188DC
  W32(c->r[3]+0x000000A8u,c->r[24]); // 801188E0
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 801188E4
  c->r[3]=R32(c->r[3]+0x00000024u); // 801188E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801188EC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801188F0
  W32(c->r[3]+0x000000BCu,c->r[23]); // 801188F4
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 801188F8
  c->r[3]=R32(c->r[3]+0x00000024u); // 801188FC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118900
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118904
  W32(c->r[3]+0x000000C0u,c->r[23]); // 80118908
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 8011890C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118910
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118914
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118918
  W32(c->r[3]+0x000000C4u,c->r[26]); // 8011891C
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118920
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118924
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118928
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8011892C
  W32(c->r[3]+0x000000ACu,c->r[27]); // 80118930
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118934
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118938
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011893C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118940
  W32(c->r[3]+0x000000B0u,c->r[27]); // 80118944
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118948
  c->r[3]=R32(c->r[3]+0x00000024u); // 8011894C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118950
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118954
  W32(c->r[3]+0x000000B4u,c->r[27]); // 80118958
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 8011895C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118960
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118964
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118968
  W32(c->r[3]+0x000000B8u,c->r[23]); // 8011896C
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118970
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118974
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118978
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8011897C
  W32(c->r[3]+0x000000D0u,c->r[23]); // 80118980
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118984
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118988
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011898C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118990
  W32(c->r[3]+0x000000D4u,c->r[23]); // 80118994
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80118998
  c->r[3]=R32(c->r[3]+0x00000024u); // 8011899C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189A0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801189A4
  W32(c->r[3]+0x000000D8u,c->r[23]); // 801189A8
  c->r[3]=R32(c->r[13]+0xFFFFE530u); // 801189AC
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 801189B0
  c->lr=0x801189B8u; f_80235170(c); // 801189B4
  W32(c->r[21]+0x0000002Cu,c->r[3]); // 801189B8
  c->r[3]=R32(c->r[3]+0x00000024u); // 801189BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189C4
  W32(c->r[3]+0x00000018u,c->r[22]); // 801189C8
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 801189CC
  c->r[3]=R32(c->r[3]+0x00000024u); // 801189D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189D8
  W32(c->r[3]+0x00000048u,c->r[22]); // 801189DC
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 801189E0
  c->r[3]=R32(c->r[3]+0x00000024u); // 801189E4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189E8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801189EC
  W8(c->r[3]+0x00000088u,c->r[23]); // 801189F0
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 801189F4
  c->r[3]=R32(c->r[3]+0x00000024u); // 801189F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801189FC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A00
  W32(c->r[3]+0x0000009Cu,c->r[24]); // 80118A04
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A08
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A10
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A14
  W32(c->r[3]+0x000000A0u,c->r[23]); // 80118A18
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A1C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A20
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A24
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A28
  W32(c->r[3]+0x000000A4u,c->r[25]); // 80118A2C
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A30
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A34
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A38
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A3C
  W32(c->r[3]+0x000000A8u,c->r[24]); // 80118A40
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A44
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A48
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A4C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A50
  W32(c->r[3]+0x000000BCu,c->r[23]); // 80118A54
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A58
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A60
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A64
  W32(c->r[3]+0x000000C0u,c->r[23]); // 80118A68
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A6C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A70
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A74
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A78
  W32(c->r[3]+0x000000C4u,c->r[26]); // 80118A7C
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A80
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A84
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A88
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118A8C
  W8(c->r[3]+0x000000C8u,c->r[26]); // 80118A90
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118A94
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118A98
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118A9C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118AA0
  W32(c->r[3]+0x000000CCu,c->r[23]); // 80118AA4
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118AA8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118AAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118AB0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118AB4
  W32(c->r[3]+0x000000ACu,c->r[27]); // 80118AB8
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118ABC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118AC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118AC4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118AC8
  W32(c->r[3]+0x000000B0u,c->r[27]); // 80118ACC
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118AD0
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118AD4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118AD8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118ADC
  W32(c->r[3]+0x000000B4u,c->r[27]); // 80118AE0
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118AE4
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118AE8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118AEC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118AF0
  W32(c->r[3]+0x000000B8u,c->r[23]); // 80118AF4
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80118AF8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118AFC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118B00
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118B04
  W32(c->r[3]+0x000000D0u,c->r[23]); // 80118B08
  c->r[4]=R32(c->r[21]+0x0000002Cu); // 80118B0C
  c->r[3]=c->r[21]|c->r[21]; // 80118B10
  c->r[5]=0u+0x00000002u; // 80118B14
  c->r[4]=R32(c->r[4]+0x00000024u); // 80118B18
  c->r[4]=R32(c->r[4]+0x00000000u); // 80118B1C
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80118B20
  W32(c->r[4]+0x000000D4u,c->r[23]); // 80118B24
  c->r[4]=R32(c->r[21]+0x0000002Cu); // 80118B28
  c->r[4]=R32(c->r[4]+0x00000024u); // 80118B2C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80118B30
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80118B34
  W32(c->r[4]+0x000000D8u,c->r[23]); // 80118B38
  c->r[4]=R32(c->r[21]+0x0000002Cu); // 80118B3C
  c->r[4]=R32(c->r[4]+0x00000024u); // 80118B40
  c->r[4]=R32(c->r[4]+0x00000000u); // 80118B44
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80118B48
  W8(c->r[4]+0x000000DCu,c->r[26]); // 80118B4C
  c->r[4]=R32(c->r[21]+0x0000002Cu); // 80118B50
  c->r[4]=R32(c->r[4]+0x00000024u); // 80118B54
  c->r[4]=R32(c->r[4]+0x00000000u); // 80118B58
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80118B5C
  W32(c->r[4]+0x000000E0u,c->r[23]); // 80118B60
  c->r[4]=R32(c->r[21]+0x0000002Cu); // 80118B64
  c->lr=0x80118B6Cu; f_8011858C(c); // 80118B68
  c->r[3]=R32(c->r[13]+0xFFFFE53Cu); // 80118B6C
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80118B70
  c->lr=0x80118B78u; f_80235170(c); // 80118B74
  W32(c->r[21]+0x00000010u,c->r[3]); // 80118B78
  c->r[28]=0u+0x00000002u; // 80118B7C
  c->r[29]=0u+0x00000021u; // 80118B80
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118B84
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118B88
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118B8C
  W32(c->r[3]+0x0000003Cu,c->r[28]); // 80118B90
  c->r[3]=R32(c->r[21]+0x00000010u); // 80118B94
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118B98
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118B9C
  c->r[3]=R32(c->r[3]+0x00000020u); // 80118BA0
  W32(c->r[3]+0x00000024u,c->r[29]); // 80118BA4
  c->r[3]=R32(c->r[21]+0x00000010u); // 80118BA8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118BAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BB4
  W32(c->r[3]+0x00000018u,c->r[22]); // 80118BB8
  c->r[3]=R32(c->r[21]+0x00000010u); // 80118BBC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118BC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BC4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BC8
  W32(c->r[3]+0x00000048u,c->r[22]); // 80118BCC
  c->r[3]=R32(c->r[13]+0xFFFFE530u); // 80118BD0
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80118BD4
  c->lr=0x80118BDCu; f_80235170(c); // 80118BD8
  W32(c->r[21]+0x00000014u,c->r[3]); // 80118BDC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118BE0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BE4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BE8
  W32(c->r[3]+0x00000018u,c->r[22]); // 80118BEC
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118BF0
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118BF4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118BFC
  W32(c->r[3]+0x00000048u,c->r[22]); // 80118C00
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C04
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C08
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C10
  W32(c->r[3]+0x00000078u,c->r[22]); // 80118C14
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C18
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C20
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C24
  W8(c->r[3]+0x00000088u,c->r[23]); // 80118C28
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C2C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C30
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C34
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C38
  W32(c->r[3]+0x0000009Cu,c->r[24]); // 80118C3C
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C40
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C44
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C48
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C4C
  W32(c->r[3]+0x000000A0u,c->r[23]); // 80118C50
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C54
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C58
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C5C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C60
  W32(c->r[3]+0x000000A4u,c->r[25]); // 80118C64
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C68
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C70
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C74
  W32(c->r[3]+0x000000A8u,c->r[24]); // 80118C78
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C7C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C80
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C84
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C88
  W32(c->r[3]+0x000000BCu,c->r[23]); // 80118C8C
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118C90
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118C94
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118C98
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118C9C
  W32(c->r[3]+0x000000C0u,c->r[23]); // 80118CA0
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118CA4
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118CA8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118CAC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118CB0
  W32(c->r[3]+0x000000C4u,c->r[26]); // 80118CB4
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118CB8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118CBC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118CC0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118CC4
  W32(c->r[3]+0x000000ACu,c->r[27]); // 80118CC8
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118CCC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118CD0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118CD4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118CD8
  W32(c->r[3]+0x000000B0u,c->r[27]); // 80118CDC
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118CE0
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118CE4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118CE8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118CEC
  W32(c->r[3]+0x000000B4u,c->r[27]); // 80118CF0
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118CF4
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118CF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118CFC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118D00
  W32(c->r[3]+0x000000B8u,c->r[23]); // 80118D04
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118D08
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118D0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118D10
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118D14
  W32(c->r[3]+0x000000D0u,c->r[23]); // 80118D18
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118D1C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118D20
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118D24
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118D28
  W32(c->r[3]+0x000000D4u,c->r[23]); // 80118D2C
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118D30
  c->r[30]=0u+0x00000005u; // 80118D34
  c->r[31]=0u+0x0000003Cu; // 80118D38
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118D3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118D40
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118D44
  W32(c->r[3]+0x000000D8u,c->r[23]); // 80118D48
  c->r[3]=R32(c->r[21]+0x00000014u); // 80118D4C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118D50
  c->r[4]=R32(c->r[3]+0x00000000u); // 80118D54
  c->r[3]=R32(c->r[4]+0x00000020u); // 80118D58
  W32(c->r[3]+0x00000020u,c->r[26]); // 80118D5C
  W32(c->r[3]+0x00000024u,c->r[29]); // 80118D60
  W8(c->r[3]+0x00000028u,c->r[26]); // 80118D64
  c->r[3]=R32(c->r[4]+0x00000020u); // 80118D68
  W32(c->r[3]+0x00000038u,c->r[23]); // 80118D6C
  W32(c->r[3]+0x0000003Cu,c->r[30]); // 80118D70
  W32(c->r[3]+0x00000040u,c->r[31]); // 80118D74
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 80118D78
  W32(c->r[3]+0x00000090u,c->r[28]); // 80118D7C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 80118D80
  W8(c->r[3]+0x00000110u,c->r[23]); // 80118D84
  W32(c->r[3]+0x00000144u,c->r[23]); // 80118D88
  W32(c->r[3]+0x00000148u,c->r[23]); // 80118D8C
  W32(c->r[3]+0x0000014Cu,c->r[23]); // 80118D90
  W8(c->r[3]+0x00000150u,c->r[26]); // 80118D94
  W32(c->r[3]+0x00000154u,c->r[23]); // 80118D98
  W32(c->r[3]+0x00000134u,c->r[23]); // 80118D9C
  W32(c->r[3]+0x00000138u,c->r[27]); // 80118DA0
  W32(c->r[3]+0x0000013Cu,c->r[27]); // 80118DA4
  W32(c->r[3]+0x00000140u,c->r[27]); // 80118DA8
  W32(c->r[3]+0x00000158u,c->r[23]); // 80118DAC
  W32(c->r[3]+0x0000015Cu,c->r[23]); // 80118DB0
  W32(c->r[3]+0x00000160u,c->r[23]); // 80118DB4
  W8(c->r[3]+0x00000164u,c->r[26]); // 80118DB8
  W32(c->r[3]+0x00000168u,c->r[23]); // 80118DBC
  W32(c->r[3]+0x00000118u,c->r[26]); // 80118DC0
  W32(c->r[3]+0x0000011Cu,c->r[28]); // 80118DC4
  W32(c->r[3]+0x00000120u,c->r[22]); // 80118DC8
  W16(c->r[4]+0x00000030u,c->r[23]); // 80118DCC
  W16(c->r[4]+0x00000032u,c->r[23]); // 80118DD0
  W16(c->r[4]+0x00000034u,c->r[23]); // 80118DD4
  W16(c->r[4]+0x00000036u,c->r[23]); // 80118DD8
  c->r[3]=R32(c->r[13]+0xFFFFE534u); // 80118DDC
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80118DE0
  c->lr=0x80118DE8u; f_80235170(c); // 80118DE4
  W32(c->r[21]+0x00000030u,c->r[3]); // 80118DE8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118DEC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118DF0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118DF4
  W32(c->r[3]+0x00000018u,c->r[22]); // 80118DF8
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118DFC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E00
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E04
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E08
  W32(c->r[3]+0x00000048u,c->r[22]); // 80118E0C
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E10
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E14
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E18
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E1C
  W32(c->r[3]+0x00000078u,c->r[22]); // 80118E20
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E24
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E28
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E2C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118E30
  W8(c->r[3]+0x00000088u,c->r[23]); // 80118E34
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E38
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E40
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118E44
  W32(c->r[3]+0x0000009Cu,c->r[24]); // 80118E48
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E4C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E50
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E54
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118E58
  W32(c->r[3]+0x000000A0u,c->r[23]); // 80118E5C
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E60
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E64
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E68
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118E6C
  W32(c->r[3]+0x000000A4u,c->r[25]); // 80118E70
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E74
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E78
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E7C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118E80
  W32(c->r[3]+0x000000A8u,c->r[24]); // 80118E84
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E88
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118E8C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118E90
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118E94
  W32(c->r[3]+0x000000BCu,c->r[23]); // 80118E98
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118E9C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118EA0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118EA4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118EA8
  W32(c->r[3]+0x000000C0u,c->r[23]); // 80118EAC
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118EB0
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118EB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118EB8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118EBC
  W32(c->r[3]+0x000000C4u,c->r[26]); // 80118EC0
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118EC4
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118EC8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118ECC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118ED0
  W32(c->r[3]+0x000000ACu,c->r[27]); // 80118ED4
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118ED8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118EDC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118EE0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118EE4
  W32(c->r[3]+0x000000B0u,c->r[27]); // 80118EE8
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118EEC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118EF0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118EF4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118EF8
  W32(c->r[3]+0x000000B4u,c->r[27]); // 80118EFC
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118F00
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118F04
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118F08
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118F0C
  W32(c->r[3]+0x000000B8u,c->r[23]); // 80118F10
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118F14
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118F18
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118F1C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118F20
  W32(c->r[3]+0x000000D0u,c->r[23]); // 80118F24
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118F28
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118F2C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80118F30
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80118F34
  W32(c->r[3]+0x000000D4u,c->r[23]); // 80118F38
  c->r[3]=R32(c->r[21]+0x00000030u); // 80118F3C
  c->r[5]=0u+0x00000003u; // 80118F40
  c->r[3]=R32(c->r[3]+0x00000024u); // 80118F44
  c->r[4]=R32(c->r[3]+0x00000000u); // 80118F48
  c->r[3]=c->r[21]|c->r[21]; // 80118F4C
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80118F50
  W32(c->r[4]+0x000000D8u,c->r[23]); // 80118F54
  c->r[4]=R32(c->r[21]+0x00000030u); // 80118F58
  c->r[4]=R32(c->r[4]+0x00000024u); // 80118F5C
  c->r[6]=R32(c->r[4]+0x00000000u); // 80118F60
  c->r[4]=R32(c->r[6]+0x00000020u); // 80118F64
  W32(c->r[4]+0x00000020u,c->r[26]); // 80118F68
  W32(c->r[4]+0x00000024u,c->r[29]); // 80118F6C
  W8(c->r[4]+0x00000028u,c->r[26]); // 80118F70
  c->r[4]=R32(c->r[6]+0x00000020u); // 80118F74
  W32(c->r[4]+0x00000038u,c->r[23]); // 80118F78
  W32(c->r[4]+0x0000003Cu,c->r[30]); // 80118F7C
  W32(c->r[4]+0x00000040u,c->r[31]); // 80118F80
  c->r[4]=R32(c->r[6]+0x0000001Cu); // 80118F84
  W32(c->r[4]+0x00000090u,c->r[28]); // 80118F88
  c->r[4]=R32(c->r[6]+0x0000001Cu); // 80118F8C
  W8(c->r[4]+0x00000110u,c->r[23]); // 80118F90
  W32(c->r[4]+0x00000144u,c->r[23]); // 80118F94
  W32(c->r[4]+0x00000148u,c->r[23]); // 80118F98
  W32(c->r[4]+0x0000014Cu,c->r[23]); // 80118F9C
  W8(c->r[4]+0x00000150u,c->r[26]); // 80118FA0
  W32(c->r[4]+0x00000154u,c->r[23]); // 80118FA4
  W32(c->r[4]+0x00000134u,c->r[23]); // 80118FA8
  W32(c->r[4]+0x00000138u,c->r[27]); // 80118FAC
  W32(c->r[4]+0x0000013Cu,c->r[27]); // 80118FB0
  W32(c->r[4]+0x00000140u,c->r[27]); // 80118FB4
  W32(c->r[4]+0x00000158u,c->r[23]); // 80118FB8
  W32(c->r[4]+0x0000015Cu,c->r[23]); // 80118FBC
  W32(c->r[4]+0x00000160u,c->r[23]); // 80118FC0
  W8(c->r[4]+0x00000164u,c->r[26]); // 80118FC4
  W32(c->r[4]+0x00000168u,c->r[23]); // 80118FC8
  W32(c->r[4]+0x00000118u,c->r[26]); // 80118FCC
  W32(c->r[4]+0x0000011Cu,c->r[28]); // 80118FD0
  W32(c->r[4]+0x00000120u,c->r[22]); // 80118FD4
  W16(c->r[6]+0x00000030u,c->r[23]); // 80118FD8
  W16(c->r[6]+0x00000032u,c->r[23]); // 80118FDC
  W16(c->r[6]+0x00000034u,c->r[23]); // 80118FE0
  W16(c->r[6]+0x00000036u,c->r[23]); // 80118FE4
  c->r[4]=R32(c->r[21]+0x00000030u); // 80118FE8
  c->lr=0x80118FF0u; f_8011858C(c); // 80118FEC
  c->r[3]=R32(c->r[13]+0xFFFFE52Cu); // 80118FF0
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80118FF4
  c->lr=0x80118FFCu; f_80235170(c); // 80118FF8
  W32(c->r[21]+0x00000018u,c->r[3]); // 80118FFC
  c->r[5]=0u+0x00000001u; // 80119000
  c->r[4]=R32(c->r[3]+0x00000024u); // 80119004
  c->r[3]=c->r[21]|c->r[21]; // 80119008
  c->r[4]=R32(c->r[4]+0x00000000u); // 8011900C
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80119010
  W32(c->r[4]+0x0000003Cu,c->r[28]); // 80119014
  c->r[4]=R32(c->r[21]+0x00000018u); // 80119018
  c->r[4]=R32(c->r[4]+0x00000024u); // 8011901C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80119020
  c->r[4]=R32(c->r[4]+0x00000000u); // 80119024
  W32(c->r[4]+0x00000018u,c->r[22]); // 80119028
  c->r[4]=R32(c->r[21]+0x00000018u); // 8011902C
  c->lr=0x80119034u; f_8011858C(c); // 80119030
  c->r[3]=R32(c->r[13]+0xFFFFE52Cu); // 80119034
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119038
  c->lr=0x80119040u; f_80235170(c); // 8011903C
  W32(c->r[21]+0x0000001Cu,c->r[3]); // 80119040
  c->r[0]=0u+0x00000009u; // 80119044
  c->r[5]=0u+0x00000001u; // 80119048
  c->r[4]=R32(c->r[3]+0x00000024u); // 8011904C
  c->r[3]=c->r[21]|c->r[21]; // 80119050
  c->r[4]=R32(c->r[4]+0x00000000u); // 80119054
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 80119058
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8011905C
  c->r[4]=R32(c->r[21]+0x0000001Cu); // 80119060
  c->r[4]=R32(c->r[4]+0x00000024u); // 80119064
  c->r[4]=R32(c->r[4]+0x00000000u); // 80119068
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 8011906C
  W32(c->r[4]+0x0000003Cu,c->r[23]); // 80119070
  c->r[4]=R32(c->r[21]+0x0000001Cu); // 80119074
  c->r[4]=R32(c->r[4]+0x00000024u); // 80119078
  c->r[4]=R32(c->r[4]+0x00000000u); // 8011907C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80119080
  W32(c->r[4]+0x00000018u,c->r[22]); // 80119084
  c->r[4]=R32(c->r[21]+0x0000001Cu); // 80119088
  c->lr=0x80119090u; f_8011858C(c); // 8011908C
  c->r[3]=R32(c->r[13]+0xFFFFE530u); // 80119090
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119094
  c->lr=0x8011909Cu; f_80235170(c); // 80119098
  W32(c->r[21]+0x00000020u,c->r[3]); // 8011909C
  c->r[5]=0u+0x00000002u; // 801190A0
  c->r[4]=R32(c->r[3]+0x00000024u); // 801190A4
  c->r[3]=c->r[21]|c->r[21]; // 801190A8
  c->r[4]=R32(c->r[4]+0x00000000u); // 801190AC
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 801190B0
  W32(c->r[4]+0x000000C4u,c->r[26]); // 801190B4
  c->r[4]=R32(c->r[21]+0x00000020u); // 801190B8
  c->r[4]=R32(c->r[4]+0x00000024u); // 801190BC
  c->r[4]=R32(c->r[4]+0x00000000u); // 801190C0
  c->r[4]=R32(c->r[4]+0x00000000u); // 801190C4
  W32(c->r[4]+0x00000018u,c->r[22]); // 801190C8
  c->r[4]=R32(c->r[21]+0x00000020u); // 801190CC
  c->r[4]=R32(c->r[4]+0x00000024u); // 801190D0
  c->r[4]=R32(c->r[4]+0x00000000u); // 801190D4
  c->r[4]=R32(c->r[4]+0x00000000u); // 801190D8
  W32(c->r[4]+0x00000048u,c->r[22]); // 801190DC
  c->r[4]=R32(c->r[21]+0x00000020u); // 801190E0
  c->lr=0x801190E8u; f_8011858C(c); // 801190E4
  c->r[3]=R32(c->r[13]+0xFFFFE544u); // 801190E8
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 801190EC
  c->lr=0x801190F4u; f_80235170(c); // 801190F0
  W32(c->r[21]+0x000000A0u,c->r[23]); // 801190F4
  c->r[0]=c->r[21]+0x00000040u; // 801190F8
  c->r[23]=c->r[1]+0x00000090u; // 801190FC
  c->r[24]=0u+0x00000000u; // 80119100
  W32(c->r[21]+0x00000024u,c->r[3]); // 80119104
  c->r[25]=0u+0x00000003u; // 80119108
  c->r[3]=R32(c->r[3]+0x00000024u); // 8011910C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119110
  W32(c->r[3]+0x00000098u,c->r[0]); // 80119114
  c->r[3]=R32(c->r[21]+0x00000024u); // 80119118
  c->r[3]=R32(c->r[3]+0x00000024u); // 8011911C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119120
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80119124
  W32(c->r[3]+0x0000014Cu,c->r[28]); // 80119128
  c->r[3]=R32(c->r[21]+0x00000024u); // 8011912C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119130
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119134
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119138
  W32(c->r[3]+0x00000018u,c->r[22]); // 8011913C
  c->r[3]=R32(c->r[21]+0x00000024u); // 80119140
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119144
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119148
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011914C
  W32(c->r[3]+0x00000048u,c->r[22]); // 80119150
L_80119154:;
  c->r[3]=c->r[23]|c->r[23]; // 80119154
  c->r[4]=0u+0x00000030u; // 80119158
  c->lr=0x80119160u; f_802525D0(c); // 8011915C
  W32(c->r[23]+0x0000000Cu,c->r[24]); // 80119160
  c->r[24]=c->r[24]+0x00000001u; // 80119164
  cmps(c,0,(int32_t)c->r[24],4); // 80119168
  W32(c->r[23]+0x00000014u,c->r[25]); // 8011916C
  W32(c->r[23]+0x00000018u,c->r[28]); // 80119170
  c->r[23]=c->r[23]+0x00000030u; // 80119174
  if (crb(c,0)) { IRQCHK(c); goto L_80119154; } // 80119178
  c->r[31]=0u+0x00000000u; // 8011917C
  W32(c->r[1]+0x00000008u,c->r[31]); // 80119180
  c->r[4]=c->r[1]+0x00000090u; // 80119184
  c->r[3]=0u+0x00000004u; // 80119188
  c->r[0]=R32(c->r[13]+0xFFFFE678u); // 8011918C
  c->r[5]=0u+0x00000000u; // 80119190
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80119194
  c->r[6]=0u+0x00000000u; // 80119198
  c->r[7]=0u+0x00000005u; // 8011919C
  c->r[8]=0u+0x00000005u; // 801191A0
  c->r[9]=0u+0x00000000u; // 801191A4
  c->r[10]=0u+0x00000000u; // 801191A8
  c->lr=0x801191B0u; f_802337B0(c); // 801191AC
  W32(c->r[21]+0x00000028u,c->r[3]); // 801191B0
  c->r[23]=0u+0x00000004u; // 801191B4
  c->r[22]=0u+0x0000003Cu; // 801191B8
  c->r[12]=0u+0x0000007Du; // 801191BC
  c->r[3]=R32(c->r[3]+0x00000024u); // 801191C0
  c->r[10]=0u+0x00000001u; // 801191C4
  c->r[4]=0u+0x00000021u; // 801191C8
  c->r[9]=0u+0x00000002u; // 801191CC
  c->r[24]=R32(c->r[3]+0x00000000u); // 801191D0
  c->r[3]=0u+0x0000000Eu; // 801191D4
  c->r[8]=0u+0x0000000Fu; // 801191D8
  c->r[7]=0u+0x00000008u; // 801191DC
  c->r[11]=R32(c->r[24]+0x00000020u); // 801191E0
  c->r[6]=0u+0x00000003u; // 801191E4
  c->r[0]=0u+0x0000000Au; // 801191E8
  c->r[5]=0u+0x00000007u; // 801191EC
  W32(c->r[11]+0x00000000u,c->r[31]); // 801191F0
  W32(c->r[11]+0x00000004u,c->r[23]); // 801191F4
  W32(c->r[11]+0x00000008u,c->r[22]); // 801191F8
  W8(c->r[11]+0x0000000Cu,c->r[31]); // 801191FC
  W32(c->r[11]+0x00000010u,c->r[12]); // 80119200
  c->r[11]=R32(c->r[24]+0x00000020u); // 80119204
  W32(c->r[11]+0x0000001Cu,c->r[31]); // 80119208
  W32(c->r[11]+0x00000020u,c->r[10]); // 8011920C
  W32(c->r[11]+0x00000024u,c->r[4]); // 80119210
  W8(c->r[11]+0x00000028u,c->r[10]); // 80119214
  W32(c->r[11]+0x0000002Cu,c->r[12]); // 80119218
  c->r[4]=R32(c->r[24]+0x00000020u); // 8011921C
  W32(c->r[4]+0x00000038u,c->r[31]); // 80119220
  W32(c->r[4]+0x0000003Cu,c->r[23]); // 80119224
  W32(c->r[4]+0x00000040u,c->r[22]); // 80119228
  W8(c->r[4]+0x00000044u,c->r[31]); // 8011922C
  W32(c->r[4]+0x00000048u,c->r[12]); // 80119230
  c->r[4]=R32(c->r[24]+0x00000020u); // 80119234
  W32(c->r[4]+0x00000054u,c->r[31]); // 80119238
  W32(c->r[4]+0x00000058u,c->r[23]); // 8011923C
  W32(c->r[4]+0x0000005Cu,c->r[22]); // 80119240
  W8(c->r[4]+0x00000060u,c->r[31]); // 80119244
  W32(c->r[4]+0x00000064u,c->r[12]); // 80119248
  c->r[4]=R32(c->r[24]+0x00000020u); // 8011924C
  W32(c->r[4]+0x00000070u,c->r[9]); // 80119250
  W32(c->r[4]+0x00000074u,c->r[3]); // 80119254
  W32(c->r[4]+0x00000078u,c->r[22]); // 80119258
  W8(c->r[4]+0x0000007Cu,c->r[31]); // 8011925C
  W32(c->r[4]+0x00000080u,c->r[12]); // 80119260
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 80119264
  W8(c->r[3]+0x00000000u,c->r[31]); // 80119268
  W32(c->r[3]+0x00000014u,c->r[8]); // 8011926C
  W32(c->r[3]+0x00000018u,c->r[7]); // 80119270
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 80119274
  W32(c->r[3]+0x00000020u,c->r[0]); // 80119278
  W32(c->r[3]+0x00000034u,c->r[31]); // 8011927C
  W32(c->r[3]+0x00000038u,c->r[31]); // 80119280
  W32(c->r[3]+0x0000003Cu,c->r[31]); // 80119284
  W8(c->r[3]+0x00000040u,c->r[31]); // 80119288
  W32(c->r[3]+0x00000044u,c->r[31]); // 8011928C
  W32(c->r[3]+0x00000024u,c->r[5]); // 80119290
  W32(c->r[3]+0x00000028u,c->r[5]); // 80119294
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 80119298
  W32(c->r[3]+0x00000030u,c->r[23]); // 8011929C
  W32(c->r[3]+0x00000048u,c->r[31]); // 801192A0
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 801192A4
  W32(c->r[3]+0x00000050u,c->r[31]); // 801192A8
  W8(c->r[3]+0x00000054u,c->r[31]); // 801192AC
  W32(c->r[3]+0x00000058u,c->r[31]); // 801192B0
  c->r[0]=0u+0x000000FFu; // 801192B4
  W32(c->r[3]+0x00000008u,c->r[9]); // 801192B8
  W32(c->r[3]+0x0000000Cu,c->r[10]); // 801192BC
  W32(c->r[3]+0x00000010u,c->r[23]); // 801192C0
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 801192C4
  W8(c->r[3]+0x00000088u,c->r[31]); // 801192C8
  W32(c->r[3]+0x0000009Cu,c->r[8]); // 801192CC
  W32(c->r[3]+0x000000A0u,c->r[7]); // 801192D0
  W32(c->r[3]+0x000000A4u,c->r[6]); // 801192D4
  W32(c->r[3]+0x000000A8u,c->r[31]); // 801192D8
  W32(c->r[3]+0x000000BCu,c->r[10]); // 801192DC
  W32(c->r[3]+0x000000C0u,c->r[31]); // 801192E0
  W32(c->r[3]+0x000000C4u,c->r[31]); // 801192E4
  W8(c->r[3]+0x000000C8u,c->r[10]); // 801192E8
  W32(c->r[3]+0x000000CCu,c->r[31]); // 801192EC
  W32(c->r[3]+0x000000ACu,c->r[5]); // 801192F0
  W32(c->r[3]+0x000000B0u,c->r[5]); // 801192F4
  W32(c->r[3]+0x000000B4u,c->r[5]); // 801192F8
  W32(c->r[3]+0x000000B8u,c->r[23]); // 801192FC
  W32(c->r[3]+0x000000D0u,c->r[31]); // 80119300
  W32(c->r[3]+0x000000D4u,c->r[31]); // 80119304
  W32(c->r[3]+0x000000D8u,c->r[31]); // 80119308
  W8(c->r[3]+0x000000DCu,c->r[31]); // 8011930C
  W32(c->r[3]+0x000000E0u,c->r[31]); // 80119310
  W32(c->r[3]+0x00000090u,c->r[23]); // 80119314
  W32(c->r[3]+0x00000094u,c->r[10]); // 80119318
  W32(c->r[3]+0x00000098u,c->r[0]); // 8011931C
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 80119320
  W8(c->r[3]+0x00000110u,c->r[31]); // 80119324
  W32(c->r[3]+0x00000124u,c->r[8]); // 80119328
  W32(c->r[3]+0x00000128u,c->r[31]); // 8011932C
  W32(c->r[3]+0x0000012Cu,c->r[7]); // 80119330
  W32(c->r[3]+0x00000130u,c->r[8]); // 80119334
  W32(c->r[3]+0x00000144u,c->r[31]); // 80119338
  W32(c->r[3]+0x00000148u,c->r[31]); // 8011933C
  W32(c->r[3]+0x0000014Cu,c->r[10]); // 80119340
  W8(c->r[3]+0x00000150u,c->r[10]); // 80119344
  W32(c->r[3]+0x00000154u,c->r[31]); // 80119348
  W32(c->r[3]+0x00000134u,c->r[5]); // 8011934C
  W32(c->r[3]+0x00000138u,c->r[5]); // 80119350
  W32(c->r[3]+0x0000013Cu,c->r[5]); // 80119354
  W32(c->r[3]+0x00000140u,c->r[23]); // 80119358
  W32(c->r[3]+0x00000158u,c->r[31]); // 8011935C
  W32(c->r[3]+0x0000015Cu,c->r[31]); // 80119360
  W32(c->r[3]+0x00000160u,c->r[31]); // 80119364
  W8(c->r[3]+0x00000164u,c->r[10]); // 80119368
  W32(c->r[3]+0x00000168u,c->r[31]); // 8011936C
  W32(c->r[3]+0x00000118u,c->r[31]); // 80119370
  W32(c->r[3]+0x0000011Cu,c->r[31]); // 80119374
  W32(c->r[3]+0x00000120u,c->r[23]); // 80119378
  c->r[4]=R32(c->r[24]+0x0000001Cu); // 8011937C
  W8(c->r[4]+0x00000198u,c->r[31]); // 80119380
  c->r[3]=c->r[21]+0x00000040u; // 80119384
  {uint32_t ea=c->r[2]+0xFFFF89D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119388
  c->r[0]=0u+0x000000C0u; // 8011938C
  W32(c->r[4]+0x000001ACu,c->r[8]); // 80119390
  W32(c->r[4]+0x000001B0u,c->r[8]); // 80119394
  W32(c->r[4]+0x000001B4u,c->r[8]); // 80119398
  W32(c->r[4]+0x000001B8u,c->r[7]); // 8011939C
  W32(c->r[4]+0x000001CCu,c->r[31]); // 801193A0
  W32(c->r[4]+0x000001D0u,c->r[31]); // 801193A4
  W32(c->r[4]+0x000001D4u,c->r[31]); // 801193A8
  W8(c->r[4]+0x000001D8u,c->r[10]); // 801193AC
  W32(c->r[4]+0x000001DCu,c->r[9]); // 801193B0
  W32(c->r[4]+0x000001BCu,c->r[5]); // 801193B4
  W32(c->r[4]+0x000001C0u,c->r[5]); // 801193B8
  W32(c->r[4]+0x000001C4u,c->r[5]); // 801193BC
  W32(c->r[4]+0x000001C8u,c->r[31]); // 801193C0
  W32(c->r[4]+0x000001E0u,c->r[31]); // 801193C4
  W32(c->r[4]+0x000001E4u,c->r[31]); // 801193C8
  W32(c->r[4]+0x000001E8u,c->r[31]); // 801193CC
  W8(c->r[4]+0x000001ECu,c->r[10]); // 801193D0
  W32(c->r[4]+0x000001F0u,c->r[9]); // 801193D4
  W32(c->r[4]+0x000001A0u,c->r[10]); // 801193D8
  W32(c->r[4]+0x000001A4u,c->r[9]); // 801193DC
  W32(c->r[4]+0x000001A8u,c->r[23]); // 801193E0
  c->r[4]=R32(c->r[24]+0x0000001Cu); // 801193E4
  W8(c->r[4]+0x00000220u,c->r[31]); // 801193E8
  W32(c->r[4]+0x00000234u,c->r[8]); // 801193EC
  W32(c->r[4]+0x00000238u,c->r[23]); // 801193F0
  W32(c->r[4]+0x0000023Cu,c->r[7]); // 801193F4
  W32(c->r[4]+0x00000240u,c->r[31]); // 801193F8
  W32(c->r[4]+0x00000254u,c->r[31]); // 801193FC
  W32(c->r[4]+0x00000258u,c->r[31]); // 80119400
  W32(c->r[4]+0x0000025Cu,c->r[31]); // 80119404
  W8(c->r[4]+0x00000260u,c->r[10]); // 80119408
  W32(c->r[4]+0x00000264u,c->r[31]); // 8011940C
  W32(c->r[4]+0x00000244u,c->r[5]); // 80119410
  W32(c->r[4]+0x00000248u,c->r[5]); // 80119414
  W32(c->r[4]+0x0000024Cu,c->r[5]); // 80119418
  W32(c->r[4]+0x00000250u,c->r[31]); // 8011941C
  W32(c->r[4]+0x00000268u,c->r[31]); // 80119420
  W32(c->r[4]+0x0000026Cu,c->r[31]); // 80119424
  W32(c->r[4]+0x00000270u,c->r[31]); // 80119428
  W8(c->r[4]+0x00000274u,c->r[10]); // 8011942C
  W32(c->r[4]+0x00000278u,c->r[31]); // 80119430
  W32(c->r[4]+0x00000228u,c->r[6]); // 80119434
  W32(c->r[4]+0x0000022Cu,c->r[6]); // 80119438
  W32(c->r[4]+0x00000230u,c->r[23]); // 8011943C
  {uint32_t ea=c->r[24]+0x00000078u; WF32(ea,c->f[0]);} // 80119440
  W32(c->r[24]+0x00000098u,c->r[3]); // 80119444
  W16(c->r[24]+0x00000034u,c->r[31]); // 80119448
  W16(c->r[24]+0x00000032u,c->r[31]); // 8011944C
  W16(c->r[24]+0x00000030u,c->r[31]); // 80119450
  W16(c->r[24]+0x00000036u,c->r[0]); // 80119454
  W32(c->r[21]+0x000000F0u,c->r[31]); // 80119458
  {uint32_t ea=c->r[2]+0xFFFF89DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011945C
  c->r[26]=0u+0x80400000u; // 80119460
  W32(c->r[21]+0x000000F4u,c->r[31]); // 80119464
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 80119468
  {uint32_t ea=c->r[21]+0x000000F8u; WF32(ea,c->f[0]);} // 8011946C
  {uint32_t ea=c->r[21]+0x000000FCu; WF32(ea,c->f[0]);} // 80119470
  {uint32_t ea=c->r[21]+0x00000100u; WF32(ea,c->f[0]);} // 80119474
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119478
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011947C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119480
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80119484
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119488
  c->r[3]=R32(c->r[21]+0x00000010u); // 8011948C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119490
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119494
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119498
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 8011949C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801194A0
  c->r[3]=R32(c->r[21]+0x00000014u); // 801194A4
  c->r[3]=R32(c->r[3]+0x00000024u); // 801194A8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801194AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801194B0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801194B4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801194B8
  c->r[3]=R32(c->r[21]+0x00000018u); // 801194BC
  c->r[3]=R32(c->r[3]+0x00000024u); // 801194C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801194C4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801194C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801194CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801194D0
  c->r[3]=R32(c->r[21]+0x0000001Cu); // 801194D4
  c->r[3]=R32(c->r[3]+0x00000024u); // 801194D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801194DC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801194E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801194E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801194E8
  c->r[3]=R32(c->r[21]+0x00000020u); // 801194EC
  c->r[3]=R32(c->r[3]+0x00000024u); // 801194F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801194F4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801194F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801194FC
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119500
  c->r[3]=R32(c->r[21]+0x00000024u); // 80119504
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119508
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011950C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119510
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80119514
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119518
  c->r[3]=R32(c->r[21]+0x00000028u); // 8011951C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119520
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119524
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119528
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 8011952C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119530
  c->r[3]=R32(c->r[21]+0x0000002Cu); // 80119534
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119538
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011953C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119540
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80119544
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119548
  c->r[3]=R32(c->r[21]+0x00000030u); // 8011954C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119550
  c->r[3]=R32(c->r[3]+0x00000000u); // 80119554
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119558
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 8011955C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119560
  c->r[3]=R32(c->r[13]+0xFFFFE524u); // 80119564
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119568
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011956C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80119570
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80119574
  W32(c->r[3]+0x00000008u,c->r[0]); // 80119578
  {uint32_t ea=c->r[26]+0x00005150u; c->r[25]=R32(ea); c->r[26]=ea;} // 8011957C
  W32(c->r[1]+0x00000050u,c->r[25]); // 80119580
  c->r[24]=R32(c->r[26]+0x00000004u); // 80119584
  c->r[23]=R32(c->r[26]+0x00000008u); // 80119588
  c->r[22]=R32(c->r[26]+0x0000000Cu); // 8011958C
  c->r[21]=R32(c->r[26]+0x00000010u); // 80119590
  c->r[12]=R32(c->r[26]+0x00000014u); // 80119594
  c->r[11]=R32(c->r[26]+0x00000018u); // 80119598
  c->r[10]=R32(c->r[26]+0x0000001Cu); // 8011959C
  c->r[9]=R32(c->r[26]+0x00000020u); // 801195A0
  c->r[8]=R32(c->r[26]+0x00000024u); // 801195A4
  c->r[7]=R32(c->r[26]+0x00000028u); // 801195A8
  c->r[6]=R32(c->r[26]+0x0000002Cu); // 801195AC
  c->r[5]=R32(c->r[26]+0x00000030u); // 801195B0
  c->r[4]=R32(c->r[26]+0x00000034u); // 801195B4
  c->r[3]=R32(c->r[26]+0x00000038u); // 801195B8
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 801195BC
  W32(c->r[1]+0x00000054u,c->r[24]); // 801195C0
  W32(c->r[1]+0x00000058u,c->r[23]); // 801195C4
  W32(c->r[1]+0x0000005Cu,c->r[22]); // 801195C8
  W32(c->r[1]+0x00000060u,c->r[21]); // 801195CC
  W32(c->r[1]+0x00000064u,c->r[12]); // 801195D0
  W32(c->r[1]+0x00000068u,c->r[11]); // 801195D4
  W32(c->r[1]+0x0000006Cu,c->r[10]); // 801195D8
  W32(c->r[1]+0x00000070u,c->r[9]); // 801195DC
  W32(c->r[1]+0x00000074u,c->r[8]); // 801195E0
  W32(c->r[1]+0x00000078u,c->r[7]); // 801195E4
  W32(c->r[1]+0x0000007Cu,c->r[6]); // 801195E8
  W32(c->r[1]+0x00000080u,c->r[5]); // 801195EC
  W32(c->r[1]+0x00000084u,c->r[4]); // 801195F0
  W32(c->r[1]+0x00000088u,c->r[3]); // 801195F4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801195F8
  c->r[30]=0u+0x80400000u; // 801195FC
  {uint32_t ea=c->r[30]+0x00005190u; c->r[29]=R32(ea); c->r[30]=ea;} // 80119600
  c->r[21]=0u+0x80490000u; // 80119604
  W32(c->r[1]+0x00000010u,c->r[29]); // 80119608
  c->r[28]=R32(c->r[30]+0x00000004u); // 8011960C
  c->r[21]=c->r[21]+0xFFFFABE0u; // 80119610
  c->r[27]=R32(c->r[30]+0x00000008u); // 80119614
  c->r[4]=c->r[1]+0x00000050u; // 80119618
  c->r[26]=R32(c->r[30]+0x0000000Cu); // 8011961C
  c->r[3]=c->r[21]+0x000000F0u; // 80119620
  c->r[25]=R32(c->r[30]+0x00000010u); // 80119624
  c->r[5]=0u+0x00000040u; // 80119628
  c->r[24]=R32(c->r[30]+0x00000014u); // 8011962C
  c->r[23]=R32(c->r[30]+0x00000018u); // 80119630
  c->r[22]=R32(c->r[30]+0x0000001Cu); // 80119634
  c->r[12]=R32(c->r[30]+0x00000020u); // 80119638
  c->r[11]=R32(c->r[30]+0x00000024u); // 8011963C
  c->r[10]=R32(c->r[30]+0x00000028u); // 80119640
  c->r[9]=R32(c->r[30]+0x0000002Cu); // 80119644
  c->r[8]=R32(c->r[30]+0x00000030u); // 80119648
  c->r[7]=R32(c->r[30]+0x00000034u); // 8011964C
  c->r[6]=R32(c->r[30]+0x00000038u); // 80119650
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 80119654
  W32(c->r[1]+0x00000014u,c->r[28]); // 80119658
  W32(c->r[1]+0x00000018u,c->r[27]); // 8011965C
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 80119660
  W32(c->r[1]+0x00000020u,c->r[25]); // 80119664
  W32(c->r[1]+0x00000024u,c->r[24]); // 80119668
  W32(c->r[1]+0x00000028u,c->r[23]); // 8011966C
  W32(c->r[1]+0x0000002Cu,c->r[22]); // 80119670
  W32(c->r[1]+0x00000030u,c->r[12]); // 80119674
  W32(c->r[1]+0x00000034u,c->r[11]); // 80119678
  W32(c->r[1]+0x00000038u,c->r[10]); // 8011967C
  W32(c->r[1]+0x0000003Cu,c->r[9]); // 80119680
  W32(c->r[1]+0x00000040u,c->r[8]); // 80119684
  W32(c->r[1]+0x00000044u,c->r[7]); // 80119688
  W32(c->r[1]+0x00000048u,c->r[6]); // 8011968C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80119690
  c->lr=0x80119698u; f_8000626C(c); // 80119694
  c->r[3]=c->r[21]+0x00000130u; // 80119698
  c->r[4]=c->r[1]+0x00000010u; // 8011969C
  c->r[5]=0u+0x00000040u; // 801196A0
  c->lr=0x801196A8u; f_8000626C(c); // 801196A4
  c->r[11]=c->r[1]+0x00000180u; // 801196A8
  c->lr=0x801196B0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801196AC
  c->r[0]=R32(c->r[1]+0x00000184u); // 801196B0
  c->lr=c->r[0]; // 801196B4
  c->r[1]=c->r[1]+0x00000180u; // 801196B8
  return; // 801196BC
}

// fn_801196C0
void f_801196C0(Ctx* __restrict c) {
  trace_call(0x801196C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801196C0
  c->r[0]=c->lr; // 801196C4
  c->r[4]=0u+0x80420000u; // 801196C8
  c->r[5]=0u+0x00000007u; // 801196CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801196D0
  c->r[4]=c->r[4]+0x00002F08u; // 801196D4
  c->r[6]=0u+0x00000000u; // 801196D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801196DC
  c->r[31]=c->r[3]|c->r[3]; // 801196E0
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801196E4
  c->lr=0x801196ECu; f_802BAB18(c); // 801196E8
  W32(c->r[31]+0x00000004u,c->r[3]); // 801196EC
  c->r[3]=0u+0x00000050u; // 801196F0
  c->r[4]=c->r[13]+0xFFFFBE88u; // 801196F4
  c->r[5]=0u+0x00000000u; // 801196F8
  c->r[6]=0u+0x00001001u; // 801196FC
  c->lr=0x80119704u; f_80244D20(c); // 80119700
  cmps(c,0,(int32_t)c->r[3],0); // 80119704
  c->r[4]=c->r[3]|c->r[3]; // 80119708
  if (crb(c,2)) { goto L_80119724; } // 8011970C
  c->r[5]=0u+0x80420000u; // 80119710
  c->r[4]=0u+0xFFFFFFFFu; // 80119714
  c->r[5]=c->r[5]+0x00002F20u; // 80119718
  c->lr=0x80119720u; f_80297CF4(c); // 8011971C
  c->r[4]=c->r[3]|c->r[3]; // 80119720
L_80119724:;
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80119724
  c->r[6]=0u+0x00000000u; // 80119728
  c->r[5]=R32(c->r[13]+0xFFFFE8B4u); // 8011972C
  c->r[7]=0u+0x00000000u; // 80119730
  c->lr=0x80119738u; f_80280E9C(c); // 80119734
  W32(c->r[31]+0x00000008u,c->r[3]); // 80119738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011973C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80119740
  c->lr=c->r[0]; // 80119744
  c->r[1]=c->r[1]+0x00000010u; // 80119748
  return; // 8011974C
}

// fn_80119750
void f_80119750(Ctx* __restrict c) {
  trace_call(0x80119750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80119750
  c->r[0]=c->lr; // 80119754
  W32(c->r[1]+0x00000014u,c->r[0]); // 80119758
  c->r[0]=0u+0x00000000u; // 8011975C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80119760
  c->r[31]=c->r[3]|c->r[3]; // 80119764
  c->r[4]=R32(c->r[3]+0x00000008u); // 80119768
  W32(c->r[3]+0x00000004u,c->r[0]); // 8011976C
  cmps(c,0,(int32_t)c->r[4],0); // 80119770
  if (crb(c,2)) { goto L_80119780; } // 80119774
  c->r[3]=c->r[4]|c->r[4]; // 80119778
  c->lr=0x80119780u; f_80295B7C(c); // 8011977C
L_80119780:;
  c->r[0]=0u+0x00000000u; // 80119780
  W32(c->r[31]+0x00000008u,c->r[0]); // 80119784
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80119788
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011978C
  c->lr=c->r[0]; // 80119790
  c->r[1]=c->r[1]+0x00000010u; // 80119794
  return; // 80119798
}

// fn_8011979C
void f_8011979C(Ctx* __restrict c) {
  trace_call(0x8011979Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011979C
  c->r[0]=c->lr; // 801197A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801197A4
  c->r[11]=c->r[1]+0x00000020u; // 801197A8
  c->lr=0x801197B0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801197AC
  cmps(c,0,(int32_t)c->r[4],0); // 801197B0
  c->r[28]=c->r[3]|c->r[3]; // 801197B4
  c->r[29]=c->r[4]|c->r[4]; // 801197B8
  if (crb(c,2)) { goto L_80119A2C; } // 801197BC
  c->r[3]=R32(c->r[4]+0x000000A4u); // 801197C0
  c->r[0]=rotl(c->r[3],0)&0x00080000u; cr0(c,c->r[0]); // 801197C4
  if (!crb(c,2)) { goto L_80119A2C; } // 801197C8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801197CC
  if (crb(c,2)) { goto L_8011995C; } // 801197D0
  c->r[30]=R32(c->r[4]+0x0000002Cu); // 801197D4
  c->r[31]=R32(c->r[4]+0x00000028u); // 801197D8
  goto L_8011994C; // 801197DC
L_801197E0:;
  c->r[6]=R32(c->r[28]+0x00000004u); // 801197E0
  c->r[4]=R32(c->r[30]+0x00000004u); // 801197E4
  cmps(c,0,(int32_t)c->r[6],0); // 801197E8
  if (crb(c,2)) { goto L_80119828; } // 801197EC
  c->r[0]=R32(c->r[6]+0x00000024u); // 801197F0
  c->r[5]=0u+0x00000000u; // 801197F4
  c->ctr=c->r[0]; // 801197F8
  cmps(c,0,(int32_t)c->r[0],0); // 801197FC
  if (!crb(c,1)) { goto L_80119828; } // 80119800
L_80119804:;
  c->r[3]=R32(c->r[6]+0x00000028u); // 80119804
  c->r[3]=R32(c->r[3]+c->r[5]); // 80119808
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8011980C
  cmpu(c,0,c->r[0],c->r[4]); // 80119810
  if (!crb(c,2)) { goto L_80119820; } // 80119814
  c->r[4]=c->r[3]+0x0000001Cu; // 80119818
  goto L_8011982C; // 8011981C
L_80119820:;
  c->r[5]=c->r[5]+0x00000004u; // 80119820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80119804; } // 80119824
L_80119828:;
  c->r[4]=c->r[28]+0x000000F0u; // 80119828
L_8011982C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011982C
  if (crb(c,2)) { goto L_80119948; } // 80119830
  c->r[5]=R32(c->r[30]+0x00000010u); // 80119834
  c->r[3]=c->r[28]|c->r[28]; // 80119838
  c->r[6]=R32(c->r[30]+0x00000014u); // 8011983C
  c->r[9]=0u+0x00000001u; // 80119840
  c->r[7]=R32(c->r[30]+0x00000018u); // 80119844
  c->r[8]=R32(c->r[30]+0x0000001Cu); // 80119848
  c->lr=0x80119850u; f_80119B38(c); // 8011984C
  W32(c->r[30]+0x00000004u,c->r[3]); // 80119850
  c->r[4]=R32(c->r[29]+0x000000A4u); // 80119854
  c->r[0]=R32(c->r[29]+0x00000090u); // 80119858
  c->r[4]=c->r[4]|0x00080000u; // 8011985C
  W32(c->r[29]+0x000000A4u,c->r[4]); // 80119860
  cmps(c,0,(int32_t)c->r[0],60); // 80119864
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119868
  c->r[6]=R32(c->r[3]+0x00000000u); // 8011986C
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119870
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[0]);} // 80119874
  if (!crb(c,2)) { goto L_801198DC; } // 80119878
  c->r[5]=R32(c->r[6]+0x00000020u); // 8011987C
  cmps(c,0,(int32_t)c->r[5],0); // 80119880
  if (crb(c,2)) { goto L_801198D4; } // 80119884
  c->r[0]=R8(c->r[6]+0x00000082u); // 80119888
  cmps(c,0,(int32_t)c->r[0],0); // 8011988C
  if (crb(c,2)) { goto L_801198D4; } // 80119890
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80119894
  c->r[0]=0u+0x0000001Cu; // 80119898
  c->r[4]=c->r[5]+c->r[3]; // 8011989C
  c->r[3]=c->r[4]+0x0000001Bu; // 801198A0
  c->r[3]=c->r[3]-c->r[5]; // 801198A4
  c->r[3]=divwu(c->r[3],c->r[0]); // 801198A8
  c->ctr=c->r[3]; // 801198AC
  cmpu(c,0,c->r[5],c->r[4]); // 801198B0
  if (!crb(c,0)) { goto L_801198D4; } // 801198B4
L_801198B8:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801198B8
  cmps(c,0,(int32_t)c->r[0],0); // 801198BC
  if (!crb(c,2)) { goto L_801198CC; } // 801198C0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801198C4
  goto L_801198D8; // 801198C8
L_801198CC:;
  c->r[5]=c->r[5]+0x0000001Cu; // 801198CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801198B8; } // 801198D0
L_801198D4:;
  c->r[0]=0u+0x0000003Cu; // 801198D4
L_801198D8:;
  W32(c->r[29]+0x00000090u,c->r[0]); // 801198D8
L_801198DC:;
  c->r[0]=R32(c->r[29]+0x00000094u); // 801198DC
  cmps(c,0,(int32_t)c->r[0],60); // 801198E0
  if (!crb(c,2)) { goto L_80119948; } // 801198E4
  c->r[5]=R32(c->r[6]+0x00000020u); // 801198E8
  cmps(c,0,(int32_t)c->r[5],0); // 801198EC
  if (crb(c,2)) { goto L_80119940; } // 801198F0
  c->r[0]=R8(c->r[6]+0x00000082u); // 801198F4
  cmps(c,0,(int32_t)c->r[0],0); // 801198F8
  if (crb(c,2)) { goto L_80119940; } // 801198FC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80119900
  c->r[0]=0u+0x0000001Cu; // 80119904
  c->r[4]=c->r[5]+c->r[3]; // 80119908
  c->r[3]=c->r[4]+0x0000001Bu; // 8011990C
  c->r[3]=c->r[3]-c->r[5]; // 80119910
  c->r[3]=divwu(c->r[3],c->r[0]); // 80119914
  c->ctr=c->r[3]; // 80119918
  cmpu(c,0,c->r[5],c->r[4]); // 8011991C
  if (!crb(c,0)) { goto L_80119940; } // 80119920
L_80119924:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 80119924
  cmps(c,0,(int32_t)c->r[0],1); // 80119928
  if (!crb(c,2)) { goto L_80119938; } // 8011992C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80119930
  goto L_80119944; // 80119934
L_80119938:;
  c->r[5]=c->r[5]+0x0000001Cu; // 80119938
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80119924; } // 8011993C
L_80119940:;
  c->r[0]=0u+0x0000003Cu; // 80119940
L_80119944:;
  W32(c->r[29]+0x00000094u,c->r[0]); // 80119944
L_80119948:;
  c->r[30]=c->r[30]+0x00000020u; // 80119948
L_8011994C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8011994C
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80119950
  if (!crb(c,2)) { IRQCHK(c); goto L_801197E0; } // 80119954
  goto L_80119A2C; // 80119958
L_8011995C:;
  c->r[27]=0u+0x00000000u; // 8011995C
  c->r[30]=0u+0x00000000u; // 80119960
  goto L_80119A20; // 80119964
L_80119968:;
  c->r[3]=R32(c->r[29]+0x000000ECu); // 80119968
  c->r[3]=R32(c->r[3]+c->r[30]); // 8011996C
  c->r[0]=R8(c->r[3]+0x00000080u); // 80119970
  cmpu(c,0,c->r[0],0x00000002u); // 80119974
  if (!crb(c,2)) { goto L_80119A18; } // 80119978
  c->r[26]=R32(c->r[3]+0x0000009Cu); // 8011997C
  c->r[31]=R32(c->r[3]+0x00000098u); // 80119980
  goto L_80119A0C; // 80119984
L_80119988:;
  c->r[6]=R32(c->r[28]+0x00000004u); // 80119988
  c->r[4]=R32(c->r[26]+0x00000008u); // 8011998C
  cmps(c,0,(int32_t)c->r[6],0); // 80119990
  if (crb(c,2)) { goto L_801199D0; } // 80119994
  c->r[0]=R32(c->r[6]+0x00000024u); // 80119998
  c->r[5]=0u+0x00000000u; // 8011999C
  c->ctr=c->r[0]; // 801199A0
  cmps(c,0,(int32_t)c->r[0],0); // 801199A4
  if (!crb(c,1)) { goto L_801199D0; } // 801199A8
L_801199AC:;
  c->r[3]=R32(c->r[6]+0x00000028u); // 801199AC
  c->r[3]=R32(c->r[3]+c->r[5]); // 801199B0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801199B4
  cmpu(c,0,c->r[0],c->r[4]); // 801199B8
  if (!crb(c,2)) { goto L_801199C8; } // 801199BC
  c->r[4]=c->r[3]+0x0000001Cu; // 801199C0
  goto L_801199D4; // 801199C4
L_801199C8:;
  c->r[5]=c->r[5]+0x00000004u; // 801199C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801199AC; } // 801199CC
L_801199D0:;
  c->r[4]=c->r[28]+0x000000F0u; // 801199D0
L_801199D4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801199D4
  if (crb(c,2)) { goto L_80119A08; } // 801199D8
  c->r[5]=R32(c->r[26]+0x00000010u); // 801199DC
  c->r[3]=c->r[28]|c->r[28]; // 801199E0
  c->r[6]=R32(c->r[26]+0x00000014u); // 801199E4
  c->r[9]=0u+0x00000000u; // 801199E8
  c->r[7]=R32(c->r[26]+0x00000018u); // 801199EC
  c->r[8]=R32(c->r[26]+0x0000001Cu); // 801199F0
  c->lr=0x801199F8u; f_80119B38(c); // 801199F4
  W32(c->r[26]+0x00000008u,c->r[3]); // 801199F8
  c->r[0]=R32(c->r[29]+0x000000A4u); // 801199FC
  c->r[0]=c->r[0]|0x00080000u; // 80119A00
  W32(c->r[29]+0x000000A4u,c->r[0]); // 80119A04
L_80119A08:;
  c->r[26]=c->r[26]+0x00000020u; // 80119A08
L_80119A0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80119A0C
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80119A10
  if (!crb(c,2)) { IRQCHK(c); goto L_80119988; } // 80119A14
L_80119A18:;
  c->r[30]=c->r[30]+0x00000004u; // 80119A18
  c->r[27]=c->r[27]+0x00000001u; // 80119A1C
L_80119A20:;
  c->r[0]=R8(c->r[29]+0x000000F1u); // 80119A20
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80119A24
  if (crb(c,0)) { IRQCHK(c); goto L_80119968; } // 80119A28
L_80119A2C:;
  c->r[11]=c->r[1]+0x00000020u; // 80119A2C
  c->lr=0x80119A34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80119A30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80119A34
  c->lr=c->r[0]; // 80119A38
  c->r[1]=c->r[1]+0x00000020u; // 80119A3C
  return; // 80119A40
}

// fn_80119A44
void f_80119A44(Ctx* __restrict c) {
  trace_call(0x80119A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80119A44
  c->r[0]=c->lr; // 80119A48
  cmps(c,0,(int32_t)c->r[4],0); // 80119A4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80119A50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80119A54
  c->r[31]=c->r[4]|c->r[4]; // 80119A58
  if (crb(c,2)) { goto L_80119B24; } // 80119A5C
  c->r[0]=R32(c->r[4]+0x000000A4u); // 80119A60
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80119A64
  if (crb(c,2)) { goto L_80119AB0; } // 80119A68
  c->r[27]=R32(c->r[4]+0x0000002Cu); // 80119A6C
  c->r[30]=0u+0x00000000u; // 80119A70
  c->r[28]=R32(c->r[4]+0x00000028u); // 80119A74
  goto L_80119AA0; // 80119A78
L_80119A7C:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80119A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80119A80
  if (crb(c,2)) { goto L_80119A9C; } // 80119A84
  c->lr=0x80119A8Cu; f_80232E90(c); // 80119A88
  W32(c->r[27]+0x00000004u,c->r[30]); // 80119A8C
  c->r[0]=R32(c->r[31]+0x000000A4u); // 80119A90
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 80119A94
  W32(c->r[31]+0x000000A4u,c->r[0]); // 80119A98
L_80119A9C:;
  c->r[27]=c->r[27]+0x00000020u; // 80119A9C
L_80119AA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 80119AA0
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80119AA4
  if (!crb(c,2)) { IRQCHK(c); goto L_80119A7C; } // 80119AA8
  goto L_80119B24; // 80119AAC
L_80119AB0:;
  c->r[27]=0u+0x00000000u; // 80119AB0
  c->r[29]=0u+0x00000000u; // 80119AB4
  c->r[30]=0u+0x00000000u; // 80119AB8
  goto L_80119B18; // 80119ABC
L_80119AC0:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 80119AC0
  c->r[3]=R32(c->r[3]+c->r[29]); // 80119AC4
  c->r[0]=R8(c->r[3]+0x00000080u); // 80119AC8
  cmpu(c,0,c->r[0],0x00000002u); // 80119ACC
  if (!crb(c,2)) { goto L_80119B10; } // 80119AD0
  c->r[26]=R32(c->r[3]+0x0000009Cu); // 80119AD4
  c->r[28]=R32(c->r[3]+0x00000098u); // 80119AD8
  goto L_80119B04; // 80119ADC
L_80119AE0:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 80119AE0
  cmps(c,0,(int32_t)c->r[3],0); // 80119AE4
  if (crb(c,2)) { goto L_80119B00; } // 80119AE8
  c->lr=0x80119AF0u; f_80232E90(c); // 80119AEC
  W32(c->r[26]+0x00000008u,c->r[30]); // 80119AF0
  c->r[0]=R32(c->r[31]+0x000000A4u); // 80119AF4
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 80119AF8
  W32(c->r[31]+0x000000A4u,c->r[0]); // 80119AFC
L_80119B00:;
  c->r[26]=c->r[26]+0x00000020u; // 80119B00
L_80119B04:;
  cmps(c,0,(int32_t)c->r[28],0); // 80119B04
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80119B08
  if (!crb(c,2)) { IRQCHK(c); goto L_80119AE0; } // 80119B0C
L_80119B10:;
  c->r[29]=c->r[29]+0x00000004u; // 80119B10
  c->r[27]=c->r[27]+0x00000001u; // 80119B14
L_80119B18:;
  c->r[0]=R8(c->r[31]+0x000000F1u); // 80119B18
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80119B1C
  if (crb(c,0)) { IRQCHK(c); goto L_80119AC0; } // 80119B20
L_80119B24:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80119B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 80119B28
  c->lr=c->r[0]; // 80119B2C
  c->r[1]=c->r[1]+0x00000020u; // 80119B30
  return; // 80119B34
}

// fn_80119B38
void f_80119B38(Ctx* __restrict c) {
  trace_call(0x80119B38u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80119B38
  c->r[0]=c->lr; // 80119B3C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80119B40
  c->r[11]=c->r[1]+0x000000A0u; // 80119B44
  c->lr=0x80119B4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80119B48
  c->r[0]=R32(c->r[4]+0x00000004u); // 80119B4C
  c->r[27]=c->r[3]|c->r[3]; // 80119B50
  c->r[25]=c->r[4]|c->r[4]; // 80119B54
  c->r[28]=c->r[5]|c->r[5]; // 80119B58
  cmpu(c,0,c->r[0],0x0000000Au); // 80119B5C
  c->r[29]=c->r[6]|c->r[6]; // 80119B60
  c->r[30]=c->r[7]|c->r[7]; // 80119B64
  c->r[31]=c->r[9]|c->r[9]; // 80119B68
  if (crb(c,1)) { goto L_8011A068; } // 80119B6C
  c->r[4]=0u+0x80420000u; // 80119B70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80119B74
  c->r[4]=c->r[4]+0x00002F30u; // 80119B78
  c->r[4]=R32(c->r[4]+c->r[0]); // 80119B7C
  c->ctr=c->r[4]; // 80119B80
  if (true) { switch (c->ctr) { case 0x80119B88u: goto L_80119B88; case 0x80119C08u: goto L_80119C08; case 0x80119C50u: goto L_80119C50; case 0x80119CB4u: goto L_80119CB4; case 0x80119D5Cu: goto L_80119D5C; case 0x80119DD8u: goto L_80119DD8; case 0x80119E44u: goto L_80119E44; case 0x80119ED0u: goto L_80119ED0; case 0x80119F4Cu: goto L_80119F4C; case 0x80119FE8u: goto L_80119FE8; case 0x8011A020u: goto L_8011A020; default: break; } dispatch(c,c->ctr); return; } // 80119B84
L_80119B88:;
  cmps(c,0,(int32_t)c->r[5],0); // 80119B88
  if (crb(c,2)) { goto L_80119BD0; } // 80119B8C
  c->r[0]=R8(c->r[5]+0x0000002Au); // 80119B90
  cmpu(c,0,c->r[0],0x00000003u); // 80119B94
  if (!crb(c,2)) { goto L_80119BD0; } // 80119B98
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80119B9C
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119BA0
  c->lr=0x80119BA8u; f_80235170(c); // 80119BA4
  c->r[27]=c->r[3]|c->r[3]; // 80119BA8
  c->r[4]=c->r[28]|c->r[28]; // 80119BAC
  c->r[5]=c->r[27]|c->r[27]; // 80119BB0
  c->r[3]=0u+0x00000000u; // 80119BB4
  c->lr=0x80119BBCu; f_80235100(c); // 80119BB8
  c->r[4]=R32(c->r[13]+0xFFFFE27Cu); // 80119BBC
  c->r[5]=c->r[27]|c->r[27]; // 80119BC0
  c->r[3]=0u+0x00000001u; // 80119BC4
  c->lr=0x80119BCCu; f_80235100(c); // 80119BC8
  goto L_80119C00; // 80119BCC
L_80119BD0:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80119BD0
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119BD4
  c->lr=0x80119BDCu; f_80235170(c); // 80119BD8
  c->r[27]=c->r[3]|c->r[3]; // 80119BDC
  c->r[4]=c->r[28]|c->r[28]; // 80119BE0
  c->r[5]=c->r[27]|c->r[27]; // 80119BE4
  c->r[3]=0u+0x00000000u; // 80119BE8
  c->lr=0x80119BF0u; f_80235100(c); // 80119BEC
  c->r[4]=R32(c->r[13]+0xFFFFE27Cu); // 80119BF0
  c->r[5]=c->r[27]|c->r[27]; // 80119BF4
  c->r[3]=0u+0x00000001u; // 80119BF8
  c->lr=0x80119C00u; f_80235100(c); // 80119BFC
L_80119C00:;
  c->r[3]=c->r[27]|c->r[27]; // 80119C00
  goto L_8011A06C; // 80119C04
L_80119C08:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 80119C08
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119C0C
  c->lr=0x80119C14u; f_80235170(c); // 80119C10
  c->r[27]=c->r[3]|c->r[3]; // 80119C14
  c->r[4]=c->r[28]|c->r[28]; // 80119C18
  c->r[5]=c->r[27]|c->r[27]; // 80119C1C
  c->r[3]=0u+0x00000000u; // 80119C20
  c->lr=0x80119C28u; f_80235100(c); // 80119C24
  c->r[4]=c->r[29]|c->r[29]; // 80119C28
  c->r[5]=c->r[27]|c->r[27]; // 80119C2C
  c->r[3]=0u+0x00000001u; // 80119C30
  c->lr=0x80119C38u; f_80235100(c); // 80119C34
  c->r[4]=R32(c->r[13]+0xFFFFE27Cu); // 80119C38
  c->r[5]=c->r[27]|c->r[27]; // 80119C3C
  c->r[3]=0u+0x00000002u; // 80119C40
  c->lr=0x80119C48u; f_80235100(c); // 80119C44
  c->r[3]=c->r[27]|c->r[27]; // 80119C48
  goto L_8011A06C; // 80119C4C
L_80119C50:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 80119C50
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119C54
  c->lr=0x80119C5Cu; f_80235170(c); // 80119C58
  c->r[27]=c->r[3]|c->r[3]; // 80119C5C
  c->r[4]=c->r[28]|c->r[28]; // 80119C60
  c->r[5]=c->r[27]|c->r[27]; // 80119C64
  c->r[3]=0u+0x00000000u; // 80119C68
  c->lr=0x80119C70u; f_80235100(c); // 80119C6C
  c->r[4]=c->r[29]|c->r[29]; // 80119C70
  c->r[5]=c->r[27]|c->r[27]; // 80119C74
  c->r[3]=0u+0x00000001u; // 80119C78
  c->lr=0x80119C80u; f_80235100(c); // 80119C7C
  {uint32_t ea=c->r[2]+0xFFFF89E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80119C80
  c->r[3]=c->r[27]|c->r[27]; // 80119C84
  {uint32_t ea=c->r[25]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80119C88
  {uint32_t ea=c->r[25]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119C8C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80119C90
  c->r[4]=R32(c->r[27]+0x00000024u); // 80119C94
  c->r[4]=R32(c->r[4]+0x00000000u); // 80119C98
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[1]);} // 80119C9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80119CA0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 80119CA4
  c->r[0]=R32(c->r[1]+0x00000074u); // 80119CA8
  W16(c->r[4]+0x00000036u,c->r[0]); // 80119CAC
  goto L_8011A06C; // 80119CB0
L_80119CB4:;
  c->r[3]=R32(c->r[3]+0x00000028u); // 80119CB4
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119CB8
  c->lr=0x80119CC0u; f_80235170(c); // 80119CBC
  c->r[26]=c->r[3]|c->r[3]; // 80119CC0
  c->r[4]=c->r[28]|c->r[28]; // 80119CC4
  c->r[5]=c->r[26]|c->r[26]; // 80119CC8
  c->r[3]=0u+0x00000000u; // 80119CCC
  c->lr=0x80119CD4u; f_80235100(c); // 80119CD0
  c->r[4]=c->r[29]|c->r[29]; // 80119CD4
  c->r[5]=c->r[26]|c->r[26]; // 80119CD8
  c->r[3]=0u+0x00000001u; // 80119CDC
  c->lr=0x80119CE4u; f_80235100(c); // 80119CE0
  c->r[3]=R32(c->r[27]+0x00000008u); // 80119CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80119CE8
  if (crb(c,2)) { goto L_80119D00; } // 80119CEC
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 80119CF0
  c->r[5]=c->r[26]|c->r[26]; // 80119CF4
  c->r[3]=0u+0x00000002u; // 80119CF8
  c->lr=0x80119D00u; f_80235100(c); // 80119CFC
L_80119D00:;
  c->r[4]=c->r[30]|c->r[30]; // 80119D00
  c->r[5]=c->r[26]|c->r[26]; // 80119D04
  c->r[3]=0u+0x00000003u; // 80119D08
  c->lr=0x80119D10u; f_80235100(c); // 80119D0C
  {uint32_t ea=c->r[2]+0xFFFF89E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80119D10
  cmps(c,0,(int32_t)c->r[31],0); // 80119D14
  {uint32_t ea=c->r[25]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80119D18
  c->r[0]=0u+0x00000024u; // 80119D1C
  {uint32_t ea=c->r[25]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119D20
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80119D24
  c->r[3]=R32(c->r[26]+0x00000024u); // 80119D28
  c->r[4]=R32(c->r[3]+0x00000000u); // 80119D2C
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[1]);} // 80119D30
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80119D34
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 80119D38
  c->r[3]=R32(c->r[1]+0x00000074u); // 80119D3C
  W16(c->r[4]+0x00000036u,c->r[3]); // 80119D40
  if (crb(c,2)) { goto L_80119D4C; } // 80119D44
  c->r[0]=0u+0x00000021u; // 80119D48
L_80119D4C:;
  c->r[4]=R32(c->r[4]+0x00000020u); // 80119D4C
  c->r[3]=c->r[26]|c->r[26]; // 80119D50
  W32(c->r[4]+0x00000024u,c->r[0]); // 80119D54
  goto L_8011A06C; // 80119D58
L_80119D5C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 80119D5C
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119D60
  c->lr=0x80119D68u; f_80235170(c); // 80119D64
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119D68
  c->r[26]=c->r[3]|c->r[3]; // 80119D6C
  c->r[6]=0u+0x00000000u; // 80119D70
  c->r[7]=0u+0x00000001u; // 80119D74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80119D78
  W32(c->r[1]+0x00000058u,c->r[29]); // 80119D7C
  c->r[4]=c->r[28]|c->r[28]; // 80119D80
  c->r[5]=c->r[26]|c->r[26]; // 80119D84
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 80119D88
  c->r[3]=0u+0x00000000u; // 80119D8C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80119D90
  W32(c->r[1]+0x0000005Cu,c->r[7]); // 80119D94
  W32(c->r[1]+0x00000068u,c->r[6]); // 80119D98
  W32(c->r[1]+0x00000060u,c->r[0]); // 80119D9C
  W32(c->r[1]+0x00000064u,c->r[6]); // 80119DA0
  c->lr=0x80119DA8u; f_80235100(c); // 80119DA4
  c->r[0]=0u-c->r[31]; // 80119DA8
  c->r[3]=c->r[27]|c->r[27]; // 80119DAC
  c->r[0]=c->r[0]|c->r[31]; // 80119DB0
  c->r[4]=c->r[26]|c->r[26]; // 80119DB4
  c->r[6]=sraw(c,c->r[0],31); // 80119DB8
  c->r[5]=c->r[1]+0x00000058u; // 80119DBC
  c->r[8]=c->r[6]+0x00000002u; // 80119DC0
  c->r[7]=0u+0x00000001u; // 80119DC4
  c->r[6]=0u+0x00000001u; // 80119DC8
  c->lr=0x80119DD0u; f_8011A084(c); // 80119DCC
  c->r[3]=c->r[26]|c->r[26]; // 80119DD0
  goto L_8011A06C; // 80119DD4
L_80119DD8:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 80119DD8
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119DDC
  c->lr=0x80119DE4u; f_80235170(c); // 80119DE0
  c->r[26]=c->r[3]|c->r[3]; // 80119DE4
  c->r[6]=0u+0x00000001u; // 80119DE8
  c->r[0]=0u+0x00000000u; // 80119DEC
  W32(c->r[1]+0x00000044u,c->r[29]); // 80119DF0
  c->r[4]=c->r[28]|c->r[28]; // 80119DF4
  c->r[5]=c->r[26]|c->r[26]; // 80119DF8
  W32(c->r[1]+0x00000048u,c->r[6]); // 80119DFC
  c->r[3]=0u+0x00000000u; // 80119E00
  W32(c->r[1]+0x00000054u,c->r[6]); // 80119E04
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80119E08
  W32(c->r[1]+0x00000050u,c->r[0]); // 80119E0C
  c->lr=0x80119E14u; f_80235100(c); // 80119E10
  c->r[0]=0u-c->r[31]; // 80119E14
  c->r[3]=c->r[27]|c->r[27]; // 80119E18
  c->r[0]=c->r[0]|c->r[31]; // 80119E1C
  c->r[4]=c->r[26]|c->r[26]; // 80119E20
  c->r[6]=sraw(c,c->r[0],31); // 80119E24
  c->r[5]=c->r[1]+0x00000044u; // 80119E28
  c->r[8]=c->r[6]+0x00000002u; // 80119E2C
  c->r[7]=0u+0x00000001u; // 80119E30
  c->r[6]=0u+0x00000001u; // 80119E34
  c->lr=0x80119E3Cu; f_8011A084(c); // 80119E38
  c->r[3]=c->r[26]|c->r[26]; // 80119E3C
  goto L_8011A06C; // 80119E40
L_80119E44:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 80119E44
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119E48
  c->lr=0x80119E50u; f_80235170(c); // 80119E4C
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119E50
  c->r[26]=c->r[3]|c->r[3]; // 80119E54
  c->r[6]=0u+0x00000000u; // 80119E58
  c->r[7]=0u+0x00000001u; // 80119E5C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80119E60
  W32(c->r[1]+0x00000030u,c->r[30]); // 80119E64
  c->r[4]=c->r[28]|c->r[28]; // 80119E68
  c->r[5]=c->r[26]|c->r[26]; // 80119E6C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 80119E70
  c->r[3]=0u+0x00000000u; // 80119E74
  c->r[0]=R32(c->r[1]+0x00000074u); // 80119E78
  W32(c->r[1]+0x00000034u,c->r[7]); // 80119E7C
  W32(c->r[1]+0x00000040u,c->r[6]); // 80119E80
  W32(c->r[1]+0x00000038u,c->r[0]); // 80119E84
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 80119E88
  c->lr=0x80119E90u; f_80235100(c); // 80119E8C
  c->r[4]=c->r[29]|c->r[29]; // 80119E90
  c->r[5]=c->r[26]|c->r[26]; // 80119E94
  c->r[3]=0u+0x00000001u; // 80119E98
  c->lr=0x80119EA0u; f_80235100(c); // 80119E9C
  c->r[0]=0u-c->r[31]; // 80119EA0
  c->r[3]=c->r[27]|c->r[27]; // 80119EA4
  c->r[0]=c->r[0]|c->r[31]; // 80119EA8
  c->r[4]=c->r[26]|c->r[26]; // 80119EAC
  c->r[6]=sraw(c,c->r[0],31); // 80119EB0
  c->r[5]=c->r[1]+0x00000030u; // 80119EB4
  c->r[8]=c->r[6]+0x00000002u; // 80119EB8
  c->r[7]=0u+0x00000002u; // 80119EBC
  c->r[6]=0u+0x00000002u; // 80119EC0
  c->lr=0x80119EC8u; f_8011A084(c); // 80119EC4
  c->r[3]=c->r[26]|c->r[26]; // 80119EC8
  goto L_8011A06C; // 80119ECC
L_80119ED0:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 80119ED0
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119ED4
  c->lr=0x80119EDCu; f_80235170(c); // 80119ED8
  c->r[26]=c->r[3]|c->r[3]; // 80119EDC
  c->r[6]=0u+0x00000001u; // 80119EE0
  c->r[0]=0u+0x00000000u; // 80119EE4
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 80119EE8
  c->r[4]=c->r[28]|c->r[28]; // 80119EEC
  c->r[5]=c->r[26]|c->r[26]; // 80119EF0
  W32(c->r[1]+0x00000020u,c->r[6]); // 80119EF4
  c->r[3]=0u+0x00000000u; // 80119EF8
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80119EFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80119F00
  W32(c->r[1]+0x00000028u,c->r[0]); // 80119F04
  c->lr=0x80119F0Cu; f_80235100(c); // 80119F08
  c->r[4]=c->r[29]|c->r[29]; // 80119F0C
  c->r[5]=c->r[26]|c->r[26]; // 80119F10
  c->r[3]=0u+0x00000001u; // 80119F14
  c->lr=0x80119F1Cu; f_80235100(c); // 80119F18
  c->r[0]=0u-c->r[31]; // 80119F1C
  c->r[3]=c->r[27]|c->r[27]; // 80119F20
  c->r[0]=c->r[0]|c->r[31]; // 80119F24
  c->r[4]=c->r[26]|c->r[26]; // 80119F28
  c->r[6]=sraw(c,c->r[0],31); // 80119F2C
  c->r[5]=c->r[1]+0x0000001Cu; // 80119F30
  c->r[8]=c->r[6]+0x00000002u; // 80119F34
  c->r[7]=0u+0x00000002u; // 80119F38
  c->r[6]=0u+0x00000002u; // 80119F3C
  c->lr=0x80119F44u; f_8011A084(c); // 80119F40
  c->r[3]=c->r[26]|c->r[26]; // 80119F44
  goto L_8011A06C; // 80119F48
L_80119F4C:;
  c->r[3]=R32(c->r[3]+0x00000030u); // 80119F4C
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119F50
  c->lr=0x80119F58u; f_80235170(c); // 80119F54
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80119F58
  c->r[26]=c->r[3]|c->r[3]; // 80119F5C
  c->r[6]=0u+0x00000000u; // 80119F60
  c->r[7]=0u+0x00000001u; // 80119F64
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80119F68
  W32(c->r[1]+0x00000008u,c->r[30]); // 80119F6C
  c->r[4]=c->r[28]|c->r[28]; // 80119F70
  c->r[5]=c->r[26]|c->r[26]; // 80119F74
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 80119F78
  c->r[3]=0u+0x00000000u; // 80119F7C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80119F80
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80119F84
  W32(c->r[1]+0x00000018u,c->r[6]); // 80119F88
  W32(c->r[1]+0x00000010u,c->r[0]); // 80119F8C
  W32(c->r[1]+0x00000014u,c->r[6]); // 80119F90
  c->lr=0x80119F98u; f_80235100(c); // 80119F94
  c->r[4]=c->r[29]|c->r[29]; // 80119F98
  c->r[5]=c->r[26]|c->r[26]; // 80119F9C
  c->r[3]=0u+0x00000001u; // 80119FA0
  c->lr=0x80119FA8u; f_80235100(c); // 80119FA4
  c->r[4]=R32(c->r[13]+0xFFFFE27Cu); // 80119FA8
  c->r[5]=c->r[26]|c->r[26]; // 80119FAC
  c->r[3]=0u+0x00000002u; // 80119FB0
  c->lr=0x80119FB8u; f_80235100(c); // 80119FB4
  c->r[0]=0u-c->r[31]; // 80119FB8
  c->r[3]=c->r[27]|c->r[27]; // 80119FBC
  c->r[0]=c->r[0]|c->r[31]; // 80119FC0
  c->r[4]=c->r[26]|c->r[26]; // 80119FC4
  c->r[6]=sraw(c,c->r[0],31); // 80119FC8
  c->r[5]=c->r[1]+0x00000008u; // 80119FCC
  c->r[8]=c->r[6]+0x00000002u; // 80119FD0
  c->r[7]=0u+0x00000002u; // 80119FD4
  c->r[6]=0u+0x00000003u; // 80119FD8
  c->lr=0x80119FE0u; f_8011A084(c); // 80119FDC
  c->r[3]=c->r[26]|c->r[26]; // 80119FE0
  goto L_8011A06C; // 80119FE4
L_80119FE8:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80119FE8
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 80119FEC
  c->lr=0x80119FF4u; f_80235170(c); // 80119FF0
  c->r[26]=c->r[3]|c->r[3]; // 80119FF4
  c->r[4]=c->r[28]|c->r[28]; // 80119FF8
  c->r[5]=c->r[26]|c->r[26]; // 80119FFC
  c->r[3]=0u+0x00000000u; // 8011A000
  c->lr=0x8011A008u; f_80235100(c); // 8011A004
  c->r[4]=c->r[29]|c->r[29]; // 8011A008
  c->r[5]=c->r[26]|c->r[26]; // 8011A00C
  c->r[3]=0u+0x00000001u; // 8011A010
  c->lr=0x8011A018u; f_80235100(c); // 8011A014
  c->r[3]=c->r[26]|c->r[26]; // 8011A018
  goto L_8011A06C; // 8011A01C
L_8011A020:;
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 8011A020
  c->r[4]=R32(c->r[13]+0xFFFFE678u); // 8011A024
  c->lr=0x8011A02Cu; f_80235170(c); // 8011A028
  c->r[26]=c->r[3]|c->r[3]; // 8011A02C
  c->r[4]=c->r[28]|c->r[28]; // 8011A030
  c->r[5]=c->r[26]|c->r[26]; // 8011A034
  c->r[3]=0u+0x00000000u; // 8011A038
  c->lr=0x8011A040u; f_80235100(c); // 8011A03C
  c->r[4]=c->r[29]|c->r[29]; // 8011A040
  c->r[5]=c->r[26]|c->r[26]; // 8011A044
  c->r[3]=0u+0x00000001u; // 8011A048
  c->lr=0x8011A050u; f_80235100(c); // 8011A04C
  c->r[4]=R32(c->r[13]+0xFFFFE27Cu); // 8011A050
  c->r[5]=c->r[26]|c->r[26]; // 8011A054
  c->r[3]=0u+0x00000002u; // 8011A058
  c->lr=0x8011A060u; f_80235100(c); // 8011A05C
  c->r[3]=c->r[26]|c->r[26]; // 8011A060
  goto L_8011A06C; // 8011A064
L_8011A068:;
  c->r[3]=0u+0x00000000u; // 8011A068
L_8011A06C:;
  c->r[11]=c->r[1]+0x000000A0u; // 8011A06C
  c->lr=0x8011A074u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011A070
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8011A074
  c->lr=c->r[0]; // 8011A078
  c->r[1]=c->r[1]+0x000000A0u; // 8011A07C
  return; // 8011A080
}

// fn_8011A084
void f_8011A084(Ctx* __restrict c) {
  trace_call(0x8011A084u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A084
  c->r[0]=c->lr; // 8011A088
  cmps(c,0,(int32_t)c->r[4],0); // 8011A08C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011A090
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011A094
  c->r[31]=c->r[8]|c->r[8]; // 8011A098
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011A09C
  c->r[30]=c->r[7]|c->r[7]; // 8011A0A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011A0A4
  c->r[29]=c->r[5]|c->r[5]; // 8011A0A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011A0AC
  c->r[28]=c->r[4]|c->r[4]; // 8011A0B0
  if (!crb(c,2)) { goto L_8011A0C8; } // 8011A0B4
  c->r[28]=R32(c->r[13]+0xFFFFE53Cu); // 8011A0B8
  c->r[6]=0u+0x00000001u; // 8011A0BC
  c->r[30]=0u+0x00000001u; // 8011A0C0
  c->r[31]=0u+0x00000001u; // 8011A0C4
L_8011A0C8:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 8011A0C8
  c->r[3]=c->r[6]|c->r[6]; // 8011A0CC
  c->r[5]=c->r[28]|c->r[28]; // 8011A0D0
  c->lr=0x8011A0D8u; f_80235100(c); // 8011A0D4
  c->r[0]=R32(c->r[29]+0x00000010u); // 8011A0D8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8011A0DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8011A0E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8011A0E4
  if (crb(c,2)) { goto L_8011A0F4; } // 8011A0E8
  c->r[7]=0u+0x00000001u; // 8011A0EC
  goto L_8011A100; // 8011A0F0
L_8011A0F4:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8011A0F4
  c->r[7]=0u+0x00000003u; // 8011A0F8
  W16(c->r[3]+0x00000036u,c->r[0]); // 8011A0FC
L_8011A100:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 8011A100
  cmps(c,0,(int32_t)c->r[0],0); // 8011A104
  if (crb(c,2)) { goto L_8011A130; } // 8011A108
  cmps(c,0,(int32_t)c->r[0],1); // 8011A10C
  if (crb(c,2)) { goto L_8011A160; } // 8011A110
  cmps(c,0,(int32_t)c->r[0],2); // 8011A114
  if (crb(c,2)) { goto L_8011A190; } // 8011A118
  cmps(c,0,(int32_t)c->r[0],3); // 8011A11C
  if (crb(c,2)) { goto L_8011A1C0; } // 8011A120
  cmps(c,0,(int32_t)c->r[0],4); // 8011A124
  if (crb(c,2)) { goto L_8011A1F4; } // 8011A128
  goto L_8011A220; // 8011A12C
L_8011A130:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)136); // 8011A130
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8011A134
  c->r[5]=0u+0x00000000u; // 8011A138
  c->r[4]=0u+0x00000008u; // 8011A13C
  c->r[6]=c->r[6]+c->r[0]; // 8011A140
  W32(c->r[6]+0x00000014u,c->r[5]); // 8011A144
  c->r[0]=0u+0x0000000Fu; // 8011A148
  W32(c->r[6]+0x00000018u,c->r[4]); // 8011A14C
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8011A150
  W32(c->r[6]+0x00000020u,c->r[0]); // 8011A154
  W32(c->r[6]+0x00000034u,c->r[5]); // 8011A158
  goto L_8011A220; // 8011A15C
L_8011A160:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)136); // 8011A160
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8011A164
  c->r[5]=0u+0x0000000Fu; // 8011A168
  c->r[4]=0u+0x00000008u; // 8011A16C
  c->r[6]=c->r[6]+c->r[0]; // 8011A170
  W32(c->r[6]+0x00000014u,c->r[5]); // 8011A174
  c->r[0]=0u+0x00000000u; // 8011A178
  W32(c->r[6]+0x00000018u,c->r[7]); // 8011A17C
  W32(c->r[6]+0x0000001Cu,c->r[4]); // 8011A180
  W32(c->r[6]+0x00000020u,c->r[0]); // 8011A184
  W32(c->r[6]+0x00000034u,c->r[0]); // 8011A188
  goto L_8011A220; // 8011A18C
L_8011A190:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)136); // 8011A190
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8011A194
  c->r[5]=0u+0x0000000Fu; // 8011A198
  c->r[4]=0u+0x00000000u; // 8011A19C
  c->r[6]=c->r[6]+c->r[0]; // 8011A1A0
  W32(c->r[6]+0x00000014u,c->r[5]); // 8011A1A4
  c->r[0]=0u+0x00000008u; // 8011A1A8
  W32(c->r[6]+0x00000018u,c->r[4]); // 8011A1AC
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 8011A1B0
  W32(c->r[6]+0x00000020u,c->r[5]); // 8011A1B4
  W32(c->r[6]+0x00000034u,c->r[4]); // 8011A1B8
  goto L_8011A220; // 8011A1BC
L_8011A1C0:;
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)136); // 8011A1C0
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8011A1C4
  c->r[0]=0u+0x0000000Fu; // 8011A1C8
  c->r[5]=0u+0x00000008u; // 8011A1CC
  c->r[6]=c->r[6]+c->r[4]; // 8011A1D0
  W32(c->r[6]+0x00000014u,c->r[0]); // 8011A1D4
  c->r[4]=0u+0x00000000u; // 8011A1D8
  c->r[0]=0u+0x00000001u; // 8011A1DC
  W32(c->r[6]+0x00000018u,c->r[7]); // 8011A1E0
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 8011A1E4
  W32(c->r[6]+0x00000020u,c->r[4]); // 8011A1E8
  W32(c->r[6]+0x00000034u,c->r[0]); // 8011A1EC
  goto L_8011A220; // 8011A1F0
L_8011A1F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)136); // 8011A1F4
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8011A1F8
  c->r[5]=0u+0x0000000Fu; // 8011A1FC
  c->r[4]=0u+0x00000008u; // 8011A200
  c->r[6]=c->r[6]+c->r[0]; // 8011A204
  W32(c->r[6]+0x00000014u,c->r[5]); // 8011A208
  c->r[0]=0u+0x00000000u; // 8011A20C
  W32(c->r[6]+0x00000018u,c->r[5]); // 8011A210
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 8011A214
  W32(c->r[6]+0x00000020u,c->r[4]); // 8011A218
  W32(c->r[6]+0x00000034u,c->r[0]); // 8011A21C
L_8011A220:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8011A220
  c->r[3]=R32(c->r[3]+0x00000020u); // 8011A224
  c->r[4]=c->r[0]-c->r[31]; // 8011A228
  c->r[0]=c->r[4]+0x0000001Eu; // 8011A22C
  W32(c->r[3]+0x00000024u,c->r[0]); // 8011A230
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011A234
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011A238
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011A23C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011A240
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011A244
  c->lr=c->r[0]; // 8011A248
  c->r[1]=c->r[1]+0x00000020u; // 8011A24C
  return; // 8011A250
}

// fn_8011A254
void f_8011A254(Ctx* __restrict c) {
  trace_call(0x8011A254u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A254
  c->r[0]=c->lr; // 8011A258
  W32(c->r[1]+0x00000054u,c->r[0]); // 8011A25C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8011A260
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8011A264
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8011A268
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8011A26C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 8011A270
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 8011A274
  {uint32_t ea=c->r[2]+0xFFFF89F0u; c->f[29]=RF64(ea);} // 8011A278
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011A27C
  c->r[31]=0u+0x80470000u; // 8011A280
  {uint32_t ea=c->r[2]+0xFFFF89E8u; c->f[30]=c->ps1[30]=RF32(ea);} // 8011A284
  c->r[31]=c->r[31]+0x00004C80u; // 8011A288
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011A28C
  c->r[30]=0u+0x43300000u; // 8011A290
  {uint32_t ea=c->r[2]+0xFFFF89ECu; c->f[31]=c->ps1[31]=RF32(ea);} // 8011A294
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011A298
  c->r[29]=0u+0x00000000u; // 8011A29C
L_8011A2A0:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8011A2A0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8011A2A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011A2A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8011A2AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8011A2B0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8011A2B4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 8011A2B8
  c->lr=0x8011A2C0u; f_803AD314(c); // 8011A2BC
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 8011A2C0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8011A2C4
  c->r[29]=c->r[29]+0x00000001u; // 8011A2C8
  cmpu(c,0,c->r[29],0x000007D0u); // 8011A2CC
  {uint32_t ea=c->r[31]+c->r[0]; WF32(ea,c->f[0]);} // 8011A2D0
  if (crb(c,0)) { IRQCHK(c); goto L_8011A2A0; } // 8011A2D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8011A2D8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8011A2DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8011A2E0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8011A2E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 8011A2E8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 8011A2EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011A2F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011A2F4
  c->r[0]=R32(c->r[1]+0x00000054u); // 8011A2F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011A2FC
  c->lr=c->r[0]; // 8011A300
  c->r[1]=c->r[1]+0x00000050u; // 8011A304
  return; // 8011A308
}

// fn_8011A30C
void f_8011A30C(Ctx* __restrict c) {
  trace_call(0x8011A30Cu);
  c->f[2]=std::fabs(c->f[1]); // 8011A30C
  c->r[4]=0u+0x10620000u; // 8011A310
  c->r[3]=0u+0x80470000u; // 8011A314
  {uint32_t ea=c->r[2]+0xFFFF89F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A318
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A31C
  c->r[0]=c->r[4]+0x00004DD3u; // 8011A320
  c->f[2]=c->ps1[2]=S(c->f[2]); // 8011A324
  c->r[3]=c->r[3]+0x00004C80u; // 8011A328
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8011A32C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8011A330
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011A334
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8011A338
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8011A33C
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 8011A340
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8011A344
  c->r[0]=sraw(c,c->r[0],7); // 8011A348
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8011A34C
  c->r[0]=c->r[0]+c->r[4]; // 8011A350
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2000); // 8011A354
  c->r[0]=c->r[5]-c->r[0]; // 8011A358
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 8011A35C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A360
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8011A364
  c->r[1]=c->r[1]+0x00000010u; // 8011A368
  return; // 8011A36C
}

// fn_8011A370
void f_8011A370(Ctx* __restrict c) {
  trace_call(0x8011A370u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A370
  c->r[0]=c->lr; // 8011A374
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A378
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A37C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8011A380
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011A384
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8011A388
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011A38C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 8011A390
  {uint32_t ea=c->r[2]+0xFFFF8A04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A394
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8011A398
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8011A39C
  {uint32_t ea=c->r[2]+0xFFFF89FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8011A3A0
  c->r[31]=c->r[5]|c->r[5]; // 8011A3A4
  W32(c->r[1]+0x00000038u,c->r[30]); // 8011A3A8
  c->r[30]=c->r[4]|c->r[4]; // 8011A3AC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 8011A3B0
  W32(c->r[1]+0x00000034u,c->r[29]); // 8011A3B4
  {uint32_t ea=c->r[2]+0xFFFF8A00u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A3B8
  c->r[29]=c->r[3]|c->r[3]; // 8011A3BC
  fcmp(c,0,c->f[3],c->f[0]); // 8011A3C0
  if (!crb(c,0)) { goto L_8011A3D0; } // 8011A3C4
  {uint32_t ea=c->r[2]+0xFFFF8A08u; c->f[7]=c->ps1[7]=RF32(ea);} // 8011A3C8
  goto L_8011A3EC; // 8011A3CC
L_8011A3D0:;
  c->f[0]=frsqrte(c->f[3]); // 8011A3D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8011A3D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8011A3D8
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 8011A3DC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011A3E0
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[3]; // 8011A3E4
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[0]); // 8011A3E8
L_8011A3EC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A3EC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8011A3F0
  c->f[6]=c->ps1[6]=S(c->f[0]/c->f[7]); // 8011A3F4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011A3F8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A3FC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A400
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011A404
  {uint32_t ea=c->r[2]+0xFFFF8A04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A408
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[7]); // 8011A40C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 8011A410
  {uint32_t ea=c->r[2]+0xFFFF89FCu; c->f[8]=c->ps1[8]=RF32(ea);} // 8011A414
  {uint32_t ea=c->r[2]+0xFFFF8A00u; c->f[6]=c->ps1[6]=RF32(ea);} // 8011A418
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 8011A41C
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[7]); // 8011A420
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 8011A424
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 8011A428
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8011A42C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 8011A430
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8011A434
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 8011A438
  fcmp(c,0,c->f[2],c->f[0]); // 8011A43C
  if (!crb(c,0)) { goto L_8011A44C; } // 8011A440
  {uint32_t ea=c->r[2]+0xFFFF8A08u; c->f[7]=c->ps1[7]=RF32(ea);} // 8011A444
  goto L_8011A468; // 8011A448
L_8011A44C:;
  c->f[0]=frsqrte(c->f[2]); // 8011A44C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8011A450
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[8]); // 8011A454
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[6])); // 8011A458
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011A45C
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 8011A460
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[0]); // 8011A464
L_8011A468:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A468
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8011A46C
  c->f[6]=c->ps1[6]=S(c->f[0]/c->f[7]); // 8011A470
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011A474
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A478
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A47C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011A480
  {uint32_t ea=c->r[2]+0xFFFF8A04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A484
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[7]); // 8011A488
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[6]);} // 8011A48C
  {uint32_t ea=c->r[2]+0xFFFF89FCu; c->f[8]=c->ps1[8]=RF32(ea);} // 8011A490
  {uint32_t ea=c->r[2]+0xFFFF8A00u; c->f[6]=c->ps1[6]=RF32(ea);} // 8011A494
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[5]);} // 8011A498
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[7]); // 8011A49C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[4]);} // 8011A4A0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 8011A4A4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8011A4A8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 8011A4AC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8011A4B0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 8011A4B4
  fcmp(c,0,c->f[2],c->f[0]); // 8011A4B8
  if (!crb(c,0)) { goto L_8011A4C8; } // 8011A4BC
  {uint32_t ea=c->r[2]+0xFFFF8A08u; c->f[10]=c->ps1[10]=RF32(ea);} // 8011A4C0
  goto L_8011A4E4; // 8011A4C4
L_8011A4C8:;
  c->f[0]=frsqrte(c->f[2]); // 8011A4C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8011A4CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[8]); // 8011A4D0
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[6])); // 8011A4D4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011A4D8
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 8011A4DC
  c->f[10]=c->ps1[10]=S(c->f[2]*c->f[0]); // 8011A4E0
L_8011A4E4:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A4E4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A4E8
  c->f[9]=c->ps1[9]=S(c->f[1]/c->f[10]); // 8011A4EC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8011A4F0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011A4F4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011A4F8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A4FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A500
  c->f[8]=c->ps1[8]=S(c->f[0]/c->f[10]); // 8011A504
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8011A508
  {uint32_t ea=c->r[3]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8011A50C
  {uint32_t ea=c->r[2]+0xFFFF8A0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A510
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[9]);} // 8011A514
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[8]);} // 8011A518
  c->f[7]=c->ps1[7]=S(c->f[7]/c->f[10]); // 8011A51C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[7]);} // 8011A520
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8011A524
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8011A528
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[5]); // 8011A52C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8011A530
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8011A534
  fcmp(c,0,c->f[1],c->f[0]); // 8011A538
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8011A53C
  if (!crb(c,2)) { goto L_8011A54C; } // 8011A540
  {uint32_t ea=c->r[2]+0xFFFF8A08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A544
  goto L_8011A5F0; // 8011A548
L_8011A54C:;
  {uint32_t ea=c->r[2]+0xFFFF8A10u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A54C
  fcmp(c,0,c->f[1],c->f[0]); // 8011A550
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8011A554
  if (!crb(c,2)) { goto L_8011A564; } // 8011A558
  {uint32_t ea=c->r[2]+0xFFFF89E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A55C
  goto L_8011A5F0; // 8011A560
L_8011A564:;
  c->lr=0x8011A568u; f_803AD458(c); // 8011A564
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A568
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8011A56C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8011A570
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A574
  {uint32_t ea=c->r[29]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8011A578
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[9]); // 8011A57C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011A580
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 8011A584
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[0]); // 8011A588
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A58C
  c->f[7]=c->ps1[7]=S(c->f[5]*c->f[4]); // 8011A590
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[9]); // 8011A594
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A598
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8011A59C
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 8011A5A0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011A5A4
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[5]); // 8011A5A8
  c->f[5]=c->ps1[5]=S(c->f[4]-c->f[3]); // 8011A5AC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011A5B0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[7]); // 8011A5B4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[6]); // 8011A5B8
  {uint32_t ea=c->r[2]+0xFFFF8A08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A5BC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 8011A5C0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 8011A5C4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8011A5C8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[6]);} // 8011A5CC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8011A5D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 8011A5D4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[7]);} // 8011A5D8
  fcmp(c,0,c->f[2],c->f[0]); // 8011A5DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[6]);} // 8011A5E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 8011A5E4
  if (!crb(c,0)) { goto L_8011A5F0; } // 8011A5E8
  c->f[1]=-c->f[1]; // 8011A5EC
L_8011A5F0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8011A5F0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8011A5F4
  c->r[30]=R32(c->r[1]+0x00000038u); // 8011A5F8
  c->r[29]=R32(c->r[1]+0x00000034u); // 8011A5FC
  c->lr=c->r[0]; // 8011A600
  c->r[1]=c->r[1]+0x00000040u; // 8011A604
  return; // 8011A608
}

// fn_8011A60C
void f_8011A60C(Ctx* __restrict c) {
  trace_call(0x8011A60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A60C
  c->r[0]=c->lr; // 8011A610
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011A614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011A618
  c->r[31]=c->r[3]|c->r[3]; // 8011A61C
  c->r[4]=c->r[31]|c->r[31]; // 8011A620
  c->lr=0x8011A628u; f_8025DD90(c); // 8011A624
  c->r[3]=c->r[31]|c->r[31]; // 8011A628
  c->r[4]=c->r[31]|c->r[31]; // 8011A62C
  c->lr=0x8011A634u; f_8025DD90(c); // 8011A630
  c->r[3]=c->r[31]|c->r[31]; // 8011A634
  c->r[4]=c->r[31]|c->r[31]; // 8011A638
  c->lr=0x8011A640u; f_8025DD90(c); // 8011A63C
  c->r[3]=c->r[31]|c->r[31]; // 8011A640
  c->r[4]=c->r[31]|c->r[31]; // 8011A644
  c->lr=0x8011A64Cu; f_8025DD90(c); // 8011A648
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011A64C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011A650
  c->lr=c->r[0]; // 8011A654
  c->r[1]=c->r[1]+0x00000010u; // 8011A658
  return; // 8011A65C
}

// fn_8011A660
void f_8011A660(Ctx* __restrict c) {
  trace_call(0x8011A660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A660
  c->r[0]=c->lr; // 8011A664
  c->r[4]=0u+0x00000000u; // 8011A668
  c->r[5]=0u+0x00000000u; // 8011A66C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011A670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011A674
  c->r[31]=c->r[3]|c->r[3]; // 8011A678
  c->lr=0x8011A680u; f_802DBFF0(c); // 8011A67C
  {uint32_t ea=c->r[2]+0xFFFF8A18u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A680
  c->r[3]=0u+0x80420000u; // 8011A684
  c->r[4]=0u+0x00000000u; // 8011A688
  c->r[0]=c->r[31]+0x000000E8u; // 8011A68C
  c->r[5]=0u+0x80420000u; // 8011A690
  c->r[3]=c->r[3]+0x00002FC0u; // 8011A694
  c->r[5]=c->r[5]+0x000030C4u; // 8011A698
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8011A69C
  c->r[3]=c->r[31]|c->r[31]; // 8011A6A0
  W32(c->r[31]+0x000000E4u,c->r[5]); // 8011A6A4
  W32(c->r[31]+0x000000E8u,c->r[4]); // 8011A6A8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8011A6AC
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8011A6B0
  W32(c->r[31]+0x000000F4u,c->r[4]); // 8011A6B4
  W32(c->r[31]+0x000000F8u,c->r[4]); // 8011A6B8
  W32(c->r[31]+0x000000FCu,c->r[4]); // 8011A6BC
  W32(c->r[31]+0x00000100u,c->r[4]); // 8011A6C0
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8011A6C4
  W32(c->r[31]+0x00000108u,c->r[4]); // 8011A6C8
  W32(c->r[31]+0x0000010Cu,c->r[4]); // 8011A6CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011A6D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011A6D4
  c->lr=c->r[0]; // 8011A6D8
  c->r[1]=c->r[1]+0x00000010u; // 8011A6DC
  return; // 8011A6E0
}

// fn_8011A6E4
void f_8011A6E4(Ctx* __restrict c) {
  trace_call(0x8011A6E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A6E4
  c->r[0]=c->lr; // 8011A6E8
  cmps(c,0,(int32_t)c->r[3],0); // 8011A6EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011A6F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011A6F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011A6F8
  c->r[30]=c->r[4]|c->r[4]; // 8011A6FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011A700
  c->r[29]=c->r[3]|c->r[3]; // 8011A704
  if (crb(c,2)) { goto L_8011A774; } // 8011A708
  c->r[4]=0u+0x80420000u; // 8011A70C
  c->r[31]=c->r[3]+0x000000E8u; // 8011A710
  c->r[4]=c->r[4]+0x00002FC0u; // 8011A714
  W32(c->r[3]+0x000000B4u,c->r[4]); // 8011A718
  goto L_8011A744; // 8011A71C
L_8011A720:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011A720
  if (crb(c,2)) { goto L_8011A744; } // 8011A724
  c->r[4]=R32(c->r[3]+0x00000008u); // 8011A728
  c->r[0]=R32(c->r[3]+0x00000004u); // 8011A72C
  W32(c->r[4]+0x00000004u,c->r[0]); // 8011A730
  c->r[4]=R32(c->r[3]+0x00000004u); // 8011A734
  c->r[0]=R32(c->r[3]+0x00000008u); // 8011A738
  W32(c->r[4]+0x00000008u,c->r[0]); // 8011A73C
  c->lr=0x8011A744u; f_80244DC0(c); // 8011A740
L_8011A744:;
  c->r[3]=R32(c->r[29]+0x000000F0u); // 8011A744
  cmpu(c,0,c->r[3],c->r[31]); // 8011A748
  if (!crb(c,2)) { IRQCHK(c); goto L_8011A720; } // 8011A74C
  cmps(c,0,(int32_t)c->r[29],0); // 8011A750
  if (crb(c,2)) { goto L_8011A764; } // 8011A754
  c->r[3]=c->r[29]|c->r[29]; // 8011A758
  c->r[4]=0u+0x00000000u; // 8011A75C
  c->lr=0x8011A764u; f_802DC0A0(c); // 8011A760
L_8011A764:;
  cmps(c,0,(int32_t)c->r[30],0); // 8011A764
  if (!crb(c,1)) { goto L_8011A774; } // 8011A768
  c->r[3]=c->r[29]|c->r[29]; // 8011A76C
  c->lr=0x8011A774u; f_80244DC0(c); // 8011A770
L_8011A774:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011A774
  c->r[3]=c->r[29]|c->r[29]; // 8011A778
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011A77C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011A780
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011A784
  c->lr=c->r[0]; // 8011A788
  c->r[1]=c->r[1]+0x00000020u; // 8011A78C
  return; // 8011A790
}

// fn_8011A794
void f_8011A794(Ctx* __restrict c) {
  trace_call(0x8011A794u);
  c->r[0]=0u+0x00000001u; // 8011A794
  W32(c->r[3]+0x00000100u,c->r[0]); // 8011A798
  return; // 8011A79C
}

// fn_8011A7A0
void f_8011A7A0(Ctx* __restrict c) {
  trace_call(0x8011A7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A7A0
  c->r[0]=c->lr; // 8011A7A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011A7A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011A7AC
  c->r[31]=c->r[5]|c->r[5]; // 8011A7B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011A7B4
  c->r[30]=c->r[3]|c->r[3]; // 8011A7B8
  c->lr=0x8011A7C0u; f_802DC32C(c); // 8011A7BC
  cmps(c,0,(int32_t)c->r[31],2); // 8011A7C0
  if (!crb(c,2)) { goto L_8011A7DC; } // 8011A7C4
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 8011A7C8
  W32(c->r[3]+0x00006F00u,c->r[30]); // 8011A7CC
  c->r[0]=R32(c->r[30]+0x00000018u); // 8011A7D0
  c->r[0]=c->r[0]|0x80000000u; // 8011A7D4
  W32(c->r[30]+0x00000018u,c->r[0]); // 8011A7D8
L_8011A7DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011A7DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011A7E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011A7E4
  c->lr=c->r[0]; // 8011A7E8
  c->r[1]=c->r[1]+0x00000010u; // 8011A7EC
  return; // 8011A7F0
}

// fn_8011A7F4
void f_8011A7F4(Ctx* __restrict c) {
  trace_call(0x8011A7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011A7F4
  c->r[0]=c->lr; // 8011A7F8
  W32(c->r[1]+0x00000094u,c->r[0]); // 8011A7FC
  c->r[11]=c->r[1]+0x00000090u; // 8011A800
  c->lr=0x8011A808u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011A804
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 8011A808
  c->r[28]=c->r[3]|c->r[3]; // 8011A80C
  c->r[3]=R32(c->r[5]+0x00000084u); // 8011A810
  cmps(c,0,(int32_t)c->r[3],0); // 8011A814
  if (crb(c,2)) { goto L_8011A820; } // 8011A818
  goto L_8011A84C; // 8011A81C
L_8011A820:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011A820
  cmps(c,0,(int32_t)c->r[3],0); // 8011A824
  if (crb(c,2)) { goto L_8011A848; } // 8011A828
  c->r[4]=R32(c->r[5]+0x0000007Cu); // 8011A82C
  c->r[6]=0u+0x00000000u; // 8011A830
  c->r[8]=R32(c->r[5]+0x00000080u); // 8011A834
  c->r[5]=0u+0x00000000u; // 8011A838
  c->r[7]=0u+0x00000000u; // 8011A83C
  c->lr=0x8011A844u; f_802BA9F4(c); // 8011A840
  goto L_8011A84C; // 8011A844
L_8011A848:;
  c->r[3]=0u+0x00000000u; // 8011A848
L_8011A84C:;
  c->r[5]=R32(c->r[28]+0x0000004Cu); // 8011A84C
  c->r[31]=c->r[3]|c->r[3]; // 8011A850
  c->r[3]=R32(c->r[5]+0x00000090u); // 8011A854
  cmps(c,0,(int32_t)c->r[3],0); // 8011A858
  if (crb(c,2)) { goto L_8011A864; } // 8011A85C
  goto L_8011A890; // 8011A860
L_8011A864:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011A864
  cmps(c,0,(int32_t)c->r[3],0); // 8011A868
  if (crb(c,2)) { goto L_8011A88C; } // 8011A86C
  c->r[4]=R32(c->r[5]+0x00000088u); // 8011A870
  c->r[6]=0u+0x00000000u; // 8011A874
  c->r[8]=R32(c->r[5]+0x0000008Cu); // 8011A878
  c->r[5]=0u+0x00000000u; // 8011A87C
  c->r[7]=0u+0x00000000u; // 8011A880
  c->lr=0x8011A888u; f_802BA9F4(c); // 8011A884
  goto L_8011A890; // 8011A888
L_8011A88C:;
  c->r[3]=0u+0x00000000u; // 8011A88C
L_8011A890:;
  c->r[5]=R32(c->r[28]+0x0000004Cu); // 8011A890
  c->r[30]=c->r[3]|c->r[3]; // 8011A894
  c->r[29]=R32(c->r[5]+0x0000009Cu); // 8011A898
  cmps(c,0,(int32_t)c->r[29],0); // 8011A89C
  if (crb(c,2)) { goto L_8011A8A8; } // 8011A8A0
  goto L_8011A8D8; // 8011A8A4
L_8011A8A8:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011A8A8
  cmps(c,0,(int32_t)c->r[3],0); // 8011A8AC
  if (crb(c,2)) { goto L_8011A8D0; } // 8011A8B0
  c->r[4]=R32(c->r[5]+0x00000094u); // 8011A8B4
  c->r[6]=0u+0x00000000u; // 8011A8B8
  c->r[8]=R32(c->r[5]+0x00000098u); // 8011A8BC
  c->r[5]=0u+0x00000000u; // 8011A8C0
  c->r[7]=0u+0x00000000u; // 8011A8C4
  c->lr=0x8011A8CCu; f_802BA9F4(c); // 8011A8C8
  goto L_8011A8D4; // 8011A8CC
L_8011A8D0:;
  c->r[3]=0u+0x00000000u; // 8011A8D0
L_8011A8D4:;
  c->r[29]=c->r[3]|c->r[3]; // 8011A8D4
L_8011A8D8:;
  c->r[5]=R32(c->r[28]+0x0000010Cu); // 8011A8D8
  c->r[4]=R32(c->r[28]+0x00000108u); // 8011A8DC
  c->r[0]=c->r[5]-c->r[4]; cr0(c,c->r[0]); // 8011A8E0
  if (crb(c,2)) { goto L_8011A930; } // 8011A8E4
  c->r[3]=c->r[0]^0x80000000u; // 8011A8E8
  c->r[0]=0u+0x43300000u; // 8011A8EC
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 8011A8F0
  {uint32_t ea=c->r[2]+0xFFFF8A20u; c->f[2]=RF64(ea);} // 8011A8F4
  W32(c->r[1]+0x00000068u,c->r[0]); // 8011A8F8
  {uint32_t ea=c->r[2]+0xFFFF8A1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A8FC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=RF64(ea);} // 8011A900
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011A904
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011A908
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011A90C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 8011A910
  c->r[0]=R32(c->r[1]+0x00000074u); // 8011A914
  cmps(c,0,(int32_t)c->r[0],0); // 8011A918
  if (crb(c,2)) { goto L_8011A92C; } // 8011A91C
  c->r[0]=c->r[4]+c->r[0]; // 8011A920
  W32(c->r[28]+0x00000108u,c->r[0]); // 8011A924
  goto L_8011A930; // 8011A928
L_8011A92C:;
  W32(c->r[28]+0x00000108u,c->r[5]); // 8011A92C
L_8011A930:;
  c->r[0]=R32(c->r[28]+0x00000100u); // 8011A930
  cmps(c,0,(int32_t)c->r[0],1); // 8011A934
  if (crb(c,2)) { goto L_8011A968; } // 8011A938
  cmps(c,0,(int32_t)c->r[0],2); // 8011A93C
  if (crb(c,2)) { goto L_8011A998; } // 8011A940
  cmps(c,0,(int32_t)c->r[0],3); // 8011A944
  if (crb(c,2)) { goto L_8011A9C0; } // 8011A948
  cmps(c,0,(int32_t)c->r[0],4); // 8011A94C
  if (crb(c,2)) { goto L_8011AAA4; } // 8011A950
  cmps(c,0,(int32_t)c->r[0],5); // 8011A954
  if (crb(c,2)) { goto L_8011AAEC; } // 8011A958
  cmps(c,0,(int32_t)c->r[0],6); // 8011A95C
  if (crb(c,2)) { goto L_8011AB50; } // 8011A960
  goto L_8011AB80; // 8011A964
L_8011A968:;
  c->r[5]=R32(c->r[28]+0x000000F0u); // 8011A968
  c->r[4]=c->r[28]+0x000000E8u; // 8011A96C
  c->r[0]=R32(c->r[28]+0x0000010Cu); // 8011A970
  c->r[3]=0u+0x00000002u; // 8011A974
  W32(c->r[28]+0x000000F4u,c->r[5]); // 8011A978
  W32(c->r[28]+0x000000F8u,c->r[4]); // 8011A97C
  W32(c->r[28]+0x000000FCu,c->r[5]); // 8011A980
  W32(c->r[28]+0x00000100u,c->r[3]); // 8011A984
  W32(c->r[28]+0x00000108u,c->r[0]); // 8011A988
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A98C
  {uint32_t ea=c->r[28]+0x00000104u; WF32(ea,c->f[0]);} // 8011A990
  goto L_8011AB80; // 8011A994
L_8011A998:;
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011A998
  {uint32_t ea=c->r[28]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A99C
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 8011A9A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8011A9A4
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011A9A8
  fcmp(c,0,c->f[1],c->f[0]); // 8011A9AC
  if (!crb(c,1)) { goto L_8011AB80; } // 8011A9B0
  c->r[0]=0u+0x00000003u; // 8011A9B4
  W32(c->r[28]+0x00000100u,c->r[0]); // 8011A9B8
  goto L_8011AB80; // 8011A9BC
L_8011A9C0:;
  c->r[4]=R32(c->r[28]+0x000000FCu); // 8011A9C0
  c->r[0]=R32(c->r[28]+0x000000F8u); // 8011A9C4
  cmpu(c,0,c->r[4],c->r[0]); // 8011A9C8
  if (crb(c,2)) { goto L_8011AA70; } // 8011A9CC
  c->r[12]=R32(c->r[31]+0x000000B4u); // 8011A9D0
  c->r[3]=c->r[31]|c->r[31]; // 8011A9D4
  c->r[27]=R32(c->r[4]+0x00000000u); // 8011A9D8
  c->r[5]=0u+0x00000000u; // 8011A9DC
  c->r[12]=R32(c->r[12]+0x000000C8u); // 8011A9E0
  c->r[4]=R32(c->r[27]+0x00000010u); // 8011A9E4
  c->ctr=c->r[12]; // 8011A9E8
  if (true) { c->lr=0x8011A9F0u; dispatch(c,c->ctr); } // 8011A9EC
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 8011A9F0
  c->r[3]=c->r[31]|c->r[31]; // 8011A9F4
  c->r[4]=0u+0x0000007Fu; // 8011A9F8
  c->r[5]=0u+0x00000000u; // 8011A9FC
  {uint32_t ea=c->r[6]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AA00
  c->r[6]=0u+0x00000000u; // 8011AA04
  c->lr=0x8011AA0Cu; f_802F0738(c); // 8011AA08
  c->r[5]=R32(c->r[27]+0x00000014u); // 8011AA0C
  cmps(c,0,(int32_t)c->r[5],0); // 8011AA10
  if (crb(c,2)) { goto L_8011AA5C; } // 8011AA14
  c->r[3]=c->r[1]+0x00000038u; // 8011AA18
  c->r[4]=c->r[13]+0xFFFFBE90u; // 8011AA1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8011AA20
  c->lr=0x8011AA28u; f_8024EE90(c); // 8011AA24
  c->r[12]=R32(c->r[30]+0x000000B4u); // 8011AA28
  c->r[3]=c->r[30]|c->r[30]; // 8011AA2C
  c->r[4]=c->r[1]+0x00000038u; // 8011AA30
  c->r[12]=R32(c->r[12]+0x000000C4u); // 8011AA34
  c->ctr=c->r[12]; // 8011AA38
  if (true) { c->lr=0x8011AA40u; dispatch(c,c->ctr); } // 8011AA3C
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 8011AA40
  c->r[3]=c->r[30]|c->r[30]; // 8011AA44
  c->r[4]=0u+0x0000007Fu; // 8011AA48
  c->r[5]=0u+0x00000000u; // 8011AA4C
  {uint32_t ea=c->r[6]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AA50
  c->r[6]=0u+0x00000000u; // 8011AA54
  c->lr=0x8011AA5Cu; f_802F0738(c); // 8011AA58
L_8011AA5C:;
  c->r[0]=0u+0x00000004u; // 8011AA5C
  W32(c->r[28]+0x00000100u,c->r[0]); // 8011AA60
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AA64
  {uint32_t ea=c->r[28]+0x00000104u; WF32(ea,c->f[0]);} // 8011AA68
  goto L_8011AB80; // 8011AA6C
L_8011AA70:;
  c->r[0]=0u+0x00000000u; // 8011AA70
  W32(c->r[28]+0x00000100u,c->r[0]); // 8011AA74
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 8011AA78
  c->r[27]=R32(c->r[3]+0x000000C0u); // 8011AA7C
  cmps(c,0,(int32_t)c->r[27],0); // 8011AA80
  if (crb(c,2)) { goto L_8011AB80; } // 8011AA84
  c->r[3]=c->r[27]|c->r[27]; // 8011AA88
  c->lr=0x8011AA90u; f_8030D188(c); // 8011AA8C
  c->r[3]=c->r[27]|c->r[27]; // 8011AA90
  c->r[4]=c->r[28]|c->r[28]; // 8011AA94
  c->r[5]=0u+0x00000000u; // 8011AA98
  c->lr=0x8011AAA0u; f_8030D51C(c); // 8011AA9C
  goto L_8011AB80; // 8011AAA0
L_8011AAA4:;
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AAA4
  {uint32_t ea=c->r[28]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AAA8
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 8011AAAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8011AAB0
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AAB4
  fcmp(c,0,c->f[1],c->f[0]); // 8011AAB8
  if (!crb(c,1)) { goto L_8011AB80; } // 8011AABC
  c->r[0]=0u+0x00000005u; // 8011AAC0
  W32(c->r[28]+0x00000100u,c->r[0]); // 8011AAC4
  c->r[4]=R32(c->r[28]+0x000000FCu); // 8011AAC8
  c->r[3]=R32(c->r[28]+0x0000010Cu); // 8011AACC
  c->r[4]=R32(c->r[4]+0x00000000u); // 8011AAD0
  c->r[0]=R32(c->r[4]+0x00000014u); // 8011AAD4
  c->r[0]=c->r[3]+c->r[0]; // 8011AAD8
  W32(c->r[28]+0x0000010Cu,c->r[0]); // 8011AADC
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AAE0
  {uint32_t ea=c->r[28]+0x00000104u; WF32(ea,c->f[0]);} // 8011AAE4
  goto L_8011AB80; // 8011AAE8
L_8011AAEC:;
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AAEC
  {uint32_t ea=c->r[28]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AAF0
  c->r[7]=R32(c->r[28]+0x0000004Cu); // 8011AAF4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8011AAF8
  {uint32_t ea=c->r[7]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AAFC
  fcmp(c,0,c->f[1],c->f[0]); // 8011AB00
  if (!crb(c,1)) { goto L_8011AB80; } // 8011AB04
  c->r[0]=0u+0x00000006u; // 8011AB08
  W32(c->r[28]+0x00000100u,c->r[0]); // 8011AB0C
  c->r[3]=c->r[31]|c->r[31]; // 8011AB10
  c->r[4]=0u+0x00000000u; // 8011AB14
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AB18
  c->r[5]=0u+0x00000000u; // 8011AB1C
  {uint32_t ea=c->r[28]+0x00000104u; WF32(ea,c->f[0]);} // 8011AB20
  c->r[6]=0u+0x00000000u; // 8011AB24
  {uint32_t ea=c->r[7]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AB28
  c->lr=0x8011AB30u; f_802F0738(c); // 8011AB2C
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 8011AB30
  c->r[3]=c->r[30]|c->r[30]; // 8011AB34
  c->r[4]=0u+0x00000000u; // 8011AB38
  c->r[5]=0u+0x00000000u; // 8011AB3C
  {uint32_t ea=c->r[6]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AB40
  c->r[6]=0u+0x00000000u; // 8011AB44
  c->lr=0x8011AB4Cu; f_802F0738(c); // 8011AB48
  goto L_8011AB80; // 8011AB4C
L_8011AB50:;
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AB50
  {uint32_t ea=c->r[28]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AB54
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 8011AB58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8011AB5C
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011AB60
  fcmp(c,0,c->f[1],c->f[0]); // 8011AB64
  if (!crb(c,1)) { goto L_8011AB80; } // 8011AB68
  c->r[3]=R32(c->r[28]+0x000000FCu); // 8011AB6C
  c->r[0]=0u+0x00000003u; // 8011AB70
  c->r[3]=R32(c->r[3]+0x00000008u); // 8011AB74
  W32(c->r[28]+0x000000FCu,c->r[3]); // 8011AB78
  W32(c->r[28]+0x00000100u,c->r[0]); // 8011AB7C
L_8011AB80:;
  cmps(c,0,(int32_t)c->r[29],0); // 8011AB80
  if (crb(c,2)) { goto L_8011ABB4; } // 8011AB84
  c->r[5]=R32(c->r[28]+0x00000108u); // 8011AB88
  c->r[3]=c->r[1]+0x00000008u; // 8011AB8C
  c->r[4]=c->r[13]+0xFFFFBE94u; // 8011AB90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8011AB94
  c->lr=0x8011AB9Cu; f_8024EE90(c); // 8011AB98
  c->r[12]=R32(c->r[29]+0x000000B4u); // 8011AB9C
  c->r[3]=c->r[29]|c->r[29]; // 8011ABA0
  c->r[4]=c->r[1]+0x00000008u; // 8011ABA4
  c->r[12]=R32(c->r[12]+0x000000C4u); // 8011ABA8
  c->ctr=c->r[12]; // 8011ABAC
  if (true) { c->lr=0x8011ABB4u; dispatch(c,c->ctr); } // 8011ABB0
L_8011ABB4:;
  c->r[11]=c->r[1]+0x00000090u; // 8011ABB4
  c->lr=0x8011ABBCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011ABB8
  c->r[0]=R32(c->r[1]+0x00000094u); // 8011ABBC
  c->lr=c->r[0]; // 8011ABC0
  c->r[1]=c->r[1]+0x00000090u; // 8011ABC4
  return; // 8011ABC8
}

// fn_8011ABCC
void f_8011ABCC(Ctx* __restrict c) {
  trace_call(0x8011ABCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011ABCC
  c->r[0]=c->lr; // 8011ABD0
  cmps(c,0,(int32_t)c->r[4],0); // 8011ABD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011ABD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011ABDC
  c->r[31]=c->r[3]|c->r[3]; // 8011ABE0
  if (crb(c,2)) { goto L_8011AC40; } // 8011ABE4
  W32(c->r[3]+0x00000124u,c->r[4]); // 8011ABE8
  c->r[4]=c->r[13]+0xFFFFBE98u; // 8011ABEC
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8011ABF0
  c->r[5]=0u+0x00000000u; // 8011ABF4
  c->r[6]=0u+0x00001001u; // 8011ABF8
  c->r[0]=R32(c->r[7]+0x000000B0u); // 8011ABFC
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 8011AC00
  c->r[0]=R32(c->r[7]+0x000000B4u); // 8011AC04
  W32(c->r[3]+0x00000120u,c->r[0]); // 8011AC08
  c->r[3]=0u+0x0000000Cu; // 8011AC0C
  c->lr=0x8011AC14u; f_80244D20(c); // 8011AC10
  cmps(c,0,(int32_t)c->r[3],0); // 8011AC14
  if (crb(c,2)) { goto L_8011AC34; } // 8011AC18
  c->r[5]=R32(c->r[31]+0x000000ECu); // 8011AC1C
  c->r[4]=c->r[31]+0x00000110u; // 8011AC20
  c->r[0]=c->r[31]+0x000000E8u; // 8011AC24
  W32(c->r[3]+0x00000000u,c->r[4]); // 8011AC28
  W32(c->r[3]+0x00000004u,c->r[5]); // 8011AC2C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8011AC30
L_8011AC34:;
  c->r[4]=R32(c->r[31]+0x000000ECu); // 8011AC34
  W32(c->r[4]+0x00000008u,c->r[3]); // 8011AC38
  W32(c->r[31]+0x000000ECu,c->r[3]); // 8011AC3C
L_8011AC40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011AC40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011AC44
  c->lr=c->r[0]; // 8011AC48
  c->r[1]=c->r[1]+0x00000010u; // 8011AC4C
  return; // 8011AC50
}

// fn_8011AC54
void f_8011AC54(Ctx* __restrict c) {
  trace_call(0x8011AC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011AC54
  c->r[0]=c->lr; // 8011AC58
  cmps(c,0,(int32_t)c->r[4],0); // 8011AC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011AC60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011AC64
  c->r[31]=c->r[3]|c->r[3]; // 8011AC68
  if (crb(c,2)) { goto L_8011ACC8; } // 8011AC6C
  W32(c->r[3]+0x00000144u,c->r[4]); // 8011AC70
  c->r[4]=c->r[13]+0xFFFFBE98u; // 8011AC74
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8011AC78
  c->r[5]=0u+0x00000000u; // 8011AC7C
  c->r[6]=0u+0x00001001u; // 8011AC80
  c->r[0]=R32(c->r[7]+0x000000B8u); // 8011AC84
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 8011AC88
  c->r[0]=R32(c->r[7]+0x000000BCu); // 8011AC8C
  W32(c->r[3]+0x00000140u,c->r[0]); // 8011AC90
  c->r[3]=0u+0x0000000Cu; // 8011AC94
  c->lr=0x8011AC9Cu; f_80244D20(c); // 8011AC98
  cmps(c,0,(int32_t)c->r[3],0); // 8011AC9C
  if (crb(c,2)) { goto L_8011ACBC; } // 8011ACA0
  c->r[5]=R32(c->r[31]+0x000000ECu); // 8011ACA4
  c->r[4]=c->r[31]+0x00000130u; // 8011ACA8
  c->r[0]=c->r[31]+0x000000E8u; // 8011ACAC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8011ACB0
  W32(c->r[3]+0x00000004u,c->r[5]); // 8011ACB4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8011ACB8
L_8011ACBC:;
  c->r[4]=R32(c->r[31]+0x000000ECu); // 8011ACBC
  W32(c->r[4]+0x00000008u,c->r[3]); // 8011ACC0
  W32(c->r[31]+0x000000ECu,c->r[3]); // 8011ACC4
L_8011ACC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011ACC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011ACCC
  c->lr=c->r[0]; // 8011ACD0
  c->r[1]=c->r[1]+0x00000010u; // 8011ACD4
  return; // 8011ACD8
}

// fn_8011ACDC
void f_8011ACDC(Ctx* __restrict c) {
  trace_call(0x8011ACDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011ACDC
  c->r[0]=c->lr; // 8011ACE0
  W32(c->r[1]+0x00000094u,c->r[0]); // 8011ACE4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8011ACE8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8011ACEC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8011ACF0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8011ACF4
  c->r[11]=c->r[1]+0x00000070u; // 8011ACF8
  c->lr=0x8011AD00u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011ACFC
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 8011AD00
  c->r[7]=0u+0x43300000u; // 8011AD04
  c->r[0]=0u+0x00000000u; // 8011AD08
  W32(c->r[1]+0x00000038u,c->r[7]); // 8011AD0C
  c->r[31]=R32(c->r[3]+0x0000015Cu); // 8011AD10
  c->r[30]=c->r[6]|c->r[6]; // 8011AD14
  W32(c->r[1]+0x00000040u,c->r[7]); // 8011AD18
  c->r[3]=0u+0x00000001u; // 8011AD1C
  {uint32_t ea=c->r[2]+0xFFFF8A28u; c->f[31]=c->ps1[31]=RF32(ea);} // 8011AD20
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011AD24
  c->r[8]=R32(c->r[13]+0xFFFFE134u); // 8011AD28
  c->r[7]=R32(c->r[8]+0x00000034u); // 8011AD2C
  c->r[0]=R8(c->r[7]+0x00000185u); // 8011AD30
  cmps(c,0,(int32_t)c->r[0],0); // 8011AD34
  if (crb(c,2)) { goto L_8011AD40; } // 8011AD38
  c->r[3]=0u+0x00000002u; // 8011AD3C
L_8011AD40:;
  c->r[7]=R32(c->r[6]+0x00000004u); // 8011AD40
  c->r[0]=c->r[7]+0x00000001u; // 8011AD44
  cmpu(c,0,c->r[0],0x00000015u); // 8011AD48
  if (crb(c,1)) { goto L_8011BDDC; } // 8011AD4C
  c->r[7]=0u+0x80420000u; // 8011AD50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8011AD54
  c->r[7]=c->r[7]+0x00002F68u; // 8011AD58
  c->r[7]=R32(c->r[7]+c->r[0]); // 8011AD5C
  c->ctr=c->r[7]; // 8011AD60
  if (true) { switch (c->ctr) { case 0x8011AD68u: goto L_8011AD68; case 0x8011AD70u: goto L_8011AD70; case 0x8011AD98u: goto L_8011AD98; case 0x8011AE74u: goto L_8011AE74; case 0x8011AF88u: goto L_8011AF88; case 0x8011AFFCu: goto L_8011AFFC; case 0x8011B108u: goto L_8011B108; case 0x8011B24Cu: goto L_8011B24C; case 0x8011B300u: goto L_8011B300; case 0x8011B3D4u: goto L_8011B3D4; case 0x8011B50Cu: goto L_8011B50C; case 0x8011B644u: goto L_8011B644; case 0x8011B77Cu: goto L_8011B77C; case 0x8011B834u: goto L_8011B834; case 0x8011B8E8u: goto L_8011B8E8; case 0x8011B970u: goto L_8011B970; case 0x8011B9F8u: goto L_8011B9F8; case 0x8011BA88u: goto L_8011BA88; case 0x8011BB18u: goto L_8011BB18; case 0x8011BC64u: goto L_8011BC64; case 0x8011BC6Cu: goto L_8011BC6C; case 0x8011BD28u: goto L_8011BD28; default: break; } dispatch(c,c->ctr); return; } // 8011AD64
L_8011AD68:;
  c->r[3]=0u+0x00000000u; // 8011AD68
  goto L_8011BDE0; // 8011AD6C
L_8011AD70:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011AD70
  if (crb(c,2)) { goto L_8011AD90; } // 8011AD74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 8011AD78
  c->r[3]=0u+0x00000001u; // 8011AD7C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011AD80
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011AD84
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011AD88
  goto L_8011BDE0; // 8011AD8C
L_8011AD90:;
  c->r[3]=0u+0x00000000u; // 8011AD90
  goto L_8011BDE0; // 8011AD94
L_8011AD98:;
  c->r[8]=0u+0x80400000u; // 8011AD98
  {uint32_t ea=c->r[8]+0x000051D0u; c->r[7]=R32(ea); c->r[8]=ea;} // 8011AD9C
  W32(c->r[1]+0x00000020u,c->r[7]); // 8011ADA0
  c->r[29]=c->r[1]+0x00000020u; // 8011ADA4
  c->r[6]=R32(c->r[8]+0x00000004u); // 8011ADA8
  c->r[30]=0u+0x00000000u; // 8011ADAC
  c->r[5]=R32(c->r[8]+0x00000008u); // 8011ADB0
  c->r[28]=0u+0x00000001u; // 8011ADB4
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8011ADB8
  c->r[27]=0u+0x00000000u; // 8011ADBC
  c->r[3]=R32(c->r[8]+0x00000010u); // 8011ADC0
  c->r[0]=R32(c->r[8]+0x00000014u); // 8011ADC4
  W32(c->r[1]+0x00000024u,c->r[6]); // 8011ADC8
  W32(c->r[1]+0x00000028u,c->r[5]); // 8011ADCC
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8011ADD0
  W32(c->r[1]+0x00000030u,c->r[3]); // 8011ADD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011ADD8
L_8011ADDC:;
  c->r[0]=rotl(c->r[27],2)&0x000003FCu; // 8011ADDC
  c->r[3]=c->r[31]|c->r[31]; // 8011ADE0
  c->r[4]=R32(c->r[29]+c->r[0]); // 8011ADE4
  c->lr=0x8011ADECu; f_8014AE94(c); // 8011ADE8
  cmps(c,0,(int32_t)c->r[28],0); // 8011ADEC
  c->r[28]=0u+0x00000000u; // 8011ADF0
  if (crb(c,2)) { goto L_8011AE04; } // 8011ADF4
  cmps(c,0,(int32_t)c->r[3],0); // 8011ADF8
  if (crb(c,2)) { goto L_8011AE04; } // 8011ADFC
  c->r[28]=0u+0x00000001u; // 8011AE00
L_8011AE04:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011AE04
  if (crb(c,2)) { goto L_8011AE14; } // 8011AE08
  c->r[0]=c->r[30]+0x00000001u; // 8011AE0C
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 8011AE10
L_8011AE14:;
  c->r[27]=c->r[27]+0x00000001u; // 8011AE14
  cmpu(c,0,c->r[27],0x00000006u); // 8011AE18
  if (crb(c,0)) { IRQCHK(c); goto L_8011ADDC; } // 8011AE1C
  W32(c->r[1]+0x0000003Cu,c->r[30]); // 8011AE20
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011AE24
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011AE28
  {uint32_t ea=c->r[2]+0xFFFF8A30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AE2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011AE30
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011AE34
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8011AE38
  fcmp(c,0,c->f[3],c->f[0]); // 8011AE3C
  if (!crb(c,0)) { goto L_8011AE48; } // 8011AE40
  goto L_8011AE58; // 8011AE44
L_8011AE48:;
  W32(c->r[1]+0x00000044u,c->r[30]); // 8011AE48
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011AE4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011AE50
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 8011AE54
L_8011AE58:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011AE58
  c->r[3]=c->r[28]|c->r[28]; // 8011AE5C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011AE60
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011AE64
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011AE68
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011AE6C
  goto L_8011BDE0; // 8011AE70
L_8011AE74:;
  c->r[8]=0u+0x80400000u; // 8011AE74
  {uint32_t ea=c->r[8]+0x000051E8u; c->r[7]=R32(ea); c->r[8]=ea;} // 8011AE78
  W32(c->r[1]+0x00000008u,c->r[7]); // 8011AE7C
  c->r[29]=c->r[1]+0x00000008u; // 8011AE80
  c->r[6]=R32(c->r[8]+0x00000004u); // 8011AE84
  c->r[27]=0u+0x00000000u; // 8011AE88
  c->r[5]=R32(c->r[8]+0x00000008u); // 8011AE8C
  c->r[28]=0u+0x00000001u; // 8011AE90
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8011AE94
  c->r[26]=0u+0x00000000u; // 8011AE98
  c->r[3]=R32(c->r[8]+0x00000010u); // 8011AE9C
  c->r[0]=R32(c->r[8]+0x00000014u); // 8011AEA0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8011AEA4
  W32(c->r[1]+0x00000010u,c->r[5]); // 8011AEA8
  W32(c->r[1]+0x00000014u,c->r[4]); // 8011AEAC
  W32(c->r[1]+0x00000018u,c->r[3]); // 8011AEB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8011AEB4
L_8011AEB8:;
  c->r[25]=0u+0x00000000u; // 8011AEB8
L_8011AEBC:;
  c->r[0]=rotl(c->r[25],2)&0x000003FCu; // 8011AEBC
  c->r[3]=c->r[31]|c->r[31]; // 8011AEC0
  c->r[4]=R32(c->r[29]+c->r[0]); // 8011AEC4
  c->r[5]=rotl(c->r[26],0)&0x000000FFu; // 8011AEC8
  c->r[6]=0u+0x00000002u; // 8011AECC
  c->lr=0x8011AED4u; f_8014AF34(c); // 8011AED0
  c->r[30]=c->r[3]|c->r[3]; // 8011AED4
  c->r[3]=c->r[31]|c->r[31]; // 8011AED8
  c->r[4]=rotl(c->r[25],0)&0x000000FFu; // 8011AEDC
  c->lr=0x8011AEE4u; f_8014AE94(c); // 8011AEE0
  cmps(c,0,(int32_t)c->r[28],0); // 8011AEE4
  c->r[28]=0u+0x00000000u; // 8011AEE8
  if (crb(c,2)) { goto L_8011AF04; } // 8011AEEC
  cmps(c,0,(int32_t)c->r[30],0); // 8011AEF0
  if (crb(c,2)) { goto L_8011AF04; } // 8011AEF4
  cmps(c,0,(int32_t)c->r[3],0); // 8011AEF8
  if (crb(c,2)) { goto L_8011AF04; } // 8011AEFC
  c->r[28]=0u+0x00000001u; // 8011AF00
L_8011AF04:;
  cmps(c,0,(int32_t)c->r[30],0); // 8011AF04
  if (crb(c,2)) { goto L_8011AF1C; } // 8011AF08
  cmps(c,0,(int32_t)c->r[3],0); // 8011AF0C
  if (crb(c,2)) { goto L_8011AF1C; } // 8011AF10
  c->r[0]=c->r[27]+0x00000001u; // 8011AF14
  c->r[27]=rotl(c->r[0],0)&0x000000FFu; // 8011AF18
L_8011AF1C:;
  c->r[25]=c->r[25]+0x00000001u; // 8011AF1C
  cmpu(c,0,c->r[25],0x00000006u); // 8011AF20
  if (crb(c,0)) { IRQCHK(c); goto L_8011AEBC; } // 8011AF24
  c->r[26]=c->r[26]+0x00000001u; // 8011AF28
  cmpu(c,0,c->r[26],0x00000002u); // 8011AF2C
  if (crb(c,0)) { IRQCHK(c); goto L_8011AEB8; } // 8011AF30
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 8011AF34
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011AF38
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011AF3C
  {uint32_t ea=c->r[2]+0xFFFF8A30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011AF40
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011AF44
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011AF48
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8011AF4C
  fcmp(c,0,c->f[3],c->f[0]); // 8011AF50
  if (!crb(c,0)) { goto L_8011AF5C; } // 8011AF54
  goto L_8011AF6C; // 8011AF58
L_8011AF5C:;
  W32(c->r[1]+0x00000044u,c->r[27]); // 8011AF5C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011AF60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011AF64
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 8011AF68
L_8011AF6C:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011AF6C
  c->r[3]=c->r[28]|c->r[28]; // 8011AF70
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011AF74
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011AF78
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011AF7C
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011AF80
  goto L_8011BDE0; // 8011AF84
L_8011AF88:;
  c->r[5]=R32(c->r[13]+0xFFFFE12Cu); // 8011AF88
  c->r[7]=0u+0x00000001u; // 8011AF8C
  c->r[8]=0u+0x00000000u; // 8011AF90
  c->r[5]=c->r[5]+0x00000164u; // 8011AF94
  c->ctr=c->r[3]; // 8011AF98
  cmpu(c,0,c->r[3],0x00000000u); // 8011AF9C
  if (!crb(c,1)) { goto L_8011AFCC; } // 8011AFA0
L_8011AFA4:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 8011AFA4
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011AFA8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 8011AFAC
  c->r[3]=c->r[5]+c->r[3]; // 8011AFB0
  c->r[3]=R32(c->r[3]+0x000000C4u); // 8011AFB4
  cmpu(c,0,c->r[3],c->r[0]); // 8011AFB8
  if (crb(c,0)) { goto L_8011AFC4; } // 8011AFBC
  c->r[7]=0u+0x00000000u; // 8011AFC0
L_8011AFC4:;
  c->r[8]=c->r[8]+0x00000001u; // 8011AFC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011AFA4; } // 8011AFC8
L_8011AFCC:;
  cmps(c,0,(int32_t)c->r[7],0); // 8011AFCC
  if (crb(c,2)) { goto L_8011AFF4; } // 8011AFD0
  cmps(c,0,(int32_t)c->r[4],0); // 8011AFD4
  if (crb(c,2)) { goto L_8011AFF4; } // 8011AFD8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 8011AFDC
  c->r[3]=0u+0x00000001u; // 8011AFE0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011AFE4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011AFE8
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011AFEC
  goto L_8011BDE0; // 8011AFF0
L_8011AFF4:;
  c->r[3]=0u+0x00000000u; // 8011AFF4
  goto L_8011BDE0; // 8011AFF8
L_8011AFFC:;
  c->r[0]=R8(c->r[31]+0x0000002Fu); // 8011AFFC
  c->r[4]=0u+0x00000000u; // 8011B000
  cmps(c,0,(int32_t)c->r[0],0); // 8011B004
  if (crb(c,2)) { goto L_8011B010; } // 8011B008
  c->r[4]=0u+0x00000001u; // 8011B00C
L_8011B010:;
  c->r[0]=R8(c->r[31]+0x00000030u); // 8011B010
  cmps(c,0,(int32_t)c->r[0],0); // 8011B014
  if (crb(c,2)) { goto L_8011B024; } // 8011B018
  c->r[0]=c->r[4]+0x00000001u; // 8011B01C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B020
L_8011B024:;
  c->r[0]=R8(c->r[31]+0x00000031u); // 8011B024
  cmps(c,0,(int32_t)c->r[0],0); // 8011B028
  if (crb(c,2)) { goto L_8011B038; } // 8011B02C
  c->r[0]=c->r[4]+0x00000001u; // 8011B030
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B034
L_8011B038:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 8011B038
  cmps(c,0,(int32_t)c->r[0],0); // 8011B03C
  if (crb(c,2)) { goto L_8011B04C; } // 8011B040
  c->r[0]=c->r[4]+0x00000001u; // 8011B044
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B048
L_8011B04C:;
  c->r[0]=R8(c->r[31]+0x00000033u); // 8011B04C
  cmps(c,0,(int32_t)c->r[0],0); // 8011B050
  if (crb(c,2)) { goto L_8011B060; } // 8011B054
  c->r[0]=c->r[4]+0x00000001u; // 8011B058
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B05C
L_8011B060:;
  c->r[0]=R8(c->r[31]+0x00000034u); // 8011B060
  cmps(c,0,(int32_t)c->r[0],0); // 8011B064
  if (crb(c,2)) { goto L_8011B074; } // 8011B068
  c->r[0]=c->r[4]+0x00000001u; // 8011B06C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B070
L_8011B074:;
  c->r[0]=R8(c->r[31]+0x00000035u); // 8011B074
  cmps(c,0,(int32_t)c->r[0],0); // 8011B078
  if (crb(c,2)) { goto L_8011B088; } // 8011B07C
  c->r[0]=c->r[4]+0x00000001u; // 8011B080
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B084
L_8011B088:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B088
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011B08C
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B090
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B094
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B098
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B09C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B0A0
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B0A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B0A8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B0AC
  fcmp(c,0,c->f[3],c->f[0]); // 8011B0B0
  if (!crb(c,0)) { goto L_8011B0BC; } // 8011B0B4
  goto L_8011B0D8; // 8011B0B8
L_8011B0BC:;
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011B0BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B0C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B0C4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B0C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B0CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B0D0
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B0D4
L_8011B0D8:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B0D8
  c->r[3]=R32(c->r[6]+0x00000008u); // 8011B0DC
  c->r[0]=c->r[4]-c->r[3]; // 8011B0E0
  c->r[3]=c->r[4]|~c->r[3]; // 8011B0E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B0E8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8011B0EC
  c->r[0]=c->r[3]-c->r[0]; // 8011B0F0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B0F4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8011B0F8
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B0FC
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B100
  goto L_8011BDE0; // 8011B104
L_8011B108:;
  c->r[9]=R32(c->r[13]+0xFFFFE130u); // 8011B108
  c->r[25]=0u+0x00000000u; // 8011B10C
  c->ctr=c->r[3]; // 8011B110
  cmpu(c,0,c->r[3],0x00000000u); // 8011B114
  if (!crb(c,1)) { goto L_8011B1D8; } // 8011B118
L_8011B11C:;
  c->r[0]=rotl(c->r[25],3)&0x000007F8u; // 8011B11C
  c->r[5]=rotl(c->r[25],2)&0x000003FCu; // 8011B120
  c->r[29]=c->r[9]+c->r[0]; // 8011B124
  c->r[0]=R32(c->r[29]+0x00000078u); // 8011B128
  c->r[5]=c->r[8]+c->r[5]; // 8011B12C
  c->r[10]=R32(c->r[5]+0x00000030u); // 8011B130
  cmps(c,0,(int32_t)c->r[0],-1); // 8011B134
  if (crb(c,2)) { goto L_8011B180; } // 8011B138
  c->r[12]=R32(c->r[10]+0x000001E0u); // 8011B13C
  c->r[7]=c->r[10]+0x000001D8u; // 8011B140
  goto L_8011B178; // 8011B144
L_8011B148:;
  c->r[11]=R32(c->r[12]+0x00000000u); // 8011B148
  c->r[5]=R32(c->r[29]+0x00000078u); // 8011B14C
  c->r[11]=R32(c->r[11]+0x00000004u); // 8011B150
  c->r[0]=R32(c->r[11]+0x00000020u); // 8011B154
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8011B158
  if (!crb(c,2)) { goto L_8011B174; } // 8011B15C
  c->r[0]=R32(c->r[11]+0x0000001Cu); // 8011B160
  cmps(c,0,(int32_t)c->r[0],0); // 8011B164
  if (crb(c,2)) { goto L_8011B174; } // 8011B168
  c->r[3]=0u+0x00000000u; // 8011B16C
  goto L_8011BDE0; // 8011B170
L_8011B174:;
  c->r[12]=R32(c->r[12]+0x00000008u); // 8011B174
L_8011B178:;
  cmpu(c,0,c->r[12],c->r[7]); // 8011B178
  if (!crb(c,2)) { IRQCHK(c); goto L_8011B148; } // 8011B17C
L_8011B180:;
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 8011B180
  cmps(c,0,(int32_t)c->r[0],-1); // 8011B184
  if (crb(c,2)) { goto L_8011B1D0; } // 8011B188
  c->r[12]=R32(c->r[10]+0x000001E0u); // 8011B18C
  c->r[7]=c->r[10]+0x000001D8u; // 8011B190
  goto L_8011B1C8; // 8011B194
L_8011B198:;
  c->r[11]=R32(c->r[12]+0x00000000u); // 8011B198
  c->r[5]=R32(c->r[29]+0x0000007Cu); // 8011B19C
  c->r[11]=R32(c->r[11]+0x00000004u); // 8011B1A0
  c->r[0]=R32(c->r[11]+0x00000020u); // 8011B1A4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8011B1A8
  if (!crb(c,2)) { goto L_8011B1C4; } // 8011B1AC
  c->r[0]=R32(c->r[11]+0x0000001Cu); // 8011B1B0
  cmps(c,0,(int32_t)c->r[0],0); // 8011B1B4
  if (crb(c,2)) { goto L_8011B1C4; } // 8011B1B8
  c->r[3]=0u+0x00000000u; // 8011B1BC
  goto L_8011BDE0; // 8011B1C0
L_8011B1C4:;
  c->r[12]=R32(c->r[12]+0x00000008u); // 8011B1C4
L_8011B1C8:;
  cmpu(c,0,c->r[12],c->r[7]); // 8011B1C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8011B198; } // 8011B1CC
L_8011B1D0:;
  c->r[25]=c->r[25]+0x00000001u; // 8011B1D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B11C; } // 8011B1D4
L_8011B1D8:;
  c->r[5]=R32(c->r[13]+0xFFFFE12Cu); // 8011B1D8
  c->r[7]=0u+0x00000001u; // 8011B1DC
  c->r[8]=0u+0x00000000u; // 8011B1E0
  c->r[5]=c->r[5]+0x00000164u; // 8011B1E4
  c->ctr=c->r[3]; // 8011B1E8
  cmpu(c,0,c->r[3],0x00000000u); // 8011B1EC
  if (!crb(c,1)) { goto L_8011B21C; } // 8011B1F0
L_8011B1F4:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 8011B1F4
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B1F8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 8011B1FC
  c->r[3]=c->r[5]+c->r[3]; // 8011B200
  c->r[3]=R32(c->r[3]+0x000000C4u); // 8011B204
  cmpu(c,0,c->r[3],c->r[0]); // 8011B208
  if (crb(c,0)) { goto L_8011B214; } // 8011B20C
  c->r[7]=0u+0x00000000u; // 8011B210
L_8011B214:;
  c->r[8]=c->r[8]+0x00000001u; // 8011B214
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B1F4; } // 8011B218
L_8011B21C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8011B21C
  if (crb(c,2)) { goto L_8011B244; } // 8011B220
  cmps(c,0,(int32_t)c->r[4],0); // 8011B224
  if (crb(c,2)) { goto L_8011B244; } // 8011B228
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 8011B22C
  c->r[3]=0u+0x00000001u; // 8011B230
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B234
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B238
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B23C
  goto L_8011BDE0; // 8011B240
L_8011B244:;
  c->r[3]=0u+0x00000000u; // 8011B244
  goto L_8011BDE0; // 8011B248
L_8011B24C:;
  c->r[4]=R32(c->r[31]+0x000000A0u); // 8011B24C
  c->r[0]=R32(c->r[31]+0x000000A4u); // 8011B250
  c->r[3]=R32(c->r[31]+0x000000A8u); // 8011B254
  c->r[4]=c->r[4]+c->r[0]; // 8011B258
  c->r[0]=R32(c->r[31]+0x000000ACu); // 8011B25C
  c->r[4]=c->r[4]+c->r[3]; // 8011B260
  c->r[3]=R32(c->r[31]+0x000000B0u); // 8011B264
  c->r[4]=c->r[4]+c->r[0]; // 8011B268
  c->r[0]=R32(c->r[31]+0x000000B4u); // 8011B26C
  c->r[4]=c->r[4]+c->r[3]; // 8011B270
  c->r[3]=R32(c->r[6]+0x00000008u); // 8011B274
  c->r[4]=c->r[4]+c->r[0]; // 8011B278
  c->r[0]=R32(c->r[31]+0x000000B8u); // 8011B27C
  W32(c->r[1]+0x00000044u,c->r[3]); // 8011B280
  c->r[4]=c->r[4]+c->r[0]; // 8011B284
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B288
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011B28C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B290
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B294
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B298
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B29C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B2A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B2A4
  fcmp(c,0,c->f[3],c->f[0]); // 8011B2A8
  if (!crb(c,0)) { goto L_8011B2B4; } // 8011B2AC
  goto L_8011B2D0; // 8011B2B0
L_8011B2B4:;
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011B2B4
  W32(c->r[1]+0x00000044u,c->r[3]); // 8011B2B8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B2BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B2C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B2C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B2C8
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B2CC
L_8011B2D0:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B2D0
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B2D4
  cmpu(c,0,c->r[4],c->r[0]); // 8011B2D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B2DC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B2E0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B2E4
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B2E8
  if (crb(c,0)) { goto L_8011B2F8; } // 8011B2EC
  c->r[3]=0u+0x00000001u; // 8011B2F0
  goto L_8011BDE0; // 8011B2F4
L_8011B2F8:;
  c->r[3]=0u+0x00000000u; // 8011B2F8
  goto L_8011BDE0; // 8011B2FC
L_8011B300:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011B300
  if (crb(c,2)) { goto L_8011B3CC; } // 8011B304
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 8011B308
  c->r[5]=0u+0x00000000u; // 8011B30C
  {uint32_t ea=c->r[2]+0xFFFF8A18u; c->f[30]=c->ps1[30]=RF32(ea);} // 8011B310
  c->r[4]=c->r[4]+0x00000164u; // 8011B314
  c->ctr=c->r[3]; // 8011B318
  cmpu(c,0,c->r[3],0x00000000u); // 8011B31C
  if (!crb(c,1)) { goto L_8011B34C; } // 8011B320
L_8011B324:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 8011B324
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8011B328
  c->r[3]=c->r[4]+c->r[0]; // 8011B32C
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011B330
  fcmp(c,0,c->f[30],c->f[0]); // 8011B334
  if (!crb(c,1)) { goto L_8011B340; } // 8011B338
  goto L_8011B344; // 8011B33C
L_8011B340:;
  c->f[30]=c->f[0]; // 8011B340
L_8011B344:;
  c->r[5]=c->r[5]+0x00000001u; // 8011B344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B324; } // 8011B348
L_8011B34C:;
  c->f[1]=c->f[30]; // 8011B34C
  c->lr=0x8011B354u; f_803ADC14(c); // 8011B350
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011B354
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B358
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[1]=RF64(ea);} // 8011B35C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B360
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011B364
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011B368
  W32(c->r[31]+0x00001C58u,c->r[3]); // 8011B36C
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[0]); // 8011B370
  fcmp(c,0,c->f[2],c->f[0]); // 8011B374
  if (!crb(c,0)) { goto L_8011B380; } // 8011B378
  goto L_8011B390; // 8011B37C
L_8011B380:;
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B380
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B384
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011B388
  c->f[2]=c->ps1[2]=S(c->f[30]/c->f[0]); // 8011B38C
L_8011B390:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011B390
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8011B394
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B398
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[1]=RF64(ea);} // 8011B39C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B3A0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8011B3A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011B3A8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8011B3AC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B3B0
  fcmp(c,0,c->f[30],c->f[0]); // 8011B3B4
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B3B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8011B3BC
  if (!crb(c,2)) { goto L_8011B3CC; } // 8011B3C0
  c->r[3]=0u+0x00000001u; // 8011B3C4
  goto L_8011BDE0; // 8011B3C8
L_8011B3CC:;
  c->r[3]=0u+0x00000000u; // 8011B3CC
  goto L_8011BDE0; // 8011B3D0
L_8011B3D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011B3D4
  c->r[7]=0u+0x00000000u; // 8011B3D8
  c->r[8]=0u+0x00000000u; // 8011B3DC
  if (crb(c,2)) { goto L_8011B48C; } // 8011B3E0
  cmpu(c,0,c->r[3],0x00000008u); // 8011B3E4
  c->r[0]=c->r[3]+0x000000F8u; // 8011B3E8
  if (!crb(c,1)) { goto L_8011B45C; } // 8011B3EC
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B3F0
  c->r[0]=c->r[4]+0x00000007u; // 8011B3F4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8011B3F8
  c->ctr=c->r[0]; // 8011B3FC
  cmpu(c,0,c->r[4],0x00000000u); // 8011B400
  if (!crb(c,1)) { goto L_8011B45C; } // 8011B404
L_8011B408:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 8011B408
  c->r[8]=c->r[8]+0x00000008u; // 8011B40C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B410
  c->r[5]=c->r[31]+c->r[0]; // 8011B414
  c->r[4]=R32(c->r[5]+0x000001ACu); // 8011B418
  c->r[0]=R32(c->r[5]+0x00000234u); // 8011B41C
  c->r[7]=c->r[7]+c->r[4]; // 8011B420
  c->r[4]=R32(c->r[5]+0x000002BCu); // 8011B424
  c->r[7]=c->r[7]+c->r[0]; // 8011B428
  c->r[0]=R32(c->r[5]+0x00000344u); // 8011B42C
  c->r[7]=c->r[7]+c->r[4]; // 8011B430
  c->r[4]=R32(c->r[5]+0x000003CCu); // 8011B434
  c->r[7]=c->r[7]+c->r[0]; // 8011B438
  c->r[0]=R32(c->r[5]+0x00000454u); // 8011B43C
  c->r[7]=c->r[7]+c->r[4]; // 8011B440
  c->r[4]=R32(c->r[5]+0x000004DCu); // 8011B444
  c->r[7]=c->r[7]+c->r[0]; // 8011B448
  c->r[0]=R32(c->r[5]+0x00000564u); // 8011B44C
  c->r[7]=c->r[7]+c->r[4]; // 8011B450
  c->r[7]=c->r[7]+c->r[0]; // 8011B454
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B408; } // 8011B458
L_8011B45C:;
  c->r[4]=rotl(c->r[8],0)&0x000000FFu; // 8011B45C
  c->r[0]=c->r[3]-c->r[4]; // 8011B460
  c->ctr=c->r[0]; // 8011B464
  cmpu(c,0,c->r[4],c->r[3]); // 8011B468
  if (!crb(c,0)) { goto L_8011B48C; } // 8011B46C
L_8011B470:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 8011B470
  c->r[8]=c->r[8]+0x00000001u; // 8011B474
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B478
  c->r[3]=c->r[31]+c->r[0]; // 8011B47C
  c->r[0]=R32(c->r[3]+0x000001ACu); // 8011B480
  c->r[7]=c->r[7]+c->r[0]; // 8011B484
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B470; } // 8011B488
L_8011B48C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B48C
  W32(c->r[1]+0x00000044u,c->r[7]); // 8011B490
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B494
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B498
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B49C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B4A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B4A4
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B4A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B4AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B4B0
  fcmp(c,0,c->f[3],c->f[0]); // 8011B4B4
  if (!crb(c,0)) { goto L_8011B4C0; } // 8011B4B8
  goto L_8011B4DC; // 8011B4BC
L_8011B4C0:;
  W32(c->r[1]+0x00000044u,c->r[7]); // 8011B4C0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B4C4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B4C8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B4CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B4D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B4D4
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B4D8
L_8011B4DC:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B4DC
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B4E0
  cmpu(c,0,c->r[7],c->r[0]); // 8011B4E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B4E8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B4EC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B4F0
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B4F4
  if (crb(c,0)) { goto L_8011B504; } // 8011B4F8
  c->r[3]=0u+0x00000001u; // 8011B4FC
  goto L_8011BDE0; // 8011B500
L_8011B504:;
  c->r[3]=0u+0x00000000u; // 8011B504
  goto L_8011BDE0; // 8011B508
L_8011B50C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011B50C
  c->r[7]=0u+0x00000000u; // 8011B510
  c->r[8]=0u+0x00000000u; // 8011B514
  if (crb(c,2)) { goto L_8011B5C4; } // 8011B518
  cmpu(c,0,c->r[3],0x00000008u); // 8011B51C
  c->r[0]=c->r[3]+0x000000F8u; // 8011B520
  if (!crb(c,1)) { goto L_8011B594; } // 8011B524
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B528
  c->r[0]=c->r[4]+0x00000007u; // 8011B52C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8011B530
  c->ctr=c->r[0]; // 8011B534
  cmpu(c,0,c->r[4],0x00000000u); // 8011B538
  if (!crb(c,1)) { goto L_8011B594; } // 8011B53C
L_8011B540:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 8011B540
  c->r[8]=c->r[8]+0x00000008u; // 8011B544
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B548
  c->r[5]=c->r[31]+c->r[0]; // 8011B54C
  c->r[4]=R32(c->r[5]+0x00000194u); // 8011B550
  c->r[0]=R32(c->r[5]+0x0000021Cu); // 8011B554
  c->r[7]=c->r[7]+c->r[4]; // 8011B558
  c->r[4]=R32(c->r[5]+0x000002A4u); // 8011B55C
  c->r[7]=c->r[7]+c->r[0]; // 8011B560
  c->r[0]=R32(c->r[5]+0x0000032Cu); // 8011B564
  c->r[7]=c->r[7]+c->r[4]; // 8011B568
  c->r[4]=R32(c->r[5]+0x000003B4u); // 8011B56C
  c->r[7]=c->r[7]+c->r[0]; // 8011B570
  c->r[0]=R32(c->r[5]+0x0000043Cu); // 8011B574
  c->r[7]=c->r[7]+c->r[4]; // 8011B578
  c->r[4]=R32(c->r[5]+0x000004C4u); // 8011B57C
  c->r[7]=c->r[7]+c->r[0]; // 8011B580
  c->r[0]=R32(c->r[5]+0x0000054Cu); // 8011B584
  c->r[7]=c->r[7]+c->r[4]; // 8011B588
  c->r[7]=c->r[7]+c->r[0]; // 8011B58C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B540; } // 8011B590
L_8011B594:;
  c->r[4]=rotl(c->r[8],0)&0x000000FFu; // 8011B594
  c->r[0]=c->r[3]-c->r[4]; // 8011B598
  c->ctr=c->r[0]; // 8011B59C
  cmpu(c,0,c->r[4],c->r[3]); // 8011B5A0
  if (!crb(c,0)) { goto L_8011B5C4; } // 8011B5A4
L_8011B5A8:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 8011B5A8
  c->r[8]=c->r[8]+0x00000001u; // 8011B5AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B5B0
  c->r[3]=c->r[31]+c->r[0]; // 8011B5B4
  c->r[0]=R32(c->r[3]+0x00000194u); // 8011B5B8
  c->r[7]=c->r[7]+c->r[0]; // 8011B5BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B5A8; } // 8011B5C0
L_8011B5C4:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B5C4
  W32(c->r[1]+0x00000044u,c->r[7]); // 8011B5C8
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B5CC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B5D0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B5D4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B5D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B5DC
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B5E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B5E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B5E8
  fcmp(c,0,c->f[3],c->f[0]); // 8011B5EC
  if (!crb(c,0)) { goto L_8011B5F8; } // 8011B5F0
  goto L_8011B614; // 8011B5F4
L_8011B5F8:;
  W32(c->r[1]+0x00000044u,c->r[7]); // 8011B5F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B5FC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B600
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B604
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B608
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B60C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B610
L_8011B614:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B614
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B618
  cmpu(c,0,c->r[7],c->r[0]); // 8011B61C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B620
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B624
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B628
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B62C
  if (crb(c,0)) { goto L_8011B63C; } // 8011B630
  c->r[3]=0u+0x00000001u; // 8011B634
  goto L_8011BDE0; // 8011B638
L_8011B63C:;
  c->r[3]=0u+0x00000000u; // 8011B63C
  goto L_8011BDE0; // 8011B640
L_8011B644:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011B644
  c->r[7]=0u+0x00000000u; // 8011B648
  c->r[8]=0u+0x00000000u; // 8011B64C
  if (crb(c,2)) { goto L_8011B6FC; } // 8011B650
  cmpu(c,0,c->r[3],0x00000008u); // 8011B654
  c->r[0]=c->r[3]+0x000000F8u; // 8011B658
  if (!crb(c,1)) { goto L_8011B6CC; } // 8011B65C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011B660
  c->r[0]=c->r[4]+0x00000007u; // 8011B664
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8011B668
  c->ctr=c->r[0]; // 8011B66C
  cmpu(c,0,c->r[4],0x00000000u); // 8011B670
  if (!crb(c,1)) { goto L_8011B6CC; } // 8011B674
L_8011B678:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 8011B678
  c->r[8]=c->r[8]+0x00000008u; // 8011B67C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B680
  c->r[5]=c->r[31]+c->r[0]; // 8011B684
  c->r[4]=R32(c->r[5]+0x00000198u); // 8011B688
  c->r[0]=R32(c->r[5]+0x00000220u); // 8011B68C
  c->r[7]=c->r[7]+c->r[4]; // 8011B690
  c->r[4]=R32(c->r[5]+0x000002A8u); // 8011B694
  c->r[7]=c->r[7]+c->r[0]; // 8011B698
  c->r[0]=R32(c->r[5]+0x00000330u); // 8011B69C
  c->r[7]=c->r[7]+c->r[4]; // 8011B6A0
  c->r[4]=R32(c->r[5]+0x000003B8u); // 8011B6A4
  c->r[7]=c->r[7]+c->r[0]; // 8011B6A8
  c->r[0]=R32(c->r[5]+0x00000440u); // 8011B6AC
  c->r[7]=c->r[7]+c->r[4]; // 8011B6B0
  c->r[4]=R32(c->r[5]+0x000004C8u); // 8011B6B4
  c->r[7]=c->r[7]+c->r[0]; // 8011B6B8
  c->r[0]=R32(c->r[5]+0x00000550u); // 8011B6BC
  c->r[7]=c->r[7]+c->r[4]; // 8011B6C0
  c->r[7]=c->r[7]+c->r[0]; // 8011B6C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B678; } // 8011B6C8
L_8011B6CC:;
  c->r[4]=rotl(c->r[8],0)&0x000000FFu; // 8011B6CC
  c->r[0]=c->r[3]-c->r[4]; // 8011B6D0
  c->ctr=c->r[0]; // 8011B6D4
  cmpu(c,0,c->r[4],c->r[3]); // 8011B6D8
  if (!crb(c,0)) { goto L_8011B6FC; } // 8011B6DC
L_8011B6E0:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 8011B6E0
  c->r[8]=c->r[8]+0x00000001u; // 8011B6E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B6E8
  c->r[3]=c->r[31]+c->r[0]; // 8011B6EC
  c->r[0]=R32(c->r[3]+0x00000198u); // 8011B6F0
  c->r[7]=c->r[7]+c->r[0]; // 8011B6F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B6E0; } // 8011B6F8
L_8011B6FC:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B6FC
  W32(c->r[1]+0x00000044u,c->r[7]); // 8011B700
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B704
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B708
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B70C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B710
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B714
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B718
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B71C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B720
  fcmp(c,0,c->f[3],c->f[0]); // 8011B724
  if (!crb(c,0)) { goto L_8011B730; } // 8011B728
  goto L_8011B74C; // 8011B72C
L_8011B730:;
  W32(c->r[1]+0x00000044u,c->r[7]); // 8011B730
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B734
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B738
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B73C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B740
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B744
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B748
L_8011B74C:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B74C
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B750
  cmpu(c,0,c->r[7],c->r[0]); // 8011B754
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B758
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B75C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B760
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B764
  if (crb(c,0)) { goto L_8011B774; } // 8011B768
  c->r[3]=0u+0x00000001u; // 8011B76C
  goto L_8011BDE0; // 8011B770
L_8011B774:;
  c->r[3]=0u+0x00000000u; // 8011B774
  goto L_8011BDE0; // 8011B778
L_8011B77C:;
  c->r[4]=0u+0x00000000u; // 8011B77C
  c->r[5]=0u+0x00000000u; // 8011B780
  c->ctr=c->r[3]; // 8011B784
  cmpu(c,0,c->r[3],0x00000000u); // 8011B788
  if (!crb(c,1)) { goto L_8011B7B4; } // 8011B78C
L_8011B790:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 8011B790
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B794
  c->r[3]=c->r[31]+c->r[0]; // 8011B798
  c->r[0]=R32(c->r[3]+0x000001A4u); // 8011B79C
  cmpu(c,0,c->r[0],c->r[4]); // 8011B7A0
  if (!crb(c,1)) { goto L_8011B7AC; } // 8011B7A4
  c->r[4]=c->r[0]|c->r[0]; // 8011B7A8
L_8011B7AC:;
  c->r[5]=c->r[5]+0x00000001u; // 8011B7AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B790; } // 8011B7B0
L_8011B7B4:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B7B4
  W32(c->r[1]+0x00000044u,c->r[4]); // 8011B7B8
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B7BC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B7C0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B7C4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B7C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B7CC
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B7D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B7D4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B7D8
  fcmp(c,0,c->f[3],c->f[0]); // 8011B7DC
  if (!crb(c,0)) { goto L_8011B7E8; } // 8011B7E0
  goto L_8011B804; // 8011B7E4
L_8011B7E8:;
  W32(c->r[1]+0x00000044u,c->r[4]); // 8011B7E8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B7EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8011B7F0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B7F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B7F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B7FC
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B800
L_8011B804:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B804
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B808
  cmpu(c,0,c->r[4],c->r[0]); // 8011B80C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B810
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B814
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B818
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B81C
  if (crb(c,0)) { goto L_8011B82C; } // 8011B820
  c->r[3]=0u+0x00000001u; // 8011B824
  goto L_8011BDE0; // 8011B828
L_8011B82C:;
  c->r[3]=0u+0x00000000u; // 8011B82C
  goto L_8011BDE0; // 8011B830
L_8011B834:;
  {uint32_t ea=c->r[2]+0xFFFF8A18u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B834
  c->r[4]=0u+0x00000000u; // 8011B838
  c->ctr=c->r[3]; // 8011B83C
  cmpu(c,0,c->r[3],0x00000000u); // 8011B840
  if (!crb(c,1)) { goto L_8011B86C; } // 8011B844
L_8011B848:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8011B848
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011B84C
  c->r[3]=c->r[31]+c->r[0]; // 8011B850
  {uint32_t ea=c->r[3]+0x000001A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011B854
  fcmp(c,0,c->f[0],c->f[3]); // 8011B858
  if (!crb(c,1)) { goto L_8011B864; } // 8011B85C
  c->f[3]=c->f[0]; // 8011B860
L_8011B864:;
  c->r[4]=c->r[4]+0x00000001u; // 8011B864
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011B848; } // 8011B868
L_8011B86C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B86C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B870
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[1]=RF64(ea);} // 8011B874
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B878
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011B87C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011B880
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 8011B884
  fcmp(c,0,c->f[2],c->f[0]); // 8011B888
  if (!crb(c,0)) { goto L_8011B894; } // 8011B88C
  goto L_8011B8A4; // 8011B890
L_8011B894:;
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8011B894
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8011B898
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011B89C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[0]); // 8011B8A0
L_8011B8A4:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B8A4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8011B8A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B8AC
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[1]=RF64(ea);} // 8011B8B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B8B4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8011B8B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011B8BC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8011B8C0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011B8C4
  fcmp(c,0,c->f[3],c->f[0]); // 8011B8C8
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011B8CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8011B8D0
  if (!crb(c,2)) { goto L_8011B8E0; } // 8011B8D4
  c->r[3]=0u+0x00000001u; // 8011B8D8
  goto L_8011BDE0; // 8011B8DC
L_8011B8E0:;
  c->r[3]=0u+0x00000000u; // 8011B8E0
  goto L_8011BDE0; // 8011B8E4
L_8011B8E8:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B8E8
  c->r[3]=R8(c->r[31]+0x0000002Eu); // 8011B8EC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011B8F0
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B8F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B8F8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B8FC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B900
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B904
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B908
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B90C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B910
  fcmp(c,0,c->f[3],c->f[0]); // 8011B914
  if (!crb(c,0)) { goto L_8011B920; } // 8011B918
  goto L_8011B93C; // 8011B91C
L_8011B920:;
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011B920
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B924
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B928
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B92C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B930
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B934
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B938
L_8011B93C:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B93C
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B940
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B944
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B948
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 8011B94C
  W8(c->r[31]+0x00001C60u,c->r[3]); // 8011B950
  c->r[3]=R8(c->r[31]+0x0000002Eu); // 8011B954
  cmpu(c,0,c->r[3],c->r[0]); // 8011B958
  if (crb(c,0)) { goto L_8011B968; } // 8011B95C
  c->r[3]=0u+0x00000001u; // 8011B960
  goto L_8011BDE0; // 8011B964
L_8011B968:;
  c->r[3]=0u+0x00000000u; // 8011B968
  goto L_8011BDE0; // 8011B96C
L_8011B970:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B970
  c->r[3]=R8(c->r[31]+0x0000002Eu); // 8011B974
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011B978
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011B97C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B980
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B984
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B988
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B98C
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011B990
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B994
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011B998
  fcmp(c,0,c->f[3],c->f[0]); // 8011B99C
  if (!crb(c,0)) { goto L_8011B9A8; } // 8011B9A0
  goto L_8011B9C4; // 8011B9A4
L_8011B9A8:;
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011B9A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011B9AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011B9B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011B9B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011B9B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011B9BC
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011B9C0
L_8011B9C4:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011B9C4
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011B9C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011B9CC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011B9D0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 8011B9D4
  W8(c->r[31]+0x00001C60u,c->r[3]); // 8011B9D8
  c->r[3]=R8(c->r[31]+0x00000036u); // 8011B9DC
  cmpu(c,0,c->r[3],c->r[0]); // 8011B9E0
  if (crb(c,0)) { goto L_8011B9F0; } // 8011B9E4
  c->r[3]=0u+0x00000001u; // 8011B9E8
  goto L_8011BDE0; // 8011B9EC
L_8011B9F0:;
  c->r[3]=0u+0x00000000u; // 8011B9F0
  goto L_8011BDE0; // 8011B9F4
L_8011B9F8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8011B9F8
  if (crb(c,2)) { goto L_8011BA80; } // 8011B9FC
  c->r[3]=c->r[31]|c->r[31]; // 8011BA00
  c->lr=0x8011BA08u; f_8014B120(c); // 8011BA04
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011BA08
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011BA0C
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011BA10
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011BA14
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BA18
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BA1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BA20
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011BA24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BA28
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011BA2C
  fcmp(c,0,c->f[3],c->f[0]); // 8011BA30
  if (!crb(c,0)) { goto L_8011BA3C; } // 8011BA34
  goto L_8011BA58; // 8011BA38
L_8011BA3C:;
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011BA3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011BA40
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BA44
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BA48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BA4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BA50
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011BA54
L_8011BA58:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011BA58
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011BA5C
  cmpu(c,0,c->r[3],c->r[0]); // 8011BA60
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011BA64
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011BA68
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011BA6C
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011BA70
  if (crb(c,0)) { goto L_8011BA80; } // 8011BA74
  c->r[3]=0u+0x00000001u; // 8011BA78
  goto L_8011BDE0; // 8011BA7C
L_8011BA80:;
  c->r[3]=0u+0x00000000u; // 8011BA80
  goto L_8011BDE0; // 8011BA84
L_8011BA88:;
  cmps(c,0,(int32_t)c->r[5],0); // 8011BA88
  if (!crb(c,2)) { goto L_8011BB10; } // 8011BA8C
  c->r[3]=c->r[31]|c->r[31]; // 8011BA90
  c->lr=0x8011BA98u; f_8014B120(c); // 8011BA94
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011BA98
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011BA9C
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011BAA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011BAA4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BAA8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BAAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BAB0
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011BAB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BAB8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011BABC
  fcmp(c,0,c->f[3],c->f[0]); // 8011BAC0
  if (!crb(c,0)) { goto L_8011BACC; } // 8011BAC4
  goto L_8011BAE8; // 8011BAC8
L_8011BACC:;
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8011BACC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011BAD0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BAD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BAD8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BADC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BAE0
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011BAE4
L_8011BAE8:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011BAE8
  c->r[0]=R32(c->r[30]+0x00000008u); // 8011BAEC
  cmpu(c,0,c->r[3],c->r[0]); // 8011BAF0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011BAF4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011BAF8
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011BAFC
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011BB00
  if (crb(c,0)) { goto L_8011BB10; } // 8011BB04
  c->r[3]=0u+0x00000001u; // 8011BB08
  goto L_8011BDE0; // 8011BB0C
L_8011BB10:;
  c->r[3]=0u+0x00000000u; // 8011BB10
  goto L_8011BDE0; // 8011BB14
L_8011BB18:;
  c->r[7]=R32(c->r[13]+0xFFFFE12Cu); // 8011BB18
  c->r[9]=0u+0x00000000u; // 8011BB1C
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)1496); // 8011BB20
  c->r[0]=R8(c->r[7]+0x0000014Cu); // 8011BB24
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011BB28
  c->r[5]=c->r[31]+c->r[4]; // 8011BB2C
  c->r[3]=c->r[5]+c->r[8]; // 8011BB30
  c->r[0]=R32(c->r[3]+0x00000388u); // 8011BB34
  cmpu(c,0,c->r[9],c->r[0]); // 8011BB38
  if (!crb(c,1)) { goto L_8011BB48; } // 8011BB3C
  c->r[4]=0u+0x00000000u; // 8011BB40
  goto L_8011BB54; // 8011BB44
L_8011BB48:;
  c->r[0]=c->r[31]+c->r[8]; // 8011BB48
  c->r[3]=c->r[4]+c->r[0]; // 8011BB4C
  c->r[4]=R32(c->r[3]+0x00000388u); // 8011BB50
L_8011BB54:;
  c->r[0]=0u+0x00000001u; // 8011BB54
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)1496); // 8011BB58
  c->r[3]=c->r[5]+c->r[8]; // 8011BB5C
  c->r[0]=R32(c->r[3]+0x00000388u); // 8011BB60
  cmpu(c,0,c->r[4],c->r[0]); // 8011BB64
  if (!crb(c,1)) { goto L_8011BB70; } // 8011BB68
  goto L_8011BB84; // 8011BB6C
L_8011BB70:;
  c->r[3]=R8(c->r[7]+0x0000014Cu); // 8011BB70
  c->r[0]=c->r[31]+c->r[8]; // 8011BB74
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 8011BB78
  c->r[3]=c->r[3]+c->r[0]; // 8011BB7C
  c->r[4]=R32(c->r[3]+0x00000388u); // 8011BB80
L_8011BB84:;
  c->r[0]=0u+0x00000002u; // 8011BB84
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)1496); // 8011BB88
  c->r[3]=c->r[5]+c->r[8]; // 8011BB8C
  c->r[0]=R32(c->r[3]+0x00000388u); // 8011BB90
  cmpu(c,0,c->r[4],c->r[0]); // 8011BB94
  if (!crb(c,1)) { goto L_8011BBA0; } // 8011BB98
  goto L_8011BBB4; // 8011BB9C
L_8011BBA0:;
  c->r[3]=R8(c->r[7]+0x0000014Cu); // 8011BBA0
  c->r[0]=c->r[31]+c->r[8]; // 8011BBA4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 8011BBA8
  c->r[3]=c->r[3]+c->r[0]; // 8011BBAC
  c->r[4]=R32(c->r[3]+0x00000388u); // 8011BBB0
L_8011BBB4:;
  c->r[0]=0u+0x00000003u; // 8011BBB4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)1496); // 8011BBB8
  c->r[3]=c->r[5]+c->r[8]; // 8011BBBC
  c->r[0]=R32(c->r[3]+0x00000388u); // 8011BBC0
  cmpu(c,0,c->r[4],c->r[0]); // 8011BBC4
  if (!crb(c,1)) { goto L_8011BBD0; } // 8011BBC8
  goto L_8011BBE4; // 8011BBCC
L_8011BBD0:;
  c->r[3]=R8(c->r[7]+0x0000014Cu); // 8011BBD0
  c->r[0]=c->r[31]+c->r[8]; // 8011BBD4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 8011BBD8
  c->r[3]=c->r[3]+c->r[0]; // 8011BBDC
  c->r[4]=R32(c->r[3]+0x00000388u); // 8011BBE0
L_8011BBE4:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011BBE4
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011BBE8
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011BBEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011BBF0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BBF4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BBF8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BBFC
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011BC00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BC04
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011BC08
  fcmp(c,0,c->f[3],c->f[0]); // 8011BC0C
  if (!crb(c,0)) { goto L_8011BC18; } // 8011BC10
  goto L_8011BC34; // 8011BC14
L_8011BC18:;
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011BC18
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011BC1C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BC20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BC24
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BC28
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BC2C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011BC30
L_8011BC34:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011BC34
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011BC38
  cmpu(c,0,c->r[4],c->r[0]); // 8011BC3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011BC40
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011BC44
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011BC48
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011BC4C
  if (crb(c,0)) { goto L_8011BC5C; } // 8011BC50
  c->r[3]=0u+0x00000001u; // 8011BC54
  goto L_8011BDE0; // 8011BC58
L_8011BC5C:;
  c->r[3]=0u+0x00000000u; // 8011BC5C
  goto L_8011BDE0; // 8011BC60
L_8011BC64:;
  c->r[3]=0u+0x00000000u; // 8011BC64
  goto L_8011BDE0; // 8011BC68
L_8011BC6C:;
  c->r[4]=R32(c->r[31]+0x000001C0u); // 8011BC6C
  c->r[3]=R32(c->r[31]+0x000001C4u); // 8011BC70
  c->r[0]=R32(c->r[31]+0x00000248u); // 8011BC74
  c->r[4]=c->r[4]+c->r[3]; // 8011BC78
  c->r[3]=R32(c->r[31]+0x0000024Cu); // 8011BC7C
  c->r[4]=c->r[4]+c->r[0]; // 8011BC80
  c->r[0]=R32(c->r[31]+0x000002D0u); // 8011BC84
  c->r[4]=c->r[4]+c->r[3]; // 8011BC88
  c->r[3]=R32(c->r[31]+0x000002D4u); // 8011BC8C
  c->r[4]=c->r[4]+c->r[0]; // 8011BC90
  c->r[0]=R32(c->r[31]+0x00000358u); // 8011BC94
  c->r[4]=c->r[4]+c->r[3]; // 8011BC98
  c->r[3]=R32(c->r[6]+0x00000008u); // 8011BC9C
  c->r[4]=c->r[4]+c->r[0]; // 8011BCA0
  c->r[0]=R32(c->r[31]+0x0000035Cu); // 8011BCA4
  W32(c->r[1]+0x00000044u,c->r[3]); // 8011BCA8
  c->r[4]=c->r[4]+c->r[0]; // 8011BCAC
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011BCB0
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011BCB4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BCB8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BCBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BCC0
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011BCC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BCC8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011BCCC
  fcmp(c,0,c->f[3],c->f[0]); // 8011BCD0
  if (!crb(c,0)) { goto L_8011BCDC; } // 8011BCD4
  goto L_8011BCF8; // 8011BCD8
L_8011BCDC:;
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011BCDC
  W32(c->r[1]+0x00000044u,c->r[3]); // 8011BCE0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BCE4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BCE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BCEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BCF0
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011BCF4
L_8011BCF8:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011BCF8
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011BCFC
  cmpu(c,0,c->r[4],c->r[0]); // 8011BD00
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011BD04
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011BD08
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011BD0C
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011BD10
  if (crb(c,0)) { goto L_8011BD20; } // 8011BD14
  c->r[3]=0u+0x00000001u; // 8011BD18
  goto L_8011BDE0; // 8011BD1C
L_8011BD20:;
  c->r[3]=0u+0x00000000u; // 8011BD20
  goto L_8011BDE0; // 8011BD24
L_8011BD28:;
  c->r[4]=R32(c->r[31]+0x000000BCu); // 8011BD28
  c->r[0]=R32(c->r[31]+0x000000C0u); // 8011BD2C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 8011BD30
  c->r[4]=c->r[4]+c->r[0]; // 8011BD34
  c->r[0]=R32(c->r[31]+0x000000C8u); // 8011BD38
  c->r[4]=c->r[4]+c->r[3]; // 8011BD3C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 8011BD40
  c->r[4]=c->r[4]+c->r[0]; // 8011BD44
  c->r[0]=R32(c->r[31]+0x000000D0u); // 8011BD48
  c->r[4]=c->r[4]+c->r[3]; // 8011BD4C
  c->r[3]=R32(c->r[6]+0x00000008u); // 8011BD50
  c->r[4]=c->r[4]+c->r[0]; // 8011BD54
  c->r[0]=R32(c->r[31]+0x000000D4u); // 8011BD58
  W32(c->r[1]+0x00000044u,c->r[3]); // 8011BD5C
  c->r[4]=c->r[4]+c->r[0]; // 8011BD60
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011BD64
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011BD68
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BD6C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BD70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BD74
  {uint32_t ea=c->r[2]+0xFFFF8A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011BD78
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BD7C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011BD80
  fcmp(c,0,c->f[3],c->f[0]); // 8011BD84
  if (!crb(c,0)) { goto L_8011BD90; } // 8011BD88
  goto L_8011BDAC; // 8011BD8C
L_8011BD90:;
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8011BD90
  W32(c->r[1]+0x00000044u,c->r[3]); // 8011BD94
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8011BD98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8011BD9C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011BDA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011BDA4
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011BDA8
L_8011BDAC:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[3]); // 8011BDAC
  c->r[0]=R32(c->r[6]+0x00000008u); // 8011BDB0
  cmpu(c,0,c->r[4],c->r[0]); // 8011BDB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011BDB8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 8011BDBC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8011BDC0
  W8(c->r[31]+0x00001C60u,c->r[0]); // 8011BDC4
  if (crb(c,0)) { goto L_8011BDD4; } // 8011BDC8
  c->r[3]=0u+0x00000001u; // 8011BDCC
  goto L_8011BDE0; // 8011BDD0
L_8011BDD4:;
  c->r[3]=0u+0x00000000u; // 8011BDD4
  goto L_8011BDE0; // 8011BDD8
L_8011BDDC:;
  c->r[3]=0u+0x00000000u; // 8011BDDC
L_8011BDE0:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8011BDE0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8011BDE4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8011BDE8
  c->r[11]=c->r[1]+0x00000070u; // 8011BDEC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8011BDF0
  c->lr=0x8011BDF8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011BDF4
  c->r[0]=R32(c->r[1]+0x00000094u); // 8011BDF8
  c->lr=c->r[0]; // 8011BDFC
  c->r[1]=c->r[1]+0x00000090u; // 8011BE00
  return; // 8011BE04
}

// fn_8011BE08
void f_8011BE08(Ctx* __restrict c) {
  trace_call(0x8011BE08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011BE08
  c->r[0]=c->lr; // 8011BE0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011BE10
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8011BE14
  c->r[25]=c->r[3]|c->r[3]; // 8011BE18
  c->r[26]=c->r[4]|c->r[4]; // 8011BE1C
  c->r[27]=c->r[5]|c->r[5]; // 8011BE20
  c->r[28]=c->r[6]|c->r[6]; // 8011BE24
  c->r[7]=R32(c->r[13]+0xFFFFE12Cu); // 8011BE28
  c->r[30]=R32(c->r[7]+0x0000015Cu); // 8011BE2C
  c->r[3]=c->r[30]|c->r[30]; // 8011BE30
  c->lr=0x8011BE38u; f_8014AD78(c); // 8011BE34
  c->r[5]=R32(c->r[25]+0x0000004Cu); // 8011BE38
  c->r[31]=R32(c->r[5]+0x00000078u); // 8011BE3C
  cmps(c,0,(int32_t)c->r[31],0); // 8011BE40
  if (crb(c,2)) { goto L_8011BE4C; } // 8011BE44
  goto L_8011BE7C; // 8011BE48
L_8011BE4C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011BE4C
  cmps(c,0,(int32_t)c->r[3],0); // 8011BE50
  if (crb(c,2)) { goto L_8011BE74; } // 8011BE54
  c->r[4]=R32(c->r[5]+0x00000070u); // 8011BE58
  c->r[6]=0u+0x00000000u; // 8011BE5C
  c->r[8]=R32(c->r[5]+0x00000074u); // 8011BE60
  c->r[5]=0u+0x00000000u; // 8011BE64
  c->r[7]=0u+0x00000000u; // 8011BE68
  c->lr=0x8011BE70u; f_802BA9F4(c); // 8011BE6C
  goto L_8011BE78; // 8011BE70
L_8011BE74:;
  c->r[3]=0u+0x00000000u; // 8011BE74
L_8011BE78:;
  c->r[31]=c->r[3]|c->r[3]; // 8011BE78
L_8011BE7C:;
  c->r[29]=0u+0x00000000u; // 8011BE7C
L_8011BE80:;
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8011BE80
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 8011BE84
  c->r[3]=c->r[30]|c->r[30]; // 8011BE88
  c->r[4]=c->r[4]+c->r[0]; // 8011BE8C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8011BE90
  c->r[24]=c->r[4]+0x0000001Cu; // 8011BE94
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011BE98
  c->lr=0x8011BEA0u; f_8014B15C(c); // 8011BE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8011BEA0
  if (!crb(c,2)) { goto L_8011BF84; } // 8011BEA4
  c->r[12]=R32(c->r[25]+0x000000B4u); // 8011BEA8
  c->r[3]=c->r[25]|c->r[25]; // 8011BEAC
  c->r[4]=c->r[26]|c->r[26]; // 8011BEB0
  c->r[5]=c->r[27]|c->r[27]; // 8011BEB4
  c->r[12]=R32(c->r[12]+0x00000100u); // 8011BEB8
  c->r[6]=c->r[24]|c->r[24]; // 8011BEBC
  c->ctr=c->r[12]; // 8011BEC0
  if (true) { c->lr=0x8011BEC8u; dispatch(c,c->ctr); } // 8011BEC4
  cmps(c,0,(int32_t)c->r[3],0); // 8011BEC8
  if (crb(c,2)) { goto L_8011BF60; } // 8011BECC
  c->r[4]=R32(c->r[30]+0x00001C5Cu); // 8011BED0
  c->r[3]=c->r[30]|c->r[30]; // 8011BED4
  c->r[0]=R32(c->r[24]+0x00000014u); // 8011BED8
  c->r[0]=c->r[4]+c->r[0]; // 8011BEDC
  W32(c->r[30]+0x00001C5Cu,c->r[0]); // 8011BEE0
  c->r[4]=R32(c->r[24]+0x00000014u); // 8011BEE4
  c->lr=0x8011BEECu; f_8014B0C4(c); // 8011BEE8
  c->r[0]=R32(c->r[24]+0x00000000u); // 8011BEEC
  c->r[3]=c->r[30]|c->r[30]; // 8011BEF0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011BEF4
  c->lr=0x8011BEFCu; f_8014B140(c); // 8011BEF8
  c->r[3]=0u+0x0000000Cu; // 8011BEFC
  c->r[4]=c->r[13]+0xFFFFBE98u; // 8011BF00
  c->r[5]=0u+0x00000000u; // 8011BF04
  c->r[6]=0u+0x00001001u; // 8011BF08
  c->lr=0x8011BF10u; f_80244D20(c); // 8011BF0C
  cmps(c,0,(int32_t)c->r[3],0); // 8011BF10
  if (crb(c,2)) { goto L_8011BF2C; } // 8011BF14
  c->r[4]=R32(c->r[25]+0x000000ECu); // 8011BF18
  c->r[0]=c->r[25]+0x000000E8u; // 8011BF1C
  W32(c->r[3]+0x00000000u,c->r[24]); // 8011BF20
  W32(c->r[3]+0x00000004u,c->r[4]); // 8011BF24
  W32(c->r[3]+0x00000008u,c->r[0]); // 8011BF28
L_8011BF2C:;
  c->r[4]=R32(c->r[25]+0x000000ECu); // 8011BF2C
  W32(c->r[4]+0x00000008u,c->r[3]); // 8011BF30
  W32(c->r[25]+0x000000ECu,c->r[3]); // 8011BF34
  c->r[24]=R32(c->r[24]+0x00000018u); // 8011BF38
  cmps(c,0,(int32_t)c->r[24],0); // 8011BF3C
  if (crb(c,2)) { goto L_8011BF84; } // 8011BF40
  c->r[3]=c->r[24]|c->r[24]; // 8011BF44
  c->lr=0x8011BF4Cu; f_8030D188(c); // 8011BF48
  c->r[3]=c->r[24]|c->r[24]; // 8011BF4C
  c->r[4]=c->r[25]|c->r[25]; // 8011BF50
  c->r[5]=0u+0x00000000u; // 8011BF54
  c->lr=0x8011BF5Cu; f_8030D51C(c); // 8011BF58
  goto L_8011BF84; // 8011BF5C
L_8011BF60:;
  c->r[24]=R32(c->r[24]+0x0000001Cu); // 8011BF60
  cmps(c,0,(int32_t)c->r[24],0); // 8011BF64
  if (crb(c,2)) { goto L_8011BF84; } // 8011BF68
  c->r[3]=c->r[24]|c->r[24]; // 8011BF6C
  c->lr=0x8011BF74u; f_8030D188(c); // 8011BF70
  c->r[3]=c->r[24]|c->r[24]; // 8011BF74
  c->r[4]=c->r[25]|c->r[25]; // 8011BF78
  c->r[5]=0u+0x00000000u; // 8011BF7C
  c->lr=0x8011BF84u; f_8030D51C(c); // 8011BF80
L_8011BF84:;
  c->r[29]=c->r[29]+0x00000001u; // 8011BF84
  cmpu(c,0,c->r[29],0x00000014u); // 8011BF88
  if (crb(c,0)) { IRQCHK(c); goto L_8011BE80; } // 8011BF8C
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 8011BF90
  c->r[3]=R32(c->r[25]+0x0000004Cu); // 8011BF94
  c->r[5]=c->r[3]+c->r[0]; // 8011BF98
  c->r[31]=R32(c->r[5]+0x00000024u); // 8011BF9C
  cmps(c,0,(int32_t)c->r[31],0); // 8011BFA0
  if (crb(c,2)) { goto L_8011BFAC; } // 8011BFA4
  goto L_8011BFDC; // 8011BFA8
L_8011BFAC:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011BFAC
  cmps(c,0,(int32_t)c->r[3],0); // 8011BFB0
  if (crb(c,2)) { goto L_8011BFD4; } // 8011BFB4
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 8011BFB8
  c->r[6]=0u+0x00000000u; // 8011BFBC
  c->r[8]=R32(c->r[5]+0x00000020u); // 8011BFC0
  c->r[5]=0u+0x00000000u; // 8011BFC4
  c->r[7]=0u+0x00000000u; // 8011BFC8
  c->lr=0x8011BFD0u; f_802BA9F4(c); // 8011BFCC
  goto L_8011BFD8; // 8011BFD0
L_8011BFD4:;
  c->r[3]=0u+0x00000000u; // 8011BFD4
L_8011BFD8:;
  c->r[31]=c->r[3]|c->r[3]; // 8011BFD8
L_8011BFDC:;
  cmps(c,0,(int32_t)c->r[27],0); // 8011BFDC
  if (crb(c,2)) { goto L_8011C0F8; } // 8011BFE0
  c->r[24]=0u+0x00000000u; // 8011BFE4
L_8011BFE8:;
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8011BFE8
  c->r[0]=rotl(c->r[24],5)&0x00001FE0u; // 8011BFEC
  c->r[3]=c->r[30]|c->r[30]; // 8011BFF0
  c->r[28]=c->r[4]+c->r[0]; // 8011BFF4
  {uint32_t ea=c->r[28]+0x0000015Cu; c->r[0]=R32(ea); c->r[28]=ea;} // 8011BFF8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011BFFC
  c->lr=0x8011C004u; f_8014B15C(c); // 8011C000
  cmps(c,0,(int32_t)c->r[3],0); // 8011C004
  if (!crb(c,2)) { goto L_8011C0E8; } // 8011C008
  c->r[12]=R32(c->r[25]+0x000000B4u); // 8011C00C
  c->r[3]=c->r[25]|c->r[25]; // 8011C010
  c->r[4]=c->r[26]|c->r[26]; // 8011C014
  c->r[5]=c->r[27]|c->r[27]; // 8011C018
  c->r[12]=R32(c->r[12]+0x00000100u); // 8011C01C
  c->r[6]=c->r[28]|c->r[28]; // 8011C020
  c->ctr=c->r[12]; // 8011C024
  if (true) { c->lr=0x8011C02Cu; dispatch(c,c->ctr); } // 8011C028
  cmps(c,0,(int32_t)c->r[3],0); // 8011C02C
  if (crb(c,2)) { goto L_8011C0C4; } // 8011C030
  c->r[4]=R32(c->r[30]+0x00001C5Cu); // 8011C034
  c->r[3]=c->r[30]|c->r[30]; // 8011C038
  c->r[0]=R32(c->r[28]+0x00000014u); // 8011C03C
  c->r[0]=c->r[4]+c->r[0]; // 8011C040
  W32(c->r[30]+0x00001C5Cu,c->r[0]); // 8011C044
  c->r[4]=R32(c->r[28]+0x00000014u); // 8011C048
  c->lr=0x8011C050u; f_8014B0C4(c); // 8011C04C
  c->r[0]=R32(c->r[28]+0x00000000u); // 8011C050
  c->r[3]=c->r[30]|c->r[30]; // 8011C054
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011C058
  c->lr=0x8011C060u; f_8014B140(c); // 8011C05C
  c->r[3]=0u+0x0000000Cu; // 8011C060
  c->r[4]=c->r[13]+0xFFFFBE98u; // 8011C064
  c->r[5]=0u+0x00000000u; // 8011C068
  c->r[6]=0u+0x00001001u; // 8011C06C
  c->lr=0x8011C074u; f_80244D20(c); // 8011C070
  cmps(c,0,(int32_t)c->r[3],0); // 8011C074
  if (crb(c,2)) { goto L_8011C090; } // 8011C078
  c->r[4]=R32(c->r[25]+0x000000ECu); // 8011C07C
  c->r[0]=c->r[25]+0x000000E8u; // 8011C080
  W32(c->r[3]+0x00000000u,c->r[28]); // 8011C084
  W32(c->r[3]+0x00000004u,c->r[4]); // 8011C088
  W32(c->r[3]+0x00000008u,c->r[0]); // 8011C08C
L_8011C090:;
  c->r[4]=R32(c->r[25]+0x000000ECu); // 8011C090
  W32(c->r[4]+0x00000008u,c->r[3]); // 8011C094
  W32(c->r[25]+0x000000ECu,c->r[3]); // 8011C098
  c->r[28]=R32(c->r[28]+0x00000018u); // 8011C09C
  cmps(c,0,(int32_t)c->r[28],0); // 8011C0A0
  if (crb(c,2)) { goto L_8011C0E8; } // 8011C0A4
  c->r[3]=c->r[28]|c->r[28]; // 8011C0A8
  c->lr=0x8011C0B0u; f_8030D188(c); // 8011C0AC
  c->r[3]=c->r[28]|c->r[28]; // 8011C0B0
  c->r[4]=c->r[25]|c->r[25]; // 8011C0B4
  c->r[5]=0u+0x00000000u; // 8011C0B8
  c->lr=0x8011C0C0u; f_8030D51C(c); // 8011C0BC
  goto L_8011C0E8; // 8011C0C0
L_8011C0C4:;
  c->r[28]=R32(c->r[28]+0x0000001Cu); // 8011C0C4
  cmps(c,0,(int32_t)c->r[28],0); // 8011C0C8
  if (crb(c,2)) { goto L_8011C0E8; } // 8011C0CC
  c->r[3]=c->r[28]|c->r[28]; // 8011C0D0
  c->lr=0x8011C0D8u; f_8030D188(c); // 8011C0D4
  c->r[3]=c->r[28]|c->r[28]; // 8011C0D8
  c->r[4]=c->r[25]|c->r[25]; // 8011C0DC
  c->r[5]=0u+0x00000000u; // 8011C0E0
  c->lr=0x8011C0E8u; f_8030D51C(c); // 8011C0E4
L_8011C0E8:;
  c->r[24]=c->r[24]+0x00000001u; // 8011C0E8
  cmpu(c,0,c->r[24],0x0000000Au); // 8011C0EC
  if (crb(c,0)) { IRQCHK(c); goto L_8011BFE8; } // 8011C0F0
  goto L_8011C208; // 8011C0F4
L_8011C0F8:;
  c->r[24]=0u+0x00000000u; // 8011C0F8
L_8011C0FC:;
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8011C0FC
  c->r[0]=rotl(c->r[24],5)&0x00001FE0u; // 8011C100
  c->r[3]=c->r[30]|c->r[30]; // 8011C104
  c->r[28]=c->r[4]+c->r[0]; // 8011C108
  {uint32_t ea=c->r[28]+0x0000001Cu; c->r[0]=R32(ea); c->r[28]=ea;} // 8011C10C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011C110
  c->lr=0x8011C118u; f_8014B15C(c); // 8011C114
  cmps(c,0,(int32_t)c->r[3],0); // 8011C118
  if (!crb(c,2)) { goto L_8011C1FC; } // 8011C11C
  c->r[12]=R32(c->r[25]+0x000000B4u); // 8011C120
  c->r[3]=c->r[25]|c->r[25]; // 8011C124
  c->r[4]=c->r[26]|c->r[26]; // 8011C128
  c->r[5]=c->r[27]|c->r[27]; // 8011C12C
  c->r[12]=R32(c->r[12]+0x00000100u); // 8011C130
  c->r[6]=c->r[28]|c->r[28]; // 8011C134
  c->ctr=c->r[12]; // 8011C138
  if (true) { c->lr=0x8011C140u; dispatch(c,c->ctr); } // 8011C13C
  cmps(c,0,(int32_t)c->r[3],0); // 8011C140
  if (crb(c,2)) { goto L_8011C1D8; } // 8011C144
  c->r[4]=R32(c->r[30]+0x00001C5Cu); // 8011C148
  c->r[3]=c->r[30]|c->r[30]; // 8011C14C
  c->r[0]=R32(c->r[28]+0x00000014u); // 8011C150
  c->r[0]=c->r[4]+c->r[0]; // 8011C154
  W32(c->r[30]+0x00001C5Cu,c->r[0]); // 8011C158
  c->r[4]=R32(c->r[28]+0x00000014u); // 8011C15C
  c->lr=0x8011C164u; f_8014B0C4(c); // 8011C160
  c->r[0]=R32(c->r[28]+0x00000000u); // 8011C164
  c->r[3]=c->r[30]|c->r[30]; // 8011C168
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011C16C
  c->lr=0x8011C174u; f_8014B140(c); // 8011C170
  c->r[3]=0u+0x0000000Cu; // 8011C174
  c->r[4]=c->r[13]+0xFFFFBE98u; // 8011C178
  c->r[5]=0u+0x00000000u; // 8011C17C
  c->r[6]=0u+0x00001001u; // 8011C180
  c->lr=0x8011C188u; f_80244D20(c); // 8011C184
  cmps(c,0,(int32_t)c->r[3],0); // 8011C188
  if (crb(c,2)) { goto L_8011C1A4; } // 8011C18C
  c->r[4]=R32(c->r[25]+0x000000ECu); // 8011C190
  c->r[0]=c->r[25]+0x000000E8u; // 8011C194
  W32(c->r[3]+0x00000000u,c->r[28]); // 8011C198
  W32(c->r[3]+0x00000004u,c->r[4]); // 8011C19C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8011C1A0
L_8011C1A4:;
  c->r[4]=R32(c->r[25]+0x000000ECu); // 8011C1A4
  W32(c->r[4]+0x00000008u,c->r[3]); // 8011C1A8
  W32(c->r[25]+0x000000ECu,c->r[3]); // 8011C1AC
  c->r[28]=R32(c->r[28]+0x00000018u); // 8011C1B0
  cmps(c,0,(int32_t)c->r[28],0); // 8011C1B4
  if (crb(c,2)) { goto L_8011C1FC; } // 8011C1B8
  c->r[3]=c->r[28]|c->r[28]; // 8011C1BC
  c->lr=0x8011C1C4u; f_8030D188(c); // 8011C1C0
  c->r[3]=c->r[28]|c->r[28]; // 8011C1C4
  c->r[4]=c->r[25]|c->r[25]; // 8011C1C8
  c->r[5]=0u+0x00000000u; // 8011C1CC
  c->lr=0x8011C1D4u; f_8030D51C(c); // 8011C1D0
  goto L_8011C1FC; // 8011C1D4
L_8011C1D8:;
  c->r[28]=R32(c->r[28]+0x0000001Cu); // 8011C1D8
  cmps(c,0,(int32_t)c->r[28],0); // 8011C1DC
  if (crb(c,2)) { goto L_8011C1FC; } // 8011C1E0
  c->r[3]=c->r[28]|c->r[28]; // 8011C1E4
  c->lr=0x8011C1ECu; f_8030D188(c); // 8011C1E8
  c->r[3]=c->r[28]|c->r[28]; // 8011C1EC
  c->r[4]=c->r[25]|c->r[25]; // 8011C1F0
  c->r[5]=0u+0x00000000u; // 8011C1F4
  c->lr=0x8011C1FCu; f_8030D51C(c); // 8011C1F8
L_8011C1FC:;
  c->r[24]=c->r[24]+0x00000001u; // 8011C1FC
  cmpu(c,0,c->r[24],0x0000000Au); // 8011C200
  if (crb(c,0)) { IRQCHK(c); goto L_8011C0FC; } // 8011C204
L_8011C208:;
  c->r[12]=R32(c->r[25]+0x000000B4u); // 8011C208
  c->r[3]=c->r[25]|c->r[25]; // 8011C20C
  c->r[12]=R32(c->r[12]+0x000000F0u); // 8011C210
  c->ctr=c->r[12]; // 8011C214
  if (true) { c->lr=0x8011C21Cu; dispatch(c,c->ctr); } // 8011C218
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8011C21C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8011C220
  c->lr=c->r[0]; // 8011C224
  c->r[1]=c->r[1]+0x00000030u; // 8011C228
  return; // 8011C22C
}

// fn_8011C230
void f_8011C230(Ctx* __restrict c) {
  trace_call(0x8011C230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C230
  c->r[0]=c->lr; // 8011C234
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011C238
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8011C23C
  c->r[4]=0u+0x43300000u; // 8011C240
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011C244
  c->r[31]=c->r[5]|c->r[5]; // 8011C248
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011C24C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8011C250
  c->r[5]=c->r[3]+c->r[0]; // 8011C254
  c->r[3]=R32(c->r[5]+0x00000024u); // 8011C258
  W32(c->r[1]+0x00000010u,c->r[4]); // 8011C25C
  cmps(c,0,(int32_t)c->r[3],0); // 8011C260
  if (crb(c,2)) { goto L_8011C26C; } // 8011C264
  goto L_8011C298; // 8011C268
L_8011C26C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011C26C
  cmps(c,0,(int32_t)c->r[3],0); // 8011C270
  if (crb(c,2)) { goto L_8011C294; } // 8011C274
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 8011C278
  c->r[6]=0u+0x00000000u; // 8011C27C
  c->r[8]=R32(c->r[5]+0x00000020u); // 8011C280
  c->r[5]=0u+0x00000000u; // 8011C284
  c->r[7]=0u+0x00000000u; // 8011C288
  c->lr=0x8011C290u; f_802BA9F4(c); // 8011C28C
  goto L_8011C298; // 8011C290
L_8011C294:;
  c->r[3]=0u+0x00000000u; // 8011C294
L_8011C298:;
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011C298
  c->r[4]=R32(c->r[3]+0x0000029Cu); // 8011C29C
  cmpu(c,0,c->r[31],c->r[4]); // 8011C2A0
  if (crb(c,0)) { goto L_8011C318; } // 8011C2A4
  c->r[5]=R32(c->r[3]+0x000002A0u); // 8011C2A8
  cmpu(c,0,c->r[31],c->r[5]); // 8011C2AC
  if (crb(c,0)) { goto L_8011C2BC; } // 8011C2B0
  c->r[3]=R32(c->r[3]+0x000002A8u); // 8011C2B4
  goto L_8011C31C; // 8011C2B8
L_8011C2BC:;
  c->r[0]=c->r[31]-c->r[4]; // 8011C2BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8011C2C0
  c->r[0]=c->r[5]-c->r[4]; // 8011C2C4
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 8011C2C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C2CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8011C2D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8011C2D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011C2D8
  c->r[4]=R32(c->r[3]+0x000002A4u); // 8011C2DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011C2E0
  c->r[0]=R32(c->r[3]+0x000002A8u); // 8011C2E4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8011C2E8
  c->r[0]=c->r[0]-c->r[4]; // 8011C2EC
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 8011C2F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C2F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8011C2F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8011C2FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011C300
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011C304
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8011C308
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8011C30C
  c->lr=0x8011C314u; f_803ADC14(c); // 8011C310
  goto L_8011C31C; // 8011C314
L_8011C318:;
  c->r[3]=0u+0x00000000u; // 8011C318
L_8011C31C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011C31C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011C320
  c->lr=c->r[0]; // 8011C324
  c->r[1]=c->r[1]+0x00000020u; // 8011C328
  return; // 8011C32C
}

// fn_8011C330
void f_8011C330(Ctx* __restrict c) {
  trace_call(0x8011C330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C330
  c->r[0]=c->lr; // 8011C334
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C338
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8011C33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011C340
  c->r[31]=c->r[5]|c->r[5]; // 8011C344
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011C348
  c->r[5]=c->r[3]+c->r[0]; // 8011C34C
  c->r[3]=R32(c->r[5]+0x00000024u); // 8011C350
  cmps(c,0,(int32_t)c->r[3],0); // 8011C354
  if (crb(c,2)) { goto L_8011C360; } // 8011C358
  goto L_8011C38C; // 8011C35C
L_8011C360:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011C360
  cmps(c,0,(int32_t)c->r[3],0); // 8011C364
  if (crb(c,2)) { goto L_8011C388; } // 8011C368
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 8011C36C
  c->r[6]=0u+0x00000000u; // 8011C370
  c->r[8]=R32(c->r[5]+0x00000020u); // 8011C374
  c->r[5]=0u+0x00000000u; // 8011C378
  c->r[7]=0u+0x00000000u; // 8011C37C
  c->lr=0x8011C384u; f_802BA9F4(c); // 8011C380
  goto L_8011C38C; // 8011C384
L_8011C388:;
  c->r[3]=0u+0x00000000u; // 8011C388
L_8011C38C:;
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8011C38C
  c->r[3]=0u+0xFFFFFFFFu; // 8011C390
  c->r[0]=R32(c->r[4]+0x000002ACu); // 8011C394
  cmpu(c,0,c->r[31],c->r[0]); // 8011C398
  if (crb(c,0)) { goto L_8011C3D4; } // 8011C39C
  c->r[0]=R32(c->r[4]+0x000002B0u); // 8011C3A0
  c->r[3]=0u+0x00000000u; // 8011C3A4
  cmpu(c,0,c->r[31],c->r[0]); // 8011C3A8
  if (crb(c,0)) { goto L_8011C3D4; } // 8011C3AC
  c->r[0]=R32(c->r[4]+0x000002B4u); // 8011C3B0
  c->r[3]=0u+0x00000001u; // 8011C3B4
  cmpu(c,0,c->r[31],c->r[0]); // 8011C3B8
  if (crb(c,0)) { goto L_8011C3D4; } // 8011C3BC
  c->r[0]=R32(c->r[4]+0x000002B8u); // 8011C3C0
  c->r[3]=0u+0x00000002u; // 8011C3C4
  cmpu(c,0,c->r[31],c->r[0]); // 8011C3C8
  if (crb(c,0)) { goto L_8011C3D4; } // 8011C3CC
  c->r[3]=0u+0x00000003u; // 8011C3D0
L_8011C3D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011C3D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011C3D8
  c->lr=c->r[0]; // 8011C3DC
  c->r[1]=c->r[1]+0x00000010u; // 8011C3E0
  return; // 8011C3E4
}

// fn_8011C3E8
void f_8011C3E8(Ctx* __restrict c) {
  trace_call(0x8011C3E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C3E8
  c->r[0]=c->lr; // 8011C3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C3F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011C3F4
  c->r[31]=c->r[3]+0x000000E8u; // 8011C3F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011C3FC
  c->r[30]=c->r[3]|c->r[3]; // 8011C400
  goto L_8011C42C; // 8011C404
L_8011C408:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011C408
  if (crb(c,2)) { goto L_8011C42C; } // 8011C40C
  c->r[4]=R32(c->r[3]+0x00000008u); // 8011C410
  c->r[0]=R32(c->r[3]+0x00000004u); // 8011C414
  W32(c->r[4]+0x00000004u,c->r[0]); // 8011C418
  c->r[4]=R32(c->r[3]+0x00000004u); // 8011C41C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8011C420
  W32(c->r[4]+0x00000008u,c->r[0]); // 8011C424
  c->lr=0x8011C42Cu; f_80244DC0(c); // 8011C428
L_8011C42C:;
  c->r[3]=R32(c->r[30]+0x000000F0u); // 8011C42C
  cmpu(c,0,c->r[3],c->r[31]); // 8011C430
  if (!crb(c,2)) { IRQCHK(c); goto L_8011C408; } // 8011C434
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011C438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011C43C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011C440
  c->lr=c->r[0]; // 8011C444
  c->r[1]=c->r[1]+0x00000010u; // 8011C448
  return; // 8011C44C
}

// fn_8011C450
void f_8011C450(Ctx* __restrict c) {
  trace_call(0x8011C450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C450
  c->r[0]=c->lr; // 8011C454
  cmps(c,0,(int32_t)c->r[3],0); // 8011C458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C45C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011C460
  c->r[31]=c->r[3]|c->r[3]; // 8011C464
  if (crb(c,2)) { goto L_8011C478; } // 8011C468
  cmps(c,0,(int32_t)c->r[4],0); // 8011C46C
  if (!crb(c,1)) { goto L_8011C478; } // 8011C470
  c->lr=0x8011C478u; f_80244DC0(c); // 8011C474
L_8011C478:;
  c->r[3]=c->r[31]|c->r[31]; // 8011C478
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011C47C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011C480
  c->lr=c->r[0]; // 8011C484
  c->r[1]=c->r[1]+0x00000010u; // 8011C488
  return; // 8011C48C
}

// fn_8011C490
void f_8011C490(Ctx* __restrict c) {
  trace_call(0x8011C490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C490
  c->r[0]=c->lr; // 8011C494
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011C49C
  c->r[31]=c->r[3]|c->r[3]; // 8011C4A0
  c->lr=0x8011C4A8u; f_8011D8EC(c); // 8011C4A4
  c->r[4]=0u+0x80420000u; // 8011C4A8
  c->r[6]=0u+0x00000000u; // 8011C4AC
  c->r[0]=0u+0x00000001u; // 8011C4B0
  W32(c->r[31]+0x00000294u,c->r[6]); // 8011C4B4
  c->r[4]=c->r[4]+0x000030D0u; // 8011C4B8
  c->r[3]=c->r[31]+0x00000274u; // 8011C4BC
  W32(c->r[31]+0x000000B4u,c->r[4]); // 8011C4C0
  c->r[4]=0u+0x00000000u; // 8011C4C4
  c->r[5]=0u+0x00000020u; // 8011C4C8
  W8(c->r[31]+0x00000298u,c->r[0]); // 8011C4CC
  W32(c->r[31]+0x0000029Cu,c->r[6]); // 8011C4D0
  W8(c->r[31]+0x000002A0u,c->r[0]); // 8011C4D4
  W8(c->r[31]+0x000002A1u,c->r[0]); // 8011C4D8
  W8(c->r[31]+0x000002B4u,c->r[6]); // 8011C4DC
  W8(c->r[31]+0x000002B5u,c->r[6]); // 8011C4E0
  W32(c->r[31]+0x000002A4u,c->r[6]); // 8011C4E4
  W32(c->r[31]+0x000002A8u,c->r[6]); // 8011C4E8
  W32(c->r[31]+0x000002ACu,c->r[6]); // 8011C4EC
  W32(c->r[31]+0x000002B0u,c->r[6]); // 8011C4F0
  c->lr=0x8011C4F8u; f_80006370(c); // 8011C4F4
  c->r[3]=c->r[31]|c->r[31]; // 8011C4F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011C4FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011C500
  c->lr=c->r[0]; // 8011C504
  c->r[1]=c->r[1]+0x00000010u; // 8011C508
  return; // 8011C50C
}

// fn_8011C510
void f_8011C510(Ctx* __restrict c) {
  trace_call(0x8011C510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C510
  c->r[0]=c->lr; // 8011C514
  cmps(c,0,(int32_t)c->r[3],0); // 8011C518
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011C51C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011C520
  c->r[31]=c->r[4]|c->r[4]; // 8011C524
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011C528
  c->r[30]=c->r[3]|c->r[3]; // 8011C52C
  if (crb(c,2)) { goto L_8011C54C; } // 8011C530
  c->r[4]=0u+0x00000000u; // 8011C534
  c->lr=0x8011C53Cu; f_8011D93C(c); // 8011C538
  cmps(c,0,(int32_t)c->r[31],0); // 8011C53C
  if (!crb(c,1)) { goto L_8011C54C; } // 8011C540
  c->r[3]=c->r[30]|c->r[30]; // 8011C544
  c->lr=0x8011C54Cu; f_80244DC0(c); // 8011C548
L_8011C54C:;
  c->r[3]=c->r[30]|c->r[30]; // 8011C54C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011C550
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011C554
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011C558
  c->lr=c->r[0]; // 8011C55C
  c->r[1]=c->r[1]+0x00000010u; // 8011C560
  return; // 8011C564
}

// fn_8011C568
void f_8011C568(Ctx* __restrict c) {
  trace_call(0x8011C568u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C568
  c->r[0]=c->lr; // 8011C56C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011C570
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8011C574
  c->r[27]=c->r[3]|c->r[3]; // 8011C578
  c->r[28]=c->r[5]|c->r[5]; // 8011C57C
  c->lr=0x8011C584u; f_8011D994(c); // 8011C580
  cmps(c,0,(int32_t)c->r[28],2); // 8011C584
  if (!crb(c,2)) { goto L_8011C648; } // 8011C588
  c->r[31]=R32(c->r[27]+0x0000004Cu); // 8011C58C
  c->r[29]=c->r[27]|c->r[27]; // 8011C590
  c->r[28]=0u+0x00000000u; // 8011C594
  c->r[30]=c->r[31]|c->r[31]; // 8011C598
L_8011C59C:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 8011C59C
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011C5A0
  cmps(c,0,(int32_t)c->r[3],0); // 8011C5A4
  if (crb(c,2)) { goto L_8011C5B0; } // 8011C5A8
  goto L_8011C5D8; // 8011C5AC
L_8011C5B0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011C5B0
  cmps(c,0,(int32_t)c->r[3],0); // 8011C5B4
  if (crb(c,2)) { goto L_8011C5D4; } // 8011C5B8
  c->r[4]=R32(c->r[30]+0x00000020u); // 8011C5BC
  c->r[5]=0u+0x00000000u; // 8011C5C0
  c->r[8]=R32(c->r[30]+0x00000024u); // 8011C5C4
  c->r[6]=0u+0x00000000u; // 8011C5C8
  c->lr=0x8011C5D0u; f_802BA9F4(c); // 8011C5CC
  goto L_8011C5D8; // 8011C5D0
L_8011C5D4:;
  c->r[3]=0u+0x00000000u; // 8011C5D4
L_8011C5D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011C5D8
  W32(c->r[29]+0x000002A4u,c->r[3]); // 8011C5DC
  if (crb(c,2)) { goto L_8011C5FC; } // 8011C5E0
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011C5E4
  c->r[4]=0u+0x00000000u; // 8011C5E8
  c->r[5]=0u+0x00000000u; // 8011C5EC
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011C5F0
  c->ctr=c->r[12]; // 8011C5F4
  if (true) { c->lr=0x8011C5FCu; dispatch(c,c->ctr); } // 8011C5F8
L_8011C5FC:;
  c->r[28]=c->r[28]+0x00000001u; // 8011C5FC
  c->r[29]=c->r[29]+0x00000004u; // 8011C600
  cmps(c,0,(int32_t)c->r[28],4); // 8011C604
  c->r[30]=c->r[30]+0x0000000Cu; // 8011C608
  if (crb(c,0)) { IRQCHK(c); goto L_8011C59C; } // 8011C60C
  c->r[3]=R8(c->r[31]+0x00000078u); // 8011C610
  c->r[0]=0u+0x00000005u; // 8011C614
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8011C618
  c->r[3]=0u-c->r[4]; // 8011C61C
  c->r[3]=c->r[3]|c->r[4]; // 8011C620
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8011C624
  W8(c->r[27]+0x000002A0u,c->r[3]); // 8011C628
  c->r[3]=R8(c->r[31]+0x00000079u); // 8011C62C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8011C630
  W32(c->r[27]+0x00000294u,c->r[0]); // 8011C634
  c->r[0]=0u-c->r[3]; // 8011C638
  c->r[0]=c->r[0]|c->r[3]; // 8011C63C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8011C640
  W8(c->r[27]+0x000002A1u,c->r[0]); // 8011C644
L_8011C648:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8011C648
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011C64C
  c->lr=c->r[0]; // 8011C650
  c->r[1]=c->r[1]+0x00000020u; // 8011C654
  return; // 8011C658
}

// fn_8011C65C
void f_8011C65C(Ctx* __restrict c) {
  trace_call(0x8011C65Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C65C
  c->r[0]=c->lr; // 8011C660
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011C664
  c->r[11]=c->r[1]+0x00000020u; // 8011C668
  c->lr=0x8011C670u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011C66C
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011C670
  c->r[31]=c->r[3]|c->r[3]; // 8011C674
  c->r[29]=R32(c->r[3]+0x0000004Cu); // 8011C678
  cmps(c,0,(int32_t)c->r[0],5); // 8011C67C
  if (!crb(c,2)) { goto L_8011C71C; } // 8011C680
  c->r[0]=R8(c->r[29]+0x00000070u); // 8011C684
  c->r[27]=c->r[31]|c->r[31]; // 8011C688
  c->r[30]=0u+0x00000000u; // 8011C68C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011C690
  c->r[0]=0u-c->r[3]; // 8011C694
  c->r[0]=c->r[0]|c->r[3]; // 8011C698
  c->r[28]=rotl(c->r[0],1)&0x00000001u; // 8011C69C
L_8011C6A0:;
  c->r[3]=R32(c->r[27]+0x000002A4u); // 8011C6A0
  cmps(c,0,(int32_t)c->r[3],0); // 8011C6A4
  if (crb(c,2)) { goto L_8011C6C4; } // 8011C6A8
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011C6AC
  c->r[4]=0u+0x00000000u; // 8011C6B0
  c->r[5]=0u+0x00000000u; // 8011C6B4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011C6B8
  c->ctr=c->r[12]; // 8011C6BC
  if (true) { c->lr=0x8011C6C4u; dispatch(c,c->ctr); } // 8011C6C0
L_8011C6C4:;
  c->r[30]=c->r[30]+0x00000001u; // 8011C6C4
  c->r[27]=c->r[27]+0x00000004u; // 8011C6C8
  cmps(c,0,(int32_t)c->r[30],4); // 8011C6CC
  if (crb(c,0)) { IRQCHK(c); goto L_8011C6A0; } // 8011C6D0
  c->r[0]=R8(c->r[31]+0x000002A0u); // 8011C6D4
  W32(c->r[31]+0x00000294u,c->r[28]); // 8011C6D8
  cmps(c,0,(int32_t)c->r[0],0); // 8011C6DC
  if (crb(c,2)) { goto L_8011C71C; } // 8011C6E0
  c->r[0]=R8(c->r[31]+0x00000298u); // 8011C6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8011C6E8
  if (crb(c,2)) { goto L_8011C71C; } // 8011C6EC
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8011C6F0
  c->r[3]=c->r[31]+c->r[0]; // 8011C6F4
  c->r[3]=R32(c->r[3]+0x000002A4u); // 8011C6F8
  cmps(c,0,(int32_t)c->r[3],0); // 8011C6FC
  if (crb(c,2)) { goto L_8011C71C; } // 8011C700
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011C704
  c->r[4]=0u+0x00000001u; // 8011C708
  c->r[5]=0u+0x00000000u; // 8011C70C
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011C710
  c->ctr=c->r[12]; // 8011C714
  if (true) { c->lr=0x8011C71Cu; dispatch(c,c->ctr); } // 8011C718
L_8011C71C:;
  c->r[3]=c->r[31]|c->r[31]; // 8011C71C
  c->lr=0x8011C724u; f_8011DAD4(c); // 8011C720
  c->r[0]=R32(c->r[31]+0x00000294u); // 8011C724
  cmps(c,0,(int32_t)c->r[0],3); // 8011C728
  if (!crb(c,2)) { goto L_8011C7F4; } // 8011C72C
  c->r[0]=R8(c->r[31]+0x000002B4u); // 8011C730
  cmps(c,0,(int32_t)c->r[0],0); // 8011C734
  if (!crb(c,2)) { goto L_8011C7F4; } // 8011C738
  c->r[28]=c->r[31]|c->r[31]; // 8011C73C
  c->r[30]=0u+0x00000000u; // 8011C740
L_8011C744:;
  c->r[3]=R32(c->r[28]+0x000002A4u); // 8011C744
  cmps(c,0,(int32_t)c->r[3],0); // 8011C748
  if (crb(c,2)) { goto L_8011C768; } // 8011C74C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011C750
  c->r[4]=0u+0x00000000u; // 8011C754
  c->r[5]=0u+0x00000000u; // 8011C758
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011C75C
  c->ctr=c->r[12]; // 8011C760
  if (true) { c->lr=0x8011C768u; dispatch(c,c->ctr); } // 8011C764
L_8011C768:;
  c->r[30]=c->r[30]+0x00000001u; // 8011C768
  c->r[28]=c->r[28]+0x00000004u; // 8011C76C
  cmps(c,0,(int32_t)c->r[30],4); // 8011C770
  if (crb(c,0)) { IRQCHK(c); goto L_8011C744; } // 8011C774
  c->r[0]=R8(c->r[31]+0x000002A0u); // 8011C778
  c->r[3]=0u+0x00000002u; // 8011C77C
  W32(c->r[31]+0x00000294u,c->r[3]); // 8011C780
  cmps(c,0,(int32_t)c->r[0],0); // 8011C784
  if (crb(c,2)) { goto L_8011C7BC; } // 8011C788
  c->r[0]=R8(c->r[31]+0x00000298u); // 8011C78C
  cmps(c,0,(int32_t)c->r[0],0); // 8011C790
  if (crb(c,2)) { goto L_8011C7BC; } // 8011C794
  c->r[3]=R32(c->r[31]+0x000002ACu); // 8011C798
  cmps(c,0,(int32_t)c->r[3],0); // 8011C79C
  if (crb(c,2)) { goto L_8011C7BC; } // 8011C7A0
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011C7A4
  c->r[4]=0u+0x00000001u; // 8011C7A8
  c->r[5]=0u+0x00000000u; // 8011C7AC
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011C7B0
  c->ctr=c->r[12]; // 8011C7B4
  if (true) { c->lr=0x8011C7BCu; dispatch(c,c->ctr); } // 8011C7B8
L_8011C7BC:;
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011C7BC
  {uint32_t ea=c->r[29]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011C7C0
  fcmp(c,0,c->f[1],c->f[0]); // 8011C7C4
  if (crb(c,2)) { goto L_8011C7F4; } // 8011C7C8
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 8011C7CC
  c->lr=0x8011C7D4u; f_80123050(c); // 8011C7D0
  {uint32_t ea=c->r[29]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011C7D4
  c->r[3]=c->r[31]|c->r[31]; // 8011C7D8
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011C7DC
  c->r[4]=0u+0x00000000u; // 8011C7E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8011C7E4
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011C7E8
  c->r[5]=0u+0x00000000u; // 8011C7EC
  c->lr=0x8011C7F4u; f_802F0BE0(c); // 8011C7F0
L_8011C7F4:;
  c->r[0]=R32(c->r[31]+0x00000188u); // 8011C7F4
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8011C7F8
  if (crb(c,2)) { goto L_8011C864; } // 8011C7FC
  c->r[4]=R32(c->r[31]+0x000002A4u); // 8011C800
  cmps(c,0,(int32_t)c->r[4],0); // 8011C804
  if (crb(c,2)) { goto L_8011C818; } // 8011C808
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C80C
  c->r[0]=c->r[0]|0x40000000u; // 8011C810
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C814
L_8011C818:;
  c->r[4]=R32(c->r[31]+0x000002A8u); // 8011C818
  cmps(c,0,(int32_t)c->r[4],0); // 8011C81C
  if (crb(c,2)) { goto L_8011C830; } // 8011C820
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C824
  c->r[0]=c->r[0]|0x40000000u; // 8011C828
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C82C
L_8011C830:;
  c->r[4]=R32(c->r[31]+0x000002ACu); // 8011C830
  c->r[3]=c->r[31]+0x00000008u; // 8011C834
  cmps(c,0,(int32_t)c->r[4],0); // 8011C838
  if (crb(c,2)) { goto L_8011C84C; } // 8011C83C
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C840
  c->r[0]=c->r[0]|0x40000000u; // 8011C844
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C848
L_8011C84C:;
  c->r[4]=R32(c->r[3]+0x000002A8u); // 8011C84C
  cmps(c,0,(int32_t)c->r[4],0); // 8011C850
  if (crb(c,2)) { goto L_8011C864; } // 8011C854
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C858
  c->r[0]=c->r[0]|0x40000000u; // 8011C85C
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C860
L_8011C864:;
  c->r[0]=R32(c->r[31]+0x00000188u); // 8011C864
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8011C868
  if (crb(c,2)) { goto L_8011C8D4; } // 8011C86C
  c->r[4]=R32(c->r[31]+0x000002A4u); // 8011C870
  cmps(c,0,(int32_t)c->r[4],0); // 8011C874
  if (crb(c,2)) { goto L_8011C888; } // 8011C878
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C87C
  c->r[0]=c->r[0]|0x80000000u; // 8011C880
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C884
L_8011C888:;
  c->r[4]=R32(c->r[31]+0x000002A8u); // 8011C888
  cmps(c,0,(int32_t)c->r[4],0); // 8011C88C
  if (crb(c,2)) { goto L_8011C8A0; } // 8011C890
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C894
  c->r[0]=c->r[0]|0x80000000u; // 8011C898
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C89C
L_8011C8A0:;
  c->r[4]=R32(c->r[31]+0x000002ACu); // 8011C8A0
  c->r[3]=c->r[31]+0x00000008u; // 8011C8A4
  cmps(c,0,(int32_t)c->r[4],0); // 8011C8A8
  if (crb(c,2)) { goto L_8011C8BC; } // 8011C8AC
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C8B0
  c->r[0]=c->r[0]|0x80000000u; // 8011C8B4
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C8B8
L_8011C8BC:;
  c->r[4]=R32(c->r[3]+0x000002A8u); // 8011C8BC
  cmps(c,0,(int32_t)c->r[4],0); // 8011C8C0
  if (crb(c,2)) { goto L_8011C8D4; } // 8011C8C4
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C8C8
  c->r[0]=c->r[0]|0x80000000u; // 8011C8CC
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C8D0
L_8011C8D4:;
  c->r[0]=R32(c->r[31]+0x00000188u); // 8011C8D4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8011C8D8
  if (crb(c,2)) { goto L_8011C944; } // 8011C8DC
  c->r[4]=R32(c->r[31]+0x000002A4u); // 8011C8E0
  cmps(c,0,(int32_t)c->r[4],0); // 8011C8E4
  if (crb(c,2)) { goto L_8011C8F8; } // 8011C8E8
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C8EC
  c->r[0]=c->r[0]|0x20000000u; // 8011C8F0
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C8F4
L_8011C8F8:;
  c->r[4]=R32(c->r[31]+0x000002A8u); // 8011C8F8
  cmps(c,0,(int32_t)c->r[4],0); // 8011C8FC
  if (crb(c,2)) { goto L_8011C910; } // 8011C900
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C904
  c->r[0]=c->r[0]|0x20000000u; // 8011C908
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C90C
L_8011C910:;
  c->r[4]=R32(c->r[31]+0x000002ACu); // 8011C910
  c->r[3]=c->r[31]+0x00000008u; // 8011C914
  cmps(c,0,(int32_t)c->r[4],0); // 8011C918
  if (crb(c,2)) { goto L_8011C92C; } // 8011C91C
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C920
  c->r[0]=c->r[0]|0x20000000u; // 8011C924
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C928
L_8011C92C:;
  c->r[4]=R32(c->r[3]+0x000002A8u); // 8011C92C
  cmps(c,0,(int32_t)c->r[4],0); // 8011C930
  if (crb(c,2)) { goto L_8011C944; } // 8011C934
  c->r[0]=R32(c->r[4]+0x00000188u); // 8011C938
  c->r[0]=c->r[0]|0x20000000u; // 8011C93C
  W32(c->r[4]+0x00000188u,c->r[0]); // 8011C940
L_8011C944:;
  c->r[0]=0u+0x00000000u; // 8011C944
  W8(c->r[31]+0x000002B4u,c->r[0]); // 8011C948
  c->r[11]=c->r[1]+0x00000020u; // 8011C94C
  c->lr=0x8011C954u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011C950
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011C954
  c->lr=c->r[0]; // 8011C958
  c->r[1]=c->r[1]+0x00000020u; // 8011C95C
  return; // 8011C960
}

// fn_8011C964
void f_8011C964(Ctx* __restrict c) {
  trace_call(0x8011C964u);
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011C964
  cmps(c,0,(int32_t)c->r[0],0); // 8011C968
  if (crb(c,2)) return; // 8011C96C
  c->r[0]=R8(c->r[3]+0x000002A1u); // 8011C970
  cmps(c,0,(int32_t)c->r[0],0); // 8011C974
  if (crb(c,2)) return; // 8011C978
  f_80305A38(c); return; // 8011C97C
  return; // 8011C980
}

// fn_8011C984
void f_8011C984(Ctx* __restrict c) {
  trace_call(0x8011C984u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011C984
  c->r[0]=c->lr; // 8011C988
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011C98C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011C990
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011C994
  c->r[30]=0u+0x00000000u; // 8011C998
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011C99C
  c->r[29]=c->r[4]|c->r[4]; // 8011C9A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011C9A4
  c->r[28]=c->r[3]|c->r[3]; // 8011C9A8
  c->r[31]=c->r[28]|c->r[28]; // 8011C9AC
L_8011C9B0:;
  c->r[3]=R32(c->r[31]+0x000002A4u); // 8011C9B0
  cmps(c,0,(int32_t)c->r[3],0); // 8011C9B4
  if (crb(c,2)) { goto L_8011C9D4; } // 8011C9B8
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011C9BC
  c->r[4]=0u+0x00000000u; // 8011C9C0
  c->r[5]=0u+0x00000000u; // 8011C9C4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011C9C8
  c->ctr=c->r[12]; // 8011C9CC
  if (true) { c->lr=0x8011C9D4u; dispatch(c,c->ctr); } // 8011C9D0
L_8011C9D4:;
  c->r[30]=c->r[30]+0x00000001u; // 8011C9D4
  c->r[31]=c->r[31]+0x00000004u; // 8011C9D8
  cmps(c,0,(int32_t)c->r[30],4); // 8011C9DC
  if (crb(c,0)) { IRQCHK(c); goto L_8011C9B0; } // 8011C9E0
  c->r[0]=R8(c->r[28]+0x000002A0u); // 8011C9E4
  W32(c->r[28]+0x00000294u,c->r[29]); // 8011C9E8
  cmps(c,0,(int32_t)c->r[0],0); // 8011C9EC
  if (crb(c,2)) { goto L_8011CA2C; } // 8011C9F0
  c->r[0]=R8(c->r[28]+0x00000298u); // 8011C9F4
  cmps(c,0,(int32_t)c->r[0],0); // 8011C9F8
  if (crb(c,2)) { goto L_8011CA2C; } // 8011C9FC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8011CA00
  c->r[3]=c->r[28]+c->r[0]; // 8011CA04
  c->r[3]=R32(c->r[3]+0x000002A4u); // 8011CA08
  cmps(c,0,(int32_t)c->r[3],0); // 8011CA0C
  if (crb(c,2)) { goto L_8011CA2C; } // 8011CA10
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CA14
  c->r[4]=0u+0x00000001u; // 8011CA18
  c->r[5]=0u+0x00000000u; // 8011CA1C
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CA20
  c->ctr=c->r[12]; // 8011CA24
  if (true) { c->lr=0x8011CA2Cu; dispatch(c,c->ctr); } // 8011CA28
L_8011CA2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011CA2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011CA30
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011CA34
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011CA38
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011CA3C
  c->lr=c->r[0]; // 8011CA40
  c->r[1]=c->r[1]+0x00000020u; // 8011CA44
  return; // 8011CA48
}

// fn_8011CA4C
void f_8011CA4C(Ctx* __restrict c) {
  trace_call(0x8011CA4Cu);
  c->r[6]=R32(c->r[3]+0x0000004Cu); // 8011CA4C
  c->r[0]=R8(c->r[6]+0x0000008Cu); // 8011CA50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011CA54
  if (!crb(c,2)) return; // 8011CA58
  f_8011CA7C(c); return; // 8011CA5C
  return; // 8011CA60
}

// fn_8011CA64
void f_8011CA64(Ctx* __restrict c) {
  trace_call(0x8011CA64u);
  c->r[6]=R32(c->r[3]+0x0000004Cu); // 8011CA64
  c->r[0]=R8(c->r[6]+0x0000008Cu); // 8011CA68
  cmps(c,0,(int32_t)c->r[0],1); // 8011CA6C
  if (!crb(c,2)) return; // 8011CA70
  f_8011CA7C(c); return; // 8011CA74
  return; // 8011CA78
}

// fn_8011CA7C
void f_8011CA7C(Ctx* __restrict c) {
  trace_call(0x8011CA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011CA7C
  c->r[0]=c->lr; // 8011CA80
  W32(c->r[1]+0x00000054u,c->r[0]); // 8011CA84
  c->r[11]=c->r[1]+0x00000050u; // 8011CA88
  c->lr=0x8011CA90u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011CA8C
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8011CA90
  c->r[29]=c->r[3]|c->r[3]; // 8011CA94
  c->r[30]=c->r[5]|c->r[5]; // 8011CA98
  c->r[0]=R32(c->r[7]+0x00000074u); // 8011CA9C
  c->r[0]=rotl(c->r[0],5)&0x00000001u; cr0(c,c->r[0]); // 8011CAA0
  if (crb(c,2)) { goto L_8011CAC4; } // 8011CAA4
  c->r[6]=R32(c->r[13]+0xFFFFE12Cu); // 8011CAA8
  c->r[0]=R8(c->r[6]+0x0000014Du); // 8011CAAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011CAB0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8011CAB4
  if (!crb(c,2)) { goto L_8011CAC4; } // 8011CAB8
  c->r[6]=0u+0x00000001u; // 8011CABC
  goto L_8011CB14; // 8011CAC0
L_8011CAC4:;
  c->r[6]=R32(c->r[13]+0xFFFFE130u); // 8011CAC4
  cmps(c,0,(int32_t)c->r[6],0); // 8011CAC8
  if (crb(c,2)) { goto L_8011CAF8; } // 8011CACC
  c->r[0]=R8(c->r[6]+0x000000ACu); // 8011CAD0
  cmps(c,0,(int32_t)c->r[0],0); // 8011CAD4
  if (crb(c,2)) { goto L_8011CAF8; } // 8011CAD8
  cmpu(c,0,c->r[5],0x00000001u); // 8011CADC
  if (!crb(c,2)) { goto L_8011CAF8; } // 8011CAE0
  c->r[0]=R32(c->r[7]+0x00000074u); // 8011CAE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8011CAE8
  if (crb(c,2)) { goto L_8011CAF8; } // 8011CAEC
  c->r[6]=0u+0x00000001u; // 8011CAF0
  goto L_8011CB14; // 8011CAF4
L_8011CAF8:;
  c->r[6]=0u+0x80000000u; // 8011CAF8
  c->r[0]=R32(c->r[7]+0x00000074u); // 8011CAFC
  c->r[6]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 8011CB00
  c->r[6]=c->r[6]&c->r[0]; // 8011CB04
  c->r[0]=0u-c->r[6]; // 8011CB08
  c->r[0]=c->r[0]|c->r[6]; // 8011CB0C
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 8011CB10
L_8011CB14:;
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011CB14
  cmps(c,0,(int32_t)c->r[0],0); // 8011CB18
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CB1C
  cmps(c,0,(int32_t)c->r[6],0); // 8011CB20
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CB24
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011CB28
  cmps(c,0,(int32_t)c->r[0],0); // 8011CB2C
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CB30
  c->r[0]=R8(c->r[3]+0x00000298u); // 8011CB34
  cmps(c,0,(int32_t)c->r[0],0); // 8011CB38
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CB3C
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8011CB40
  c->r[6]=0u+0x80490000u; // 8011CB44
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[6]=c->ps1[6]=RF32(ea);} // 8011CB48
  c->r[6]=c->r[6]+0x000017D8u; // 8011CB4C
  c->f[1]=-c->f[4]; // 8011CB50
  {uint32_t ea=c->r[3]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011CB54
  {uint32_t ea=c->r[3]+0x00000100u; c->f[13]=c->ps1[13]=RF32(ea);} // 8011CB58
  c->r[0]=rotl(c->r[5],3)&0x000007F8u; // 8011CB5C
  {uint32_t ea=c->r[3]+0x00000108u; c->f[7]=c->ps1[7]=RF32(ea);} // 8011CB60
  c->f[2]=c->ps1[2]=S(c->f[6]-c->f[0]); // 8011CB64
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8011CB68
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[10]=c->ps1[10]=RF32(ea);} // 8011CB6C
  c->f[8]=-c->f[13]; // 8011CB70
  {uint32_t ea=c->r[6]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011CB74
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[7]); // 8011CB78
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011CB7C
  c->f[12]=c->ps1[12]=S(c->f[7]*c->f[8]); // 8011CB80
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[11]=c->ps1[11]=RF32(ea);} // 8011CB84
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8011CB88
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011CB8C
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[3]); // 8011CB90
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[8]=c->ps1[8]=RF32(ea);} // 8011CB94
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[13]); // 8011CB98
  {uint32_t ea=c->r[6]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011CB9C
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[0]); // 8011CBA0
  {uint32_t ea=c->r[2]+0xFFFF8A48u; c->f[7]=c->ps1[7]=RF32(ea);} // 8011CBA4
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[9]); // 8011CBA8
  c->r[4]=0u+0x80000000u; // 8011CBAC
  c->f[0]=c->ps1[0]=S(c->f[10]*c->f[4]); // 8011CBB0
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 8011CBB4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[2]); // 8011CBB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[13]);} // 8011CBBC
  c->r[6]=c->r[3]+c->r[0]; // 8011CBC0
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[12]); // 8011CBC4
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011CBC8
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[5]); // 8011CBCC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8011CBD0
  c->f[0]=c->ps1[0]=S(c->f[8]+c->f[0]); // 8011CBD4
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 8011CBD8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8011CBDC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8011CBE0
  W32(c->r[6]+0x00000274u,c->r[0]); // 8011CBE4
  fcmp(c,0,c->f[13],c->f[9]); // 8011CBE8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8011CBEC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 8011CBF0
  c->r[4]=0u+0x00000000u; // 8011CBF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8011CBF8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[7]);} // 8011CBFC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[6]);} // 8011CC00
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8011CC04
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8011CC08
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 8011CC0C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[6]);} // 8011CC10
  W32(c->r[6]+0x00000278u,c->r[0]); // 8011CC14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8011CC18
  if (!crb(c,2)) { goto L_8011CC48; } // 8011CC1C
  fcmp(c,0,c->f[13],c->f[0]); // 8011CC20
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8011CC24
  if (!crb(c,2)) { goto L_8011CC48; } // 8011CC28
  fcmp(c,0,c->f[4],c->f[3]); // 8011CC2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8011CC30
  if (!crb(c,2)) { goto L_8011CC48; } // 8011CC34
  fcmp(c,0,c->f[4],c->f[1]); // 8011CC38
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8011CC3C
  if (!crb(c,2)) { goto L_8011CC48; } // 8011CC40
  c->r[4]=0u+0x00000001u; // 8011CC44
L_8011CC48:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011CC48
  c->r[31]=R32(c->r[3]+0x0000004Cu); // 8011CC4C
  if (crb(c,2)) { goto L_8011CC64; } // 8011CC50
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011CC54
  c->r[0]=c->r[0]|c->r[5]; // 8011CC58
  W32(c->r[3]+0x0000029Cu,c->r[0]); // 8011CC5C
  goto L_8011CC70; // 8011CC60
L_8011CC64:;
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011CC64
  c->r[0]=c->r[0]&~c->r[5]; // 8011CC68
  W32(c->r[3]+0x0000029Cu,c->r[0]); // 8011CC6C
L_8011CC70:;
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011CC70
  cmps(c,0,(int32_t)c->r[0],0); // 8011CC74
  if (!crb(c,2)) { goto L_8011CD58; } // 8011CC78
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011CC7C
  cmps(c,0,(int32_t)c->r[0],2); // 8011CC80
  if (crb(c,2)) { goto L_8011CC90; } // 8011CC84
  cmps(c,0,(int32_t)c->r[0],3); // 8011CC88
  if (!crb(c,2)) { goto L_8011CD58; } // 8011CC8C
L_8011CC90:;
  c->r[27]=c->r[29]|c->r[29]; // 8011CC90
  c->r[30]=0u+0x00000000u; // 8011CC94
L_8011CC98:;
  c->r[3]=R32(c->r[27]+0x000002A4u); // 8011CC98
  cmps(c,0,(int32_t)c->r[3],0); // 8011CC9C
  if (crb(c,2)) { goto L_8011CCBC; } // 8011CCA0
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CCA4
  c->r[4]=0u+0x00000000u; // 8011CCA8
  c->r[5]=0u+0x00000000u; // 8011CCAC
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CCB0
  c->ctr=c->r[12]; // 8011CCB4
  if (true) { c->lr=0x8011CCBCu; dispatch(c,c->ctr); } // 8011CCB8
L_8011CCBC:;
  c->r[30]=c->r[30]+0x00000001u; // 8011CCBC
  c->r[27]=c->r[27]+0x00000004u; // 8011CCC0
  cmps(c,0,(int32_t)c->r[30],4); // 8011CCC4
  if (crb(c,0)) { IRQCHK(c); goto L_8011CC98; } // 8011CCC8
  c->r[0]=R8(c->r[29]+0x000002A0u); // 8011CCCC
  c->r[3]=0u+0x00000001u; // 8011CCD0
  W32(c->r[29]+0x00000294u,c->r[3]); // 8011CCD4
  cmps(c,0,(int32_t)c->r[0],0); // 8011CCD8
  if (crb(c,2)) { goto L_8011CD10; } // 8011CCDC
  c->r[0]=R8(c->r[29]+0x00000298u); // 8011CCE0
  cmps(c,0,(int32_t)c->r[0],0); // 8011CCE4
  if (crb(c,2)) { goto L_8011CD10; } // 8011CCE8
  c->r[3]=R32(c->r[29]+0x000002A8u); // 8011CCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8011CCF0
  if (crb(c,2)) { goto L_8011CD10; } // 8011CCF4
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CCF8
  c->r[4]=0u+0x00000001u; // 8011CCFC
  c->r[5]=0u+0x00000000u; // 8011CD00
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CD04
  c->ctr=c->r[12]; // 8011CD08
  if (true) { c->lr=0x8011CD10u; dispatch(c,c->ctr); } // 8011CD0C
L_8011CD10:;
  c->r[12]=R32(c->r[29]+0x000000B4u); // 8011CD10
  c->r[3]=c->r[29]|c->r[29]; // 8011CD14
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8011CD18
  c->ctr=c->r[12]; // 8011CD1C
  if (true) { c->lr=0x8011CD24u; dispatch(c,c->ctr); } // 8011CD20
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011CD24
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011CD28
  fcmp(c,0,c->f[1],c->f[0]); // 8011CD2C
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CD30
  c->r[3]=R32(c->r[29]+0x0000009Cu); // 8011CD34
  c->lr=0x8011CD3Cu; f_80123050(c); // 8011CD38
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011CD3C
  c->r[3]=c->r[29]|c->r[29]; // 8011CD40
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011CD44
  c->r[4]=0u+0x00000000u; // 8011CD48
  c->r[5]=0u+0x00000000u; // 8011CD4C
  c->lr=0x8011CD54u; f_802F0B58(c); // 8011CD50
  goto L_8011CEB8; // 8011CD54
L_8011CD58:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011CD58
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CD5C
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011CD60
  cmps(c,0,(int32_t)c->r[0],1); // 8011CD64
  if (!crb(c,2)) { goto L_8011CEB8; } // 8011CD68
  c->r[27]=c->r[29]|c->r[29]; // 8011CD6C
  c->r[28]=0u+0x00000000u; // 8011CD70
L_8011CD74:;
  c->r[3]=R32(c->r[27]+0x000002A4u); // 8011CD74
  cmps(c,0,(int32_t)c->r[3],0); // 8011CD78
  if (crb(c,2)) { goto L_8011CD98; } // 8011CD7C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CD80
  c->r[4]=0u+0x00000000u; // 8011CD84
  c->r[5]=0u+0x00000000u; // 8011CD88
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CD8C
  c->ctr=c->r[12]; // 8011CD90
  if (true) { c->lr=0x8011CD98u; dispatch(c,c->ctr); } // 8011CD94
L_8011CD98:;
  c->r[28]=c->r[28]+0x00000001u; // 8011CD98
  c->r[27]=c->r[27]+0x00000004u; // 8011CD9C
  cmps(c,0,(int32_t)c->r[28],4); // 8011CDA0
  if (crb(c,0)) { IRQCHK(c); goto L_8011CD74; } // 8011CDA4
  c->r[0]=R8(c->r[29]+0x000002A0u); // 8011CDA8
  c->r[3]=0u+0x00000002u; // 8011CDAC
  W32(c->r[29]+0x00000294u,c->r[3]); // 8011CDB0
  cmps(c,0,(int32_t)c->r[0],0); // 8011CDB4
  if (crb(c,2)) { goto L_8011CDEC; } // 8011CDB8
  c->r[0]=R8(c->r[29]+0x00000298u); // 8011CDBC
  cmps(c,0,(int32_t)c->r[0],0); // 8011CDC0
  if (crb(c,2)) { goto L_8011CDEC; } // 8011CDC4
  c->r[3]=R32(c->r[29]+0x000002ACu); // 8011CDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8011CDCC
  if (crb(c,2)) { goto L_8011CDEC; } // 8011CDD0
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CDD4
  c->r[4]=0u+0x00000001u; // 8011CDD8
  c->r[5]=0u+0x00000000u; // 8011CDDC
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CDE0
  c->ctr=c->r[12]; // 8011CDE4
  if (true) { c->lr=0x8011CDECu; dispatch(c,c->ctr); } // 8011CDE8
L_8011CDEC:;
  c->r[12]=R32(c->r[29]+0x000000B4u); // 8011CDEC
  c->r[3]=c->r[29]|c->r[29]; // 8011CDF0
  c->r[12]=R32(c->r[12]+0x000000DCu); // 8011CDF4
  c->ctr=c->r[12]; // 8011CDF8
  if (true) { c->lr=0x8011CE00u; dispatch(c,c->ctr); } // 8011CDFC
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011CE00
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011CE04
  fcmp(c,0,c->f[1],c->f[0]); // 8011CE08
  if (crb(c,2)) { goto L_8011CE38; } // 8011CE0C
  c->r[3]=R32(c->r[29]+0x0000009Cu); // 8011CE10
  c->lr=0x8011CE18u; f_80123050(c); // 8011CE14
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011CE18
  c->r[3]=c->r[29]|c->r[29]; // 8011CE1C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011CE20
  c->r[4]=0u+0x00000000u; // 8011CE24
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8011CE28
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011CE2C
  c->r[5]=0u+0x00000000u; // 8011CE30
  c->lr=0x8011CE38u; f_802F0B58(c); // 8011CE34
L_8011CE38:;
  c->r[0]=R8(c->r[31]+0x0000008Eu); // 8011CE38
  cmps(c,0,(int32_t)c->r[0],1); // 8011CE3C
  if (!crb(c,2)) { goto L_8011CE74; } // 8011CE40
  c->r[0]=R8(c->r[13]+0xFFFF8438u); // 8011CE44
  c->r[6]=R32(c->r[13]+0xFFFFBEA4u); // 8011CE48
  cmps(c,0,(int32_t)c->r[0],0); // 8011CE4C
  c->r[5]=R32(c->r[13]+0xFFFFBEA0u); // 8011CE50
  if (crb(c,2)) { goto L_8011CE74; } // 8011CE54
  c->r[3]=c->r[30]|c->r[30]; // 8011CE58
  c->r[4]=0u+0x00000000u; // 8011CE5C
  c->r[7]=0u+0xFFFFFFFFu; // 8011CE60
  c->r[8]=0u+0x00000064u; // 8011CE64
  c->r[9]=0u+0x00000000u; // 8011CE68
  c->r[10]=0u+0x00000000u; // 8011CE6C
  c->lr=0x8011CE74u; f_8023EFB0(c); // 8011CE70
L_8011CE74:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 8011CE74
  cmps(c,0,(int32_t)c->r[3],0); // 8011CE78
  if (crb(c,2)) { goto L_8011CEB8; } // 8011CE7C
  c->r[4]=0u+0x80490000u; // 8011CE80
  {uint32_t ea=c->r[2]+0xFFFF8A4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011CE84
  c->r[4]=c->r[4]+0x000017D8u; // 8011CE88
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011CE8C
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011CE90
  c->r[4]=0u+0x000000FFu; // 8011CE94
  c->r[6]=0u+0x00000000u; // 8011CE98
  c->r[7]=0u+0x00000000u; // 8011CE9C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011CEA0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8011CEA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011CEA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8011CEAC
  c->r[5]=R32(c->r[1]+0x00000034u); // 8011CEB0
  c->lr=0x8011CEB8u; f_8010C430(c); // 8011CEB4
L_8011CEB8:;
  c->r[11]=c->r[1]+0x00000050u; // 8011CEB8
  c->lr=0x8011CEC0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011CEBC
  c->r[0]=R32(c->r[1]+0x00000054u); // 8011CEC0
  c->lr=c->r[0]; // 8011CEC4
  c->r[1]=c->r[1]+0x00000050u; // 8011CEC8
  return; // 8011CECC
}

// fn_8011CED0
void f_8011CED0(Ctx* __restrict c) {
  trace_call(0x8011CED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011CED0
  c->r[0]=c->lr; // 8011CED4
  c->r[6]=0u+0x80000000u; // 8011CED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011CEDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011CEE0
  c->r[31]=c->r[5]|c->r[5]; // 8011CEE4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 8011CEE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011CEEC
  c->r[30]=c->r[3]|c->r[3]; // 8011CEF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011CEF4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011CEF8
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011CEFC
  cmps(c,0,(int32_t)c->r[0],2); // 8011CF00
  if (!crb(c,2)) { goto L_8011D018; } // 8011CF04
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011CF08
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 8011CF0C
  if (crb(c,2)) { goto L_8011D018; } // 8011CF10
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011CF14
  cmps(c,0,(int32_t)c->r[0],0); // 8011CF18
  if (crb(c,2)) { goto L_8011D018; } // 8011CF1C
  c->r[0]=R8(c->r[3]+0x00000298u); // 8011CF20
  cmps(c,0,(int32_t)c->r[0],0); // 8011CF24
  if (crb(c,2)) { goto L_8011D018; } // 8011CF28
  cmps(c,0,(int32_t)c->r[4],0); // 8011CF2C
  if (crb(c,2)) { goto L_8011D010; } // 8011CF30
  c->r[28]=c->r[30]|c->r[30]; // 8011CF34
  c->r[29]=0u+0x00000000u; // 8011CF38
L_8011CF3C:;
  c->r[3]=R32(c->r[28]+0x000002A4u); // 8011CF3C
  cmps(c,0,(int32_t)c->r[3],0); // 8011CF40
  if (crb(c,2)) { goto L_8011CF60; } // 8011CF44
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CF48
  c->r[4]=0u+0x00000000u; // 8011CF4C
  c->r[5]=0u+0x00000000u; // 8011CF50
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CF54
  c->ctr=c->r[12]; // 8011CF58
  if (true) { c->lr=0x8011CF60u; dispatch(c,c->ctr); } // 8011CF5C
L_8011CF60:;
  c->r[29]=c->r[29]+0x00000001u; // 8011CF60
  c->r[28]=c->r[28]+0x00000004u; // 8011CF64
  cmps(c,0,(int32_t)c->r[29],4); // 8011CF68
  if (crb(c,0)) { IRQCHK(c); goto L_8011CF3C; } // 8011CF6C
  c->r[0]=R8(c->r[30]+0x000002A0u); // 8011CF70
  c->r[3]=0u+0x00000003u; // 8011CF74
  W32(c->r[30]+0x00000294u,c->r[3]); // 8011CF78
  cmps(c,0,(int32_t)c->r[0],0); // 8011CF7C
  if (crb(c,2)) { goto L_8011CFB4; } // 8011CF80
  c->r[0]=R8(c->r[30]+0x00000298u); // 8011CF84
  cmps(c,0,(int32_t)c->r[0],0); // 8011CF88
  if (crb(c,2)) { goto L_8011CFB4; } // 8011CF8C
  c->r[3]=R32(c->r[30]+0x000002B0u); // 8011CF90
  cmps(c,0,(int32_t)c->r[3],0); // 8011CF94
  if (crb(c,2)) { goto L_8011CFB4; } // 8011CF98
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011CF9C
  c->r[4]=0u+0x00000001u; // 8011CFA0
  c->r[5]=0u+0x00000000u; // 8011CFA4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011CFA8
  c->ctr=c->r[12]; // 8011CFAC
  if (true) { c->lr=0x8011CFB4u; dispatch(c,c->ctr); } // 8011CFB0
L_8011CFB4:;
  c->r[12]=R32(c->r[30]+0x000000B4u); // 8011CFB4
  c->r[3]=c->r[30]|c->r[30]; // 8011CFB8
  c->r[12]=R32(c->r[12]+0x000000E4u); // 8011CFBC
  c->ctr=c->r[12]; // 8011CFC0
  if (true) { c->lr=0x8011CFC8u; dispatch(c,c->ctr); } // 8011CFC4
  c->r[3]=R32(c->r[30]+0x0000004Cu); // 8011CFC8
  c->r[0]=R8(c->r[3]+0x0000008Eu); // 8011CFCC
  cmps(c,0,(int32_t)c->r[0],1); // 8011CFD0
  if (!crb(c,2)) { goto L_8011D008; } // 8011CFD4
  c->r[0]=R8(c->r[13]+0xFFFF8438u); // 8011CFD8
  c->r[6]=R32(c->r[13]+0xFFFFBEACu); // 8011CFDC
  cmps(c,0,(int32_t)c->r[0],0); // 8011CFE0
  c->r[5]=R32(c->r[13]+0xFFFFBEA8u); // 8011CFE4
  if (crb(c,2)) { goto L_8011D008; } // 8011CFE8
  c->r[3]=c->r[31]|c->r[31]; // 8011CFEC
  c->r[4]=0u+0x00000000u; // 8011CFF0
  c->r[7]=0u+0xFFFFFFFFu; // 8011CFF4
  c->r[8]=0u+0x00000064u; // 8011CFF8
  c->r[9]=0u+0x00000000u; // 8011CFFC
  c->r[10]=0u+0x00000000u; // 8011D000
  c->lr=0x8011D008u; f_8023EFB0(c); // 8011D004
L_8011D008:;
  c->r[0]=0u+0x00000001u; // 8011D008
  W8(c->r[30]+0x000002B5u,c->r[0]); // 8011D00C
L_8011D010:;
  c->r[0]=0u+0x00000001u; // 8011D010
  W8(c->r[30]+0x000002B4u,c->r[0]); // 8011D014
L_8011D018:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011D018
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011D01C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011D020
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011D024
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011D028
  c->lr=c->r[0]; // 8011D02C
  c->r[1]=c->r[1]+0x00000020u; // 8011D030
  return; // 8011D034
}

// fn_8011D038
void f_8011D038(Ctx* __restrict c) {
  trace_call(0x8011D038u);
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011D038
  cmps(c,0,(int32_t)c->r[0],0); // 8011D03C
  if (crb(c,2)) return; // 8011D040
  c->r[0]=R8(c->r[3]+0x00000298u); // 8011D044
  cmps(c,0,(int32_t)c->r[0],0); // 8011D048
  if (crb(c,2)) return; // 8011D04C
  c->r[6]=R32(c->r[3]+0x0000004Cu); // 8011D050
  c->r[0]=R8(c->r[6]+0x0000008Du); // 8011D054
  cmps(c,0,(int32_t)c->r[0],1); // 8011D058
  if (!crb(c,2)) return; // 8011D05C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D060
  c->r[12]=R32(c->r[12]+0x000000D0u); // 8011D064
  c->ctr=c->r[12]; // 8011D068
  if (true) { dispatch(c,c->ctr); return; } // 8011D06C
  return; // 8011D070
}

// fn_8011D074
void f_8011D074(Ctx* __restrict c) {
  trace_call(0x8011D074u);
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011D074
  c->r[6]=0u+0x00000000u; // 8011D078
  cmps(c,0,(int32_t)c->r[0],0); // 8011D07C
  if (crb(c,2)) { goto L_8011D0B4; } // 8011D080
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011D084
  cmps(c,0,(int32_t)c->r[0],2); // 8011D088
  if (crb(c,2)) { goto L_8011D098; } // 8011D08C
  cmps(c,0,(int32_t)c->r[0],3); // 8011D090
  if (!crb(c,2)) { goto L_8011D0B4; } // 8011D094
L_8011D098:;
  c->r[0]=0u+0x80000000u; // 8011D098
  c->r[5]=R32(c->r[3]+0x0000029Cu); // 8011D09C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8011D0A0
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 8011D0A4
  if (crb(c,2)) { goto L_8011D0B4; } // 8011D0A8
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011D0AC
  c->r[6]=R32(c->r[3]+0x00000068u); // 8011D0B0
L_8011D0B4:;
  c->r[3]=c->r[6]|c->r[6]; // 8011D0B4
  return; // 8011D0B8
}

// fn_8011D0BC
void f_8011D0BC(Ctx* __restrict c) {
  trace_call(0x8011D0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D0BC
  c->r[0]=c->lr; // 8011D0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D0C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D0C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011D0CC
  c->r[30]=c->r[3]|c->r[3]; // 8011D0D0
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011D0D4
  cmps(c,0,(int32_t)c->r[0],0); // 8011D0D8
  if (crb(c,2)) { goto L_8011D10C; } // 8011D0DC
  c->r[0]=R8(c->r[3]+0x00000298u); // 8011D0E0
  cmps(c,0,(int32_t)c->r[0],0); // 8011D0E4
  if (crb(c,2)) { goto L_8011D10C; } // 8011D0E8
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011D0EC
  c->r[31]=R32(c->r[3]+0x00000050u); // 8011D0F0
  c->r[3]=c->r[31]|c->r[31]; // 8011D0F4
  c->lr=0x8011D0FCu; f_8030D188(c); // 8011D0F8
  c->r[3]=c->r[31]|c->r[31]; // 8011D0FC
  c->r[4]=c->r[30]|c->r[30]; // 8011D100
  c->r[5]=0u+0x00000000u; // 8011D104
  c->lr=0x8011D10Cu; f_8030D51C(c); // 8011D108
L_8011D10C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D110
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011D114
  c->lr=c->r[0]; // 8011D118
  c->r[1]=c->r[1]+0x00000010u; // 8011D11C
  return; // 8011D120
}

// fn_8011D124
void f_8011D124(Ctx* __restrict c) {
  trace_call(0x8011D124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D124
  c->r[0]=c->lr; // 8011D128
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D12C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D130
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011D134
  c->r[30]=c->r[3]|c->r[3]; // 8011D138
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011D13C
  cmps(c,0,(int32_t)c->r[0],0); // 8011D140
  if (crb(c,2)) { goto L_8011D174; } // 8011D144
  c->r[0]=R8(c->r[3]+0x00000298u); // 8011D148
  cmps(c,0,(int32_t)c->r[0],0); // 8011D14C
  if (crb(c,2)) { goto L_8011D174; } // 8011D150
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011D154
  c->r[31]=R32(c->r[3]+0x00000054u); // 8011D158
  c->r[3]=c->r[31]|c->r[31]; // 8011D15C
  c->lr=0x8011D164u; f_8030D188(c); // 8011D160
  c->r[3]=c->r[31]|c->r[31]; // 8011D164
  c->r[4]=c->r[30]|c->r[30]; // 8011D168
  c->r[5]=0u+0x00000000u; // 8011D16C
  c->lr=0x8011D174u; f_8030D51C(c); // 8011D170
L_8011D174:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D178
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011D17C
  c->lr=c->r[0]; // 8011D180
  c->r[1]=c->r[1]+0x00000010u; // 8011D184
  return; // 8011D188
}

// fn_8011D18C
void f_8011D18C(Ctx* __restrict c) {
  trace_call(0x8011D18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D18C
  c->r[0]=c->lr; // 8011D190
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011D194
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011D198
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011D19C
  c->r[30]=c->r[3]|c->r[3]; // 8011D1A0
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011D1A4
  cmps(c,0,(int32_t)c->r[0],0); // 8011D1A8
  if (crb(c,2)) { goto L_8011D224; } // 8011D1AC
  c->r[0]=R8(c->r[3]+0x00000298u); // 8011D1B0
  cmps(c,0,(int32_t)c->r[0],0); // 8011D1B4
  if (crb(c,2)) { goto L_8011D224; } // 8011D1B8
  c->r[31]=R32(c->r[3]+0x0000004Cu); // 8011D1BC
  c->r[0]=R32(c->r[31]+0x00000080u); // 8011D1C0
  cmps(c,0,(int32_t)c->r[0],0); // 8011D1C4
  if (crb(c,2)) { goto L_8011D208; } // 8011D1C8
  c->r[4]=0u+0x80490000u; // 8011D1CC
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011D1D0
  c->r[4]=c->r[4]+0x000017D8u; // 8011D1D4
  {uint32_t ea=c->r[2]+0xFFFF8A4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011D1D8
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011D1DC
  c->r[3]=c->r[0]|c->r[0]; // 8011D1E0
  c->r[4]=0u+0x000000FFu; // 8011D1E4
  c->r[6]=0u+0x00000000u; // 8011D1E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011D1EC
  c->r[7]=0u+0x00000000u; // 8011D1F0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8011D1F4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8011D1F8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8011D1FC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8011D200
  c->lr=0x8011D208u; f_8010C430(c); // 8011D204
L_8011D208:;
  c->r[31]=R32(c->r[31]+0x0000005Cu); // 8011D208
  c->r[3]=c->r[31]|c->r[31]; // 8011D20C
  c->lr=0x8011D214u; f_8030D188(c); // 8011D210
  c->r[3]=c->r[31]|c->r[31]; // 8011D214
  c->r[4]=c->r[30]|c->r[30]; // 8011D218
  c->r[5]=0u+0x00000000u; // 8011D21C
  c->lr=0x8011D224u; f_8030D51C(c); // 8011D220
L_8011D224:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011D224
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011D228
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011D22C
  c->lr=c->r[0]; // 8011D230
  c->r[1]=c->r[1]+0x00000020u; // 8011D234
  return; // 8011D238
}

// fn_8011D23C
void f_8011D23C(Ctx* __restrict c) {
  trace_call(0x8011D23Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D23C
  c->r[0]=c->lr; // 8011D240
  cmps(c,0,(int32_t)c->r[4],0); // 8011D244
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011D248
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8011D24C
  c->r[30]=c->r[3]|c->r[3]; // 8011D250
  c->r[31]=c->r[5]|c->r[5]; // 8011D254
  c->r[25]=c->r[6]|c->r[6]; // 8011D258
  c->r[26]=R8(c->r[3]+0x000002A0u); // 8011D25C
  if (crb(c,2)) { goto L_8011D2FC; } // 8011D260
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011D264
  cmps(c,0,(int32_t)c->r[0],0); // 8011D268
  if (!crb(c,2)) { goto L_8011D2FC; } // 8011D26C
  W8(c->r[3]+0x000002A0u,c->r[5]); // 8011D270
  c->r[27]=c->r[30]|c->r[30]; // 8011D274
  c->r[29]=0u+0x00000000u; // 8011D278
  W8(c->r[3]+0x000002A1u,c->r[6]); // 8011D27C
L_8011D280:;
  c->r[3]=R32(c->r[27]+0x000002A4u); // 8011D280
  cmps(c,0,(int32_t)c->r[3],0); // 8011D284
  if (crb(c,2)) { goto L_8011D2A4; } // 8011D288
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D28C
  c->r[4]=0u+0x00000000u; // 8011D290
  c->r[5]=0u+0x00000000u; // 8011D294
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D298
  c->ctr=c->r[12]; // 8011D29C
  if (true) { c->lr=0x8011D2A4u; dispatch(c,c->ctr); } // 8011D2A0
L_8011D2A4:;
  c->r[29]=c->r[29]+0x00000001u; // 8011D2A4
  c->r[27]=c->r[27]+0x00000004u; // 8011D2A8
  cmps(c,0,(int32_t)c->r[29],4); // 8011D2AC
  if (crb(c,0)) { IRQCHK(c); goto L_8011D280; } // 8011D2B0
  c->r[0]=R8(c->r[30]+0x000002A0u); // 8011D2B4
  c->r[3]=0u+0x00000001u; // 8011D2B8
  W32(c->r[30]+0x00000294u,c->r[3]); // 8011D2BC
  cmps(c,0,(int32_t)c->r[0],0); // 8011D2C0
  if (crb(c,2)) { goto L_8011D3D4; } // 8011D2C4
  c->r[0]=R8(c->r[30]+0x00000298u); // 8011D2C8
  cmps(c,0,(int32_t)c->r[0],0); // 8011D2CC
  if (crb(c,2)) { goto L_8011D3D4; } // 8011D2D0
  c->r[3]=R32(c->r[30]+0x000002A8u); // 8011D2D4
  cmps(c,0,(int32_t)c->r[3],0); // 8011D2D8
  if (crb(c,2)) { goto L_8011D3D4; } // 8011D2DC
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D2E0
  c->r[4]=0u+0x00000001u; // 8011D2E4
  c->r[5]=0u+0x00000000u; // 8011D2E8
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D2EC
  c->ctr=c->r[12]; // 8011D2F0
  if (true) { c->lr=0x8011D2F8u; dispatch(c,c->ctr); } // 8011D2F4
  goto L_8011D3D4; // 8011D2F8
L_8011D2FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011D2FC
  if (!crb(c,2)) { goto L_8011D3D4; } // 8011D300
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011D304
  cmps(c,0,(int32_t)c->r[0],0); // 8011D308
  if (crb(c,2)) { goto L_8011D3D4; } // 8011D30C
  cmps(c,0,(int32_t)c->r[0],2); // 8011D310
  c->r[28]=0u+0x00000001u; // 8011D314
  if (crb(c,2)) { goto L_8011D328; } // 8011D318
  cmps(c,0,(int32_t)c->r[0],3); // 8011D31C
  if (crb(c,2)) { goto L_8011D328; } // 8011D320
  c->r[28]=0u+0x00000000u; // 8011D324
L_8011D328:;
  c->r[27]=c->r[30]|c->r[30]; // 8011D328
  c->r[29]=0u+0x00000000u; // 8011D32C
L_8011D330:;
  c->r[3]=R32(c->r[27]+0x000002A4u); // 8011D330
  cmps(c,0,(int32_t)c->r[3],0); // 8011D334
  if (crb(c,2)) { goto L_8011D354; } // 8011D338
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D33C
  c->r[4]=0u+0x00000000u; // 8011D340
  c->r[5]=0u+0x00000000u; // 8011D344
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D348
  c->ctr=c->r[12]; // 8011D34C
  if (true) { c->lr=0x8011D354u; dispatch(c,c->ctr); } // 8011D350
L_8011D354:;
  c->r[29]=c->r[29]+0x00000001u; // 8011D354
  c->r[27]=c->r[27]+0x00000004u; // 8011D358
  cmps(c,0,(int32_t)c->r[29],4); // 8011D35C
  if (crb(c,0)) { IRQCHK(c); goto L_8011D330; } // 8011D360
  c->r[0]=R8(c->r[30]+0x000002A0u); // 8011D364
  c->r[3]=0u+0x00000000u; // 8011D368
  W32(c->r[30]+0x00000294u,c->r[3]); // 8011D36C
  cmps(c,0,(int32_t)c->r[0],0); // 8011D370
  if (crb(c,2)) { goto L_8011D3A8; } // 8011D374
  c->r[0]=R8(c->r[30]+0x00000298u); // 8011D378
  cmps(c,0,(int32_t)c->r[0],0); // 8011D37C
  if (crb(c,2)) { goto L_8011D3A8; } // 8011D380
  c->r[3]=R32(c->r[30]+0x000002A4u); // 8011D384
  cmps(c,0,(int32_t)c->r[3],0); // 8011D388
  if (crb(c,2)) { goto L_8011D3A8; } // 8011D38C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D390
  c->r[4]=0u+0x00000001u; // 8011D394
  c->r[5]=0u+0x00000000u; // 8011D398
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D39C
  c->ctr=c->r[12]; // 8011D3A0
  if (true) { c->lr=0x8011D3A8u; dispatch(c,c->ctr); } // 8011D3A4
L_8011D3A8:;
  cmps(c,0,(int32_t)c->r[28],0); // 8011D3A8
  if (crb(c,2)) { goto L_8011D3CC; } // 8011D3AC
  c->r[0]=0u+0x00000000u; // 8011D3B0
  W32(c->r[30]+0x0000029Cu,c->r[0]); // 8011D3B4
  c->r[3]=c->r[30]|c->r[30]; // 8011D3B8
  c->r[12]=R32(c->r[30]+0x000000B4u); // 8011D3BC
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8011D3C0
  c->ctr=c->r[12]; // 8011D3C4
  if (true) { c->lr=0x8011D3CCu; dispatch(c,c->ctr); } // 8011D3C8
L_8011D3CC:;
  W8(c->r[30]+0x000002A0u,c->r[31]); // 8011D3CC
  W8(c->r[30]+0x000002A1u,c->r[25]); // 8011D3D0
L_8011D3D4:;
  cmpu(c,0,c->r[26],c->r[31]); // 8011D3D4
  if (crb(c,2)) { goto L_8011D3E8; } // 8011D3D8
  c->r[0]=R32(c->r[30]+0x00000188u); // 8011D3DC
  c->r[0]=c->r[0]|0xE0000000u; // 8011D3E0
  W32(c->r[30]+0x00000188u,c->r[0]); // 8011D3E4
L_8011D3E8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8011D3E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8011D3EC
  c->lr=c->r[0]; // 8011D3F0
  c->r[1]=c->r[1]+0x00000030u; // 8011D3F4
  return; // 8011D3F8
}

// fn_8011D3FC
void f_8011D3FC(Ctx* __restrict c) {
  trace_call(0x8011D3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D3FC
  c->r[0]=c->lr; // 8011D400
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011D404
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011D408
  c->r[31]=c->r[3]|c->r[3]; // 8011D40C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011D410
  c->r[30]=0u+0x00000000u; // 8011D414
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011D418
  c->r[29]=c->r[4]|c->r[4]; // 8011D41C
L_8011D420:;
  c->r[3]=R32(c->r[31]+0x000002A4u); // 8011D420
  cmps(c,0,(int32_t)c->r[3],0); // 8011D424
  if (crb(c,2)) { goto L_8011D474; } // 8011D428
  c->r[0]=R8(c->r[3]+0x0000003Cu); // 8011D42C
  cmps(c,0,(int32_t)c->r[0],3); // 8011D430
  if (crb(c,2)) { goto L_8011D440; } // 8011D434
  c->r[0]=0u+0x00000000u; // 8011D438
  goto L_8011D454; // 8011D43C
L_8011D440:;
  c->r[0]=R8(c->r[3]+0x0000003Du); // 8011D440
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011D444
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 8011D448
  c->r[0]=cntlz(c->r[0]); // 8011D44C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011D450
L_8011D454:;
  cmps(c,0,(int32_t)c->r[0],0); // 8011D454
  if (crb(c,2)) { goto L_8011D474; } // 8011D458
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D45C
  c->r[4]=c->r[29]|c->r[29]; // 8011D460
  c->r[5]=0u+0x00000000u; // 8011D464
  c->r[12]=R32(c->r[12]+0x000000C8u); // 8011D468
  c->ctr=c->r[12]; // 8011D46C
  if (true) { c->lr=0x8011D474u; dispatch(c,c->ctr); } // 8011D470
L_8011D474:;
  c->r[30]=c->r[30]+0x00000001u; // 8011D474
  c->r[31]=c->r[31]+0x00000004u; // 8011D478
  cmps(c,0,(int32_t)c->r[30],4); // 8011D47C
  if (crb(c,0)) { IRQCHK(c); goto L_8011D420; } // 8011D480
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011D484
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011D488
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011D48C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011D490
  c->lr=c->r[0]; // 8011D494
  c->r[1]=c->r[1]+0x00000020u; // 8011D498
  return; // 8011D49C
}

// fn_8011D4A0
void f_8011D4A0(Ctx* __restrict c) {
  trace_call(0x8011D4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D4A0
  c->r[0]=c->lr; // 8011D4A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D4A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D4AC
  c->r[31]=c->r[3]|c->r[3]; // 8011D4B0
  c->r[0]=R32(c->r[3]+0x00000038u); // 8011D4B4
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011D4B8
  cmps(c,0,(int32_t)c->r[0],0); // 8011D4BC
  if (crb(c,2)) { goto L_8011D4C8; } // 8011D4C0
  goto L_8011D4F4; // 8011D4C4
L_8011D4C8:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011D4C8
  cmps(c,0,(int32_t)c->r[3],0); // 8011D4CC
  if (crb(c,2)) { goto L_8011D4EC; } // 8011D4D0
  c->r[4]=R32(c->r[31]+0x00000030u); // 8011D4D4
  c->r[5]=0u+0x00000000u; // 8011D4D8
  c->r[8]=R32(c->r[31]+0x00000034u); // 8011D4DC
  c->r[6]=0u+0x00000000u; // 8011D4E0
  c->lr=0x8011D4E8u; f_802BA9F4(c); // 8011D4E4
  goto L_8011D4F0; // 8011D4E8
L_8011D4EC:;
  c->r[3]=0u+0x00000000u; // 8011D4EC
L_8011D4F0:;
  c->r[0]=c->r[3]|c->r[3]; // 8011D4F0
L_8011D4F4:;
  c->r[5]=R8(c->r[31]+0x0000003Cu); // 8011D4F4
  c->r[3]=c->r[0]|c->r[0]; // 8011D4F8
  c->r[4]=R8(c->r[31]+0x0000003Du); // 8011D4FC
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8011D500
  c->r[0]=R8(c->r[31]+0x0000003Eu); // 8011D504
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8011D508
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011D50C
  c->r[7]=0u-c->r[8]; // 8011D510
  c->r[5]=0u-c->r[6]; // 8011D514
  c->r[0]=0u-c->r[4]; // 8011D518
  c->r[7]=c->r[7]|c->r[8]; // 8011D51C
  c->r[5]=c->r[5]|c->r[6]; // 8011D520
  c->r[0]=c->r[0]|c->r[4]; // 8011D524
  c->r[4]=rotl(c->r[7],1)&0x00000001u; // 8011D528
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 8011D52C
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 8011D530
  c->lr=0x8011D538u; f_8011D23C(c); // 8011D534
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D53C
  c->lr=c->r[0]; // 8011D540
  c->r[1]=c->r[1]+0x00000010u; // 8011D544
  return; // 8011D548
}

// fn_8011D54C
void f_8011D54C(Ctx* __restrict c) {
  trace_call(0x8011D54Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D54C
  c->r[0]=c->lr; // 8011D550
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D558
  c->r[31]=c->r[3]|c->r[3]; // 8011D55C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8011D560
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011D564
  cmps(c,0,(int32_t)c->r[4],0); // 8011D568
  if (crb(c,2)) { goto L_8011D574; } // 8011D56C
  goto L_8011D5A0; // 8011D570
L_8011D574:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011D574
  cmps(c,0,(int32_t)c->r[3],0); // 8011D578
  if (crb(c,2)) { goto L_8011D598; } // 8011D57C
  c->r[4]=R32(c->r[31]+0x00000034u); // 8011D580
  c->r[5]=0u+0x00000000u; // 8011D584
  c->r[8]=R32(c->r[31]+0x00000038u); // 8011D588
  c->r[6]=0u+0x00000000u; // 8011D58C
  c->lr=0x8011D594u; f_802BA9F4(c); // 8011D590
  goto L_8011D59C; // 8011D594
L_8011D598:;
  c->r[3]=0u+0x00000000u; // 8011D598
L_8011D59C:;
  c->r[4]=c->r[3]|c->r[3]; // 8011D59C
L_8011D5A0:;
  c->r[0]=R8(c->r[31]+0x00000030u); // 8011D5A0
  c->r[3]=c->r[4]|c->r[4]; // 8011D5A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011D5A8
  c->r[0]=cntlz(c->r[0]); // 8011D5AC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011D5B0
  c->lr=0x8011D5B8u; f_8011D5CC(c); // 8011D5B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D5B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D5BC
  c->lr=c->r[0]; // 8011D5C0
  c->r[1]=c->r[1]+0x00000010u; // 8011D5C4
  return; // 8011D5C8
}

// fn_8011D5CC
void f_8011D5CC(Ctx* __restrict c) {
  trace_call(0x8011D5CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D5CC
  c->r[0]=c->lr; // 8011D5D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011D5D4
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 8011D5D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011D5DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011D5E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011D5E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011D5E8
  c->r[28]=c->r[3]|c->r[3]; // 8011D5EC
  W8(c->r[3]+0x00000298u,c->r[4]); // 8011D5F0
  if (crb(c,2)) { goto L_8011D684; } // 8011D5F4
  c->r[31]=R32(c->r[3]+0x00000294u); // 8011D5F8
  c->r[29]=c->r[28]|c->r[28]; // 8011D5FC
  c->r[30]=0u+0x00000000u; // 8011D600
L_8011D604:;
  c->r[3]=R32(c->r[29]+0x000002A4u); // 8011D604
  cmps(c,0,(int32_t)c->r[3],0); // 8011D608
  if (crb(c,2)) { goto L_8011D628; } // 8011D60C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D610
  c->r[4]=0u+0x00000000u; // 8011D614
  c->r[5]=0u+0x00000000u; // 8011D618
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D61C
  c->ctr=c->r[12]; // 8011D620
  if (true) { c->lr=0x8011D628u; dispatch(c,c->ctr); } // 8011D624
L_8011D628:;
  c->r[30]=c->r[30]+0x00000001u; // 8011D628
  c->r[29]=c->r[29]+0x00000004u; // 8011D62C
  cmps(c,0,(int32_t)c->r[30],4); // 8011D630
  if (crb(c,0)) { IRQCHK(c); goto L_8011D604; } // 8011D634
  c->r[0]=R8(c->r[28]+0x000002A0u); // 8011D638
  W32(c->r[28]+0x00000294u,c->r[31]); // 8011D63C
  cmps(c,0,(int32_t)c->r[0],0); // 8011D640
  if (crb(c,2)) { goto L_8011D6E8; } // 8011D644
  c->r[0]=R8(c->r[28]+0x00000298u); // 8011D648
  cmps(c,0,(int32_t)c->r[0],0); // 8011D64C
  if (crb(c,2)) { goto L_8011D6E8; } // 8011D650
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8011D654
  c->r[3]=c->r[28]+c->r[0]; // 8011D658
  c->r[3]=R32(c->r[3]+0x000002A4u); // 8011D65C
  cmps(c,0,(int32_t)c->r[3],0); // 8011D660
  if (crb(c,2)) { goto L_8011D6E8; } // 8011D664
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D668
  c->r[4]=0u+0x00000001u; // 8011D66C
  c->r[5]=0u+0x00000000u; // 8011D670
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D674
  c->ctr=c->r[12]; // 8011D678
  if (true) { c->lr=0x8011D680u; dispatch(c,c->ctr); } // 8011D67C
  goto L_8011D6E8; // 8011D680
L_8011D684:;
  c->r[4]=R32(c->r[3]+0x00000294u); // 8011D684
  c->r[0]=0u+0x00000000u; // 8011D688
  W32(c->r[3]+0x0000029Cu,c->r[0]); // 8011D68C
  cmps(c,0,(int32_t)c->r[4],2); // 8011D690
  W8(c->r[3]+0x000002B4u,c->r[0]); // 8011D694
  W8(c->r[3]+0x000002B5u,c->r[0]); // 8011D698
  if (crb(c,2)) { goto L_8011D6A8; } // 8011D69C
  cmps(c,0,(int32_t)c->r[4],3); // 8011D6A0
  if (!crb(c,2)) { goto L_8011D6B0; } // 8011D6A4
L_8011D6A8:;
  c->r[0]=0u+0x00000001u; // 8011D6A8
  W32(c->r[3]+0x00000294u,c->r[0]); // 8011D6AC
L_8011D6B0:;
  c->r[29]=0u+0x00000000u; // 8011D6B0
L_8011D6B4:;
  c->r[3]=R32(c->r[28]+0x000002A4u); // 8011D6B4
  cmps(c,0,(int32_t)c->r[3],0); // 8011D6B8
  if (crb(c,2)) { goto L_8011D6D8; } // 8011D6BC
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D6C0
  c->r[4]=0u+0x00000000u; // 8011D6C4
  c->r[5]=0u+0x00000000u; // 8011D6C8
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011D6CC
  c->ctr=c->r[12]; // 8011D6D0
  if (true) { c->lr=0x8011D6D8u; dispatch(c,c->ctr); } // 8011D6D4
L_8011D6D8:;
  c->r[29]=c->r[29]+0x00000001u; // 8011D6D8
  c->r[28]=c->r[28]+0x00000004u; // 8011D6DC
  cmps(c,0,(int32_t)c->r[29],4); // 8011D6E0
  if (crb(c,0)) { IRQCHK(c); goto L_8011D6B4; } // 8011D6E4
L_8011D6E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011D6E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011D6EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011D6F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011D6F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011D6F8
  c->lr=c->r[0]; // 8011D6FC
  c->r[1]=c->r[1]+0x00000020u; // 8011D700
  return; // 8011D704
}

// fn_8011D708
void f_8011D708(Ctx* __restrict c) {
  trace_call(0x8011D708u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D708
  c->r[0]=c->lr; // 8011D70C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011D710
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8011D714
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8011D718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D71C
  c->r[31]=c->r[3]|c->r[3]; // 8011D720
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 8011D724
  c->r[4]=R32(c->r[31]+0x00000030u); // 8011D728
  c->lr=0x8011D730u; f_8014F418(c); // 8011D72C
  c->r[0]=R8(c->r[31]+0x00000040u); // 8011D730
  c->f[31]=c->f[1]; // 8011D734
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011D738
  if (crb(c,2)) { goto L_8011D748; } // 8011D73C
  {uint32_t ea=c->r[2]+0xFFFF8A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011D740
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 8011D744
L_8011D748:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8011D748
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011D74C
  cmps(c,0,(int32_t)c->r[3],0); // 8011D750
  if (crb(c,2)) { goto L_8011D75C; } // 8011D754
  goto L_8011D784; // 8011D758
L_8011D75C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011D75C
  cmps(c,0,(int32_t)c->r[3],0); // 8011D760
  if (crb(c,2)) { goto L_8011D780; } // 8011D764
  c->r[4]=R32(c->r[31]+0x00000034u); // 8011D768
  c->r[5]=0u+0x00000000u; // 8011D76C
  c->r[8]=R32(c->r[31]+0x00000038u); // 8011D770
  c->r[6]=0u+0x00000000u; // 8011D774
  c->lr=0x8011D77Cu; f_802BA9F4(c); // 8011D778
  goto L_8011D784; // 8011D77C
L_8011D780:;
  c->r[3]=0u+0x00000000u; // 8011D780
L_8011D784:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011D784
  if (crb(c,2)) { goto L_8011D7A0; } // 8011D788
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D78C
  c->f[1]=c->f[31]; // 8011D790
  c->r[12]=R32(c->r[12]+0x000000ECu); // 8011D794
  c->ctr=c->r[12]; // 8011D798
  if (true) { c->lr=0x8011D7A0u; dispatch(c,c->ctr); } // 8011D79C
L_8011D7A0:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8011D7A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011D7A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8011D7A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D7AC
  c->lr=c->r[0]; // 8011D7B0
  c->r[1]=c->r[1]+0x00000020u; // 8011D7B4
  return; // 8011D7B8
}

// fn_8011D7BC
void f_8011D7BC(Ctx* __restrict c) {
  trace_call(0x8011D7BCu);
  return; // 8011D7BC
}

// fn_8011D7C0
void f_8011D7C0(Ctx* __restrict c) {
  trace_call(0x8011D7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D7C0
  c->r[0]=c->lr; // 8011D7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D7C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D7CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011D7D0
  c->r[30]=c->r[3]|c->r[3]; // 8011D7D4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8011D7D8
  c->r[31]=R32(c->r[13]+0xFFFFE12Cu); // 8011D7DC
  cmps(c,0,(int32_t)c->r[0],0); // 8011D7E0
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011D7E4
  if (crb(c,2)) { goto L_8011D7F0; } // 8011D7E8
  goto L_8011D81C; // 8011D7EC
L_8011D7F0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011D7F0
  cmps(c,0,(int32_t)c->r[3],0); // 8011D7F4
  if (crb(c,2)) { goto L_8011D814; } // 8011D7F8
  c->r[4]=R32(c->r[30]+0x00000034u); // 8011D7FC
  c->r[5]=0u+0x00000000u; // 8011D800
  c->r[8]=R32(c->r[30]+0x00000038u); // 8011D804
  c->r[6]=0u+0x00000000u; // 8011D808
  c->lr=0x8011D810u; f_802BA9F4(c); // 8011D80C
  goto L_8011D818; // 8011D810
L_8011D814:;
  c->r[3]=0u+0x00000000u; // 8011D814
L_8011D818:;
  c->r[0]=c->r[3]|c->r[3]; // 8011D818
L_8011D81C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8011D81C
  if (crb(c,2)) { goto L_8011D85C; } // 8011D820
  c->r[3]=c->r[0]|c->r[0]; // 8011D824
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011D828
  c->r[12]=R32(c->r[12]+0x000000E8u); // 8011D82C
  c->ctr=c->r[12]; // 8011D830
  if (true) { c->lr=0x8011D838u; dispatch(c,c->ctr); } // 8011D834
  c->r[0]=R8(c->r[30]+0x00000040u); // 8011D838
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011D83C
  if (crb(c,2)) { goto L_8011D84C; } // 8011D840
  {uint32_t ea=c->r[2]+0xFFFF8A54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011D844
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8011D848
L_8011D84C:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 8011D84C
  c->r[3]=c->r[31]|c->r[31]; // 8011D850
  c->r[5]=0u+0x00000000u; // 8011D854
  c->lr=0x8011D85Cu; f_8014F31C(c); // 8011D858
L_8011D85C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D85C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D860
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011D864
  c->lr=c->r[0]; // 8011D868
  c->r[1]=c->r[1]+0x00000010u; // 8011D86C
  return; // 8011D870
}

// fn_8011D874
void f_8011D874(Ctx* __restrict c) {
  trace_call(0x8011D874u);
  {uint32_t ea=c->r[2]+0xFFFF8A48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011D874
  return; // 8011D878
}

// fn_8011D87C
void f_8011D87C(Ctx* __restrict c) {
  trace_call(0x8011D87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D87C
  c->r[0]=c->lr; // 8011D880
  c->r[5]=c->r[3]|c->r[3]; // 8011D884
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D888
  c->r[4]=R32(c->r[3]+0x00000014u); // 8011D88C
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011D890
  cmps(c,0,(int32_t)c->r[4],0); // 8011D894
  if (crb(c,2)) { goto L_8011D8A0; } // 8011D898
  goto L_8011D8CC; // 8011D89C
L_8011D8A0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011D8A0
  cmps(c,0,(int32_t)c->r[3],0); // 8011D8A4
  if (crb(c,2)) { goto L_8011D8C4; } // 8011D8A8
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8011D8AC
  c->r[6]=0u+0x00000000u; // 8011D8B0
  c->r[8]=R32(c->r[5]+0x00000010u); // 8011D8B4
  c->r[5]=0u+0x00000000u; // 8011D8B8
  c->lr=0x8011D8C0u; f_802BA9F4(c); // 8011D8BC
  goto L_8011D8C8; // 8011D8C0
L_8011D8C4:;
  c->r[3]=0u+0x00000000u; // 8011D8C4
L_8011D8C8:;
  c->r[4]=c->r[3]|c->r[3]; // 8011D8C8
L_8011D8CC:;
  c->r[3]=R32(c->r[4]+0x00000294u); // 8011D8CC
  c->r[0]=0u-c->r[3]; // 8011D8D0
  c->r[0]=c->r[0]|c->r[3]; // 8011D8D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8011D8D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D8DC
  c->lr=c->r[0]; // 8011D8E0
  c->r[1]=c->r[1]+0x00000010u; // 8011D8E4
  return; // 8011D8E8
}

// fn_8011D8EC
void f_8011D8EC(Ctx* __restrict c) {
  trace_call(0x8011D8ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D8EC
  c->r[0]=c->lr; // 8011D8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D8F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D8F8
  c->r[31]=c->r[3]|c->r[3]; // 8011D8FC
  c->lr=0x8011D904u; f_8030554C(c); // 8011D900
  c->r[4]=R32(c->r[31]+0x00000018u); // 8011D904
  c->r[3]=0u+0x80420000u; // 8011D908
  c->r[3]=c->r[3]+0x000031C0u; // 8011D90C
  c->r[0]=0u+0x00000000u; // 8011D910
  c->r[4]=c->r[4]|0x80000000u; // 8011D914
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8011D918
  c->r[3]=c->r[31]|c->r[31]; // 8011D91C
  W32(c->r[31]+0x00000018u,c->r[4]); // 8011D920
  W8(c->r[31]+0x00000270u,c->r[0]); // 8011D924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D928
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D92C
  c->lr=c->r[0]; // 8011D930
  c->r[1]=c->r[1]+0x00000010u; // 8011D934
  return; // 8011D938
}

// fn_8011D93C
void f_8011D93C(Ctx* __restrict c) {
  trace_call(0x8011D93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D93C
  c->r[0]=c->lr; // 8011D940
  cmps(c,0,(int32_t)c->r[3],0); // 8011D944
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011D948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011D94C
  c->r[31]=c->r[4]|c->r[4]; // 8011D950
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011D954
  c->r[30]=c->r[3]|c->r[3]; // 8011D958
  if (crb(c,2)) { goto L_8011D978; } // 8011D95C
  c->r[4]=0u+0x00000000u; // 8011D960
  c->lr=0x8011D968u; f_803055E0(c); // 8011D964
  cmps(c,0,(int32_t)c->r[31],0); // 8011D968
  if (!crb(c,1)) { goto L_8011D978; } // 8011D96C
  c->r[3]=c->r[30]|c->r[30]; // 8011D970
  c->lr=0x8011D978u; f_80244DC0(c); // 8011D974
L_8011D978:;
  c->r[3]=c->r[30]|c->r[30]; // 8011D978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011D97C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011D980
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011D984
  c->lr=c->r[0]; // 8011D988
  c->r[1]=c->r[1]+0x00000010u; // 8011D98C
  return; // 8011D990
}

// fn_8011D994
void f_8011D994(Ctx* __restrict c) {
  trace_call(0x8011D994u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011D994
  c->r[0]=c->lr; // 8011D998
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011D99C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011D9A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011D9A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011D9A8
  c->r[29]=c->r[5]|c->r[5]; // 8011D9AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011D9B0
  c->r[28]=c->r[3]|c->r[3]; // 8011D9B4
  c->lr=0x8011D9BCu; f_802D6894(c); // 8011D9B8
  cmps(c,0,(int32_t)c->r[29],9); // 8011D9BC
  if (!crb(c,2)) { goto L_8011DAB4; } // 8011D9C0
  c->r[29]=R32(c->r[28]+0x0000009Cu); // 8011D9C4
  c->r[31]=0u+0x9CCA0000u; // 8011D9C8
  goto L_8011D9D8; // 8011D9CC
L_8011D9D0:;
  c->r[3]=R32(c->r[28]+0x0000009Cu); // 8011D9D0
  c->r[29]=R32(c->r[3]+0x0000009Cu); // 8011D9D4
L_8011D9D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 8011D9D8
  if (!crb(c,2)) { goto L_8011D9E8; } // 8011D9DC
  c->r[30]=0u+0x00000000u; // 8011D9E0
  goto L_8011DA30; // 8011D9E4
L_8011D9E8:;
  c->r[3]=R32(c->r[29]+0x0000004Cu); // 8011D9E8
  cmps(c,0,(int32_t)c->r[3],0); // 8011D9EC
  if (!crb(c,2)) { goto L_8011D9FC; } // 8011D9F0
  c->r[30]=0u+0x00000000u; // 8011D9F4
  goto L_8011DA30; // 8011D9F8
L_8011D9FC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8011D9FC
  c->r[30]=0u+0x00000000u; // 8011DA00
  c->r[0]=c->r[4]+0x63370000u; // 8011DA04
  cmpu(c,0,c->r[0],0x0000F2C3u); // 8011DA08
  if (crb(c,2)) { goto L_8011DA2C; } // 8011DA0C
  c->r[12]=R32(c->r[3]+0x00000018u); // 8011DA10
  c->r[4]=c->r[31]+0xFFFFF2C3u; // 8011DA14
  c->r[12]=R32(c->r[12]+0x00000020u); // 8011DA18
  c->ctr=c->r[12]; // 8011DA1C
  if (true) { c->lr=0x8011DA24u; dispatch(c,c->ctr); } // 8011DA20
  cmps(c,0,(int32_t)c->r[3],0); // 8011DA24
  if (crb(c,2)) { goto L_8011DA30; } // 8011DA28
L_8011DA2C:;
  c->r[30]=0u+0x00000001u; // 8011DA2C
L_8011DA30:;
  cmps(c,0,(int32_t)c->r[30],0); // 8011DA30
  if (crb(c,2)) { IRQCHK(c); goto L_8011D9D0; } // 8011DA34
  c->r[3]=0u+0x0000000Cu; // 8011DA38
  c->r[4]=c->r[13]+0xFFFFBEB0u; // 8011DA3C
  c->r[5]=0u+0x00000000u; // 8011DA40
  c->r[6]=0u+0x00001001u; // 8011DA44
  c->lr=0x8011DA4Cu; f_80244D20(c); // 8011DA48
  cmps(c,0,(int32_t)c->r[3],0); // 8011DA4C
  if (crb(c,2)) { goto L_8011DA68; } // 8011DA50
  c->r[4]=R32(c->r[29]+0x000002E8u); // 8011DA54
  c->r[0]=c->r[29]+0x000002E4u; // 8011DA58
  W32(c->r[3]+0x00000000u,c->r[28]); // 8011DA5C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8011DA60
  W32(c->r[3]+0x00000008u,c->r[0]); // 8011DA64
L_8011DA68:;
  c->r[4]=R32(c->r[29]+0x000002E8u); // 8011DA68
  {uint32_t ea=c->r[2]+0xFFFF8A58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DA6C
  W32(c->r[4]+0x00000008u,c->r[3]); // 8011DA70
  W32(c->r[29]+0x000002E8u,c->r[3]); // 8011DA74
  {uint32_t ea=c->r[28]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DA78
  {uint32_t ea=c->r[28]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011DA7C
  {uint32_t ea=c->r[28]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011DA80
  fcmp(c,0,c->f[1],c->f[0]); // 8011DA84
  {uint32_t ea=c->r[28]+0x00000268u; WF32(ea,c->f[3]);} // 8011DA88
  {uint32_t ea=c->r[28]+0x0000026Cu; WF32(ea,c->f[2]);} // 8011DA8C
  if (!crb(c,0)) { goto L_8011DAB4; } // 8011DA90
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 8011DA94
  c->lr=0x8011DA9Cu; f_80114840(c); // 8011DA98
  cmps(c,0,(int32_t)c->r[3],0); // 8011DA9C
  if (crb(c,2)) { goto L_8011DAB4; } // 8011DAA0
  {uint32_t ea=c->r[28]+0x00000268u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DAA4
  {uint32_t ea=c->r[2]+0xFFFF8A5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DAA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011DAAC
  {uint32_t ea=c->r[28]+0x00000268u; WF32(ea,c->f[0]);} // 8011DAB0
L_8011DAB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011DAB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011DAB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011DABC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011DAC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011DAC4
  c->lr=c->r[0]; // 8011DAC8
  c->r[1]=c->r[1]+0x00000020u; // 8011DACC
  return; // 8011DAD0
}

// fn_8011DAD4
void f_8011DAD4(Ctx* __restrict c) {
  trace_call(0x8011DAD4u);
  f_802D825C(c); return; // 8011DAD4
}

// fn_8011DAD8
void f_8011DAD8(Ctx* __restrict c) {
  trace_call(0x8011DAD8u);
  return; // 8011DAD8
}

// fn_8011DADC
void f_8011DADC(Ctx* __restrict c) {
  trace_call(0x8011DADCu);
  return; // 8011DADC
}

// fn_8011DAE0
void f_8011DAE0(Ctx* __restrict c) {
  trace_call(0x8011DAE0u);
  return; // 8011DAE0
}

// fn_8011DAE4
void f_8011DAE4(Ctx* __restrict c) {
  trace_call(0x8011DAE4u);
  return; // 8011DAE4
}

// fn_8011DAE8
void f_8011DAE8(Ctx* __restrict c) {
  trace_call(0x8011DAE8u);
  c->r[3]=0u+0x00000000u; // 8011DAE8
  return; // 8011DAEC
}

// fn_8011DAF0
void f_8011DAF0(Ctx* __restrict c) {
  trace_call(0x8011DAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011DAF0
  c->r[0]=c->lr; // 8011DAF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011DAF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011DAFC
  c->r[31]=c->r[3]|c->r[3]; // 8011DB00
  c->lr=0x8011DB08u; f_802E1704(c); // 8011DB04
  {uint32_t ea=c->r[2]+0xFFFF8A60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DB08
  c->r[4]=0u+0x80420000u; // 8011DB0C
  c->r[0]=0u+0x00000000u; // 8011DB10
  W8(c->r[31]+0x00000038u,c->r[0]); // 8011DB14
  c->r[4]=c->r[4]+0x000032A0u; // 8011DB18
  c->r[3]=c->r[31]|c->r[31]; // 8011DB1C
  W32(c->r[31]+0x00000020u,c->r[4]); // 8011DB20
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 8011DB24
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 8011DB28
  W8(c->r[31]+0x00000050u,c->r[0]); // 8011DB2C
  W8(c->r[31]+0x00000054u,c->r[0]); // 8011DB30
  W8(c->r[31]+0x00000058u,c->r[0]); // 8011DB34
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 8011DB38
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 8011DB3C
  W8(c->r[31]+0x0000004Du,c->r[0]); // 8011DB40
  W8(c->r[31]+0x00000051u,c->r[0]); // 8011DB44
  W8(c->r[31]+0x00000055u,c->r[0]); // 8011DB48
  W8(c->r[31]+0x00000059u,c->r[0]); // 8011DB4C
  W8(c->r[31]+0x0000005Du,c->r[0]); // 8011DB50
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 8011DB54
  W8(c->r[31]+0x0000004Eu,c->r[0]); // 8011DB58
  W8(c->r[31]+0x00000052u,c->r[0]); // 8011DB5C
  W8(c->r[31]+0x00000056u,c->r[0]); // 8011DB60
  W8(c->r[31]+0x0000005Au,c->r[0]); // 8011DB64
  W8(c->r[31]+0x0000005Eu,c->r[0]); // 8011DB68
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 8011DB6C
  W8(c->r[31]+0x0000004Fu,c->r[0]); // 8011DB70
  W8(c->r[31]+0x00000053u,c->r[0]); // 8011DB74
  W8(c->r[31]+0x00000057u,c->r[0]); // 8011DB78
  W8(c->r[31]+0x0000005Bu,c->r[0]); // 8011DB7C
  W8(c->r[31]+0x0000005Fu,c->r[0]); // 8011DB80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011DB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011DB88
  c->lr=c->r[0]; // 8011DB8C
  c->r[1]=c->r[1]+0x00000010u; // 8011DB90
  return; // 8011DB94
}

// fn_8011DB98
void f_8011DB98(Ctx* __restrict c) {
  trace_call(0x8011DB98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011DB98
  c->r[0]=c->lr; // 8011DB9C
  cmps(c,0,(int32_t)c->r[3],0); // 8011DBA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011DBA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011DBA8
  c->r[31]=c->r[4]|c->r[4]; // 8011DBAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011DBB0
  c->r[30]=c->r[3]|c->r[3]; // 8011DBB4
  if (crb(c,2)) { goto L_8011DBD4; } // 8011DBB8
  c->r[4]=0u+0x00000000u; // 8011DBBC
  c->lr=0x8011DBC4u; f_802E1750(c); // 8011DBC0
  cmps(c,0,(int32_t)c->r[31],0); // 8011DBC4
  if (!crb(c,1)) { goto L_8011DBD4; } // 8011DBC8
  c->r[3]=c->r[30]|c->r[30]; // 8011DBCC
  c->lr=0x8011DBD4u; f_80244DC0(c); // 8011DBD0
L_8011DBD4:;
  c->r[3]=c->r[30]|c->r[30]; // 8011DBD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011DBD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011DBDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011DBE0
  c->lr=c->r[0]; // 8011DBE4
  c->r[1]=c->r[1]+0x00000010u; // 8011DBE8
  return; // 8011DBEC
}

// fn_8011DBF0
void f_8011DBF0(Ctx* __restrict c) {
  trace_call(0x8011DBF0u);
  cmps(c,0,(int32_t)c->r[5],2); // 8011DBF0
  if (!crb(c,2)) return; // 8011DBF4
  c->r[4]=R32(c->r[13]+0xFFFFE138u); // 8011DBF8
  cmps(c,0,(int32_t)c->r[4],0); // 8011DBFC
  if (crb(c,2)) return; // 8011DC00
  W32(c->r[4]+0x00000014u,c->r[3]); // 8011DC04
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 8011DC08
  f_8002E514(c); return; // 8011DC0C
  return; // 8011DC10
}

// fn_8011DC14
void f_8011DC14(Ctx* __restrict c) {
  trace_call(0x8011DC14u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011DC14
  c->r[0]=c->lr; // 8011DC18
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8011DC1C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8011DC20
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8011DC24
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 8011DC28
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 8011DC2C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 8011DC30
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 8011DC34
  c->r[11]=c->r[1]+0x00000080u; // 8011DC38
  c->lr=0x8011DC40u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011DC3C
  c->r[24]=c->r[4]|c->r[4]; // 8011DC40
  c->r[23]=c->r[3]|c->r[3]; // 8011DC44
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DC48
  c->r[3]=c->r[24]|c->r[24]; // 8011DC4C
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 8011DC50
  c->ctr=c->r[12]; // 8011DC54
  if (true) { c->lr=0x8011DC5Cu; dispatch(c,c->ctr); } // 8011DC58
  {uint32_t ea=c->r[2]+0xFFFF8A60u; c->f[29]=c->ps1[29]=RF32(ea);} // 8011DC5C
  c->r[29]=c->r[3]|c->r[3]; // 8011DC60
  {uint32_t ea=c->r[2]+0xFFFF8A64u; c->f[30]=c->ps1[30]=RF32(ea);} // 8011DC64
  c->r[28]=c->r[23]|c->r[23]; // 8011DC68
  {uint32_t ea=c->r[2]+0xFFFF8A68u; c->f[31]=c->ps1[31]=RF32(ea);} // 8011DC6C
  c->r[25]=0u+0x00000000u; // 8011DC70
  c->r[27]=0u+0x00000000u; // 8011DC74
  c->r[26]=0u+0x00000000u; // 8011DC78
  c->r[31]=0u+0x00000000u; // 8011DC7C
  c->r[22]=0u+0x00000001u; // 8011DC80
  c->r[30]=0u+0x80000000u; // 8011DC84
L_8011DC88:;
  c->r[0]=R32(c->r[13]+0xFFFFE138u); // 8011DC88
  c->r[5]=rotl(c->r[25],0)&0x000000FFu; // 8011DC8C
  c->r[3]=c->r[0]+c->r[5]; // 8011DC90
  c->r[0]=R8(c->r[3]+0x0000232Cu); // 8011DC94
  cmps(c,0,(int32_t)c->r[0],0); // 8011DC98
  if (!crb(c,2)) { goto L_8011DCDC; } // 8011DC9C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[29]);} // 8011DCA0
  c->r[3]=c->r[24]|c->r[24]; // 8011DCA4
  c->r[4]=c->r[1]+0x00000040u; // 8011DCA8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[30]);} // 8011DCAC
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DCB0
  c->r[12]=R32(c->r[12]+0x000000F8u); // 8011DCB4
  c->ctr=c->r[12]; // 8011DCB8
  if (true) { c->lr=0x8011DCC0u; dispatch(c,c->ctr); } // 8011DCBC
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DCC0
  c->r[3]=c->r[24]|c->r[24]; // 8011DCC4
  c->r[4]=c->r[1]+0x00000040u; // 8011DCC8
  c->r[5]=rotl(c->r[25],0)&0x000000FFu; // 8011DCCC
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8011DCD0
  c->ctr=c->r[12]; // 8011DCD4
  if (true) { c->lr=0x8011DCDCu; dispatch(c,c->ctr); } // 8011DCD8
L_8011DCDC:;
  c->r[0]=((c->r[25])&0x20)?0u:(c->r[30]>>((c->r[25])&31)); // 8011DCDC
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 8011DCE0
  if (crb(c,2)) { goto L_8011DF94; } // 8011DCE4
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 8011DCE8
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 8011DCEC
  c->r[3]=c->r[3]+c->r[0]; // 8011DCF0
  c->r[0]=R8(c->r[3]+0x0000232Cu); // 8011DCF4
  cmps(c,0,(int32_t)c->r[0],0); // 8011DCF8
  if (crb(c,2)) { goto L_8011DF34; } // 8011DCFC
  c->r[3]=c->r[23]+c->r[25]; // 8011DD00
  c->r[0]=R8(c->r[3]+0x0000004Cu); // 8011DD04
  cmps(c,0,(int32_t)c->r[0],0); // 8011DD08
  if (crb(c,2)) { goto L_8011DD1C; } // 8011DD0C
  W8(c->r[23]+0x00000038u,c->r[31]); // 8011DD10
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DD14
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 8011DD18
L_8011DD1C:;
  c->r[3]=c->r[23]|c->r[23]; // 8011DD1C
  c->r[5]=c->r[25]|c->r[25]; // 8011DD20
  c->r[4]=0u+0x00000002u; // 8011DD24
  c->lr=0x8011DD2Cu; f_802E1EAC(c); // 8011DD28
  cmps(c,0,(int32_t)c->r[25],-1); // 8011DD2C
  if (crb(c,2)) { goto L_8011DD74; } // 8011DD30
  c->r[3]=R32(c->r[28]+0x00000028u); // 8011DD34
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8011DD38
  c->r[3]=R32(c->r[3]+0x00000008u); // 8011DD3C
  c->r[0]=R32(c->r[3]+0x00000060u); // 8011DD40
  c->r[0]=rotl(c->r[0],0)&0x00000FFFu; // 8011DD44
  cmps(c,0,(int32_t)c->r[0],337); // 8011DD48
  if (!crb(c,2)) { goto L_8011DD60; } // 8011DD4C
  c->r[0]=R32(c->r[13]+0xFFFFE138u); // 8011DD50
  c->r[3]=c->r[0]+c->r[27]; // 8011DD54
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DD58
  goto L_8011DD74; // 8011DD5C
L_8011DD60:;
  cmps(c,0,(int32_t)c->r[0],338); // 8011DD60
  if (!crb(c,2)) { goto L_8011DD74; } // 8011DD64
  c->r[0]=R32(c->r[13]+0xFFFFE138u); // 8011DD68
  c->r[3]=c->r[0]+c->r[27]; // 8011DD6C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DD70
L_8011DD74:;
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8011DD74
  c->r[3]=c->r[23]|c->r[23]; // 8011DD78
  c->r[5]=c->r[25]|c->r[25]; // 8011DD7C
  c->r[4]=0u+0x00000003u; // 8011DD80
  c->lr=0x8011DD88u; f_802E1EAC(c); // 8011DD84
  cmps(c,0,(int32_t)c->r[25],-1); // 8011DD88
  if (crb(c,2)) { goto L_8011DDD0; } // 8011DD8C
  c->r[3]=R32(c->r[28]+0x00000028u); // 8011DD90
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8011DD94
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8011DD98
  c->r[0]=R32(c->r[3]+0x00000060u); // 8011DD9C
  c->r[0]=rotl(c->r[0],0)&0x00000FFFu; // 8011DDA0
  cmps(c,0,(int32_t)c->r[0],337); // 8011DDA4
  if (!crb(c,2)) { goto L_8011DDBC; } // 8011DDA8
  c->r[0]=R32(c->r[13]+0xFFFFE138u); // 8011DDAC
  c->r[3]=c->r[0]+c->r[27]; // 8011DDB0
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DDB4
  goto L_8011DDD0; // 8011DDB8
L_8011DDBC:;
  cmps(c,0,(int32_t)c->r[0],338); // 8011DDBC
  if (!crb(c,2)) { goto L_8011DDD0; } // 8011DDC0
  c->r[0]=R32(c->r[13]+0xFFFFE138u); // 8011DDC4
  c->r[3]=c->r[0]+c->r[27]; // 8011DDC8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DDCC
L_8011DDD0:;
  c->f[0]=-c->f[1]; // 8011DDD0
  c->r[0]=R32(c->r[13]+0xFFFFE130u); // 8011DDD4
  c->r[5]=R32(c->r[1]+0x00000038u); // 8011DDD8
  c->r[3]=c->r[24]|c->r[24]; // 8011DDDC
  W32(c->r[1]+0x00000020u,c->r[5]); // 8011DDE0
  c->r[6]=c->r[0]+c->r[26]; // 8011DDE4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8011DDE8
  c->r[4]=c->r[1]+0x00000038u; // 8011DDEC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011DDF0
  c->r[5]=rotl(c->r[25],0)&0x000000FFu; // 8011DDF4
  {uint32_t ea=c->r[6]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011DDF8
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8011DDFC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 8011DE00
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011DE04
  {uint32_t ea=c->r[6]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DE08
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DE0C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 8011DE10
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8011DE14
  {uint32_t ea=c->r[6]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011DE18
  {uint32_t ea=c->r[6]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DE1C
  c->r[6]=R32(c->r[1]+0x00000020u); // 8011DE20
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8011DE24
  W32(c->r[1]+0x00000008u,c->r[6]); // 8011DE28
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011DE2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DE30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8011DE34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8011DE38
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8011DE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011DE40
  W32(c->r[1]+0x00000010u,c->r[6]); // 8011DE44
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8011DE48
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[2]); // 8011DE4C
  c->r[0]=R32(c->r[1]+0x00000018u); // 8011DE50
  W32(c->r[1]+0x00000030u,c->r[0]); // 8011DE54
  W32(c->r[1]+0x00000028u,c->r[0]); // 8011DE58
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8011DE5C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8011DE60
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011DE64
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DE68
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8011DE6C
  c->r[12]=R32(c->r[12]+0x000000F8u); // 8011DE70
  c->ctr=c->r[12]; // 8011DE74
  if (true) { c->lr=0x8011DE7Cu; dispatch(c,c->ctr); } // 8011DE78
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DE7C
  c->r[3]=c->r[24]|c->r[24]; // 8011DE80
  c->r[4]=c->r[1]+0x00000030u; // 8011DE84
  c->r[5]=rotl(c->r[25],0)&0x000000FFu; // 8011DE88
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8011DE8C
  c->ctr=c->r[12]; // 8011DE90
  if (true) { c->lr=0x8011DE98u; dispatch(c,c->ctr); } // 8011DE94
  c->r[3]=c->r[23]|c->r[23]; // 8011DE98
  c->r[5]=c->r[25]|c->r[25]; // 8011DE9C
  c->r[4]=0u+0x00000001u; // 8011DEA0
  c->lr=0x8011DEA8u; f_802E1F94(c); // 8011DEA4
  cmps(c,0,(int32_t)c->r[3],0); // 8011DEA8
  if (crb(c,2)) { goto L_8011DEE4; } // 8011DEAC
  c->r[3]=c->r[23]|c->r[23]; // 8011DEB0
  c->r[5]=c->r[25]|c->r[25]; // 8011DEB4
  c->r[4]=0u+0x00000001u; // 8011DEB8
  c->lr=0x8011DEC0u; f_802E1E04(c); // 8011DEBC
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DEC0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8011DEC4
  c->r[0]=cntlz(c->r[0]); // 8011DEC8
  c->r[3]=c->r[24]|c->r[24]; // 8011DECC
  c->r[12]=R32(c->r[12]+0x00000100u); // 8011DED0
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011DED4
  c->r[5]=rotl(c->r[25],0)&0x000000FFu; // 8011DED8
  c->ctr=c->r[12]; // 8011DEDC
  if (true) { c->lr=0x8011DEE4u; dispatch(c,c->ctr); } // 8011DEE0
L_8011DEE4:;
  c->r[3]=c->r[23]|c->r[23]; // 8011DEE4
  c->r[5]=c->r[25]|c->r[25]; // 8011DEE8
  c->r[4]=0u+0x00000000u; // 8011DEEC
  c->lr=0x8011DEF4u; f_802E1F94(c); // 8011DEF0
  cmps(c,0,(int32_t)c->r[3],0); // 8011DEF4
  if (crb(c,2)) { goto L_8011DF94; } // 8011DEF8
  c->r[3]=c->r[23]|c->r[23]; // 8011DEFC
  c->r[5]=c->r[25]|c->r[25]; // 8011DF00
  c->r[4]=0u+0x00000000u; // 8011DF04
  c->lr=0x8011DF0Cu; f_802E1E04(c); // 8011DF08
  c->r[12]=R32(c->r[24]+0x000000B4u); // 8011DF0C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8011DF10
  c->r[0]=cntlz(c->r[0]); // 8011DF14
  c->r[3]=c->r[24]|c->r[24]; // 8011DF18
  c->r[12]=R32(c->r[12]+0x00000104u); // 8011DF1C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011DF20
  c->r[5]=rotl(c->r[25],0)&0x000000FFu; // 8011DF24
  c->ctr=c->r[12]; // 8011DF28
  if (true) { c->lr=0x8011DF30u; dispatch(c,c->ctr); } // 8011DF2C
  goto L_8011DF94; // 8011DF30
L_8011DF34:;
  c->r[3]=c->r[23]+c->r[25]; // 8011DF34
  c->r[0]=R8(c->r[3]+0x0000004Cu); // 8011DF38
  cmps(c,0,(int32_t)c->r[0],0); // 8011DF3C
  if (crb(c,2)) { goto L_8011DF94; } // 8011DF40
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011DF44
  {uint32_t ea=c->r[28]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011DF48
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8011DF4C
  fcmp(c,0,c->f[0],c->f[31]); // 8011DF50
  if (!crb(c,1)) { goto L_8011DF94; } // 8011DF54
  c->r[0]=R8(c->r[23]+0x00000038u); // 8011DF58
  cmps(c,0,(int32_t)c->r[0],0); // 8011DF5C
  if (!crb(c,2)) { goto L_8011DF94; } // 8011DF60
  W8(c->r[23]+0x00000038u,c->r[22]); // 8011DF64
  c->r[3]=R32(c->r[23]+0x00000018u); // 8011DF68
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011DF6C
  c->r[21]=R32(c->r[3]+0x0000001Cu); // 8011DF70
  cmps(c,0,(int32_t)c->r[21],0); // 8011DF74
  if (crb(c,2)) { goto L_8011DF94; } // 8011DF78
  c->r[3]=c->r[21]|c->r[21]; // 8011DF7C
  c->lr=0x8011DF84u; f_8030D188(c); // 8011DF80
  c->r[3]=c->r[21]|c->r[21]; // 8011DF84
  c->r[4]=0u+0x00000000u; // 8011DF88
  c->r[5]=0u+0x00000000u; // 8011DF8C
  c->lr=0x8011DF94u; f_8030D51C(c); // 8011DF90
L_8011DF94:;
  c->r[25]=c->r[25]+0x00000001u; // 8011DF94
  c->r[27]=c->r[27]+0x000008C4u; // 8011DF98
  cmps(c,0,(int32_t)c->r[25],4); // 8011DF9C
  c->r[26]=c->r[26]+0x00000010u; // 8011DFA0
  c->r[28]=c->r[28]+0x00000004u; // 8011DFA4
  if (crb(c,0)) { IRQCHK(c); goto L_8011DC88; } // 8011DFA8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 8011DFAC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 8011DFB0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 8011DFB4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 8011DFB8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 8011DFBC
  c->r[11]=c->r[1]+0x00000080u; // 8011DFC0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 8011DFC4
  c->lr=0x8011DFCCu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011DFC8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8011DFCC
  c->lr=c->r[0]; // 8011DFD0
  c->r[1]=c->r[1]+0x000000B0u; // 8011DFD4
  return; // 8011DFD8
}

// fn_8011DFDC
void f_8011DFDC(Ctx* __restrict c) {
  trace_call(0x8011DFDCu);
  c->r[4]=R32(c->r[13]+0xFFFFE138u); // 8011DFDC
  c->r[6]=R32(c->r[4]+0x00000014u); // 8011DFE0
  cmps(c,0,(int32_t)c->r[6],0); // 8011DFE4
  if (crb(c,2)) return; // 8011DFE8
  c->r[0]=R8(c->r[3]+0x00000030u); // 8011DFEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011DFF0
  if (crb(c,2)) { goto L_8011E064; } // 8011DFF4
  c->r[0]=R8(c->r[3]+0x00000038u); // 8011DFF8
  c->r[4]=R32(c->r[13]+0xFFFFE12Cu); // 8011DFFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011E000
  c->r[7]=R8(c->r[4]+0x0000014Du); // 8011E004
  if (crb(c,2)) { goto L_8011E038; } // 8011E008
  c->r[5]=c->r[6]+c->r[7]; // 8011E00C
  c->r[0]=R8(c->r[5]+0x0000005Cu); // 8011E010
  cmps(c,0,(int32_t)c->r[0],0); // 8011E014
  if (!crb(c,2)) { goto L_8011E06C; } // 8011E018
  c->r[4]=R8(c->r[5]+0x0000004Cu); // 8011E01C
  c->r[0]=0u+0x00000001u; // 8011E020
  W8(c->r[5]+0x00000054u,c->r[4]); // 8011E024
  c->r[4]=R8(c->r[5]+0x00000050u); // 8011E028
  W8(c->r[5]+0x00000058u,c->r[4]); // 8011E02C
  W8(c->r[5]+0x0000005Cu,c->r[0]); // 8011E030
  goto L_8011E06C; // 8011E034
L_8011E038:;
  c->r[5]=c->r[6]+c->r[7]; // 8011E038
  c->r[0]=R8(c->r[5]+0x0000005Cu); // 8011E03C
  cmpu(c,0,c->r[0],0x00000001u); // 8011E040
  if (!crb(c,2)) { goto L_8011E06C; } // 8011E044
  c->r[4]=R8(c->r[5]+0x00000054u); // 8011E048
  c->r[0]=0u+0x00000000u; // 8011E04C
  W8(c->r[5]+0x0000004Cu,c->r[4]); // 8011E050
  c->r[4]=R8(c->r[5]+0x00000058u); // 8011E054
  W8(c->r[5]+0x00000050u,c->r[4]); // 8011E058
  W8(c->r[5]+0x0000005Cu,c->r[0]); // 8011E05C
  goto L_8011E06C; // 8011E060
L_8011E064:;
  c->r[0]=R32(c->r[3]+0x00000034u); // 8011E064
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 8011E068
L_8011E06C:;
  c->r[4]=R8(c->r[3]+0x00000038u); // 8011E06C
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 8011E070
  c->r[5]=R8(c->r[3]+0x00000039u); // 8011E074
  c->r[3]=c->r[6]+c->r[0]; // 8011E078
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8011E07C
  c->r[0]=0u-c->r[4]; // 8011E080
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8011E084
  c->r[0]=c->r[0]|c->r[4]; // 8011E088
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8011E08C
  c->r[4]=0u-c->r[5]; // 8011E090
  W8(c->r[3]+0x0000004Cu,c->r[0]); // 8011E094
  c->r[0]=c->r[4]|c->r[5]; // 8011E098
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8011E09C
  W8(c->r[3]+0x00000050u,c->r[0]); // 8011E0A0
  return; // 8011E0A4
}

// fn_8011E0A8
void f_8011E0A8(Ctx* __restrict c) {
  trace_call(0x8011E0A8u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8011E0A8
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 8011E0AC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8011E0B0
  c->r[3]=c->r[3]+c->r[0]; // 8011E0B4
  c->r[3]=R8(c->r[3]+0x0000232Cu); // 8011E0B8
  return; // 8011E0BC
}

// fn_8011E0C0
void f_8011E0C0(Ctx* __restrict c) {
  trace_call(0x8011E0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E0C0
  c->r[0]=c->lr; // 8011E0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011E0C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011E0CC
  c->r[31]=0u+0x00000000u; // 8011E0D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011E0D4
  c->r[30]=0u+0x00000000u; // 8011E0D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011E0DC
  c->r[29]=c->r[3]|c->r[3]; // 8011E0E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011E0E4
  c->r[28]=0u+0x00000000u; // 8011E0E8
  c->r[4]=R32(c->r[13]+0xFFFFE134u); // 8011E0EC
  cmps(c,0,(int32_t)c->r[4],0); // 8011E0F0
  if (crb(c,2)) { goto L_8011E160; } // 8011E0F4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8011E0F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8011E0FC
  c->r[4]=c->r[4]+c->r[0]; // 8011E100
  c->r[4]=R32(c->r[4]+0x00000030u); // 8011E104
  cmps(c,0,(int32_t)c->r[4],0); // 8011E108
  if (crb(c,2)) { goto L_8011E13C; } // 8011E10C
  c->r[0]=R8(c->r[4]+0x00000185u); // 8011E110
  cmps(c,0,(int32_t)c->r[0],0); // 8011E114
  if (crb(c,2)) { goto L_8011E13C; } // 8011E118
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8011E11C
  c->r[3]=R32(c->r[13]+0xFFFFE12Cu); // 8011E120
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8011E124
  c->r[3]=c->r[3]+c->r[0]; // 8011E128
  c->r[0]=R8(c->r[3]+0x00000234u); // 8011E12C
  cmps(c,0,(int32_t)c->r[0],0); // 8011E130
  if (!crb(c,2)) { goto L_8011E13C; } // 8011E134
  c->r[28]=0u+0x00000001u; // 8011E138
L_8011E13C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011E13C
  if (crb(c,2)) { goto L_8011E17C; } // 8011E140
  c->r[3]=c->r[4]|c->r[4]; // 8011E144
  c->lr=0x8011E14Cu; f_80131858(c); // 8011E148
  cmps(c,0,(int32_t)c->r[3],0); // 8011E14C
  if (crb(c,2)) { goto L_8011E17C; } // 8011E150
  c->r[28]=0u+0x00000001u; // 8011E154
  c->r[30]=0u+0x00000001u; // 8011E158
  goto L_8011E17C; // 8011E15C
L_8011E160:;
  c->r[4]=R32(c->r[13]+0xFFFFE138u); // 8011E160
  c->r[4]=R32(c->r[4]+0x00000014u); // 8011E164
  cmps(c,0,(int32_t)c->r[4],0); // 8011E168
  if (crb(c,2)) { goto L_8011E17C; } // 8011E16C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8011E170
  c->r[3]=c->r[4]+c->r[0]; // 8011E174
  c->r[28]=R8(c->r[3]+0x0000004Cu); // 8011E178
L_8011E17C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8011E17C
  if (crb(c,2)) { goto L_8011E1B0; } // 8011E180
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8011E184
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 8011E188
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8011E18C
  c->r[3]=c->r[3]+c->r[0]; // 8011E190
  c->r[0]=R8(c->r[3]+0x0000232Cu); // 8011E194
  cmps(c,0,(int32_t)c->r[0],0); // 8011E198
  if (!crb(c,2)) { goto L_8011E1B0; } // 8011E19C
  cmps(c,0,(int32_t)c->r[30],0); // 8011E1A0
  c->r[31]=0u+0x00000001u; // 8011E1A4
  if (crb(c,2)) { goto L_8011E1B0; } // 8011E1A8
  c->r[31]=0u+0x00000005u; // 8011E1AC
L_8011E1B0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8011E1B0
  c->r[0]=c->r[31]-c->r[0]; // 8011E1B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011E1B8
  c->r[0]=cntlz(c->r[0]); // 8011E1BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011E1C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011E1C4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011E1C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011E1CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011E1D0
  c->lr=c->r[0]; // 8011E1D4
  c->r[1]=c->r[1]+0x00000020u; // 8011E1D8
  return; // 8011E1DC
}

// fn_8011E1E0
void f_8011E1E0(Ctx* __restrict c) {
  trace_call(0x8011E1E0u);
  return; // 8011E1E0
}

// fn_8011E1E4
void f_8011E1E4(Ctx* __restrict c) {
  trace_call(0x8011E1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E1E4
  c->r[0]=c->lr; // 8011E1E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011E1EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011E1F0
  c->r[31]=c->r[3]|c->r[3]; // 8011E1F4
  c->lr=0x8011E1FCu; f_802F0CA4(c); // 8011E1F8
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E1FC
  c->r[3]=0u+0x80420000u; // 8011E200
  c->r[4]=0u+0x00000000u; // 8011E204
  c->r[0]=0u+0x00000005u; // 8011E208
  c->r[3]=c->r[3]+0x00003338u; // 8011E20C
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8011E210
  c->r[5]=c->r[31]|c->r[31]; // 8011E214
  c->r[3]=0u+0x00000002u; // 8011E218
  W32(c->r[31]+0x0000029Cu,c->r[4]); // 8011E21C
  {uint32_t ea=c->r[31]+0x000002A0u; WF32(ea,c->f[0]);} // 8011E220
  W32(c->r[31]+0x000002A8u,c->r[4]); // 8011E224
  {uint32_t ea=c->r[31]+0x000002ACu; WF32(ea,c->f[0]);} // 8011E228
  W32(c->r[31]+0x000002B0u,c->r[4]); // 8011E22C
  W32(c->r[31]+0x000002B4u,c->r[4]); // 8011E230
  W32(c->r[31]+0x00000680u,c->r[4]); // 8011E234
  c->ctr=c->r[0]; // 8011E238
L_8011E23C:;
  W32(c->r[5]+0x000002B8u,c->r[3]); // 8011E23C
  {uint32_t ea=c->r[5]+0x000002BCu; WF32(ea,c->f[0]);} // 8011E240
  {uint32_t ea=c->r[5]+0x000002C0u; WF32(ea,c->f[0]);} // 8011E244
  {uint32_t ea=c->r[5]+0x000002C4u; WF32(ea,c->f[0]);} // 8011E248
  W32(c->r[5]+0x000002C8u,c->r[4]); // 8011E24C
  W32(c->r[5]+0x000002CCu,c->r[4]); // 8011E250
  W32(c->r[5]+0x000002D0u,c->r[3]); // 8011E254
  {uint32_t ea=c->r[5]+0x000002D4u; WF32(ea,c->f[0]);} // 8011E258
  {uint32_t ea=c->r[5]+0x000002D8u; WF32(ea,c->f[0]);} // 8011E25C
  {uint32_t ea=c->r[5]+0x000002DCu; WF32(ea,c->f[0]);} // 8011E260
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8011E264
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8011E268
  W32(c->r[5]+0x000002E8u,c->r[3]); // 8011E26C
  {uint32_t ea=c->r[5]+0x000002ECu; WF32(ea,c->f[0]);} // 8011E270
  {uint32_t ea=c->r[5]+0x000002F0u; WF32(ea,c->f[0]);} // 8011E274
  {uint32_t ea=c->r[5]+0x000002F4u; WF32(ea,c->f[0]);} // 8011E278
  W32(c->r[5]+0x000002F8u,c->r[4]); // 8011E27C
  W32(c->r[5]+0x000002FCu,c->r[4]); // 8011E280
  W32(c->r[5]+0x00000300u,c->r[3]); // 8011E284
  {uint32_t ea=c->r[5]+0x00000304u; WF32(ea,c->f[0]);} // 8011E288
  {uint32_t ea=c->r[5]+0x00000308u; WF32(ea,c->f[0]);} // 8011E28C
  {uint32_t ea=c->r[5]+0x0000030Cu; WF32(ea,c->f[0]);} // 8011E290
  W32(c->r[5]+0x00000310u,c->r[4]); // 8011E294
  W32(c->r[5]+0x00000314u,c->r[4]); // 8011E298
  W32(c->r[5]+0x00000318u,c->r[3]); // 8011E29C
  {uint32_t ea=c->r[5]+0x0000031Cu; WF32(ea,c->f[0]);} // 8011E2A0
  {uint32_t ea=c->r[5]+0x00000320u; WF32(ea,c->f[0]);} // 8011E2A4
  {uint32_t ea=c->r[5]+0x00000324u; WF32(ea,c->f[0]);} // 8011E2A8
  W32(c->r[5]+0x00000328u,c->r[4]); // 8011E2AC
  W32(c->r[5]+0x0000032Cu,c->r[4]); // 8011E2B0
  W32(c->r[5]+0x00000330u,c->r[3]); // 8011E2B4
  {uint32_t ea=c->r[5]+0x00000334u; WF32(ea,c->f[0]);} // 8011E2B8
  {uint32_t ea=c->r[5]+0x00000338u; WF32(ea,c->f[0]);} // 8011E2BC
  {uint32_t ea=c->r[5]+0x0000033Cu; WF32(ea,c->f[0]);} // 8011E2C0
  W32(c->r[5]+0x00000340u,c->r[4]); // 8011E2C4
  W32(c->r[5]+0x00000344u,c->r[4]); // 8011E2C8
  W32(c->r[5]+0x00000348u,c->r[3]); // 8011E2CC
  {uint32_t ea=c->r[5]+0x0000034Cu; WF32(ea,c->f[0]);} // 8011E2D0
  {uint32_t ea=c->r[5]+0x00000350u; WF32(ea,c->f[0]);} // 8011E2D4
  {uint32_t ea=c->r[5]+0x00000354u; WF32(ea,c->f[0]);} // 8011E2D8
  W32(c->r[5]+0x00000358u,c->r[4]); // 8011E2DC
  W32(c->r[5]+0x0000035Cu,c->r[4]); // 8011E2E0
  W32(c->r[5]+0x00000360u,c->r[3]); // 8011E2E4
  {uint32_t ea=c->r[5]+0x00000364u; WF32(ea,c->f[0]);} // 8011E2E8
  {uint32_t ea=c->r[5]+0x00000368u; WF32(ea,c->f[0]);} // 8011E2EC
  {uint32_t ea=c->r[5]+0x0000036Cu; WF32(ea,c->f[0]);} // 8011E2F0
  W32(c->r[5]+0x00000370u,c->r[4]); // 8011E2F4
  W32(c->r[5]+0x00000374u,c->r[4]); // 8011E2F8
  c->r[5]=c->r[5]+0x000000C0u; // 8011E2FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011E23C; } // 8011E300
  c->r[0]=0u+0x00000000u; // 8011E304
  W32(c->r[31]+0x00000684u,c->r[0]); // 8011E308
  c->r[3]=c->r[31]|c->r[31]; // 8011E30C
  W32(c->r[31]+0x00000688u,c->r[0]); // 8011E310
  W32(c->r[31]+0x0000068Cu,c->r[0]); // 8011E314
  W32(c->r[31]+0x00000690u,c->r[0]); // 8011E318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011E31C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011E320
  c->lr=c->r[0]; // 8011E324
  c->r[1]=c->r[1]+0x00000010u; // 8011E328
  return; // 8011E32C
}

// fn_8011E330
void f_8011E330(Ctx* __restrict c) {
  trace_call(0x8011E330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E330
  c->r[0]=c->lr; // 8011E334
  cmps(c,0,(int32_t)c->r[3],0); // 8011E338
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011E33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011E340
  c->r[31]=c->r[4]|c->r[4]; // 8011E344
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011E348
  c->r[30]=c->r[3]|c->r[3]; // 8011E34C
  if (crb(c,2)) { goto L_8011E36C; } // 8011E350
  c->r[4]=0u+0x00000000u; // 8011E354
  c->lr=0x8011E35Cu; f_802F0D68(c); // 8011E358
  cmps(c,0,(int32_t)c->r[31],0); // 8011E35C
  if (!crb(c,1)) { goto L_8011E36C; } // 8011E360
  c->r[3]=c->r[30]|c->r[30]; // 8011E364
  c->lr=0x8011E36Cu; f_80244DC0(c); // 8011E368
L_8011E36C:;
  c->r[3]=c->r[30]|c->r[30]; // 8011E36C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011E370
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011E374
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011E378
  c->lr=c->r[0]; // 8011E37C
  c->r[1]=c->r[1]+0x00000010u; // 8011E380
  return; // 8011E384
}

// fn_8011E388
void f_8011E388(Ctx* __restrict c) {
  trace_call(0x8011E388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E388
  c->r[0]=c->lr; // 8011E38C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011E390
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011E394
  c->r[31]=c->r[3]|c->r[3]; // 8011E398
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011E39C
  c->r[30]=c->r[5]|c->r[5]; // 8011E3A0
  c->lr=0x8011E3A8u; f_802F18B8(c); // 8011E3A4
  cmps(c,0,(int32_t)c->r[30],2); // 8011E3A8
  if (!crb(c,2)) { goto L_8011E46C; } // 8011E3AC
  c->r[3]=R32(c->r[31]+0x00000294u); // 8011E3B0
  cmps(c,0,(int32_t)c->r[3],0); // 8011E3B4
  if (crb(c,2)) { goto L_8011E46C; } // 8011E3B8
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011E3BC
  c->r[0]=0u+0x00000000u; // 8011E3C0
  {uint32_t ea=c->r[3]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011E3C4
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E3C8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8011E3CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011E3D0
  {uint32_t ea=c->r[31]+0x0000067Cu; WF32(ea,c->f[0]);} // 8011E3D4
  {uint32_t ea=c->r[3]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011E3D8
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E3DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8011E3E0
  W32(c->r[31]+0x000002B4u,c->r[0]); // 8011E3E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8011E3E8
  {uint32_t ea=c->r[31]+0x00000678u; WF32(ea,c->f[0]);} // 8011E3EC
  c->r[4]=R32(c->r[3]+0x00000008u); // 8011E3F0
  cmps(c,0,(int32_t)c->r[4],0); // 8011E3F4
  if (crb(c,2)) { goto L_8011E46C; } // 8011E3F8
L_8011E3FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011E3FC
  if (!crb(c,2)) { goto L_8011E40C; } // 8011E400
  c->r[0]=0u+0x00000000u; // 8011E404
  goto L_8011E434; // 8011E408
L_8011E40C:;
  c->r[0]=R8(c->r[4]+0x0000003Cu); // 8011E40C
  cmps(c,0,(int32_t)c->r[0],3); // 8011E410
  if (crb(c,2)) { goto L_8011E420; } // 8011E414
  c->r[0]=0u+0x00000000u; // 8011E418
  goto L_8011E434; // 8011E41C
L_8011E420:;
  c->r[0]=R8(c->r[4]+0x0000003Du); // 8011E420
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011E424
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8011E428
  c->r[0]=cntlz(c->r[0]); // 8011E42C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011E430
L_8011E434:;
  cmps(c,0,(int32_t)c->r[0],0); // 8011E434
  if (crb(c,2)) { goto L_8011E458; } // 8011E438
  c->r[0]=R32(c->r[31]+0x000002B4u); // 8011E43C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8011E440
  c->r[3]=c->r[31]+c->r[0]; // 8011E444
  W32(c->r[3]+0x000002CCu,c->r[4]); // 8011E448
  c->r[3]=R32(c->r[31]+0x000002B4u); // 8011E44C
  c->r[0]=c->r[3]+0x00000001u; // 8011E450
  W32(c->r[31]+0x000002B4u,c->r[0]); // 8011E454
L_8011E458:;
  c->r[3]=R32(c->r[31]+0x00000294u); // 8011E458
  c->r[4]=R32(c->r[4]+0x00000000u); // 8011E45C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8011E460
  cmpu(c,0,c->r[4],c->r[0]); // 8011E464
  if (!crb(c,2)) { IRQCHK(c); goto L_8011E3FC; } // 8011E468
L_8011E46C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011E46C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011E470
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011E474
  c->lr=c->r[0]; // 8011E478
  c->r[1]=c->r[1]+0x00000010u; // 8011E47C
  return; // 8011E480
}

// fn_8011E484
void f_8011E484(Ctx* __restrict c) {
  trace_call(0x8011E484u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E484
  c->r[0]=c->lr; // 8011E488
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011E48C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8011E490
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8011E494
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011E498
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011E49C
  c->r[30]=c->r[3]|c->r[3]; // 8011E4A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011E4A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011E4A8
  c->lr=0x8011E4B0u; f_802D825C(c); // 8011E4AC
  c->r[29]=c->r[30]|c->r[30]; // 8011E4B0
  c->r[28]=0u+0x00000000u; // 8011E4B4
  c->r[31]=0u+0x00000000u; // 8011E4B8
L_8011E4BC:;
  c->r[3]=R32(c->r[29]+0x00000684u); // 8011E4BC
  cmps(c,0,(int32_t)c->r[3],0); // 8011E4C0
  if (crb(c,2)) { goto L_8011E4E4; } // 8011E4C4
  c->r[4]=c->r[30]|c->r[30]; // 8011E4C8
  c->lr=0x8011E4D0u; f_8030D2B0(c); // 8011E4CC
  c->r[0]=0u-c->r[3]; // 8011E4D0
  c->r[0]=c->r[0]|c->r[3]; // 8011E4D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8011E4D8
  if (crb(c,2)) { goto L_8011E4E4; } // 8011E4DC
  W32(c->r[29]+0x00000684u,c->r[31]); // 8011E4E0
L_8011E4E4:;
  c->r[28]=c->r[28]+0x00000001u; // 8011E4E4
  c->r[29]=c->r[29]+0x00000004u; // 8011E4E8
  cmpu(c,0,c->r[28],0x00000004u); // 8011E4EC
  if (crb(c,0)) { IRQCHK(c); goto L_8011E4BC; } // 8011E4F0
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 8011E4F4
  cmps(c,0,(int32_t)c->r[0],0); // 8011E4F8
  if (!crb(c,2)) { goto L_8011E50C; } // 8011E4FC
  c->r[0]=R32(c->r[30]+0x00000680u); // 8011E500
  cmps(c,0,(int32_t)c->r[0],0); // 8011E504
  if (crb(c,2)) { goto L_8011E6AC; } // 8011E508
L_8011E50C:;
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8011E50C
  c->r[31]=0u+0x00000000u; // 8011E510
  c->r[29]=0u+0x00000000u; // 8011E514
  goto L_8011E53C; // 8011E518
L_8011E51C:;
  c->f[1]=c->f[31]; // 8011E51C
  c->r[3]=c->r[30]|c->r[30]; // 8011E520
  c->r[4]=c->r[29]|c->r[29]; // 8011E524
  c->lr=0x8011E52Cu; f_8011E88C(c); // 8011E528
  cmps(c,0,(int32_t)c->r[3],0); // 8011E52C
  if (crb(c,2)) { goto L_8011E538; } // 8011E530
  c->r[31]=c->r[31]+0x00000001u; // 8011E534
L_8011E538:;
  c->r[29]=c->r[29]+0x00000001u; // 8011E538
L_8011E53C:;
  c->r[0]=R32(c->r[30]+0x000002B4u); // 8011E53C
  cmpu(c,0,c->r[29],c->r[0]); // 8011E540
  if (crb(c,0)) { IRQCHK(c); goto L_8011E51C; } // 8011E544
  c->r[0]=R32(c->r[30]+0x000002B0u); // 8011E548
  cmps(c,0,(int32_t)c->r[0],2); // 8011E54C
  if (crb(c,2)) { goto L_8011E578; } // 8011E550
  cmps(c,0,(int32_t)c->r[0],1); // 8011E554
  if (crb(c,2)) { goto L_8011E588; } // 8011E558
  cmps(c,0,(int32_t)c->r[0],3); // 8011E55C
  if (crb(c,2)) { goto L_8011E65C; } // 8011E560
  cmps(c,0,(int32_t)c->r[0],0); // 8011E564
  if (crb(c,2)) { goto L_8011E674; } // 8011E568
  cmps(c,0,(int32_t)c->r[0],4); // 8011E56C
  if (crb(c,2)) { goto L_8011E694; } // 8011E570
  goto L_8011E6A8; // 8011E574
L_8011E578:;
  cmps(c,0,(int32_t)c->r[31],0); // 8011E578
  if (!crb(c,2)) { goto L_8011E6A8; } // 8011E57C
  c->r[0]=0u+0x00000001u; // 8011E580
  W32(c->r[30]+0x000002B0u,c->r[0]); // 8011E584
L_8011E588:;
  c->r[3]=R32(c->r[30]+0x0000029Cu); // 8011E588
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8011E58C
  c->r[0]=R32(c->r[4]+0x00000134u); // 8011E590
  cmps(c,0,(int32_t)c->r[0],0); // 8011E594
  if (crb(c,2)) { goto L_8011E5DC; } // 8011E598
  c->r[0]=0u+0x00000004u; // 8011E59C
  c->r[3]=c->r[30]|c->r[30]; // 8011E5A0
  c->r[5]=0u+0x00000000u; // 8011E5A4
  c->ctr=c->r[0]; // 8011E5A8
L_8011E5AC:;
  c->r[0]=R32(c->r[3]+0x00000684u); // 8011E5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8011E5B0
  if (!crb(c,2)) { goto L_8011E5D0; } // 8011E5B4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8011E5B8
  c->r[3]=R32(c->r[4]+0x00000134u); // 8011E5BC
  c->r[4]=c->r[30]+c->r[0]; // 8011E5C0
  W32(c->r[4]+0x00000684u,c->r[3]); // 8011E5C4
  c->lr=0x8011E5CCu; f_8030D188(c); // 8011E5C8
  goto L_8011E5DC; // 8011E5CC
L_8011E5D0:;
  c->r[3]=c->r[3]+0x00000004u; // 8011E5D0
  c->r[5]=c->r[5]+0x00000001u; // 8011E5D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011E5AC; } // 8011E5D8
L_8011E5DC:;
  c->r[3]=R32(c->r[30]+0x0000029Cu); // 8011E5DC
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8011E5E0
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E5E4
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8011E5E8
  {uint32_t ea=c->r[30]+0x000002A0u; WF32(ea,c->f[0]);} // 8011E5EC
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8011E5F0
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E5F4
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8011E5F8
  {uint32_t ea=c->r[30]+0x000002ACu; WF32(ea,c->f[0]);} // 8011E5FC
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 8011E600
  c->r[3]=R32(c->r[5]+0x00000128u); // 8011E604
  cmps(c,0,(int32_t)c->r[3],0); // 8011E608
  if (crb(c,2)) { goto L_8011E614; } // 8011E60C
  goto L_8011E640; // 8011E610
L_8011E614:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011E614
  cmps(c,0,(int32_t)c->r[3],0); // 8011E618
  if (crb(c,2)) { goto L_8011E63C; } // 8011E61C
  c->r[4]=R32(c->r[5]+0x00000120u); // 8011E620
  c->r[6]=0u+0x00000000u; // 8011E624
  c->r[8]=R32(c->r[5]+0x00000124u); // 8011E628
  c->r[5]=0u+0x00000000u; // 8011E62C
  c->r[7]=0u+0x00000000u; // 8011E630
  c->lr=0x8011E638u; f_802BA9F4(c); // 8011E634
  goto L_8011E640; // 8011E638
L_8011E63C:;
  c->r[3]=0u+0x00000000u; // 8011E63C
L_8011E640:;
  {uint32_t ea=c->r[30]+0x0000067Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E640
  c->r[4]=0u+0x00000000u; // 8011E644
  c->r[0]=0u+0x00000003u; // 8011E648
  W32(c->r[30]+0x0000029Cu,c->r[3]); // 8011E64C
  W32(c->r[30]+0x000002A8u,c->r[4]); // 8011E650
  {uint32_t ea=c->r[30]+0x000002A4u; WF32(ea,c->f[0]);} // 8011E654
  W32(c->r[30]+0x000002B0u,c->r[0]); // 8011E658
L_8011E65C:;
  {uint32_t ea=c->r[30]+0x000002A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E65C
  fcmp(c,0,c->f[31],c->f[0]); // 8011E660
  if (!crb(c,1)) { goto L_8011E6A8; } // 8011E664
  c->r[0]=0u+0x00000004u; // 8011E668
  W32(c->r[30]+0x000002B0u,c->r[0]); // 8011E66C
  goto L_8011E6A8; // 8011E670
L_8011E674:;
  c->r[4]=R32(c->r[30]+0x0000029Cu); // 8011E674
  c->f[1]=c->f[31]; // 8011E678
  c->r[3]=c->r[30]|c->r[30]; // 8011E67C
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8011E680
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 8011E684
  c->lr=0x8011E68Cu; f_8011E6D4(c); // 8011E688
  W32(c->r[30]+0x000002B0u,c->r[3]); // 8011E68C
  goto L_8011E6A8; // 8011E690
L_8011E694:;
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 8011E694
  cmps(c,0,(int32_t)c->r[0],0); // 8011E698
  if (crb(c,2)) { goto L_8011E6A8; } // 8011E69C
  c->r[0]=0u+0x00000000u; // 8011E6A0
  W32(c->r[30]+0x000002B0u,c->r[0]); // 8011E6A4
L_8011E6A8:;
  W32(c->r[30]+0x00000680u,c->r[31]); // 8011E6A8
L_8011E6AC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8011E6AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8011E6B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8011E6B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011E6B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011E6BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011E6C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011E6C4
  c->lr=c->r[0]; // 8011E6C8
  c->r[1]=c->r[1]+0x00000030u; // 8011E6CC
  return; // 8011E6D0
}

// fn_8011E6D4
void f_8011E6D4(Ctx* __restrict c) {
  trace_call(0x8011E6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E6D4
  c->r[0]=c->lr; // 8011E6D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011E6DC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8011E6E0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8011E6E4
  c->f[31]=c->f[1]; // 8011E6E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011E6EC
  c->r[31]=c->r[3]|c->r[3]; // 8011E6F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011E6F4
  c->r[0]=R32(c->r[3]+0x000002A8u); // 8011E6F8
  cmpu(c,0,c->r[0],0x00000014u); // 8011E6FC
  if (!crb(c,0)) { goto L_8011E814; } // 8011E700
  c->r[4]=R32(c->r[3]+0x0000029Cu); // 8011E704
  if (!crb(c,0)) { goto L_8011E72C; } // 8011E708
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8011E70C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8011E710
  c->r[4]=c->r[4]+c->r[0]; // 8011E714
  c->r[0]=R32(c->r[4]+0x00000034u); // 8011E718
  cmps(c,0,(int32_t)c->r[0],0); // 8011E71C
  if (crb(c,2)) { goto L_8011E72C; } // 8011E720
  c->r[0]=0u+0x00000001u; // 8011E724
  goto L_8011E730; // 8011E728
L_8011E72C:;
  c->r[0]=0u+0x00000000u; // 8011E72C
L_8011E730:;
  cmps(c,0,(int32_t)c->r[0],0); // 8011E730
  if (crb(c,2)) { goto L_8011E814; } // 8011E734
  {uint32_t ea=c->r[3]+0x000002ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E738
  fcmp(c,0,c->f[1],c->f[0]); // 8011E73C
  if (!crb(c,1)) { goto L_8011E80C; } // 8011E740
  c->r[0]=R32(c->r[3]+0x000002B4u); // 8011E744
  c->r[5]=c->r[31]|c->r[31]; // 8011E748
  c->r[4]=0u+0x00000000u; // 8011E74C
  c->ctr=c->r[0]; // 8011E750
  cmpu(c,0,c->r[0],0x00000000u); // 8011E754
  if (!crb(c,1)) { goto L_8011E784; } // 8011E758
L_8011E75C:;
  c->r[0]=R32(c->r[5]+0x000002C8u); // 8011E75C
  cmps(c,0,(int32_t)c->r[0],0); // 8011E760
  if (!crb(c,2)) { goto L_8011E778; } // 8011E764
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8011E768
  c->r[4]=c->r[3]+c->r[0]; // 8011E76C
  c->r[30]=c->r[4]+0x000002B8u; // 8011E770
  goto L_8011E788; // 8011E774
L_8011E778:;
  c->r[5]=c->r[5]+0x00000018u; // 8011E778
  c->r[4]=c->r[4]+0x00000001u; // 8011E77C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011E75C; } // 8011E780
L_8011E784:;
  c->r[30]=0u+0x00000000u; // 8011E784
L_8011E788:;
  cmps(c,0,(int32_t)c->r[30],0); // 8011E788
  if (crb(c,2)) { goto L_8011E80C; } // 8011E78C
  c->r[4]=R32(c->r[3]+0x0000029Cu); // 8011E790
  c->f[2]=c->f[31]; // 8011E794
  c->r[9]=R32(c->r[3]+0x000002A8u); // 8011E798
  c->r[3]=c->r[31]|c->r[31]; // 8011E79C
  c->r[8]=R32(c->r[4]+0x0000004Cu); // 8011E7A0
  c->r[5]=c->r[30]|c->r[30]; // 8011E7A4
  c->r[4]=rotl(c->r[9],3)&0xFFFFFFF8u; // 8011E7A8
  c->r[6]=c->r[8]+c->r[4]; // 8011E7AC
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8011E7B0
  c->r[7]=R32(c->r[8]+0x0000001Cu); // 8011E7B4
  c->r[8]=c->r[8]+c->r[0]; // 8011E7B8
  c->r[6]=R32(c->r[6]+0x00000034u); // 8011E7BC
  c->r[4]=rotl(c->r[9],0)&0x000000FFu; // 8011E7C0
  {uint32_t ea=c->r[8]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011E7C4
  c->lr=0x8011E7CCu; f_8011E9F4(c); // 8011E7C8
  W32(c->r[30]+0x00000010u,c->r[3]); // 8011E7CC
  c->r[4]=0u+0x00000001u; // 8011E7D0
  c->r[5]=0u+0x00000000u; // 8011E7D4
  c->r[3]=R32(c->r[30]+0x00000014u); // 8011E7D8
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011E7DC
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011E7E0
  c->ctr=c->r[12]; // 8011E7E4
  if (true) { c->lr=0x8011E7ECu; dispatch(c,c->ctr); } // 8011E7E8
  c->r[4]=R32(c->r[31]+0x0000029Cu); // 8011E7EC
  c->r[3]=R32(c->r[31]+0x000002A8u); // 8011E7F0
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8011E7F4
  c->r[0]=c->r[3]+0x00000001u; // 8011E7F8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E7FC
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8011E800
  W32(c->r[31]+0x000002A8u,c->r[0]); // 8011E804
  {uint32_t ea=c->r[31]+0x000002ACu; WF32(ea,c->f[0]);} // 8011E808
L_8011E80C:;
  c->r[3]=0u+0x00000000u; // 8011E80C
  goto L_8011E86C; // 8011E810
L_8011E814:;
  c->r[4]=R32(c->r[3]+0x0000029Cu); // 8011E814
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8011E818
  c->r[0]=R32(c->r[4]+0x00000130u); // 8011E81C
  cmps(c,0,(int32_t)c->r[0],0); // 8011E820
  if (crb(c,2)) { goto L_8011E868; } // 8011E824
  c->r[0]=0u+0x00000004u; // 8011E828
  c->r[5]=0u+0x00000000u; // 8011E82C
  c->ctr=c->r[0]; // 8011E830
L_8011E834:;
  c->r[0]=R32(c->r[31]+0x00000684u); // 8011E834
  cmps(c,0,(int32_t)c->r[0],0); // 8011E838
  if (!crb(c,2)) { goto L_8011E85C; } // 8011E83C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8011E840
  c->r[0]=R32(c->r[4]+0x00000130u); // 8011E844
  c->r[3]=c->r[3]+c->r[5]; // 8011E848
  W32(c->r[3]+0x00000684u,c->r[0]); // 8011E84C
  c->r[3]=c->r[0]|c->r[0]; // 8011E850
  c->lr=0x8011E858u; f_8030D188(c); // 8011E854
  goto L_8011E868; // 8011E858
L_8011E85C:;
  c->r[31]=c->r[31]+0x00000004u; // 8011E85C
  c->r[5]=c->r[5]+0x00000001u; // 8011E860
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011E834; } // 8011E864
L_8011E868:;
  c->r[3]=0u+0x00000001u; // 8011E868
L_8011E86C:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8011E86C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011E870
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8011E874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011E878
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011E87C
  c->lr=c->r[0]; // 8011E880
  c->r[1]=c->r[1]+0x00000020u; // 8011E884
  return; // 8011E888
}

// fn_8011E88C
void f_8011E88C(Ctx* __restrict c) {
  trace_call(0x8011E88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E88C
  c->r[0]=c->lr; // 8011E890
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011E894
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8011E898
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8011E89C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8011E8A0
  c->f[31]=c->f[1]; // 8011E8A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011E8A8
  c->r[31]=c->r[3]+c->r[0]; // 8011E8AC
  c->r[0]=R32(c->r[31]+0x000002C8u); // 8011E8B0
  cmps(c,0,(int32_t)c->r[0],0); // 8011E8B4
  if (crb(c,2)) { goto L_8011E8D8; } // 8011E8B8
  cmps(c,0,(int32_t)c->r[0],3); // 8011E8BC
  if (crb(c,2)) { goto L_8011E8E0; } // 8011E8C0
  cmps(c,0,(int32_t)c->r[0],4); // 8011E8C4
  if (crb(c,2)) { goto L_8011E904; } // 8011E8C8
  cmps(c,0,(int32_t)c->r[0],5); // 8011E8CC
  if (crb(c,2)) { goto L_8011E9A4; } // 8011E8D0
  goto L_8011E9D4; // 8011E8D4
L_8011E8D8:;
  c->r[3]=0u+0x00000000u; // 8011E8D8
  goto L_8011E9D8; // 8011E8DC
L_8011E8E0:;
  {uint32_t ea=c->r[31]+0x000002C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E8E0
  fcmp(c,0,c->f[1],c->f[0]); // 8011E8E4
  if (!crb(c,1)) { goto L_8011E9D4; } // 8011E8E8
  {uint32_t ea=c->r[31]+0x000002BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E8EC
  c->r[0]=0u+0x00000004u; // 8011E8F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8011E8F4
  {uint32_t ea=c->r[31]+0x000002C4u; WF32(ea,c->f[0]);} // 8011E8F8
  W32(c->r[31]+0x000002C8u,c->r[0]); // 8011E8FC
  goto L_8011E9D4; // 8011E900
L_8011E904:;
  {uint32_t ea=c->r[31]+0x000002C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E904
  fcmp(c,0,c->f[1],c->f[0]); // 8011E908
  if (!crb(c,1)) { goto L_8011E9D4; } // 8011E90C
  c->r[0]=R32(c->r[31]+0x000002B8u); // 8011E910
  cmps(c,0,(int32_t)c->r[0],2); // 8011E914
  if (crb(c,2)) { goto L_8011E928; } // 8011E918
  cmps(c,0,(int32_t)c->r[0],0); // 8011E91C
  if (crb(c,2)) { goto L_8011E960; } // 8011E920
  goto L_8011E998; // 8011E924
L_8011E928:;
  c->r[3]=R32(c->r[31]+0x000002CCu); // 8011E928
  c->r[4]=0u+0x0000007Fu; // 8011E92C
  {uint32_t ea=c->r[31]+0x000002C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011E930
  c->r[5]=0u+0x00000000u; // 8011E934
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011E938
  c->r[6]=0u+0x00000000u; // 8011E93C
  c->r[7]=0u+0x00000000u; // 8011E940
  c->r[8]=0u+0x00000000u; // 8011E944
  c->lr=0x8011E94Cu; f_802F04A8(c); // 8011E948
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E94C
  c->r[0]=0u+0x00000005u; // 8011E950
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 8011E954
  {uint32_t ea=c->r[31]+0x000002C4u; WF32(ea,c->f[0]);} // 8011E958
  goto L_8011E99C; // 8011E95C
L_8011E960:;
  c->r[3]=R32(c->r[31]+0x000002CCu); // 8011E960
  c->r[4]=0u+0x0000007Fu; // 8011E964
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011E968
  c->r[5]=0u+0x00000000u; // 8011E96C
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011E970
  c->r[6]=0u+0x00000000u; // 8011E974
  c->r[7]=0u+0x00000000u; // 8011E978
  c->r[8]=0u+0x00000000u; // 8011E97C
  c->lr=0x8011E984u; f_802F04A8(c); // 8011E980
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E984
  c->r[0]=0u+0x00000005u; // 8011E988
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 8011E98C
  {uint32_t ea=c->r[31]+0x000002C4u; WF32(ea,c->f[0]);} // 8011E990
  goto L_8011E99C; // 8011E994
L_8011E998:;
  c->r[0]=0u+0x00000000u; // 8011E998
L_8011E99C:;
  W32(c->r[31]+0x000002C8u,c->r[0]); // 8011E99C
  goto L_8011E9D4; // 8011E9A0
L_8011E9A4:;
  {uint32_t ea=c->r[31]+0x000002C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011E9A4
  fcmp(c,0,c->f[1],c->f[0]); // 8011E9A8
  if (!crb(c,1)) { goto L_8011E9D4; } // 8011E9AC
  c->r[3]=R32(c->r[31]+0x000002CCu); // 8011E9B0
  c->r[4]=0u+0x00000000u; // 8011E9B4
  c->r[5]=0u+0x00000000u; // 8011E9B8
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011E9BC
  c->r[12]=R32(c->r[12]+0x00000060u); // 8011E9C0
  c->ctr=c->r[12]; // 8011E9C4
  if (true) { c->lr=0x8011E9CCu; dispatch(c,c->ctr); } // 8011E9C8
  c->r[0]=0u+0x00000000u; // 8011E9CC
  W32(c->r[31]+0x000002C8u,c->r[0]); // 8011E9D0
L_8011E9D4:;
  c->r[3]=0u+0x00000001u; // 8011E9D4
L_8011E9D8:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8011E9D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011E9DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8011E9E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011E9E4
  c->lr=c->r[0]; // 8011E9E8
  c->r[1]=c->r[1]+0x00000020u; // 8011E9EC
  return; // 8011E9F0
}

// fn_8011E9F4
void f_8011E9F4(Ctx* __restrict c) {
  trace_call(0x8011E9F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011E9F4
  c->r[0]=c->lr; // 8011E9F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011E9FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8011EA00
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8011EA04
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8011EA08
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8011EA0C
  c->f[30]=c->f[1]; // 8011EA10
  c->f[31]=c->f[2]; // 8011EA14
  c->r[4]=c->r[6]|c->r[6]; // 8011EA18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011EA1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011EA20
  c->r[30]=c->r[7]|c->r[7]; // 8011EA24
  W32(c->r[1]+0x00000014u,c->r[29]); // 8011EA28
  c->r[29]=c->r[5]|c->r[5]; // 8011EA2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8011EA30
  c->r[28]=c->r[3]|c->r[3]; // 8011EA34
  c->r[3]=R32(c->r[5]+0x00000014u); // 8011EA38
  c->r[5]=0u+0x00000000u; // 8011EA3C
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011EA40
  c->r[12]=R32(c->r[12]+0x000000C8u); // 8011EA44
  c->ctr=c->r[12]; // 8011EA48
  if (true) { c->lr=0x8011EA50u; dispatch(c,c->ctr); } // 8011EA4C
  c->f[1]=c->f[30]; // 8011EA50
  c->r[3]=R32(c->r[29]+0x00000014u); // 8011EA54
  c->f[2]=c->f[30]; // 8011EA58
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011EA5C
  c->r[4]=0u+0x00000000u; // 8011EA60
  c->r[5]=0u+0x00000000u; // 8011EA64
  c->lr=0x8011EA6Cu; f_802F0B58(c); // 8011EA68
  c->r[3]=R32(c->r[28]+0x0000029Cu); // 8011EA6C
  cmps(c,0,(int32_t)c->r[30],0); // 8011EA70
  c->r[31]=R32(c->r[3]+0x0000004Cu); // 8011EA74
  if (crb(c,2)) { goto L_8011EA88; } // 8011EA78
  cmps(c,0,(int32_t)c->r[30],2); // 8011EA7C
  if (crb(c,2)) { goto L_8011EB14; } // 8011EA80
  goto L_8011EBA4; // 8011EA84
L_8011EA88:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8011EA88
  c->r[4]=0u+0x00000000u; // 8011EA8C
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EA90
  c->r[5]=0u+0x0000007Fu; // 8011EA94
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011EA98
  c->r[6]=0u+0x00000000u; // 8011EA9C
  c->r[7]=0u+0x00000000u; // 8011EAA0
  c->r[8]=0u+0x00000000u; // 8011EAA4
  c->lr=0x8011EAACu; f_802F04A8(c); // 8011EAA8
  c->r[3]=R32(c->r[28]+0x00000294u); // 8011EAAC
  c->r[4]=0u+0x00000000u; // 8011EAB0
  {uint32_t ea=c->r[2]+0xFFFF8A78u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011EAB4
  c->r[5]=0u+0x00000000u; // 8011EAB8
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EABC
  c->r[6]=0u+0x00000000u; // 8011EAC0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EAC4
  c->f[3]=c->f[1]; // 8011EAC8
  c->r[3]=R32(c->r[29]+0x00000014u); // 8011EACC
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[0]); // 8011EAD0
  {uint32_t ea=c->r[28]+0x0000067Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011EAD4
  {uint32_t ea=c->r[28]+0x00000678u; c->f[4]=c->ps1[4]=RF32(ea);} // 8011EAD8
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[6]=c->ps1[6]=RF32(ea);} // 8011EADC
  c->lr=0x8011EAE4u; f_802F08F8(c); // 8011EAE0
  c->r[0]=R32(c->r[31]+0x00000020u); // 8011EAE4
  c->r[3]=0u+0x00000003u; // 8011EAE8
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EAEC
  W32(c->r[29]+0x00000000u,c->r[0]); // 8011EAF0
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EAF4
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 8011EAF8
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8011EAFC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EB00
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 8011EB04
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8011EB08
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 8011EB0C
  goto L_8011EBA8; // 8011EB10
L_8011EB14:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8011EB14
  c->r[4]=0u+0x00000000u; // 8011EB18
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EB1C
  c->r[5]=0u+0x0000007Fu; // 8011EB20
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011EB24
  c->r[6]=0u+0x00000000u; // 8011EB28
  c->r[7]=0u+0x00000000u; // 8011EB2C
  c->r[8]=0u+0x00000000u; // 8011EB30
  c->lr=0x8011EB38u; f_802F04A8(c); // 8011EB34
  {uint32_t ea=c->r[28]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EB38
  c->r[4]=0u+0x00000000u; // 8011EB3C
  c->r[6]=R32(c->r[28]+0x00000294u); // 8011EB40
  c->r[5]=0u+0x00000000u; // 8011EB44
  c->f[2]=-c->f[0]; // 8011EB48
  c->r[3]=R32(c->r[29]+0x00000014u); // 8011EB4C
  {uint32_t ea=c->r[6]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EB50
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011EB54
  c->lr=0x8011EB5Cu; f_802F09A8(c); // 8011EB58
  c->r[4]=R32(c->r[29]+0x00000014u); // 8011EB5C
  c->r[3]=0u+0x00000004u; // 8011EB60
  {uint32_t ea=c->r[28]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EB64
  {uint32_t ea=c->r[4]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EB68
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 8011EB6C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8011EB70
  {uint32_t ea=c->r[28]+0x000002A4u; WF32(ea,c->f[0]);} // 8011EB74
  c->r[0]=R32(c->r[31]+0x00000020u); // 8011EB78
  W32(c->r[29]+0x00000000u,c->r[0]); // 8011EB7C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EB80
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 8011EB84
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EB88
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8011EB8C
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 8011EB90
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EB94
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8011EB98
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 8011EB9C
  goto L_8011EBA8; // 8011EBA0
L_8011EBA4:;
  c->r[3]=0u+0x00000000u; // 8011EBA4
L_8011EBA8:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8011EBA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8011EBAC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8011EBB0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8011EBB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011EBB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011EBBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8011EBC0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8011EBC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8011EBC8
  c->lr=c->r[0]; // 8011EBCC
  c->r[1]=c->r[1]+0x00000040u; // 8011EBD0
  return; // 8011EBD4
}

// fn_8011EBD8
void f_8011EBD8(Ctx* __restrict c) {
  trace_call(0x8011EBD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011EBD8
  c->r[0]=c->lr; // 8011EBDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011EBE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011EBE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011EBE8
  c->r[30]=c->r[3]|c->r[3]; // 8011EBEC
  c->r[31]=R32(c->r[3]+0x00000038u); // 8011EBF0
  cmps(c,0,(int32_t)c->r[31],0); // 8011EBF4
  if (crb(c,2)) { goto L_8011EC00; } // 8011EBF8
  goto L_8011EC30; // 8011EBFC
L_8011EC00:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011EC00
  cmps(c,0,(int32_t)c->r[3],0); // 8011EC04
  if (crb(c,2)) { goto L_8011EC28; } // 8011EC08
  c->r[4]=R32(c->r[30]+0x00000030u); // 8011EC0C
  c->r[5]=0u+0x00000000u; // 8011EC10
  c->r[8]=R32(c->r[30]+0x00000034u); // 8011EC14
  c->r[6]=0u+0x00000000u; // 8011EC18
  c->r[7]=0u+0x00000000u; // 8011EC1C
  c->lr=0x8011EC24u; f_802BA9F4(c); // 8011EC20
  goto L_8011EC2C; // 8011EC24
L_8011EC28:;
  c->r[3]=0u+0x00000000u; // 8011EC28
L_8011EC2C:;
  c->r[31]=c->r[3]|c->r[3]; // 8011EC2C
L_8011EC30:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 8011EC30
  cmps(c,0,(int32_t)c->r[3],0); // 8011EC34
  if (crb(c,2)) { goto L_8011EC40; } // 8011EC38
  goto L_8011EC6C; // 8011EC3C
L_8011EC40:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011EC40
  cmps(c,0,(int32_t)c->r[3],0); // 8011EC44
  if (crb(c,2)) { goto L_8011EC68; } // 8011EC48
  c->r[4]=R32(c->r[30]+0x0000003Cu); // 8011EC4C
  c->r[5]=0u+0x00000000u; // 8011EC50
  c->r[8]=R32(c->r[30]+0x00000040u); // 8011EC54
  c->r[6]=0u+0x00000000u; // 8011EC58
  c->r[7]=0u+0x00000000u; // 8011EC5C
  c->lr=0x8011EC64u; f_802BA9F4(c); // 8011EC60
  goto L_8011EC6C; // 8011EC64
L_8011EC68:;
  c->r[3]=0u+0x00000000u; // 8011EC68
L_8011EC6C:;
  W32(c->r[31]+0x0000029Cu,c->r[3]); // 8011EC6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011EC70
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011EC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011EC78
  c->lr=c->r[0]; // 8011EC7C
  c->r[1]=c->r[1]+0x00000010u; // 8011EC80
  return; // 8011EC84
}

// fn_8011EC88
void f_8011EC88(Ctx* __restrict c) {
  trace_call(0x8011EC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011EC88
  c->r[0]=c->lr; // 8011EC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011EC90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011EC94
  c->r[31]=c->r[3]|c->r[3]; // 8011EC98
  c->lr=0x8011ECA0u; f_8011C490(c); // 8011EC9C
  {uint32_t ea=c->r[2]+0xFFFF8A80u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011ECA0
  c->r[3]=0u+0x80420000u; // 8011ECA4
  c->r[3]=c->r[3]+0x00003428u; // 8011ECA8
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8011ECAC
  c->r[3]=c->r[31]|c->r[31]; // 8011ECB0
  {uint32_t ea=c->r[31]+0x000002B8u; WF32(ea,c->f[0]);} // 8011ECB4
  {uint32_t ea=c->r[31]+0x000002C8u; WF32(ea,c->f[0]);} // 8011ECB8
  {uint32_t ea=c->r[31]+0x000002BCu; WF32(ea,c->f[0]);} // 8011ECBC
  {uint32_t ea=c->r[31]+0x000002CCu; WF32(ea,c->f[0]);} // 8011ECC0
  {uint32_t ea=c->r[31]+0x000002C0u; WF32(ea,c->f[0]);} // 8011ECC4
  {uint32_t ea=c->r[31]+0x000002D0u; WF32(ea,c->f[0]);} // 8011ECC8
  {uint32_t ea=c->r[31]+0x000002C4u; WF32(ea,c->f[0]);} // 8011ECCC
  {uint32_t ea=c->r[31]+0x000002D4u; WF32(ea,c->f[0]);} // 8011ECD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011ECD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011ECD8
  c->lr=c->r[0]; // 8011ECDC
  c->r[1]=c->r[1]+0x00000010u; // 8011ECE0
  return; // 8011ECE4
}

// fn_8011ECE8
void f_8011ECE8(Ctx* __restrict c) {
  trace_call(0x8011ECE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011ECE8
  c->r[0]=c->lr; // 8011ECEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011ECF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011ECF4
  c->r[31]=c->r[3]|c->r[3]; // 8011ECF8
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011ECFC
  cmps(c,0,(int32_t)c->r[0],0); // 8011ED00
  if (crb(c,2)) { goto L_8011ED84; } // 8011ED04
  c->r[4]=rotl(c->r[5],2)&0x000003FCu; // 8011ED08
  c->r[0]=0u+0x80000000u; // 8011ED0C
  c->r[4]=c->r[3]+c->r[4]; // 8011ED10
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011ED14
  {uint32_t ea=c->r[4]+0x000002C8u; WF32(ea,c->f[0]);} // 8011ED18
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8011ED1C
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011ED20
  cmps(c,0,(int32_t)c->r[0],2); // 8011ED24
  if (!crb(c,2)) { goto L_8011ED84; } // 8011ED28
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011ED2C
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 8011ED30
  if (crb(c,2)) { goto L_8011ED84; } // 8011ED34
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011ED38
  {uint32_t ea=c->r[4]+0x000002B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011ED3C
  {uint32_t ea=c->r[4]+0x000002C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011ED40
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8011ED44
  {uint32_t ea=c->r[2]+0xFFFF8A84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011ED48
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8011ED4C
  fcmp(c,0,c->f[3],c->f[0]); // 8011ED50
  if (!crb(c,0)) { goto L_8011ED7C; } // 8011ED54
  fcmp(c,0,c->f[1],c->f[0]); // 8011ED58
  if (!crb(c,0)) { goto L_8011ED7C; } // 8011ED5C
  c->r[4]=0u+0x00000003u; // 8011ED60
  c->lr=0x8011ED68u; f_8011C984(c); // 8011ED64
  c->r[12]=R32(c->r[31]+0x000000B4u); // 8011ED68
  c->r[3]=c->r[31]|c->r[31]; // 8011ED6C
  c->r[12]=R32(c->r[12]+0x000000E4u); // 8011ED70
  c->ctr=c->r[12]; // 8011ED74
  if (true) { c->lr=0x8011ED7Cu; dispatch(c,c->ctr); } // 8011ED78
L_8011ED7C:;
  c->r[0]=0u+0x00000001u; // 8011ED7C
  W8(c->r[31]+0x000002B4u,c->r[0]); // 8011ED80
L_8011ED84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011ED84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011ED88
  c->lr=c->r[0]; // 8011ED8C
  c->r[1]=c->r[1]+0x00000010u; // 8011ED90
  return; // 8011ED94
}

// fn_8011ED98
void f_8011ED98(Ctx* __restrict c) {
  trace_call(0x8011ED98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011ED98
  c->r[0]=c->lr; // 8011ED9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011EDA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011EDA4
  c->r[31]=c->r[3]|c->r[3]; // 8011EDA8
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011EDAC
  cmps(c,0,(int32_t)c->r[0],0); // 8011EDB0
  if (crb(c,2)) { goto L_8011EE34; } // 8011EDB4
  c->r[4]=rotl(c->r[5],2)&0x000003FCu; // 8011EDB8
  c->r[0]=0u+0x80000000u; // 8011EDBC
  c->r[4]=c->r[3]+c->r[4]; // 8011EDC0
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EDC4
  {uint32_t ea=c->r[4]+0x000002B8u; WF32(ea,c->f[0]);} // 8011EDC8
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8011EDCC
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011EDD0
  cmps(c,0,(int32_t)c->r[0],2); // 8011EDD4
  if (!crb(c,2)) { goto L_8011EE34; } // 8011EDD8
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011EDDC
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 8011EDE0
  if (crb(c,2)) { goto L_8011EE34; } // 8011EDE4
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011EDE8
  {uint32_t ea=c->r[4]+0x000002B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EDEC
  {uint32_t ea=c->r[4]+0x000002C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011EDF0
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8011EDF4
  {uint32_t ea=c->r[2]+0xFFFF8A84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011EDF8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8011EDFC
  fcmp(c,0,c->f[3],c->f[0]); // 8011EE00
  if (!crb(c,0)) { goto L_8011EE2C; } // 8011EE04
  fcmp(c,0,c->f[1],c->f[0]); // 8011EE08
  if (!crb(c,0)) { goto L_8011EE2C; } // 8011EE0C
  c->r[4]=0u+0x00000003u; // 8011EE10
  c->lr=0x8011EE18u; f_8011C984(c); // 8011EE14
  c->r[12]=R32(c->r[31]+0x000000B4u); // 8011EE18
  c->r[3]=c->r[31]|c->r[31]; // 8011EE1C
  c->r[12]=R32(c->r[12]+0x000000E4u); // 8011EE20
  c->ctr=c->r[12]; // 8011EE24
  if (true) { c->lr=0x8011EE2Cu; dispatch(c,c->ctr); } // 8011EE28
L_8011EE2C:;
  c->r[0]=0u+0x00000001u; // 8011EE2C
  W8(c->r[31]+0x000002B4u,c->r[0]); // 8011EE30
L_8011EE34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011EE34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011EE38
  c->lr=c->r[0]; // 8011EE3C
  c->r[1]=c->r[1]+0x00000010u; // 8011EE40
  return; // 8011EE44
}

// fn_8011EE48
void f_8011EE48(Ctx* __restrict c) {
  trace_call(0x8011EE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011EE48
  c->r[0]=c->lr; // 8011EE4C
  cmps(c,0,(int32_t)c->r[3],0); // 8011EE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011EE54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011EE58
  c->r[31]=c->r[4]|c->r[4]; // 8011EE5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011EE60
  c->r[30]=c->r[3]|c->r[3]; // 8011EE64
  if (crb(c,2)) { goto L_8011EE84; } // 8011EE68
  c->r[4]=0u+0x00000000u; // 8011EE6C
  c->lr=0x8011EE74u; f_8011C510(c); // 8011EE70
  cmps(c,0,(int32_t)c->r[31],0); // 8011EE74
  if (!crb(c,1)) { goto L_8011EE84; } // 8011EE78
  c->r[3]=c->r[30]|c->r[30]; // 8011EE7C
  c->lr=0x8011EE84u; f_80244DC0(c); // 8011EE80
L_8011EE84:;
  c->r[3]=c->r[30]|c->r[30]; // 8011EE84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011EE88
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011EE8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011EE90
  c->lr=c->r[0]; // 8011EE94
  c->r[1]=c->r[1]+0x00000010u; // 8011EE98
  return; // 8011EE9C
}

// fn_8011EEA0
void f_8011EEA0(Ctx* __restrict c) {
  trace_call(0x8011EEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011EEA0
  c->r[0]=c->lr; // 8011EEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011EEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011EEAC
  c->r[31]=c->r[3]|c->r[3]; // 8011EEB0
  c->lr=0x8011EEB8u; f_801244AC(c); // 8011EEB4
  c->r[0]=R32(c->r[31]+0x00000018u); // 8011EEB8
  c->r[3]=0u+0x80420000u; // 8011EEBC
  c->r[3]=c->r[3]+0x00003518u; // 8011EEC0
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8011EEC4
  c->r[0]=c->r[0]|0x80000000u; // 8011EEC8
  W32(c->r[31]+0x00000018u,c->r[0]); // 8011EECC
  c->r[3]=c->r[31]|c->r[31]; // 8011EED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011EED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011EED8
  c->lr=c->r[0]; // 8011EEDC
  c->r[1]=c->r[1]+0x00000010u; // 8011EEE0
  return; // 8011EEE4
}

// fn_8011EEE8
void f_8011EEE8(Ctx* __restrict c) {
  trace_call(0x8011EEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011EEE8
  c->r[0]=c->lr; // 8011EEEC
  c->r[5]=0u+0x00000014u; // 8011EEF0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8011EEF4
  c->r[4]=c->r[1]+0x00000008u; // 8011EEF8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8011EEFC
  c->r[31]=c->r[3]|c->r[3]; // 8011EF00
  c->lr=0x8011EF08u; f_8011EF3C(c); // 8011EF04
  c->r[12]=R32(c->r[31]+0x000000B4u); // 8011EF08
  c->r[3]=c->r[31]|c->r[31]; // 8011EF0C
  c->r[4]=c->r[1]+0x00000008u; // 8011EF10
  c->r[12]=R32(c->r[12]+0x000000C4u); // 8011EF14
  c->ctr=c->r[12]; // 8011EF18
  if (true) { c->lr=0x8011EF20u; dispatch(c,c->ctr); } // 8011EF1C
  c->r[3]=c->r[31]|c->r[31]; // 8011EF20
  c->lr=0x8011EF28u; f_80124624(c); // 8011EF24
  c->r[0]=R32(c->r[1]+0x00000044u); // 8011EF28
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8011EF2C
  c->lr=c->r[0]; // 8011EF30
  c->r[1]=c->r[1]+0x00000040u; // 8011EF34
  return; // 8011EF38
}

// fn_8011EF3C
void f_8011EF3C(Ctx* __restrict c) {
  trace_call(0x8011EF3Cu);
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8011EF3C
  c->r[6]=R32(c->r[13]+0xFFFFE12Cu); // 8011EF40
  c->r[0]=R32(c->r[3]+0x00000020u); // 8011EF44
  cmps(c,0,(int32_t)c->r[0],0); // 8011EF48
  if (crb(c,2)) { goto L_8011EF74; } // 8011EF4C
  cmps(c,0,(int32_t)c->r[0],2); // 8011EF50
  if (crb(c,2)) { goto L_8011EF8C; } // 8011EF54
  cmps(c,0,(int32_t)c->r[0],1); // 8011EF58
  if (crb(c,2)) { goto L_8011EFB0; } // 8011EF5C
  cmps(c,0,(int32_t)c->r[0],3); // 8011EF60
  if (crb(c,2)) { goto L_8011EFD4; } // 8011EF64
  cmps(c,0,(int32_t)c->r[0],4); // 8011EF68
  if (crb(c,2)) { goto L_8011EFFC; } // 8011EF6C
  return; // 8011EF70
L_8011EF74:;
  c->r[6]=R32(c->r[6]+0x0000015Cu); // 8011EF74
  cmps(c,0,(int32_t)c->r[6],0); // 8011EF78
  if (crb(c,2)) return; // 8011EF7C
  c->r[3]=c->r[4]|c->r[4]; // 8011EF80
  c->r[4]=c->r[6]+0x00000006u; // 8011EF84
  f_8024EF90(c); return; // 8011EF88
L_8011EF8C:;
  c->r[0]=R32(c->r[6]+0x0000015Cu); // 8011EF8C
  cmps(c,0,(int32_t)c->r[0],0); // 8011EF90
  if (crb(c,2)) return; // 8011EF94
  c->r[6]=R32(c->r[6]+0x00000160u); // 8011EF98
  cmps(c,0,(int32_t)c->r[6],0); // 8011EF9C
  if (crb(c,2)) return; // 8011EFA0
  c->r[3]=c->r[4]|c->r[4]; // 8011EFA4
  c->r[4]=c->r[6]+0x00000004u; // 8011EFA8
  f_8024EF90(c); return; // 8011EFAC
L_8011EFB0:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8011EFB0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8011EFB4
  cmpu(c,0,c->r[0],0x00000003u); // 8011EFB8
  if (!crb(c,0)) return; // 8011EFBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7272); // 8011EFC0
  c->r[3]=c->r[4]|c->r[4]; // 8011EFC4
  c->r[4]=c->r[6]+c->r[0]; // 8011EFC8
  c->r[4]=c->r[4]+0x000004E6u; // 8011EFCC
  f_8024EF90(c); return; // 8011EFD0
L_8011EFD4:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8011EFD4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8011EFD8
  cmpu(c,0,c->r[0],0x00000004u); // 8011EFDC
  if (!crb(c,0)) return; // 8011EFE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 8011EFE4
  c->r[6]=R32(c->r[6]+0x0000015Cu); // 8011EFE8
  c->r[3]=c->r[4]|c->r[4]; // 8011EFEC
  c->r[4]=c->r[6]+c->r[0]; // 8011EFF0
  c->r[4]=c->r[4]+0x00000164u; // 8011EFF4
  f_8024EF90(c); return; // 8011EFF8
L_8011EFFC:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8011EFFC
  c->r[3]=R8(c->r[6]+0x0000014Cu); // 8011F000
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 8011F004
  cmpu(c,0,c->r[7],0x0000000Au); // 8011F008
  if (!crb(c,0)) return; // 8011F00C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8011F010
  c->r[3]=c->r[4]|c->r[4]; // 8011F014
  if (crb(c,0)) { goto L_8011F02C; } // 8011F018
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)484); // 8011F01C
  c->r[4]=c->r[6]+c->r[0]; // 8011F020
  c->r[4]=c->r[4]+0x00005A18u; // 8011F024
  goto L_8011F030; // 8011F028
L_8011F02C:;
  c->r[4]=0u+0x00000000u; // 8011F02C
L_8011F030:;
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 8011F030
  c->r[4]=c->r[4]+c->r[0]; // 8011F034
  c->r[4]=c->r[4]+0x00000004u; // 8011F038
  f_8024EF90(c); return; // 8011F03C
  return; // 8011F040
}

// fn_8011F044
void f_8011F044(Ctx* __restrict c) {
  trace_call(0x8011F044u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F044
  c->r[0]=c->lr; // 8011F048
  cmps(c,0,(int32_t)c->r[3],0); // 8011F04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011F050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011F054
  c->r[31]=c->r[4]|c->r[4]; // 8011F058
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011F05C
  c->r[30]=c->r[3]|c->r[3]; // 8011F060
  if (crb(c,2)) { goto L_8011F080; } // 8011F064
  c->r[4]=0u+0x00000000u; // 8011F068
  c->lr=0x8011F070u; f_801244FC(c); // 8011F06C
  cmps(c,0,(int32_t)c->r[31],0); // 8011F070
  if (!crb(c,1)) { goto L_8011F080; } // 8011F074
  c->r[3]=c->r[30]|c->r[30]; // 8011F078
  c->lr=0x8011F080u; f_80244DC0(c); // 8011F07C
L_8011F080:;
  c->r[3]=c->r[30]|c->r[30]; // 8011F080
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011F084
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011F088
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011F08C
  c->lr=c->r[0]; // 8011F090
  c->r[1]=c->r[1]+0x00000010u; // 8011F094
  return; // 8011F098
}

// fn_8011F09C
void f_8011F09C(Ctx* __restrict c) {
  trace_call(0x8011F09Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F09C
  c->r[0]=c->lr; // 8011F0A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011F0A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011F0A8
  c->r[31]=c->r[3]|c->r[3]; // 8011F0AC
  c->lr=0x8011F0B4u; f_8030554C(c); // 8011F0B0
  c->r[6]=R32(c->r[31]+0x00000018u); // 8011F0B4
  c->r[4]=0u+0x00000000u; // 8011F0B8
  {uint32_t ea=c->r[2]+0xFFFF8A88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F0BC
  c->r[3]=0u+0x80420000u; // 8011F0C0
  c->r[3]=c->r[3]+0x00003610u; // 8011F0C4
  c->r[6]=c->r[6]|0x80000000u; // 8011F0C8
  c->r[7]=0u+0x00000001u; // 8011F0CC
  c->r[5]=0u+0x00000064u; // 8011F0D0
  c->r[0]=0u+0x00000081u; // 8011F0D4
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8011F0D8
  c->r[3]=c->r[31]|c->r[31]; // 8011F0DC
  W32(c->r[31]+0x00000018u,c->r[6]); // 8011F0E0
  W8(c->r[31]+0x00000269u,c->r[5]); // 8011F0E4
  {uint32_t ea=c->r[31]+0x0000026Cu; WF32(ea,c->f[0]);} // 8011F0E8
  W8(c->r[31]+0x00000270u,c->r[7]); // 8011F0EC
  W8(c->r[31]+0x00000271u,c->r[4]); // 8011F0F0
  W8(c->r[31]+0x00000268u,c->r[0]); // 8011F0F4
  W8(c->r[31]+0x00000272u,c->r[4]); // 8011F0F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011F0FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011F100
  c->lr=c->r[0]; // 8011F104
  c->r[1]=c->r[1]+0x00000010u; // 8011F108
  return; // 8011F10C
}

// fn_8011F110
void f_8011F110(Ctx* __restrict c) {
  trace_call(0x8011F110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F110
  c->r[0]=c->lr; // 8011F114
  cmps(c,0,(int32_t)c->r[3],0); // 8011F118
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011F11C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011F120
  c->r[31]=c->r[4]|c->r[4]; // 8011F124
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011F128
  c->r[30]=c->r[3]|c->r[3]; // 8011F12C
  if (crb(c,2)) { goto L_8011F14C; } // 8011F130
  c->r[4]=0u+0x00000000u; // 8011F134
  c->lr=0x8011F13Cu; f_803055E0(c); // 8011F138
  cmps(c,0,(int32_t)c->r[31],0); // 8011F13C
  if (!crb(c,1)) { goto L_8011F14C; } // 8011F140
  c->r[3]=c->r[30]|c->r[30]; // 8011F144
  c->lr=0x8011F14Cu; f_80244DC0(c); // 8011F148
L_8011F14C:;
  c->r[3]=c->r[30]|c->r[30]; // 8011F14C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011F150
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011F154
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011F158
  c->lr=c->r[0]; // 8011F15C
  c->r[1]=c->r[1]+0x00000010u; // 8011F160
  return; // 8011F164
}

// fn_8011F168
void f_8011F168(Ctx* __restrict c) {
  trace_call(0x8011F168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F168
  c->r[0]=c->lr; // 8011F16C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011F170
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8011F174
  c->r[0]=R8(c->r[4]+0x000000A0u); // 8011F178
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F17C
  if (crb(c,2)) { goto L_8011F438; } // 8011F180
  c->r[0]=R8(c->r[4]+0x00000044u); // 8011F184
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F188
  if (crb(c,2)) { goto L_8011F438; } // 8011F18C
  c->r[0]=R8(c->r[3]+0x00000272u); // 8011F190
  cmps(c,0,(int32_t)c->r[0],0); // 8011F194
  if (crb(c,2)) { goto L_8011F438; } // 8011F198
  c->r[0]=R8(c->r[3]+0x00000269u); // 8011F19C
  cmpu(c,0,c->r[0],0x00000064u); // 8011F1A0
  if (!crb(c,2)) { goto L_8011F2E4; } // 8011F1A4
  c->r[0]=0u+0x00000002u; // 8011F1A8
  c->r[6]=c->r[4]+0x000000A4u; // 8011F1AC
  c->ctr=c->r[0]; // 8011F1B0
L_8011F1B4:;
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 8011F1B4
  c->r[4]=R8(c->r[6]+0x0000000Du); // 8011F1B8
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)100); // 8011F1BC
  c->r[5]=R8(c->r[6]+0x0000000Eu); // 8011F1C0
  c->r[7]=c->r[7]+c->r[4]; // 8011F1C4
  c->r[4]=R8(c->r[6]+0x0000000Fu); // 8011F1C8
  c->r[7]=c->r[7]+c->r[5]; // 8011F1CC
  c->r[7]=c->r[7]+c->r[4]; // 8011F1D0
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F1D4
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 8011F1D8
  c->r[0]=R8(c->r[6]+0x0000000Du); // 8011F1DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F1E0
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F1E4
  W8(c->r[6]+0x0000000Du,c->r[0]); // 8011F1E8
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 8011F1EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F1F0
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F1F4
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 8011F1F8
  c->r[0]=R8(c->r[6]+0x0000000Fu); // 8011F1FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F200
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F204
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 8011F208
  c->r[7]=R8(c->r[6]+0x0000001Cu); // 8011F20C
  c->r[4]=R8(c->r[6]+0x0000001Du); // 8011F210
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)100); // 8011F214
  c->r[5]=R8(c->r[6]+0x0000001Eu); // 8011F218
  c->r[7]=c->r[7]+c->r[4]; // 8011F21C
  c->r[4]=R8(c->r[6]+0x0000001Fu); // 8011F220
  c->r[7]=c->r[7]+c->r[5]; // 8011F224
  c->r[7]=c->r[7]+c->r[4]; // 8011F228
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F22C
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 8011F230
  c->r[0]=R8(c->r[6]+0x0000001Du); // 8011F234
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F238
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F23C
  W8(c->r[6]+0x0000001Du,c->r[0]); // 8011F240
  c->r[0]=R8(c->r[6]+0x0000001Eu); // 8011F244
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F248
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F24C
  W8(c->r[6]+0x0000001Eu,c->r[0]); // 8011F250
  c->r[0]=R8(c->r[6]+0x0000001Fu); // 8011F254
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F258
  c->r[0]=divwu(c->r[0],c->r[7]); // 8011F25C
  W8(c->r[6]+0x0000001Fu,c->r[0]); // 8011F260
  c->r[6]=c->r[6]+0x00000020u; // 8011F264
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8011F1B4; } // 8011F268
  c->r[0]=0u+0x00000000u; // 8011F26C
  W8(c->r[3]+0x00000269u,c->r[0]); // 8011F270
  c->r[6]=R32(c->r[3]+0x0000004Cu); // 8011F274
  c->r[4]=0u+0x00030000u; // 8011F278
  c->r[5]=R32(c->r[13]+0xFFFFCDD0u); // 8011F27C
  c->r[4]=c->r[4]+0x000043FDu; // 8011F280
  c->r[0]=0u+0x43300000u; // 8011F284
  W32(c->r[1]+0x00000008u,c->r[0]); // 8011F288
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8011F28C
  {uint32_t ea=c->r[6]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F290
  {uint32_t ea=c->r[6]+0x000000A8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8011F294
  c->r[0]=0u+0x00000001u; // 8011F298
  {uint32_t ea=c->r[2]+0xFFFF8A90u; c->f[4]=RF64(ea);} // 8011F29C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 8011F2A0
  c->r[4]=c->r[4]+0x00270000u; // 8011F2A4
  {uint32_t ea=c->r[2]+0xFFFF8A8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011F2A8
  c->r[4]=c->r[4]+0xFFFF9EC3u; // 8011F2AC
  W32(c->r[13]+0xFFFFCDD0u,c->r[4]); // 8011F2B0
  c->r[5]=rotl(c->r[4],16)&0x00007FFFu; // 8011F2B4
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F2B8
  c->r[4]=c->r[5]^0x80000000u; // 8011F2BC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8011F2C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8011F2C4
  W8(c->r[3]+0x00000270u,c->r[0]); // 8011F2C8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8011F2CC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8011F2D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8011F2D4
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 8011F2D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8011F2DC
  {uint32_t ea=c->r[3]+0x0000026Cu; WF32(ea,c->f[0]);} // 8011F2E0
L_8011F2E4:;
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011F2E4
  {uint32_t ea=c->r[3]+0x0000026Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F2E8
  fcmp(c,0,c->f[1],c->f[0]); // 8011F2EC
  if (!crb(c,1)) { goto L_8011F430; } // 8011F2F0
  c->r[4]=0u+0x00030000u; // 8011F2F4
  c->r[5]=R32(c->r[13]+0xFFFFCDD0u); // 8011F2F8
  c->r[0]=c->r[4]+0x000043FDu; // 8011F2FC
  c->r[6]=R8(c->r[3]+0x00000269u); // 8011F300
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 8011F304
  c->r[4]=0u+0x51EC0000u; // 8011F308
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8011F30C
  c->r[0]=c->r[4]+0xFFFF851Fu; // 8011F310
  c->r[4]=rotl(c->r[6],4)&0xFFFFFFF0u; // 8011F314
  c->r[5]=c->r[5]+0x00270000u; // 8011F318
  c->r[5]=c->r[5]+0xFFFF9EC3u; // 8011F31C
  c->r[6]=c->r[7]+c->r[4]; // 8011F320
  c->r[7]=rotl(c->r[5],16)&0x00007FFFu; // 8011F324
  W32(c->r[13]+0xFFFFCDD0u,c->r[5]); // 8011F328
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 8011F32C
  c->r[5]=R8(c->r[6]+0x000000B0u); // 8011F330
  c->r[0]=sraw(c,c->r[0],5); // 8011F334
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8011F338
  c->r[0]=c->r[0]+c->r[4]; // 8011F33C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8011F340
  c->r[0]=c->r[7]-c->r[0]; // 8011F344
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8011F348
  cmpu(c,0,c->r[4],c->r[5]); // 8011F34C
  if (!crb(c,0)) { goto L_8011F35C; } // 8011F350
  c->r[6]=0u+0x00000000u; // 8011F354
  goto L_8011F3B4; // 8011F358
L_8011F35C:;
  c->r[4]=c->r[4]-c->r[5]; // 8011F35C
  c->r[5]=R8(c->r[6]+0x000000B1u); // 8011F360
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8011F364
  cmpu(c,0,c->r[0],c->r[5]); // 8011F368
  if (!crb(c,0)) { goto L_8011F378; } // 8011F36C
  c->r[6]=0u+0x00000001u; // 8011F370
  goto L_8011F3B4; // 8011F374
L_8011F378:;
  c->r[4]=c->r[4]-c->r[5]; // 8011F378
  c->r[5]=R8(c->r[6]+0x000000B2u); // 8011F37C
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8011F380
  cmpu(c,0,c->r[0],c->r[5]); // 8011F384
  if (!crb(c,0)) { goto L_8011F394; } // 8011F388
  c->r[6]=0u+0x00000002u; // 8011F38C
  goto L_8011F3B4; // 8011F390
L_8011F394:;
  c->r[4]=c->r[4]-c->r[5]; // 8011F394
  c->r[5]=R8(c->r[6]+0x000000B3u); // 8011F398
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8011F39C
  cmpu(c,0,c->r[0],c->r[5]); // 8011F3A0
  if (!crb(c,0)) { goto L_8011F3B0; } // 8011F3A4
  c->r[6]=0u+0x00000003u; // 8011F3A8
  goto L_8011F3B4; // 8011F3AC
L_8011F3B0:;
  c->r[6]=0u+0x00000000u; // 8011F3B0
L_8011F3B4:;
  W8(c->r[3]+0x00000269u,c->r[6]); // 8011F3B4
  c->r[4]=0u+0x00030000u; // 8011F3B8
  c->r[0]=0u+0x43300000u; // 8011F3BC
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8011F3C0
  c->r[5]=R32(c->r[13]+0xFFFFCDD0u); // 8011F3C4
  c->r[4]=c->r[4]+0x000043FDu; // 8011F3C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8011F3CC
  c->r[6]=rotl(c->r[6],4)&0x00000FF0u; // 8011F3D0
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8011F3D4
  {uint32_t ea=c->r[2]+0xFFFF8A90u; c->f[4]=RF64(ea);} // 8011F3D8
  c->r[5]=c->r[7]+c->r[6]; // 8011F3DC
  {uint32_t ea=c->r[2]+0xFFFF8A8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011F3E0
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011F3E4
  c->r[0]=0u+0x00000001u; // 8011F3E8
  c->r[4]=c->r[4]+0x00270000u; // 8011F3EC
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8011F3F0
  c->r[4]=c->r[4]+0xFFFF9EC3u; // 8011F3F4
  {uint32_t ea=c->r[13]+0xFFFFE84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F3F8
  W32(c->r[13]+0xFFFFCDD0u,c->r[4]); // 8011F3FC
  c->r[5]=rotl(c->r[4],16)&0x00007FFFu; // 8011F400
  c->r[4]=c->r[5]^0x80000000u; // 8011F404
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 8011F408
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8011F40C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8011F410
  W8(c->r[3]+0x00000270u,c->r[0]); // 8011F414
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8011F418
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8011F41C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8011F420
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 8011F424
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8011F428
  {uint32_t ea=c->r[3]+0x0000026Cu; WF32(ea,c->f[0]);} // 8011F42C
L_8011F430:;
  c->r[0]=0u+0x00000000u; // 8011F430
  W8(c->r[3]+0x00000272u,c->r[0]); // 8011F434
L_8011F438:;
  c->lr=0x8011F43Cu; f_802D825C(c); // 8011F438
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011F43C
  c->lr=c->r[0]; // 8011F440
  c->r[1]=c->r[1]+0x00000010u; // 8011F444
  return; // 8011F448
}

// fn_8011F44C
void f_8011F44C(Ctx* __restrict c) {
  trace_call(0x8011F44Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F44C
  c->r[0]=c->lr; // 8011F450
  c->r[4]=0u+0x43300000u; // 8011F454
  W32(c->r[1]+0x00000094u,c->r[0]); // 8011F458
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8011F45C
  W32(c->r[1]+0x00000088u,c->r[30]); // 8011F460
  c->r[30]=c->r[3]|c->r[3]; // 8011F464
  c->r[31]=R32(c->r[3]+0x0000004Cu); // 8011F468
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011F46C
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 8011F470
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F474
  {uint32_t ea=c->r[3]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011F478
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F47C
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8011F480
  W32(c->r[1]+0x00000078u,c->r[4]); // 8011F484
  W32(c->r[1]+0x00000080u,c->r[4]); // 8011F488
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8011F48C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8011F490
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8011F494
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 8011F498
  if (crb(c,2)) { goto L_8011F4C0; } // 8011F49C
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 8011F4A0
  c->lr=0x8011F4A8u; f_80114840(c); // 8011F4A4
  cmps(c,0,(int32_t)c->r[3],0); // 8011F4A8
  if (crb(c,2)) { goto L_8011F4C0; } // 8011F4AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011F4B0
  {uint32_t ea=c->r[2]+0xFFFF8A98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F4B4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8011F4B8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8011F4BC
L_8011F4C0:;
  c->lr=0x8011F4C4u; f_80134934(c); // 8011F4C0
  c->r[0]=R8(c->r[31]+0x0000006Du); // 8011F4C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F4C8
  if (crb(c,2)) { goto L_8011F540; } // 8011F4CC
  c->r[0]=R8(c->r[30]+0x00000197u); // 8011F4D0
  c->r[3]=c->r[1]+0x00000030u; // 8011F4D4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8011F4D8
  c->r[4]=c->r[1]+0x00000028u; // 8011F4DC
  {uint32_t ea=c->r[2]+0xFFFF8A88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F4E0
  c->r[5]=c->r[1]+0x00000068u; // 8011F4E4
  {uint32_t ea=c->r[2]+0xFFFF8AA0u; c->f[2]=RF64(ea);} // 8011F4E8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 8011F4EC
  c->r[8]=R32(c->r[1]+0x00000038u); // 8011F4F0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 8011F4F4
  {uint32_t ea=c->r[2]+0xFFFF8A9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8011F4F8
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 8011F4FC
  c->r[6]=R32(c->r[1]+0x00000040u); // 8011F500
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8011F504
  c->r[0]=R32(c->r[1]+0x00000044u); // 8011F508
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8011F50C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8011F510
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8011F514
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8011F518
  W32(c->r[1]+0x00000028u,c->r[8]); // 8011F51C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8011F520
  W32(c->r[1]+0x00000030u,c->r[6]); // 8011F524
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011F528
  c->r[6]=R32(c->r[31]+0x00000074u); // 8011F52C
  c->r[7]=R32(c->r[31]+0x00000080u); // 8011F530
  c->r[8]=R32(c->r[31]+0x0000008Cu); // 8011F534
  c->r[9]=R32(c->r[31]+0x00000098u); // 8011F538
  c->lr=0x8011F540u; f_8013B6C8(c); // 8011F53C
L_8011F540:;
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 8011F540
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F544
  if (crb(c,2)) { goto L_8011F5E0; } // 8011F548
  c->r[5]=R8(c->r[30]+0x00000197u); // 8011F54C
  c->r[3]=c->r[1]+0x00000020u; // 8011F550
  W32(c->r[1]+0x00000084u,c->r[5]); // 8011F554
  c->r[4]=c->r[1]+0x00000018u; // 8011F558
  c->r[0]=R8(c->r[30]+0x00000196u); // 8011F55C
  c->r[5]=c->r[1]+0x00000058u; // 8011F560
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8011F564
  c->r[9]=0u+0x00000000u; // 8011F568
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=RF64(ea);} // 8011F56C
  c->r[6]=R8(c->r[30]+0x00000195u); // 8011F570
  {uint32_t ea=c->r[2]+0xFFFF8AA0u; c->f[2]=RF64(ea);} // 8011F574
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 8011F578
  c->r[0]=R8(c->r[30]+0x00000194u); // 8011F57C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[2]); // 8011F580
  W32(c->r[1]+0x00000084u,c->r[6]); // 8011F584
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 8011F588
  c->r[8]=R32(c->r[1]+0x00000038u); // 8011F58C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8011F590
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=RF64(ea);} // 8011F594
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 8011F598
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8011F59C
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 8011F5A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8011F5A4
  c->r[6]=R32(c->r[1]+0x00000040u); // 8011F5A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8011F5AC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8011F5B0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8011F5B4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[3]);} // 8011F5B8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[4]);} // 8011F5BC
  W32(c->r[1]+0x00000018u,c->r[8]); // 8011F5C0
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 8011F5C4
  W32(c->r[1]+0x00000020u,c->r[6]); // 8011F5C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011F5CC
  c->r[6]=R32(c->r[31]+0x00000024u); // 8011F5D0
  c->r[7]=R32(c->r[31]+0x00000030u); // 8011F5D4
  c->r[8]=R32(c->r[31]+0x0000003Cu); // 8011F5D8
  c->lr=0x8011F5E0u; f_8013B6C8(c); // 8011F5DC
L_8011F5E0:;
  c->r[0]=R8(c->r[31]+0x00000044u); // 8011F5E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F5E4
  if (crb(c,2)) { goto L_8011F710; } // 8011F5E8
  c->r[0]=R8(c->r[31]+0x000000A0u); // 8011F5EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F5F0
  if (crb(c,2)) { goto L_8011F650; } // 8011F5F4
  c->r[0]=R8(c->r[30]+0x00000269u); // 8011F5F8
  c->r[4]=0u+0x00000001u; // 8011F5FC
  W8(c->r[30]+0x00000272u,c->r[4]); // 8011F600
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8011F604
  c->r[3]=c->r[31]+c->r[0]; // 8011F608
  c->r[0]=R8(c->r[3]+0x000000A4u); // 8011F60C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8011F610
  if (crb(c,2)) { goto L_8011F62C; } // 8011F614
  c->r[0]=R8(c->r[30]+0x00000270u); // 8011F618
  W8(c->r[30]+0x00000271u,c->r[4]); // 8011F61C
  c->r[0]=cntlz(c->r[0]); // 8011F620
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8011F624
  W8(c->r[30]+0x00000270u,c->r[0]); // 8011F628
L_8011F62C:;
  c->r[0]=R8(c->r[30]+0x00000270u); // 8011F62C
  cmpu(c,0,c->r[0],0x00000001u); // 8011F630
  if (!crb(c,2)) { goto L_8011F644; } // 8011F634
  c->r[0]=R8(c->r[3]+0x000000A5u); // 8011F638
  W8(c->r[30]+0x00000268u,c->r[0]); // 8011F63C
  goto L_8011F658; // 8011F640
L_8011F644:;
  c->r[0]=0u+0x00000000u; // 8011F644
  W8(c->r[30]+0x00000268u,c->r[0]); // 8011F648
  goto L_8011F658; // 8011F64C
L_8011F650:;
  c->r[0]=R8(c->r[30]+0x00000197u); // 8011F650
  W8(c->r[30]+0x00000268u,c->r[0]); // 8011F654
L_8011F658:;
  c->r[0]=R8(c->r[30]+0x00000268u); // 8011F658
  cmps(c,0,(int32_t)c->r[0],0); // 8011F65C
  if (crb(c,2)) { goto L_8011F710; } // 8011F660
  c->r[3]=0u+0x00000008u; // 8011F664
  c->r[4]=0u+0x00000001u; // 8011F668
  c->r[5]=0u+0x00000000u; // 8011F66C
  c->lr=0x8011F674u; f_80218810(c); // 8011F670
  c->r[0]=R8(c->r[30]+0x00000194u); // 8011F674
  c->r[3]=c->r[1]+0x00000010u; // 8011F678
  W32(c->r[1]+0x00000084u,c->r[0]); // 8011F67C
  c->r[4]=c->r[1]+0x00000008u; // 8011F680
  {uint32_t ea=c->r[2]+0xFFFF8AA0u; c->f[1]=RF64(ea);} // 8011F684
  c->r[5]=c->r[1]+0x00000048u; // 8011F688
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 8011F68C
  c->r[9]=0u+0x00000000u; // 8011F690
  c->r[8]=R32(c->r[1]+0x00000038u); // 8011F694
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011F698
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 8011F69C
  c->r[6]=R32(c->r[1]+0x00000040u); // 8011F6A0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8011F6A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8011F6A8
  c->r[10]=R8(c->r[30]+0x00000195u); // 8011F6AC
  W32(c->r[1]+0x0000007Cu,c->r[10]); // 8011F6B0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 8011F6B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011F6B8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8011F6BC
  c->r[10]=R8(c->r[30]+0x00000196u); // 8011F6C0
  W32(c->r[1]+0x00000084u,c->r[10]); // 8011F6C4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 8011F6C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011F6CC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8011F6D0
  c->r[10]=R8(c->r[30]+0x00000268u); // 8011F6D4
  W32(c->r[1]+0x0000007Cu,c->r[10]); // 8011F6D8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 8011F6DC
  W32(c->r[1]+0x00000008u,c->r[8]); // 8011F6E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8011F6E4
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8011F6E8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8011F6EC
  W32(c->r[1]+0x00000010u,c->r[6]); // 8011F6F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011F6F4
  c->r[6]=R32(c->r[31]+0x0000004Cu); // 8011F6F8
  c->r[7]=R32(c->r[31]+0x00000058u); // 8011F6FC
  c->r[8]=R32(c->r[31]+0x00000064u); // 8011F700
  c->lr=0x8011F708u; f_8013B6C8(c); // 8011F704
  c->r[3]=0u+0x00000008u; // 8011F708
  c->lr=0x8011F710u; f_80218870(c); // 8011F70C
L_8011F710:;
  c->lr=0x8011F714u; f_801349C4(c); // 8011F710
  c->r[0]=R32(c->r[1]+0x00000094u); // 8011F714
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8011F718
  c->r[30]=R32(c->r[1]+0x00000088u); // 8011F71C
  c->lr=c->r[0]; // 8011F720
  c->r[1]=c->r[1]+0x00000090u; // 8011F724
  return; // 8011F728
}

// fn_8011F72C
void f_8011F72C(Ctx* __restrict c) {
  trace_call(0x8011F72Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F72C
  c->r[0]=c->lr; // 8011F730
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8011F734
  c->r[11]=c->r[1]+0x000000D0u; // 8011F738
  c->lr=0x8011F740u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8011F73C
  c->r[31]=c->r[3]|c->r[3]; // 8011F740
  c->lr=0x8011F748u; f_8011C490(c); // 8011F744
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011F748
  c->r[20]=0u+0x00000000u; // 8011F74C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8011F750
  c->r[18]=0u+0x80420000u; // 8011F754
  {uint32_t ea=c->r[2]+0xFFFF8AACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011F758
  c->r[18]=c->r[18]+0x000036D8u; // 8011F75C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8011F760
  c->r[19]=0u+0x00000005u; // 8011F764
  c->r[29]=R32(c->r[1]+0x00000008u); // 8011F768
  c->r[21]=0u+0xFFFFFFFFu; // 8011F76C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 8011F770
  c->r[22]=0u+0x00000003u; // 8011F774
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 8011F778
  c->r[30]=0u+0x00000002u; // 8011F77C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 8011F780
  c->r[27]=R32(c->r[1]+0x00000080u); // 8011F784
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 8011F788
  c->r[26]=R32(c->r[1]+0x00000084u); // 8011F78C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 8011F790
  c->r[25]=R32(c->r[1]+0x00000088u); // 8011F794
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8011F798
  c->r[24]=R32(c->r[1]+0x0000008Cu); // 8011F79C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8011F7A0
  c->r[23]=R32(c->r[1]+0x00000070u); // 8011F7A4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8011F7A8
  c->r[12]=R32(c->r[1]+0x00000074u); // 8011F7AC
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 8011F7B0
  c->r[11]=R32(c->r[1]+0x00000078u); // 8011F7B4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8011F7B8
  c->r[10]=R32(c->r[1]+0x0000007Cu); // 8011F7BC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8011F7C0
  c->r[9]=R32(c->r[1]+0x00000060u); // 8011F7C4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8011F7C8
  c->r[8]=R32(c->r[1]+0x00000064u); // 8011F7CC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8011F7D0
  c->r[7]=R32(c->r[1]+0x00000068u); // 8011F7D4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 8011F7D8
  c->r[6]=R32(c->r[1]+0x0000006Cu); // 8011F7DC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8011F7E0
  c->r[5]=R32(c->r[1]+0x00000050u); // 8011F7E4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 8011F7E8
  c->r[4]=R32(c->r[1]+0x00000054u); // 8011F7EC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8011F7F0
  c->r[3]=R32(c->r[1]+0x00000058u); // 8011F7F4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8011F7F8
  W32(c->r[31]+0x000000B4u,c->r[18]); // 8011F7FC
  W32(c->r[31]+0x000002B8u,c->r[19]); // 8011F800
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[1]);} // 8011F804
  W8(c->r[31]+0x000002F0u,c->r[20]); // 8011F808
  W8(c->r[31]+0x000002F5u,c->r[21]); // 8011F80C
  W8(c->r[31]+0x000002F6u,c->r[20]); // 8011F810
  W32(c->r[31]+0x000002F8u,c->r[22]); // 8011F814
  {uint32_t ea=c->r[31]+0x0000034Cu; WF32(ea,c->f[1]);} // 8011F818
  {uint32_t ea=c->r[31]+0x00000350u; WF32(ea,c->f[0]);} // 8011F81C
  {uint32_t ea=c->r[31]+0x00000354u; WF32(ea,c->f[0]);} // 8011F820
  W32(c->r[31]+0x00000380u,c->r[30]); // 8011F824
  W32(c->r[31]+0x00000304u,c->r[29]); // 8011F828
  W32(c->r[31]+0x00000308u,c->r[28]); // 8011F82C
  W32(c->r[31]+0x00000360u,c->r[27]); // 8011F830
  W32(c->r[31]+0x00000364u,c->r[26]); // 8011F834
  W32(c->r[31]+0x00000368u,c->r[25]); // 8011F838
  W32(c->r[31]+0x0000036Cu,c->r[24]); // 8011F83C
  W32(c->r[31]+0x00000370u,c->r[23]); // 8011F840
  W32(c->r[31]+0x00000374u,c->r[12]); // 8011F844
  W32(c->r[31]+0x00000378u,c->r[11]); // 8011F848
  W32(c->r[31]+0x0000037Cu,c->r[10]); // 8011F84C
  W32(c->r[31]+0x0000031Cu,c->r[9]); // 8011F850
  W32(c->r[31]+0x00000320u,c->r[8]); // 8011F854
  W32(c->r[31]+0x00000324u,c->r[7]); // 8011F858
  W32(c->r[31]+0x00000328u,c->r[6]); // 8011F85C
  W32(c->r[31]+0x0000030Cu,c->r[5]); // 8011F860
  W32(c->r[31]+0x00000310u,c->r[4]); // 8011F864
  W32(c->r[31]+0x00000314u,c->r[3]); // 8011F868
  W32(c->r[31]+0x00000318u,c->r[0]); // 8011F86C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8011F870
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 8011F874
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8011F878
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8011F87C
  c->r[3]=c->r[31]+0x000002F1u; // 8011F880
  c->r[23]=R32(c->r[1]+0x00000040u); // 8011F884
  c->r[4]=0u+0x00000000u; // 8011F888
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8011F88C
  c->r[5]=0u+0x00000004u; // 8011F890
  c->r[24]=R32(c->r[1]+0x00000044u); // 8011F894
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8011F898
  c->r[25]=R32(c->r[1]+0x00000048u); // 8011F89C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8011F8A0
  c->r[26]=R32(c->r[1]+0x0000004Cu); // 8011F8A4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8011F8A8
  c->r[27]=R32(c->r[1]+0x00000030u); // 8011F8AC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8011F8B0
  c->r[28]=R32(c->r[1]+0x00000034u); // 8011F8B4
  c->r[12]=R32(c->r[1]+0x00000020u); // 8011F8B8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8011F8BC
  c->r[29]=R32(c->r[1]+0x00000038u); // 8011F8C0
  c->r[11]=R32(c->r[1]+0x00000024u); // 8011F8C4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 8011F8C8
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 8011F8CC
  c->r[10]=R32(c->r[1]+0x00000028u); // 8011F8D0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8011F8D4
  c->r[9]=R32(c->r[1]+0x0000002Cu); // 8011F8D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8011F8DC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8011F8E0
  c->r[8]=R32(c->r[1]+0x00000010u); // 8011F8E4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8011F8E8
  c->r[7]=R32(c->r[1]+0x00000014u); // 8011F8EC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8011F8F0
  c->r[6]=R32(c->r[1]+0x00000018u); // 8011F8F4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8011F8F8
  W32(c->r[31]+0x0000032Cu,c->r[23]); // 8011F8FC
  W32(c->r[31]+0x00000330u,c->r[24]); // 8011F900
  W32(c->r[31]+0x00000334u,c->r[25]); // 8011F904
  W32(c->r[31]+0x00000338u,c->r[26]); // 8011F908
  W32(c->r[31]+0x0000033Cu,c->r[27]); // 8011F90C
  W32(c->r[31]+0x00000340u,c->r[28]); // 8011F910
  W32(c->r[31]+0x00000344u,c->r[29]); // 8011F914
  W32(c->r[31]+0x00000348u,c->r[30]); // 8011F918
  W32(c->r[31]+0x000002CCu,c->r[12]); // 8011F91C
  W32(c->r[31]+0x000002D0u,c->r[11]); // 8011F920
  W32(c->r[31]+0x000002D4u,c->r[10]); // 8011F924
  W32(c->r[31]+0x000002D8u,c->r[9]); // 8011F928
  W32(c->r[31]+0x000002BCu,c->r[12]); // 8011F92C
  W32(c->r[31]+0x000002C0u,c->r[11]); // 8011F930
  W32(c->r[31]+0x000002C4u,c->r[10]); // 8011F934
  W32(c->r[31]+0x000002C8u,c->r[9]); // 8011F938
  W32(c->r[31]+0x000002DCu,c->r[8]); // 8011F93C
  W32(c->r[31]+0x000002E0u,c->r[7]); // 8011F940
  W32(c->r[31]+0x000002E4u,c->r[6]); // 8011F944
  W32(c->r[31]+0x000002E8u,c->r[0]); // 8011F948
  c->lr=0x8011F950u; f_80006370(c); // 8011F94C
  c->r[11]=c->r[1]+0x000000D0u; // 8011F950
  c->r[3]=c->r[31]|c->r[31]; // 8011F954
  c->lr=0x8011F95Cu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8011F958
  c->r[0]=R32(c->r[1]+0x000000D4u); // 8011F95C
  c->lr=c->r[0]; // 8011F960
  c->r[1]=c->r[1]+0x000000D0u; // 8011F964
  return; // 8011F968
}

// fn_8011F96C
void f_8011F96C(Ctx* __restrict c) {
  trace_call(0x8011F96Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F96C
  c->r[0]=c->lr; // 8011F970
  cmps(c,0,(int32_t)c->r[3],0); // 8011F974
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011F978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011F97C
  c->r[31]=c->r[4]|c->r[4]; // 8011F980
  W32(c->r[1]+0x00000008u,c->r[30]); // 8011F984
  c->r[30]=c->r[3]|c->r[3]; // 8011F988
  if (crb(c,2)) { goto L_8011F9A8; } // 8011F98C
  c->r[4]=0u+0x00000000u; // 8011F990
  c->lr=0x8011F998u; f_8011C510(c); // 8011F994
  cmps(c,0,(int32_t)c->r[31],0); // 8011F998
  if (!crb(c,1)) { goto L_8011F9A8; } // 8011F99C
  c->r[3]=c->r[30]|c->r[30]; // 8011F9A0
  c->lr=0x8011F9A8u; f_80244DC0(c); // 8011F9A4
L_8011F9A8:;
  c->r[3]=c->r[30]|c->r[30]; // 8011F9A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011F9AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011F9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011F9B4
  c->lr=c->r[0]; // 8011F9B8
  c->r[1]=c->r[1]+0x00000010u; // 8011F9BC
  return; // 8011F9C0
}

// fn_8011F9C4
void f_8011F9C4(Ctx* __restrict c) {
  trace_call(0x8011F9C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011F9C4
  c->r[0]=c->lr; // 8011F9C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011F9CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011F9D0
  c->r[31]=c->r[3]|c->r[3]; // 8011F9D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011F9D8
  c->r[30]=c->r[5]|c->r[5]; // 8011F9DC
  c->lr=0x8011F9E4u; f_8011C568(c); // 8011F9E0
  cmps(c,0,(int32_t)c->r[30],2); // 8011F9E4
  if (!crb(c,2)) { goto L_8011FBB4; } // 8011F9E8
  c->r[0]=R32(c->r[31]+0x00000018u); // 8011F9EC
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8011F9F0
  c->r[0]=c->r[0]|0x80000000u; // 8011F9F4
  W32(c->r[31]+0x00000018u,c->r[0]); // 8011F9F8
  c->r[3]=R32(c->r[5]+0x000000B0u); // 8011F9FC
  cmps(c,0,(int32_t)c->r[3],0); // 8011FA00
  if (crb(c,2)) { goto L_8011FA0C; } // 8011FA04
  goto L_8011FA38; // 8011FA08
L_8011FA0C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011FA0C
  cmps(c,0,(int32_t)c->r[3],0); // 8011FA10
  if (crb(c,2)) { goto L_8011FA34; } // 8011FA14
  c->r[4]=R32(c->r[5]+0x000000A8u); // 8011FA18
  c->r[6]=0u+0x00000000u; // 8011FA1C
  c->r[8]=R32(c->r[5]+0x000000ACu); // 8011FA20
  c->r[5]=0u+0x00000000u; // 8011FA24
  c->r[7]=0u+0x00000000u; // 8011FA28
  c->lr=0x8011FA30u; f_802BA9F4(c); // 8011FA2C
  goto L_8011FA38; // 8011FA30
L_8011FA34:;
  c->r[3]=0u+0x00000000u; // 8011FA34
L_8011FA38:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FA38
  if (crb(c,2)) { goto L_8011FA6C; } // 8011FA3C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8011FA40
  goto L_8011FA5C; // 8011FA44
L_8011FA48:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8011FA48
  cmps(c,0,(int32_t)c->r[0],17); // 8011FA4C
  if (!crb(c,2)) { goto L_8011FA58; } // 8011FA50
  goto L_8011FA70; // 8011FA54
L_8011FA58:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8011FA58
L_8011FA5C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FA5C
  if (!crb(c,2)) { IRQCHK(c); goto L_8011FA48; } // 8011FA60
  c->r[3]=0u+0x00000000u; // 8011FA64
  goto L_8011FA70; // 8011FA68
L_8011FA6C:;
  c->r[3]=0u+0x00000000u; // 8011FA6C
L_8011FA70:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8011FA70
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8011FA74
  c->r[3]=R32(c->r[3]+0x00000030u); // 8011FA78
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011FA7C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011FA80
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011FA84
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FA88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8011FA8C
  c->r[6]=R32(c->r[1]+0x00000008u); // 8011FA90
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8011FA94
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8011FA98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8011FA9C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8011FAA0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8011FAA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011FAA8
  W32(c->r[31]+0x0000031Cu,c->r[6]); // 8011FAAC
  W32(c->r[31]+0x00000320u,c->r[4]); // 8011FAB0
  W32(c->r[31]+0x00000324u,c->r[3]); // 8011FAB4
  W32(c->r[31]+0x00000328u,c->r[0]); // 8011FAB8
  W32(c->r[31]+0x0000032Cu,c->r[6]); // 8011FABC
  W32(c->r[31]+0x00000330u,c->r[4]); // 8011FAC0
  W32(c->r[31]+0x00000334u,c->r[3]); // 8011FAC4
  W32(c->r[31]+0x00000338u,c->r[0]); // 8011FAC8
  W32(c->r[31]+0x0000033Cu,c->r[6]); // 8011FACC
  W32(c->r[31]+0x00000340u,c->r[4]); // 8011FAD0
  W32(c->r[31]+0x00000344u,c->r[3]); // 8011FAD4
  W32(c->r[31]+0x00000348u,c->r[0]); // 8011FAD8
  c->r[3]=R32(c->r[5]+0x000000BCu); // 8011FADC
  cmps(c,0,(int32_t)c->r[3],0); // 8011FAE0
  if (crb(c,2)) { goto L_8011FAEC; } // 8011FAE4
  goto L_8011FB18; // 8011FAE8
L_8011FAEC:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011FAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8011FAF0
  if (crb(c,2)) { goto L_8011FB14; } // 8011FAF4
  c->r[4]=R32(c->r[5]+0x000000B4u); // 8011FAF8
  c->r[6]=0u+0x00000000u; // 8011FAFC
  c->r[8]=R32(c->r[5]+0x000000B8u); // 8011FB00
  c->r[5]=0u+0x00000000u; // 8011FB04
  c->r[7]=0u+0x00000000u; // 8011FB08
  c->lr=0x8011FB10u; f_802BA9F4(c); // 8011FB0C
  goto L_8011FB18; // 8011FB10
L_8011FB14:;
  c->r[3]=0u+0x00000000u; // 8011FB14
L_8011FB18:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FB18
  if (crb(c,2)) { goto L_8011FB4C; } // 8011FB1C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8011FB20
  goto L_8011FB3C; // 8011FB24
L_8011FB28:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8011FB28
  cmps(c,0,(int32_t)c->r[0],2); // 8011FB2C
  if (!crb(c,2)) { goto L_8011FB38; } // 8011FB30
  goto L_8011FB50; // 8011FB34
L_8011FB38:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 8011FB38
L_8011FB3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8011FB3C
  if (!crb(c,2)) { IRQCHK(c); goto L_8011FB28; } // 8011FB40
  c->r[4]=0u+0x00000000u; // 8011FB44
  goto L_8011FB50; // 8011FB48
L_8011FB4C:;
  c->r[4]=0u+0x00000000u; // 8011FB4C
L_8011FB50:;
  c->r[3]=R32(c->r[4]+0x00000024u); // 8011FB50
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FB54
  {uint32_t ea=c->r[31]+0x00000354u; WF32(ea,c->f[0]);} // 8011FB58
  c->r[3]=R32(c->r[4]+0x00000018u); // 8011FB5C
  c->r[3]=R32(c->r[3]+0x00000030u); // 8011FB60
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FB64
  {uint32_t ea=c->r[31]+0x000002DCu; WF32(ea,c->f[0]);} // 8011FB68
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FB6C
  {uint32_t ea=c->r[31]+0x000002E0u; WF32(ea,c->f[0]);} // 8011FB70
  c->r[5]=R32(c->r[31]+0x000002DCu); // 8011FB74
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FB78
  {uint32_t ea=c->r[31]+0x000002E4u; WF32(ea,c->f[0]);} // 8011FB7C
  c->r[4]=R32(c->r[31]+0x000002E0u); // 8011FB80
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FB84
  {uint32_t ea=c->r[31]+0x000002E8u; WF32(ea,c->f[0]);} // 8011FB88
  c->r[3]=R32(c->r[31]+0x000002E4u); // 8011FB8C
  c->r[0]=R32(c->r[31]+0x000002E8u); // 8011FB90
  W32(c->r[31]+0x000002CCu,c->r[5]); // 8011FB94
  W32(c->r[31]+0x000002D0u,c->r[4]); // 8011FB98
  W32(c->r[31]+0x000002D4u,c->r[3]); // 8011FB9C
  W32(c->r[31]+0x000002D8u,c->r[0]); // 8011FBA0
  W32(c->r[31]+0x000002BCu,c->r[5]); // 8011FBA4
  W32(c->r[31]+0x000002C0u,c->r[4]); // 8011FBA8
  W32(c->r[31]+0x000002C4u,c->r[3]); // 8011FBAC
  W32(c->r[31]+0x000002C8u,c->r[0]); // 8011FBB0
L_8011FBB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011FBB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011FBB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011FBBC
  c->lr=c->r[0]; // 8011FBC0
  c->r[1]=c->r[1]+0x00000020u; // 8011FBC4
  return; // 8011FBC8
}

// fn_8011FBCC
void f_8011FBCC(Ctx* __restrict c) {
  trace_call(0x8011FBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011FBCC
  c->r[0]=c->lr; // 8011FBD0
  c->r[6]=0u+0x80000000u; // 8011FBD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011FBD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8011FBDC
  c->r[31]=c->r[5]|c->r[5]; // 8011FBE0
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 8011FBE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8011FBE8
  c->r[30]=c->r[3]|c->r[3]; // 8011FBEC
  c->r[0]=R32(c->r[3]+0x00000294u); // 8011FBF0
  cmps(c,0,(int32_t)c->r[0],2); // 8011FBF4
  if (!crb(c,2)) { goto L_8011FDEC; } // 8011FBF8
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 8011FBFC
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 8011FC00
  if (crb(c,2)) { goto L_8011FDEC; } // 8011FC04
  c->r[0]=R8(c->r[3]+0x000002A0u); // 8011FC08
  cmps(c,0,(int32_t)c->r[0],0); // 8011FC0C
  if (crb(c,2)) { goto L_8011FDEC; } // 8011FC10
  cmps(c,0,(int32_t)c->r[4],0); // 8011FC14
  if (crb(c,2)) { goto L_8011FDE0; } // 8011FC18
  c->r[0]=R8(c->r[3]+0x000002F5u); // 8011FC1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011FC20
  cmps(c,0,(int32_t)c->r[0],-1); // 8011FC24
  if (!crb(c,2)) { goto L_8011FDE0; } // 8011FC28
  c->r[4]=0u+0x00000003u; // 8011FC2C
  c->lr=0x8011FC34u; f_8011C984(c); // 8011FC30
  c->r[12]=R32(c->r[30]+0x000000B4u); // 8011FC34
  c->r[3]=c->r[30]|c->r[30]; // 8011FC38
  c->r[12]=R32(c->r[12]+0x000000E4u); // 8011FC3C
  c->ctr=c->r[12]; // 8011FC40
  if (true) { c->lr=0x8011FC48u; dispatch(c,c->ctr); } // 8011FC44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8011FC48
  W8(c->r[30]+0x000002F5u,c->r[31]); // 8011FC4C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8011FC50
  c->r[5]=R32(c->r[30]+0x0000004Cu); // 8011FC54
  c->r[4]=c->r[30]+c->r[0]; // 8011FC58
  c->r[3]=R32(c->r[4]+0x00000274u); // 8011FC5C
  c->r[0]=R32(c->r[4]+0x00000278u); // 8011FC60
  W32(c->r[30]+0x00000308u,c->r[0]); // 8011FC64
  W32(c->r[30]+0x00000304u,c->r[3]); // 8011FC68
  W32(c->r[30]+0x000002FCu,c->r[3]); // 8011FC6C
  W32(c->r[30]+0x00000300u,c->r[0]); // 8011FC70
  c->r[3]=R32(c->r[5]+0x000000B0u); // 8011FC74
  c->r[7]=R32(c->r[13]+0xFFFFE8F0u); // 8011FC78
  cmps(c,0,(int32_t)c->r[3],0); // 8011FC7C
  if (crb(c,2)) { goto L_8011FC88; } // 8011FC80
  goto L_8011FCB0; // 8011FC84
L_8011FC88:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011FC88
  cmps(c,0,(int32_t)c->r[3],0); // 8011FC8C
  if (crb(c,2)) { goto L_8011FCAC; } // 8011FC90
  c->r[4]=R32(c->r[5]+0x000000A8u); // 8011FC94
  c->r[6]=0u+0x00000000u; // 8011FC98
  c->r[8]=R32(c->r[5]+0x000000ACu); // 8011FC9C
  c->r[5]=0u+0x00000000u; // 8011FCA0
  c->lr=0x8011FCA8u; f_802BA9F4(c); // 8011FCA4
  goto L_8011FCB0; // 8011FCA8
L_8011FCAC:;
  c->r[3]=0u+0x00000000u; // 8011FCAC
L_8011FCB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FCB0
  if (crb(c,2)) { goto L_8011FCE4; } // 8011FCB4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8011FCB8
  goto L_8011FCD4; // 8011FCBC
L_8011FCC0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8011FCC0
  cmps(c,0,(int32_t)c->r[0],17); // 8011FCC4
  if (!crb(c,2)) { goto L_8011FCD0; } // 8011FCC8
  goto L_8011FCE8; // 8011FCCC
L_8011FCD0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8011FCD0
L_8011FCD4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FCD4
  if (!crb(c,2)) { IRQCHK(c); goto L_8011FCC0; } // 8011FCD8
  c->r[3]=0u+0x00000000u; // 8011FCDC
  goto L_8011FCE8; // 8011FCE0
L_8011FCE4:;
  c->r[3]=0u+0x00000000u; // 8011FCE4
L_8011FCE8:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8011FCE8
  c->r[5]=R32(c->r[30]+0x0000004Cu); // 8011FCEC
  c->r[3]=R32(c->r[3]+0x00000030u); // 8011FCF0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011FCF4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011FCF8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011FCFC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FD00
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8011FD04
  c->r[6]=R32(c->r[1]+0x00000008u); // 8011FD08
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8011FD0C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8011FD10
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8011FD14
  c->r[3]=R32(c->r[1]+0x00000010u); // 8011FD18
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8011FD1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011FD20
  W32(c->r[30]+0x0000032Cu,c->r[6]); // 8011FD24
  W32(c->r[30]+0x00000330u,c->r[4]); // 8011FD28
  W32(c->r[30]+0x00000334u,c->r[3]); // 8011FD2C
  W32(c->r[30]+0x00000338u,c->r[0]); // 8011FD30
  W32(c->r[30]+0x0000031Cu,c->r[6]); // 8011FD34
  W32(c->r[30]+0x00000320u,c->r[4]); // 8011FD38
  W32(c->r[30]+0x00000324u,c->r[3]); // 8011FD3C
  W32(c->r[30]+0x00000328u,c->r[0]); // 8011FD40
  c->r[3]=R32(c->r[5]+0x000000BCu); // 8011FD44
  cmps(c,0,(int32_t)c->r[3],0); // 8011FD48
  if (crb(c,2)) { goto L_8011FD54; } // 8011FD4C
  goto L_8011FD80; // 8011FD50
L_8011FD54:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011FD54
  cmps(c,0,(int32_t)c->r[3],0); // 8011FD58
  if (crb(c,2)) { goto L_8011FD7C; } // 8011FD5C
  c->r[4]=R32(c->r[5]+0x000000B4u); // 8011FD60
  c->r[6]=0u+0x00000000u; // 8011FD64
  c->r[8]=R32(c->r[5]+0x000000B8u); // 8011FD68
  c->r[5]=0u+0x00000000u; // 8011FD6C
  c->r[7]=0u+0x00000000u; // 8011FD70
  c->lr=0x8011FD78u; f_802BA9F4(c); // 8011FD74
  goto L_8011FD80; // 8011FD78
L_8011FD7C:;
  c->r[3]=0u+0x00000000u; // 8011FD7C
L_8011FD80:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FD80
  if (crb(c,2)) { goto L_8011FDB4; } // 8011FD84
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8011FD88
  goto L_8011FDA4; // 8011FD8C
L_8011FD90:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8011FD90
  cmps(c,0,(int32_t)c->r[0],2); // 8011FD94
  if (!crb(c,2)) { goto L_8011FDA0; } // 8011FD98
  goto L_8011FDB8; // 8011FD9C
L_8011FDA0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8011FDA0
L_8011FDA4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8011FDA4
  if (!crb(c,2)) { IRQCHK(c); goto L_8011FD90; } // 8011FDA8
  c->r[3]=0u+0x00000000u; // 8011FDAC
  goto L_8011FDB8; // 8011FDB0
L_8011FDB4:;
  c->r[3]=0u+0x00000000u; // 8011FDB4
L_8011FDB8:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 8011FDB8
  c->r[0]=R8(c->r[30]+0x000002F5u); // 8011FDBC
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FDC0
  {uint32_t ea=c->r[30]+0x00000350u; WF32(ea,c->f[0]);} // 8011FDC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8011FDC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2244); // 8011FDCC
  c->r[3]=R32(c->r[13]+0xFFFFE138u); // 8011FDD0
  c->r[3]=c->r[3]+c->r[0]; // 8011FDD4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FDD8
  {uint32_t ea=c->r[30]+0x0000034Cu; WF32(ea,c->f[0]);} // 8011FDDC
L_8011FDE0:;
  c->r[0]=0u+0x00000001u; // 8011FDE0
  W8(c->r[30]+0x000002B4u,c->r[0]); // 8011FDE4
  W8(c->r[30]+0x000002B5u,c->r[0]); // 8011FDE8
L_8011FDEC:;
  c->r[3]=c->r[30]+c->r[31]; // 8011FDEC
  c->r[0]=0u+0x00000001u; // 8011FDF0
  W8(c->r[3]+0x000002F1u,c->r[0]); // 8011FDF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8011FDF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011FDFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011FE00
  c->lr=c->r[0]; // 8011FE04
  c->r[1]=c->r[1]+0x00000020u; // 8011FE08
  return; // 8011FE0C
}

// fn_8011FE10
void f_8011FE10(Ctx* __restrict c) {
  trace_call(0x8011FE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011FE10
  c->r[0]=c->lr; // 8011FE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011FE18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011FE1C
  c->r[31]=c->r[3]|c->r[3]; // 8011FE20
  c->r[3]=R32(c->r[13]+0xFFFFE130u); // 8011FE24
  c->lr=0x8011FE2Cu; f_80114840(c); // 8011FE28
  W8(c->r[31]+0x000002F6u,c->r[3]); // 8011FE2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8011FE30
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011FE34
  c->lr=c->r[0]; // 8011FE38
  c->r[1]=c->r[1]+0x00000010u; // 8011FE3C
  return; // 8011FE40
}

// fn_8011FE44
void f_8011FE44(Ctx* __restrict c) {
  trace_call(0x8011FE44u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011FE44
  c->r[0]=c->lr; // 8011FE48
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8011FE4C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8011FE50
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8011FE54
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 8011FE58
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 8011FE5C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8011FE60
  c->r[31]=c->r[3]|c->r[3]; // 8011FE64
  W32(c->r[1]+0x00000088u,c->r[30]); // 8011FE68
  c->r[12]=R32(c->r[3]+0x000000B4u); // 8011FE6C
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8011FE70
  c->ctr=c->r[12]; // 8011FE74
  if (true) { c->lr=0x8011FE7Cu; dispatch(c,c->ctr); } // 8011FE78
  c->r[0]=R32(c->r[31]+0x000002F8u); // 8011FE7C
  cmps(c,0,(int32_t)c->r[0],0); // 8011FE80
  if (crb(c,2)) { goto L_8011FEA4; } // 8011FE84
  cmps(c,0,(int32_t)c->r[0],1); // 8011FE88
  if (crb(c,2)) { goto L_8011FEF8; } // 8011FE8C
  cmps(c,0,(int32_t)c->r[0],2); // 8011FE90
  if (crb(c,2)) { goto L_80120110; } // 8011FE94
  cmps(c,0,(int32_t)c->r[0],3); // 8011FE98
  if (crb(c,2)) { goto L_80120858; } // 8011FE9C
  goto L_80120140; // 8011FEA0
L_8011FEA4:;
  c->r[0]=R32(c->r[31]+0x000002B8u); // 8011FEA4
  cmps(c,0,(int32_t)c->r[0],5); // 8011FEA8
  if (!crb(c,2)) { goto L_8011FEE0; } // 8011FEAC
  c->r[0]=0u+0x00000000u; // 8011FEB0
  W32(c->r[31]+0x000002B8u,c->r[0]); // 8011FEB4
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 8011FEB8
  c->r[30]=R32(c->r[3]+0x00000098u); // 8011FEBC
  cmps(c,0,(int32_t)c->r[30],0); // 8011FEC0
  if (crb(c,2)) { goto L_8011FEE0; } // 8011FEC4
  c->r[3]=c->r[30]|c->r[30]; // 8011FEC8
  c->lr=0x8011FED0u; f_8030D188(c); // 8011FECC
  c->r[3]=c->r[30]|c->r[30]; // 8011FED0
  c->r[4]=c->r[31]|c->r[31]; // 8011FED4
  c->r[5]=0u+0x00000000u; // 8011FED8
  c->lr=0x8011FEE0u; f_8030D51C(c); // 8011FEDC
L_8011FEE0:;
  c->r[0]=R32(c->r[31]+0x000002B8u); // 8011FEE0
  cmps(c,0,(int32_t)c->r[0],3); // 8011FEE4
  if (!crb(c,2)) { goto L_80120140; } // 8011FEE8
  c->r[0]=0u+0x00000002u; // 8011FEEC
  W32(c->r[31]+0x000002F8u,c->r[0]); // 8011FEF0
  goto L_80120140; // 8011FEF4
L_8011FEF8:;
  {uint32_t ea=c->r[31]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FEF8
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[8]=c->ps1[8]=RF32(ea);} // 8011FEFC
  {uint32_t ea=c->r[31]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011FF00
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[8]); // 8011FF04
  {uint32_t ea=c->r[31]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011FF08
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[8]); // 8011FF0C
  {uint32_t ea=c->r[31]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FF10
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[8]); // 8011FF14
  {uint32_t ea=c->r[31]+0x00000360u; c->f[3]=c->ps1[3]=RF32(ea);} // 8011FF18
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[8]); // 8011FF1C
  {uint32_t ea=c->r[31]+0x00000364u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011FF20
  {uint32_t ea=c->r[31]+0x00000368u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011FF24
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[8]); // 8011FF28
  {uint32_t ea=c->r[31]+0x0000036Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8011FF2C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[8]); // 8011FF30
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[8]); // 8011FF34
  c->r[5]=R32(c->r[31]+0x0000033Cu); // 8011FF38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[8]); // 8011FF3C
  c->r[4]=R32(c->r[31]+0x00000340u); // 8011FF40
  c->r[3]=R32(c->r[31]+0x00000344u); // 8011FF44
  c->r[0]=R32(c->r[31]+0x00000348u); // 8011FF48
  W32(c->r[31]+0x0000031Cu,c->r[5]); // 8011FF4C
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8011FF50
  W32(c->r[31]+0x00000320u,c->r[4]); // 8011FF54
  W32(c->r[31]+0x00000324u,c->r[3]); // 8011FF58
  W32(c->r[31]+0x00000328u,c->r[0]); // 8011FF5C
  {uint32_t ea=c->r[31]+0x0000030Cu; WF32(ea,c->f[7]);} // 8011FF60
  {uint32_t ea=c->r[31]+0x00000310u; WF32(ea,c->f[6]);} // 8011FF64
  {uint32_t ea=c->r[31]+0x00000314u; WF32(ea,c->f[5]);} // 8011FF68
  {uint32_t ea=c->r[31]+0x00000318u; WF32(ea,c->f[4]);} // 8011FF6C
  {uint32_t ea=c->r[31]+0x00000360u; WF32(ea,c->f[3]);} // 8011FF70
  {uint32_t ea=c->r[31]+0x00000364u; WF32(ea,c->f[2]);} // 8011FF74
  {uint32_t ea=c->r[31]+0x00000368u; WF32(ea,c->f[1]);} // 8011FF78
  {uint32_t ea=c->r[31]+0x0000036Cu; WF32(ea,c->f[0]);} // 8011FF7C
  c->r[3]=R32(c->r[5]+0x00000108u); // 8011FF80
  cmps(c,0,(int32_t)c->r[3],0); // 8011FF84
  if (crb(c,2)) { goto L_8011FF90; } // 8011FF88
  goto L_8011FFBC; // 8011FF8C
L_8011FF90:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011FF90
  cmps(c,0,(int32_t)c->r[3],0); // 8011FF94
  if (crb(c,2)) { goto L_8011FFB8; } // 8011FF98
  c->r[4]=R32(c->r[5]+0x00000100u); // 8011FF9C
  c->r[6]=0u+0x00000000u; // 8011FFA0
  c->r[8]=R32(c->r[5]+0x00000104u); // 8011FFA4
  c->r[5]=0u+0x00000000u; // 8011FFA8
  c->r[7]=0u+0x00000000u; // 8011FFAC
  c->lr=0x8011FFB4u; f_802BA9F4(c); // 8011FFB0
  goto L_8011FFBC; // 8011FFB4
L_8011FFB8:;
  c->r[3]=0u+0x00000000u; // 8011FFB8
L_8011FFBC:;
  c->lr=0x8011FFC0u; f_80034170(c); // 8011FFBC
  c->r[0]=R8(c->r[31]+0x000002F6u); // 8011FFC0
  cmps(c,0,(int32_t)c->r[0],0); // 8011FFC4
  if (crb(c,2)) { goto L_8011FFD4; } // 8011FFC8
  {uint32_t ea=c->r[2]+0xFFFF8AB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8011FFCC
  goto L_8011FFD8; // 8011FFD0
L_8011FFD4:;
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[31]=c->ps1[31]=RF32(ea);} // 8011FFD4
L_8011FFD8:;
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8011FFD8
  c->r[3]=R32(c->r[5]+0x000000BCu); // 8011FFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8011FFE0
  if (crb(c,2)) { goto L_8011FFEC; } // 8011FFE4
  goto L_80120018; // 8011FFE8
L_8011FFEC:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8011FFEC
  cmps(c,0,(int32_t)c->r[3],0); // 8011FFF0
  if (crb(c,2)) { goto L_80120014; } // 8011FFF4
  c->r[4]=R32(c->r[5]+0x000000B4u); // 8011FFF8
  c->r[6]=0u+0x00000000u; // 8011FFFC
  c->r[8]=R32(c->r[5]+0x000000B8u); // 80120000
  c->r[5]=0u+0x00000000u; // 80120004
  c->r[7]=0u+0x00000000u; // 80120008
  c->lr=0x80120010u; f_802BA9F4(c); // 8012000C
  goto L_80120018; // 80120010
L_80120014:;
  c->r[3]=0u+0x00000000u; // 80120014
L_80120018:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120018
  if (crb(c,2)) { goto L_8012004C; } // 8012001C
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80120020
  goto L_8012003C; // 80120024
L_80120028:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80120028
  cmps(c,0,(int32_t)c->r[0],2); // 8012002C
  if (!crb(c,2)) { goto L_80120038; } // 80120030
  goto L_80120050; // 80120034
L_80120038:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 80120038
L_8012003C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8012003C
  if (!crb(c,2)) { IRQCHK(c); goto L_80120028; } // 80120040
  c->r[30]=0u+0x00000000u; // 80120044
  goto L_80120050; // 80120048
L_8012004C:;
  c->r[30]=0u+0x00000000u; // 8012004C
L_80120050:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 80120050
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120054
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120058
  {uint32_t ea=c->r[31]+0x00000354u; c->f[4]=c->ps1[4]=RF32(ea);} // 8012005C
  c->f[3]=c->f[2]; // 80120060
  c->f[30]=c->ps1[30]=S(c->f[0]/c->f[31]); // 80120064
  {uint32_t ea=c->r[2]+0xFFFF8AB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120068
  {uint32_t ea=c->r[2]+0xFFFF8AC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012006C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[30]); // 80120070
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80120074
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 80120078
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 8012007C
  c->lr=0x80120084u; f_8021AA00(c); // 80120080
  {uint32_t ea=c->r[2]+0xFFFF8ABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120084
  c->r[4]=0u+0x00000005u; // 80120088
  c->r[3]=R32(c->r[30]+0x00000024u); // 8012008C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 80120090
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120094
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[31]); // 80120098
  c->lr=0x801200A0u; f_802A007C(c); // 8012009C
  c->r[0]=R32(c->r[31]+0x000002B8u); // 801200A0
  cmps(c,0,(int32_t)c->r[0],3); // 801200A4
  if (!crb(c,2)) { goto L_801200DC; } // 801200A8
  c->r[0]=0u+0x00000001u; // 801200AC
  W32(c->r[31]+0x000002B8u,c->r[0]); // 801200B0
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 801200B4
  c->r[30]=R32(c->r[3]+0x000000A0u); // 801200B8
  cmps(c,0,(int32_t)c->r[30],0); // 801200BC
  if (crb(c,2)) { goto L_801200DC; } // 801200C0
  c->r[3]=c->r[30]|c->r[30]; // 801200C4
  c->lr=0x801200CCu; f_8030D188(c); // 801200C8
  c->r[3]=c->r[30]|c->r[30]; // 801200CC
  c->r[4]=c->r[31]|c->r[31]; // 801200D0
  c->r[5]=0u+0x00000000u; // 801200D4
  c->lr=0x801200DCu; f_8030D51C(c); // 801200D8
L_801200DC:;
  {uint32_t ea=c->r[31]+0x00000354u; c->f[1]=c->ps1[1]=RF32(ea);} // 801200DC
  {uint32_t ea=c->r[2]+0xFFFF8AC8u; c->f[0]=RF64(ea);} // 801200E0
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[1]); // 801200E4
  c->f[1]=std::fabs(c->f[1]); // 801200E8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801200EC
  fcmp(c,0,c->f[1],c->f[0]); // 801200F0
  if (!crb(c,0)) { goto L_80120140; } // 801200F4
  c->r[0]=R32(c->r[31]+0x000002B8u); // 801200F8
  cmps(c,0,(int32_t)c->r[0],5); // 801200FC
  if (!crb(c,2)) { goto L_80120140; } // 80120100
  c->r[0]=0u+0x00000003u; // 80120104
  W32(c->r[31]+0x000002F8u,c->r[0]); // 80120108
  goto L_80120140; // 8012010C
L_80120110:;
  c->r[12]=R32(c->r[31]+0x000000B4u); // 80120110
  c->r[3]=c->r[31]|c->r[31]; // 80120114
  c->r[12]=R32(c->r[12]+0x000000F4u); // 80120118
  c->ctr=c->r[12]; // 8012011C
  if (true) { c->lr=0x80120124u; dispatch(c,c->ctr); } // 80120120
  c->r[12]=R32(c->r[31]+0x000000B4u); // 80120124
  c->r[3]=c->r[31]|c->r[31]; // 80120128
  c->r[12]=R32(c->r[12]+0x000000F0u); // 8012012C
  c->ctr=c->r[12]; // 80120130
  if (true) { c->lr=0x80120138u; dispatch(c,c->ctr); } // 80120134
  goto L_80120140; // 80120138
  goto L_80120858; // 8012013C
L_80120140:;
  c->r[0]=R32(c->r[31]+0x000002B8u); // 80120140
  cmps(c,0,(int32_t)c->r[0],0); // 80120144
  if (crb(c,2)) { goto L_80120170; } // 80120148
  cmps(c,0,(int32_t)c->r[0],1); // 8012014C
  if (crb(c,2)) { goto L_801202B4; } // 80120150
  cmps(c,0,(int32_t)c->r[0],2); // 80120154
  if (crb(c,2)) { goto L_80120388; } // 80120158
  cmps(c,0,(int32_t)c->r[0],4); // 8012015C
  if (crb(c,2)) { goto L_801205B8; } // 80120160
  cmps(c,0,(int32_t)c->r[0],5); // 80120164
  if (crb(c,2)) { goto L_801207E8; } // 80120168
  goto L_80120818; // 8012016C
L_80120170:;
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120170
  c->r[5]=R32(c->r[31]+0x000002DCu); // 80120174
  c->r[4]=R32(c->r[31]+0x000002E0u); // 80120178
  c->r[3]=R32(c->r[31]+0x000002E4u); // 8012017C
  c->r[0]=R32(c->r[31]+0x000002E8u); // 80120180
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80120184
  c->r[6]=R32(c->r[31]+0x0000004Cu); // 80120188
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[0]);} // 8012018C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80120190
  {uint32_t ea=c->r[6]+0x000000C4u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120194
  W32(c->r[1]+0x00000048u,c->r[5]); // 80120198
  {uint32_t ea=c->r[6]+0x000000C0u; c->f[7]=c->ps1[7]=RF32(ea);} // 8012019C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 801201A0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801201A4
  W32(c->r[1]+0x00000050u,c->r[3]); // 801201A8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[7]); // 801201AC
  {uint32_t ea=c->r[6]+0x000000C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801201B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801201B4
  {uint32_t ea=c->r[6]+0x000000CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801201B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801201BC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801201C0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 801201C4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[3]);} // 801201C8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 801201CC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 801201D0
  c->r[5]=R32(c->r[1]+0x00000048u); // 801201D4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 801201D8
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801201DC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801201E0
  c->r[3]=R32(c->r[1]+0x00000050u); // 801201E4
  c->r[0]=R32(c->r[1]+0x00000054u); // 801201E8
  W32(c->r[31]+0x000002BCu,c->r[5]); // 801201EC
  W32(c->r[31]+0x000002C0u,c->r[4]); // 801201F0
  W32(c->r[31]+0x000002C4u,c->r[3]); // 801201F4
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801201F8
  c->r[3]=R32(c->r[6]+0x000000BCu); // 801201FC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[7]);} // 80120200
  cmps(c,0,(int32_t)c->r[3],0); // 80120204
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[6]);} // 80120208
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[5]);} // 8012020C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[4]);} // 80120210
  if (crb(c,2)) { goto L_8012021C; } // 80120214
  goto L_80120248; // 80120218
L_8012021C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 8012021C
  cmps(c,0,(int32_t)c->r[3],0); // 80120220
  if (crb(c,2)) { goto L_80120244; } // 80120224
  c->r[4]=R32(c->r[6]+0x000000B4u); // 80120228
  c->r[5]=0u+0x00000000u; // 8012022C
  c->r[8]=R32(c->r[6]+0x000000B8u); // 80120230
  c->r[6]=0u+0x00000000u; // 80120234
  c->r[7]=0u+0x00000000u; // 80120238
  c->lr=0x80120240u; f_802BA9F4(c); // 8012023C
  goto L_80120248; // 80120240
L_80120244:;
  c->r[3]=0u+0x00000000u; // 80120244
L_80120248:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120248
  if (crb(c,2)) { goto L_8012027C; } // 8012024C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80120250
  goto L_8012026C; // 80120254
L_80120258:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80120258
  cmps(c,0,(int32_t)c->r[0],2); // 8012025C
  if (!crb(c,2)) { goto L_80120268; } // 80120260
  goto L_80120280; // 80120264
L_80120268:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80120268
L_8012026C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8012026C
  if (!crb(c,2)) { IRQCHK(c); goto L_80120258; } // 80120270
  c->r[3]=0u+0x00000000u; // 80120274
  goto L_80120280; // 80120278
L_8012027C:;
  c->r[3]=0u+0x00000000u; // 8012027C
L_80120280:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80120280
  c->r[0]=0u+0x00000002u; // 80120284
  c->r[3]=R32(c->r[3]+0x00000030u); // 80120288
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012028C
  {uint32_t ea=c->r[31]+0x000002CCu; WF32(ea,c->f[0]);} // 80120290
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120294
  {uint32_t ea=c->r[31]+0x000002D0u; WF32(ea,c->f[0]);} // 80120298
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012029C
  {uint32_t ea=c->r[31]+0x000002D4u; WF32(ea,c->f[0]);} // 801202A0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801202A4
  {uint32_t ea=c->r[31]+0x000002D8u; WF32(ea,c->f[0]);} // 801202A8
  W32(c->r[31]+0x000002B8u,c->r[0]); // 801202AC
  goto L_80120818; // 801202B0
L_801202B4:;
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801202B4
  c->r[6]=R32(c->r[31]+0x000002DCu); // 801202B8
  c->r[4]=R32(c->r[31]+0x000002E0u); // 801202BC
  c->r[3]=R32(c->r[31]+0x000002E4u); // 801202C0
  c->r[0]=R32(c->r[31]+0x000002E8u); // 801202C4
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[0]);} // 801202C8
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801202CC
  W32(c->r[31]+0x000002BCu,c->r[6]); // 801202D0
  W32(c->r[31]+0x000002C0u,c->r[4]); // 801202D4
  W32(c->r[31]+0x000002C4u,c->r[3]); // 801202D8
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801202DC
  c->r[3]=R32(c->r[5]+0x000000BCu); // 801202E0
  cmps(c,0,(int32_t)c->r[3],0); // 801202E4
  if (crb(c,2)) { goto L_801202F0; } // 801202E8
  goto L_8012031C; // 801202EC
L_801202F0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801202F0
  cmps(c,0,(int32_t)c->r[3],0); // 801202F4
  if (crb(c,2)) { goto L_80120318; } // 801202F8
  c->r[4]=R32(c->r[5]+0x000000B4u); // 801202FC
  c->r[6]=0u+0x00000000u; // 80120300
  c->r[8]=R32(c->r[5]+0x000000B8u); // 80120304
  c->r[5]=0u+0x00000000u; // 80120308
  c->r[7]=0u+0x00000000u; // 8012030C
  c->lr=0x80120314u; f_802BA9F4(c); // 80120310
  goto L_8012031C; // 80120314
L_80120318:;
  c->r[3]=0u+0x00000000u; // 80120318
L_8012031C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8012031C
  if (crb(c,2)) { goto L_80120350; } // 80120320
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80120324
  goto L_80120340; // 80120328
L_8012032C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8012032C
  cmps(c,0,(int32_t)c->r[0],2); // 80120330
  if (!crb(c,2)) { goto L_8012033C; } // 80120334
  goto L_80120354; // 80120338
L_8012033C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8012033C
L_80120340:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120340
  if (!crb(c,2)) { IRQCHK(c); goto L_8012032C; } // 80120344
  c->r[3]=0u+0x00000000u; // 80120348
  goto L_80120354; // 8012034C
L_80120350:;
  c->r[3]=0u+0x00000000u; // 80120350
L_80120354:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80120354
  c->r[0]=0u+0x00000004u; // 80120358
  c->r[3]=R32(c->r[3]+0x00000030u); // 8012035C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120360
  {uint32_t ea=c->r[31]+0x000002CCu; WF32(ea,c->f[0]);} // 80120364
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120368
  {uint32_t ea=c->r[31]+0x000002D0u; WF32(ea,c->f[0]);} // 8012036C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120370
  {uint32_t ea=c->r[31]+0x000002D4u; WF32(ea,c->f[0]);} // 80120374
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120378
  {uint32_t ea=c->r[31]+0x000002D8u; WF32(ea,c->f[0]);} // 8012037C
  W32(c->r[31]+0x000002B8u,c->r[0]); // 80120380
  goto L_80120818; // 80120384
L_80120388:;
  {uint32_t ea=c->r[2]+0xFFFF8AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120388
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012038C
  {uint32_t ea=c->r[31]+0x000002ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120390
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80120394
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120398
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8012039C
  fcmp(c,0,c->f[2],c->f[0]); // 801203A0
  if (!crb(c,0)) { goto L_801203AC; } // 801203A4
  goto L_801203B0; // 801203A8
L_801203AC:;
  c->f[2]=c->f[0]; // 801203AC
L_801203B0:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801203B0
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[2]);} // 801203B4
  c->r[3]=0u+0x00000004u; // 801203B8
  c->lr=0x801203C0u; f_802832A4(c); // 801203BC
  c->r[5]=R32(c->r[31]+0x000002BCu); // 801203C0
  W32(c->r[1]+0x00000028u,c->r[5]); // 801203C4
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801203C8
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801203CC
  {uint32_t ea=c->r[31]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801203D0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801203D4
  c->r[3]=R32(c->r[31]+0x000002C4u); // 801203D8
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 801203DC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801203E0
  {uint32_t ea=c->r[31]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801203E4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 801203E8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801203EC
  c->r[0]=R32(c->r[31]+0x000002C8u); // 801203F0
  W32(c->r[1]+0x00000030u,c->r[3]); // 801203F4
  c->r[3]=R32(c->r[1]+0x00000028u); // 801203F8
  W32(c->r[1]+0x00000038u,c->r[3]); // 801203FC
  c->r[5]=R32(c->r[31]+0x000002CCu); // 80120400
  W32(c->r[1]+0x00000034u,c->r[0]); // 80120404
  c->r[4]=R32(c->r[31]+0x000002D0u); // 80120408
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8012040C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120410
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80120414
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80120418
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[1]); // 8012041C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120420
  W32(c->r[1]+0x00000068u,c->r[5]); // 80120424
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120428
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012042C
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[1]); // 80120430
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 80120434
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[8]); // 80120438
  {uint32_t ea=c->r[31]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012043C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120440
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[2]); // 80120444
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[7]); // 80120448
  c->r[0]=R32(c->r[31]+0x000002D8u); // 8012044C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[6]);} // 80120450
  c->r[3]=R32(c->r[31]+0x000002D4u); // 80120454
  c->r[4]=R32(c->r[1]+0x00000030u); // 80120458
  W32(c->r[1]+0x00000040u,c->r[4]); // 8012045C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 80120460
  {uint32_t ea=c->r[31]+0x000002D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120464
  {uint32_t ea=c->r[1]+0x00000040u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120468
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 8012046C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80120470
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 80120474
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 80120478
  W32(c->r[1]+0x00000070u,c->r[3]); // 8012047C
  c->r[3]=R32(c->r[5]+0x000000BCu); // 80120480
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 80120484
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120488
  cmps(c,0,(int32_t)c->r[3],0); // 8012048C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80120490
  W32(c->r[1]+0x00000044u,c->r[0]); // 80120494
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120498
  {uint32_t ea=c->r[1]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 8012049C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[8]);} // 801204A0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 801204A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[6]); // 801204A8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[7]);} // 801204AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 801204B0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[6]);} // 801204B4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 801204B8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 801204BC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 801204C0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 801204C4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 801204C8
  if (crb(c,2)) { goto L_801204D4; } // 801204CC
  goto L_80120500; // 801204D0
L_801204D4:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801204D4
  cmps(c,0,(int32_t)c->r[3],0); // 801204D8
  if (crb(c,2)) { goto L_801204FC; } // 801204DC
  c->r[4]=R32(c->r[5]+0x000000B4u); // 801204E0
  c->r[6]=0u+0x00000000u; // 801204E4
  c->r[8]=R32(c->r[5]+0x000000B8u); // 801204E8
  c->r[5]=0u+0x00000000u; // 801204EC
  c->r[7]=0u+0x00000000u; // 801204F0
  c->lr=0x801204F8u; f_802BA9F4(c); // 801204F4
  goto L_80120500; // 801204F8
L_801204FC:;
  c->r[3]=0u+0x00000000u; // 801204FC
L_80120500:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120500
  if (crb(c,2)) { goto L_80120534; } // 80120504
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80120508
  goto L_80120524; // 8012050C
L_80120510:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80120510
  cmps(c,0,(int32_t)c->r[0],2); // 80120514
  if (!crb(c,2)) { goto L_80120520; } // 80120518
  goto L_80120538; // 8012051C
L_80120520:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80120520
L_80120524:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120524
  if (!crb(c,2)) { IRQCHK(c); goto L_80120510; } // 80120528
  c->r[3]=0u+0x00000000u; // 8012052C
  goto L_80120538; // 80120530
L_80120534:;
  c->r[3]=0u+0x00000000u; // 80120534
L_80120538:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80120538
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012053C
  c->r[3]=R32(c->r[3]+0x00000034u); // 80120540
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120544
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80120548
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012054C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80120550
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120554
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80120558
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012055C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80120560
  c->r[0]=R32(c->r[3]+0x00000034u); // 80120564
  c->r[0]=c->r[0]|0x00100000u; // 80120568
  W32(c->r[3]+0x00000034u,c->r[0]); // 8012056C
  {uint32_t ea=c->r[31]+0x000002ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120570
  fcmp(c,0,c->f[1],c->f[0]); // 80120574
  if (!crb(c,2)) { goto L_80120818; } // 80120578
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012057C
  c->r[0]=0u+0x00000003u; // 80120580
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[0]);} // 80120584
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 80120588
  W32(c->r[31]+0x000002B8u,c->r[0]); // 8012058C
  c->r[30]=R32(c->r[3]+0x0000009Cu); // 80120590
  cmps(c,0,(int32_t)c->r[30],0); // 80120594
  if (crb(c,2)) { goto L_80120818; } // 80120598
  c->r[3]=c->r[30]|c->r[30]; // 8012059C
  c->lr=0x801205A4u; f_8030D188(c); // 801205A0
  c->r[3]=c->r[30]|c->r[30]; // 801205A4
  c->r[4]=c->r[31]|c->r[31]; // 801205A8
  c->r[5]=0u+0x00000000u; // 801205AC
  c->lr=0x801205B4u; f_8030D51C(c); // 801205B0
  goto L_80120818; // 801205B4
L_801205B8:;
  {uint32_t ea=c->r[2]+0xFFFF8AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801205B8
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801205BC
  {uint32_t ea=c->r[31]+0x000002ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801205C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801205C4
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801205C8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801205CC
  fcmp(c,0,c->f[2],c->f[0]); // 801205D0
  if (!crb(c,0)) { goto L_801205DC; } // 801205D4
  goto L_801205E0; // 801205D8
L_801205DC:;
  c->f[2]=c->f[0]; // 801205DC
L_801205E0:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801205E0
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[2]);} // 801205E4
  c->r[3]=0u+0x00000004u; // 801205E8
  c->lr=0x801205F0u; f_802832A4(c); // 801205EC
  c->r[5]=R32(c->r[31]+0x000002DCu); // 801205F0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801205F4
  c->r[4]=R32(c->r[31]+0x000002E0u); // 801205F8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801205FC
  {uint32_t ea=c->r[31]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120600
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120604
  c->r[3]=R32(c->r[31]+0x000002E4u); // 80120608
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8012060C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80120610
  {uint32_t ea=c->r[31]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120614
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80120618
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8012061C
  c->r[0]=R32(c->r[31]+0x000002E8u); // 80120620
  W32(c->r[1]+0x00000010u,c->r[3]); // 80120624
  c->r[3]=R32(c->r[1]+0x00000008u); // 80120628
  W32(c->r[1]+0x00000018u,c->r[3]); // 8012062C
  c->r[5]=R32(c->r[31]+0x000002CCu); // 80120630
  W32(c->r[1]+0x00000014u,c->r[0]); // 80120634
  c->r[4]=R32(c->r[31]+0x000002D0u); // 80120638
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8012063C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120640
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80120644
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80120648
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[1]); // 8012064C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120650
  W32(c->r[1]+0x00000058u,c->r[5]); // 80120654
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120658
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012065C
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[1]); // 80120660
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 80120664
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[8]); // 80120668
  {uint32_t ea=c->r[31]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012066C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120670
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[2]); // 80120674
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[7]); // 80120678
  c->r[0]=R32(c->r[31]+0x000002D8u); // 8012067C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[6]);} // 80120680
  c->r[3]=R32(c->r[31]+0x000002D4u); // 80120684
  c->r[4]=R32(c->r[1]+0x00000010u); // 80120688
  W32(c->r[1]+0x00000020u,c->r[4]); // 8012068C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80120690
  {uint32_t ea=c->r[31]+0x000002D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120694
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120698
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 8012069C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801206A0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 801206A4
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801206A8
  W32(c->r[1]+0x00000060u,c->r[3]); // 801206AC
  c->r[3]=R32(c->r[5]+0x000000BCu); // 801206B0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 801206B4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 801206B8
  cmps(c,0,(int32_t)c->r[3],0); // 801206BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801206C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801206C4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801206C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 801206CC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[8]);} // 801206D0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 801206D4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[6]); // 801206D8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 801206DC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 801206E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[6]);} // 801206E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[5]);} // 801206E8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[4]);} // 801206EC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 801206F0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801206F4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801206F8
  if (crb(c,2)) { goto L_80120704; } // 801206FC
  goto L_80120730; // 80120700
L_80120704:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80120704
  cmps(c,0,(int32_t)c->r[3],0); // 80120708
  if (crb(c,2)) { goto L_8012072C; } // 8012070C
  c->r[4]=R32(c->r[5]+0x000000B4u); // 80120710
  c->r[6]=0u+0x00000000u; // 80120714
  c->r[8]=R32(c->r[5]+0x000000B8u); // 80120718
  c->r[5]=0u+0x00000000u; // 8012071C
  c->r[7]=0u+0x00000000u; // 80120720
  c->lr=0x80120728u; f_802BA9F4(c); // 80120724
  goto L_80120730; // 80120728
L_8012072C:;
  c->r[3]=0u+0x00000000u; // 8012072C
L_80120730:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120730
  if (crb(c,2)) { goto L_80120764; } // 80120734
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80120738
  goto L_80120754; // 8012073C
L_80120740:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80120740
  cmps(c,0,(int32_t)c->r[0],2); // 80120744
  if (!crb(c,2)) { goto L_80120750; } // 80120748
  goto L_80120768; // 8012074C
L_80120750:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80120750
L_80120754:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120754
  if (!crb(c,2)) { IRQCHK(c); goto L_80120740; } // 80120758
  c->r[3]=0u+0x00000000u; // 8012075C
  goto L_80120768; // 80120760
L_80120764:;
  c->r[3]=0u+0x00000000u; // 80120764
L_80120768:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80120768
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012076C
  c->r[3]=R32(c->r[3]+0x00000034u); // 80120770
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120774
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80120778
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012077C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80120780
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120784
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80120788
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012078C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80120790
  c->r[0]=R32(c->r[3]+0x00000034u); // 80120794
  c->r[0]=c->r[0]|0x00100000u; // 80120798
  W32(c->r[3]+0x00000034u,c->r[0]); // 8012079C
  {uint32_t ea=c->r[31]+0x000002ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801207A0
  fcmp(c,0,c->f[1],c->f[0]); // 801207A4
  if (!crb(c,2)) { goto L_80120818; } // 801207A8
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801207AC
  c->r[0]=0u+0x00000005u; // 801207B0
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[0]);} // 801207B4
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 801207B8
  W32(c->r[31]+0x000002B8u,c->r[0]); // 801207BC
  c->r[30]=R32(c->r[3]+0x000000A4u); // 801207C0
  cmps(c,0,(int32_t)c->r[30],0); // 801207C4
  if (crb(c,2)) { goto L_80120818; } // 801207C8
  c->r[3]=c->r[30]|c->r[30]; // 801207CC
  c->lr=0x801207D4u; f_8030D188(c); // 801207D0
  c->r[3]=c->r[30]|c->r[30]; // 801207D4
  c->r[4]=c->r[31]|c->r[31]; // 801207D8
  c->r[5]=0u+0x00000000u; // 801207DC
  c->lr=0x801207E4u; f_8030D51C(c); // 801207E0
  goto L_80120818; // 801207E4
L_801207E8:;
  c->r[5]=R32(c->r[31]+0x000002DCu); // 801207E8
  c->r[4]=R32(c->r[31]+0x000002E0u); // 801207EC
  c->r[3]=R32(c->r[31]+0x000002E4u); // 801207F0
  c->r[0]=R32(c->r[31]+0x000002E8u); // 801207F4
  W32(c->r[31]+0x000002CCu,c->r[5]); // 801207F8
  W32(c->r[31]+0x000002D0u,c->r[4]); // 801207FC
  W32(c->r[31]+0x000002D4u,c->r[3]); // 80120800
  W32(c->r[31]+0x000002D8u,c->r[0]); // 80120804
  W32(c->r[31]+0x000002BCu,c->r[5]); // 80120808
  W32(c->r[31]+0x000002C0u,c->r[4]); // 8012080C
  W32(c->r[31]+0x000002C4u,c->r[3]); // 80120810
  W32(c->r[31]+0x000002C8u,c->r[0]); // 80120814
L_80120818:;
  c->r[3]=c->r[31]|c->r[31]; // 80120818
  c->lr=0x80120820u; f_8011C65C(c); // 8012081C
  c->r[0]=R8(c->r[31]+0x000002F5u); // 80120820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80120824
  cmps(c,0,(int32_t)c->r[0],-1); // 80120828
  if (crb(c,2)) { goto L_80120848; } // 8012082C
  c->r[3]=c->r[31]+c->r[0]; // 80120830
  c->r[0]=R8(c->r[3]+0x000002F1u); // 80120834
  cmps(c,0,(int32_t)c->r[0],0); // 80120838
  if (!crb(c,2)) { goto L_80120848; } // 8012083C
  c->r[0]=0u+0xFFFFFFFFu; // 80120840
  W8(c->r[31]+0x000002F5u,c->r[0]); // 80120844
L_80120848:;
  c->r[3]=c->r[31]+0x000002F1u; // 80120848
  c->r[4]=0u+0x00000000u; // 8012084C
  c->r[5]=0u+0x00000004u; // 80120850
  c->lr=0x80120858u; f_80006370(c); // 80120854
L_80120858:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 80120858
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 8012085C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 80120860
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 80120864
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80120868
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8012086C
  c->r[30]=R32(c->r[1]+0x00000088u); // 80120870
  c->lr=c->r[0]; // 80120874
  c->r[1]=c->r[1]+0x000000B0u; // 80120878
  return; // 8012087C
}

// fn_80120880
void f_80120880(Ctx* __restrict c) {
  trace_call(0x80120880u);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80120880
  c->r[0]=c->lr; // 80120884
  W32(c->r[1]+0x000001C4u,c->r[0]); // 80120888
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[31]);} // 8012088C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,31,ea,0,0);} // 80120890
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[30]);} // 80120894
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,30,ea,0,0);} // 80120898
  W32(c->r[1]+0x0000019Cu,c->r[31]); // 8012089C
  c->r[31]=c->r[3]|c->r[3]; // 801208A0
  W32(c->r[1]+0x00000198u,c->r[30]); // 801208A4
  W32(c->r[1]+0x00000194u,c->r[29]); // 801208A8
  c->r[0]=R8(c->r[3]+0x000002F5u); // 801208AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801208B0
  cmps(c,0,(int32_t)c->r[0],-1); // 801208B4
  if (crb(c,2)) { goto L_80120E90; } // 801208B8
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801208BC
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801208C0
  c->r[4]=c->r[3]+c->r[4]; // 801208C4
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[0]);} // 801208C8
  c->r[12]=R32(c->r[4]+0x00000274u); // 801208CC
  W32(c->r[1]+0x00000010u,c->r[12]); // 801208D0
  c->r[11]=R32(c->r[4]+0x00000278u); // 801208D4
  {uint32_t ea=c->r[3]+0x000002FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801208D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801208DC
  W32(c->r[1]+0x00000014u,c->r[11]); // 801208E0
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 801208E4
  {uint32_t ea=c->r[3]+0x00000300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801208E8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801208EC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801208F0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801208F4
  c->r[5]=R32(c->r[1]+0x00000138u); // 801208F8
  c->r[10]=R32(c->r[1]+0x00000010u); // 801208FC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80120900
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 80120904
  c->r[9]=R32(c->r[1]+0x00000014u); // 80120908
  W32(c->r[1]+0x00000030u,c->r[10]); // 8012090C
  {uint32_t ea=c->r[3]+0x00000304u; c->f[9]=c->ps1[9]=RF32(ea);} // 80120910
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120914
  W32(c->r[1]+0x00000008u,c->r[12]); // 80120918
  c->f[3]=-c->f[1]; // 8012091C
  {uint32_t ea=c->r[3]+0x00000308u; c->f[4]=c->ps1[4]=RF32(ea);} // 80120920
  W32(c->r[1]+0x00000034u,c->r[9]); // 80120924
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 80120928
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[3]);} // 8012092C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120930
  c->f[9]=c->ps1[9]=S(c->f[10]-c->f[9]); // 80120934
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[1]);} // 80120938
  c->r[6]=R32(c->r[1]+0x00000134u); // 8012093C
  c->r[7]=R32(c->r[1]+0x00000130u); // 80120940
  W32(c->r[1]+0x00000180u,c->r[7]); // 80120944
  {uint32_t ea=c->r[3]+0x00000360u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120948
  W32(c->r[1]+0x00000184u,c->r[6]); // 8012094C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[7]=c->ps1[7]=RF32(ea);} // 80120950
  W32(c->r[1]+0x00000188u,c->r[5]); // 80120954
  {uint32_t ea=c->r[1]+0x00000184u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120958
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 8012095C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[5]=c->ps1[5]=RF32(ea);} // 80120960
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 80120964
  c->r[5]=R32(c->r[1]+0x0000013Cu); // 80120968
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8012096C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 80120970
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[4]); // 80120974
  {uint32_t ea=c->r[3]+0x00000364u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120978
  c->r[8]=R32(c->r[1]+0x00000008u); // 8012097C
  W32(c->r[1]+0x0000018Cu,c->r[5]); // 80120980
  {uint32_t ea=c->r[3]+0x00000368u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120984
  W32(c->r[3]+0x000002FCu,c->r[12]); // 80120988
  {uint32_t ea=c->r[1]+0x0000018Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8012098C
  W32(c->r[3]+0x00000300u,c->r[11]); // 80120990
  {uint32_t ea=c->r[4]+0x000000F4u; c->f[10]=c->ps1[10]=RF32(ea);} // 80120994
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 80120998
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 8012099C
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=c->ps1[12]=RF32(ea);} // 801209A0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[10]); // 801209A4
  W32(c->r[1]+0x00000038u,c->r[12]); // 801209A8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[10]); // 801209AC
  {uint32_t ea=c->r[1]+0x00000184u; WF32(ea,c->f[6]);} // 801209B0
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[10]); // 801209B4
  {uint32_t ea=c->r[1]+0x00000180u; WF32(ea,c->f[7]);} // 801209B8
  c->r[6]=R32(c->r[1]+0x00000184u); // 801209BC
  W32(c->r[1]+0x00000114u,c->r[6]); // 801209C0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801209C4
  c->r[7]=R32(c->r[1]+0x00000180u); // 801209C8
  {uint32_t ea=c->r[1]+0x00000188u; WF32(ea,c->f[5]);} // 801209CC
  {uint32_t ea=c->r[1]+0x00000114u; c->f[4]=c->ps1[4]=RF32(ea);} // 801209D0
  W32(c->r[1]+0x00000110u,c->r[7]); // 801209D4
  c->r[5]=R32(c->r[1]+0x00000188u); // 801209D8
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 801209DC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[5]=c->ps1[5]=RF32(ea);} // 801209E0
  W32(c->r[1]+0x00000118u,c->r[5]); // 801209E4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 801209E8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 801209EC
  {uint32_t ea=c->r[1]+0x0000018Cu; WF32(ea,c->f[6]);} // 801209F0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801209F4
  c->r[5]=R32(c->r[1]+0x0000018Cu); // 801209F8
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 801209FC
  W32(c->r[1]+0x00000020u,c->r[10]); // 80120A00
  W32(c->r[1]+0x00000024u,c->r[9]); // 80120A04
  W32(c->r[1]+0x00000018u,c->r[8]); // 80120A08
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80120A0C
  W32(c->r[1]+0x00000028u,c->r[8]); // 80120A10
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80120A14
  W32(c->r[1]+0x0000011Cu,c->r[5]); // 80120A18
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[5]);} // 80120A1C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[3]);} // 80120A20
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 80120A24
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80120A28
  {uint32_t ea=c->r[3]+0x0000036Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80120A2C
  c->r[8]=R32(c->r[1]+0x00000110u); // 80120A30
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80120A34
  c->r[7]=R32(c->r[1]+0x00000114u); // 80120A38
  W32(c->r[1]+0x00000120u,c->r[8]); // 80120A3C
  c->r[6]=R32(c->r[1]+0x00000118u); // 80120A40
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 80120A44
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120A48
  W32(c->r[1]+0x00000124u,c->r[7]); // 80120A4C
  c->r[5]=R32(c->r[1]+0x0000011Cu); // 80120A50
  c->f[11]=c->ps1[11]=S(c->f[1]*c->f[12]); // 80120A54
  W32(c->r[1]+0x00000128u,c->r[6]); // 80120A58
  {uint32_t ea=c->r[1]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120A5C
  {uint32_t ea=c->r[1]+0x00000128u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120A60
  c->f[10]=c->ps1[10]=S(c->f[2]*c->f[12]); // 80120A64
  W32(c->r[1]+0x0000012Cu,c->r[5]); // 80120A68
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[12]); // 80120A6C
  {uint32_t ea=c->r[3]+0x00000360u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120A70
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80120A74
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[11]); // 80120A78
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[12]); // 80120A7C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80120A80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 80120A84
  {uint32_t ea=c->r[3]+0x00000364u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120A88
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[6]);} // 80120A8C
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[10]); // 80120A90
  {uint32_t ea=c->r[3]+0x00000368u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120A94
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[7]);} // 80120A98
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[9]); // 80120A9C
  {uint32_t ea=c->r[3]+0x0000036Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80120AA0
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 80120AA4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[8]); // 80120AA8
  c->r[7]=R32(c->r[1]+0x00000100u); // 80120AAC
  W32(c->r[1]+0x00000160u,c->r[7]); // 80120AB0
  c->r[6]=R32(c->r[1]+0x00000104u); // 80120AB4
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 80120AB8
  c->r[5]=R32(c->r[1]+0x00000108u); // 80120ABC
  W32(c->r[1]+0x00000164u,c->r[6]); // 80120AC0
  c->r[9]=R32(c->r[1]+0x0000010Cu); // 80120AC4
  W32(c->r[1]+0x00000168u,c->r[5]); // 80120AC8
  c->r[8]=R32(c->r[3]+0x0000032Cu); // 80120ACC
  W32(c->r[1]+0x0000016Cu,c->r[9]); // 80120AD0
  c->r[7]=R32(c->r[3]+0x00000330u); // 80120AD4
  {uint32_t ea=c->r[3]+0x00000360u; WF32(ea,c->f[5]);} // 80120AD8
  c->r[6]=R32(c->r[3]+0x00000334u); // 80120ADC
  {uint32_t ea=c->r[3]+0x00000364u; WF32(ea,c->f[4]);} // 80120AE0
  c->r[5]=R32(c->r[3]+0x00000338u); // 80120AE4
  W32(c->r[1]+0x00000150u,c->r[8]); // 80120AE8
  c->r[9]=R32(c->r[3]+0x0000031Cu); // 80120AEC
  {uint32_t ea=c->r[3]+0x00000368u; WF32(ea,c->f[3]);} // 80120AF0
  c->r[8]=R32(c->r[3]+0x00000320u); // 80120AF4
  {uint32_t ea=c->r[3]+0x0000036Cu; WF32(ea,c->f[2]);} // 80120AF8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120AFC
  W32(c->r[1]+0x00000154u,c->r[7]); // 80120B00
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[12]=c->ps1[12]=RF32(ea);} // 80120B04
  {uint32_t ea=c->r[1]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120B08
  {uint32_t ea=c->r[1]+0x00000168u; c->f[5]=c->ps1[5]=RF32(ea);} // 80120B0C
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[12]); // 80120B10
  W32(c->r[1]+0x00000158u,c->r[6]); // 80120B14
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[12]); // 80120B18
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80120B1C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[12]); // 80120B20
  W32(c->r[1]+0x0000015Cu,c->r[5]); // 80120B24
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[12]); // 80120B28
  {uint32_t ea=c->r[1]+0x00000150u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120B2C
  {uint32_t ea=c->r[1]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120B30
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120B34
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[7]); // 80120B38
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120B3C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 80120B40
  c->r[7]=R32(c->r[3]+0x00000324u); // 80120B44
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 80120B48
  c->r[6]=R32(c->r[3]+0x00000328u); // 80120B4C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 80120B50
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[11]);} // 80120B54
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[10]);} // 80120B58
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[9]);} // 80120B5C
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[8]);} // 80120B60
  W32(c->r[1]+0x00000170u,c->r[9]); // 80120B64
  W32(c->r[1]+0x00000174u,c->r[8]); // 80120B68
  W32(c->r[1]+0x00000178u,c->r[7]); // 80120B6C
  W32(c->r[1]+0x0000017Cu,c->r[6]); // 80120B70
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[7]);} // 80120B74
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[6]);} // 80120B78
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[5]);} // 80120B7C
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[4]);} // 80120B80
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[3]);} // 80120B84
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[2]);} // 80120B88
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[1]);} // 80120B8C
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 80120B90
  c->r[7]=R32(c->r[1]+0x00000150u); // 80120B94
  W32(c->r[1]+0x000000E0u,c->r[7]); // 80120B98
  c->r[6]=R32(c->r[1]+0x00000154u); // 80120B9C
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120BA0
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120BA4
  c->r[5]=R32(c->r[1]+0x00000158u); // 80120BA8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80120BAC
  W32(c->r[1]+0x000000E4u,c->r[6]); // 80120BB0
  {uint32_t ea=c->r[3]+0x00000320u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120BB4
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[2]);} // 80120BB8
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120BBC
  c->r[7]=R32(c->r[1]+0x000000E0u); // 80120BC0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80120BC4
  W32(c->r[1]+0x000000E8u,c->r[5]); // 80120BC8
  {uint32_t ea=c->r[3]+0x00000324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120BCC
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[2]);} // 80120BD0
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120BD4
  c->r[6]=R32(c->r[1]+0x000000E4u); // 80120BD8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80120BDC
  W32(c->r[1]+0x000000F4u,c->r[6]); // 80120BE0
  c->r[8]=R32(c->r[1]+0x0000015Cu); // 80120BE4
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80120BE8
  {uint32_t ea=c->r[4]+0x000000E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80120BEC
  W32(c->r[1]+0x000000F0u,c->r[7]); // 80120BF0
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120BF4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120BF8
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[4]); // 80120BFC
  c->r[5]=R32(c->r[1]+0x000000E8u); // 80120C00
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[4]); // 80120C04
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80120C08
  W32(c->r[1]+0x000000ECu,c->r[8]); // 80120C0C
  {uint32_t ea=c->r[3]+0x00000320u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120C10
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[8]); // 80120C14
  W32(c->r[1]+0x000000F8u,c->r[5]); // 80120C18
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[7]); // 80120C1C
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 80120C20
  {uint32_t ea=c->r[3]+0x0000031Cu; WF32(ea,c->f[2]);} // 80120C24
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120C28
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[1]);} // 80120C2C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 80120C30
  {uint32_t ea=c->r[3]+0x00000328u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120C34
  {uint32_t ea=c->r[3]+0x00000324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120C38
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 80120C3C
  c->r[6]=R32(c->r[3]+0x0000031Cu); // 80120C40
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 80120C44
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 80120C48
  c->r[5]=R32(c->r[3]+0x00000320u); // 80120C4C
  {uint32_t ea=c->r[3]+0x00000324u; WF32(ea,c->f[0]);} // 80120C50
  c->r[7]=R32(c->r[1]+0x000000ECu); // 80120C54
  W32(c->r[1]+0x000000FCu,c->r[7]); // 80120C58
  c->r[4]=R32(c->r[3]+0x00000324u); // 80120C5C
  W32(c->r[1]+0x000000C0u,c->r[6]); // 80120C60
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80120C64
  {uint32_t ea=c->r[1]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120C68
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[4]); // 80120C6C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120C70
  {uint32_t ea=c->r[3]+0x00000328u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120C74
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80120C78
  W32(c->r[1]+0x000000C4u,c->r[5]); // 80120C7C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 80120C80
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[2]);} // 80120C84
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120C88
  {uint32_t ea=c->r[3]+0x00000328u; WF32(ea,c->f[3]);} // 80120C8C
  {uint32_t ea=c->r[1]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120C90
  c->r[6]=R32(c->r[1]+0x000000C0u); // 80120C94
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80120C98
  W32(c->r[1]+0x000000C8u,c->r[4]); // 80120C9C
  c->r[7]=R32(c->r[3]+0x00000328u); // 80120CA0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 80120CA4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120CA8
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120CAC
  c->r[5]=R32(c->r[1]+0x000000C4u); // 80120CB0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80120CB4
  W32(c->r[1]+0x000000D4u,c->r[5]); // 80120CB8
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80120CBC
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80120CC0
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120CC4
  W32(c->r[1]+0x000000D0u,c->r[6]); // 80120CC8
  c->r[4]=R32(c->r[1]+0x000000C8u); // 80120CCC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[9]); // 80120CD0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120CD4
  W32(c->r[1]+0x000000CCu,c->r[7]); // 80120CD8
  {uint32_t ea=c->r[1]+0x0000017Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80120CDC
  W32(c->r[1]+0x000000D8u,c->r[4]); // 80120CE0
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 80120CE4
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[9]); // 80120CE8
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120CEC
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[8]);} // 80120CF0
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[7]);} // 80120CF4
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[6]);} // 80120CF8
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[5]);} // 80120CFC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[9]); // 80120D00
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[2]);} // 80120D04
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80120D08
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80120D0C
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 80120D10
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80120D14
  c->r[4]=R32(c->r[1]+0x000000CCu); // 80120D18
  W32(c->r[1]+0x000000DCu,c->r[4]); // 80120D1C
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120D20
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)2244); // 80120D24
  c->r[0]=R8(c->r[3]+0x000002F6u); // 80120D28
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[9]); // 80120D2C
  c->r[7]=R32(c->r[1]+0x000000D0u); // 80120D30
  c->r[6]=R32(c->r[1]+0x000000D4u); // 80120D34
  cmps(c,0,(int32_t)c->r[0],0); // 80120D38
  c->r[5]=R32(c->r[1]+0x000000D8u); // 80120D3C
  W32(c->r[3]+0x0000030Cu,c->r[7]); // 80120D40
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 80120D44
  c->r[0]=R32(c->r[1]+0x000000DCu); // 80120D48
  W32(c->r[3]+0x00000310u,c->r[6]); // 80120D4C
  W32(c->r[3]+0x00000314u,c->r[5]); // 80120D50
  W32(c->r[3]+0x00000318u,c->r[0]); // 80120D54
  c->r[0]=R32(c->r[13]+0xFFFFE138u); // 80120D58
  c->r[30]=c->r[0]+c->r[4]; // 80120D5C
  if (crb(c,2)) { goto L_80120D6C; } // 80120D60
  {uint32_t ea=c->r[2]+0xFFFF8AB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80120D64
  goto L_80120D70; // 80120D68
L_80120D6C:;
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80120D6C
L_80120D70:;
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 80120D70
  c->r[3]=R32(c->r[5]+0x000000BCu); // 80120D74
  cmps(c,0,(int32_t)c->r[3],0); // 80120D78
  if (crb(c,2)) { goto L_80120D84; } // 80120D7C
  goto L_80120DB0; // 80120D80
L_80120D84:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80120D84
  cmps(c,0,(int32_t)c->r[3],0); // 80120D88
  if (crb(c,2)) { goto L_80120DAC; } // 80120D8C
  c->r[4]=R32(c->r[5]+0x000000B4u); // 80120D90
  c->r[6]=0u+0x00000000u; // 80120D94
  c->r[8]=R32(c->r[5]+0x000000B8u); // 80120D98
  c->r[5]=0u+0x00000000u; // 80120D9C
  c->r[7]=0u+0x00000000u; // 80120DA0
  c->lr=0x80120DA8u; f_802BA9F4(c); // 80120DA4
  goto L_80120DB0; // 80120DA8
L_80120DAC:;
  c->r[3]=0u+0x00000000u; // 80120DAC
L_80120DB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80120DB0
  if (crb(c,2)) { goto L_80120DE4; } // 80120DB4
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80120DB8
  goto L_80120DD4; // 80120DBC
L_80120DC0:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80120DC0
  cmps(c,0,(int32_t)c->r[0],2); // 80120DC4
  if (!crb(c,2)) { goto L_80120DD0; } // 80120DC8
  goto L_80120DE8; // 80120DCC
L_80120DD0:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 80120DD0
L_80120DD4:;
  cmps(c,0,(int32_t)c->r[29],0); // 80120DD4
  if (!crb(c,2)) { IRQCHK(c); goto L_80120DC0; } // 80120DD8
  c->r[29]=0u+0x00000000u; // 80120DDC
  goto L_80120DE8; // 80120DE0
L_80120DE4:;
  c->r[29]=0u+0x00000000u; // 80120DE4
L_80120DE8:;
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120DE8
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 80120DEC
  {uint32_t ea=c->r[31]+0x0000034Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80120DF0
  {uint32_t ea=c->r[4]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120DF4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80120DF8
  c->r[3]=R32(c->r[29]+0x00000024u); // 80120DFC
  {uint32_t ea=c->r[31]+0x00000350u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120E00
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80120E04
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80120E08
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120E0C
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120E10
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80120E14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 80120E18
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80120E1C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 80120E20
  fcmp(c,0,c->f[3],c->f[4]); // 80120E24
  if (!crb(c,1)) { goto L_80120E30; } // 80120E28
  goto L_80120E34; // 80120E2C
L_80120E30:;
  c->f[3]=c->f[4]; // 80120E30
L_80120E34:;
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[30]=c->ps1[30]=RF32(ea);} // 80120E34
  fcmp(c,0,c->f[30],c->f[3]); // 80120E38
  if (!crb(c,0)) { goto L_80120E44; } // 80120E3C
  goto L_80120E58; // 80120E40
L_80120E44:;
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80120E44
  fcmp(c,0,c->f[30],c->f[4]); // 80120E48
  if (!crb(c,1)) { goto L_80120E54; } // 80120E4C
  goto L_80120E58; // 80120E50
L_80120E54:;
  c->f[30]=c->f[4]; // 80120E54
L_80120E58:;
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[31]); // 80120E58
  {uint32_t ea=c->r[2]+0xFFFF8AC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120E5C
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80120E60
  c->f[3]=c->f[2]; // 80120E64
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80120E68
  c->lr=0x80120E70u; f_8021AA00(c); // 80120E6C
  {uint32_t ea=c->r[2]+0xFFFF8ABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120E70
  c->r[4]=0u+0x00000005u; // 80120E74
  c->r[3]=R32(c->r[29]+0x00000024u); // 80120E78
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 80120E7C
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80120E80
  c->f[1]=c->f[30]; // 80120E84
  c->lr=0x80120E8Cu; f_802A007C(c); // 80120E88
  goto L_80121198; // 80120E8C
L_80120E90:;
  c->r[11]=R32(c->r[3]+0x0000030Cu); // 80120E90
  c->r[10]=R32(c->r[3]+0x00000310u); // 80120E94
  c->r[9]=R32(c->r[3]+0x00000314u); // 80120E98
  c->r[8]=R32(c->r[3]+0x00000318u); // 80120E9C
  W32(c->r[1]+0x000000A0u,c->r[11]); // 80120EA0
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 80120EA4
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80120EA8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120EAC
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120EB0
  c->f[3]=-c->f[1]; // 80120EB4
  W32(c->r[1]+0x000000A8u,c->r[9]); // 80120EB8
  c->f[2]=-c->f[0]; // 80120EBC
  {uint32_t ea=c->r[12]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80120EC0
  W32(c->r[1]+0x000000ACu,c->r[8]); // 80120EC4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120EC8
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120ECC
  c->f[1]=-c->f[1]; // 80120ED0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 80120ED4
  c->f[0]=-c->f[0]; // 80120ED8
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80120EDC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 80120EE0
  c->r[6]=R32(c->r[1]+0x000000A0u); // 80120EE4
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 80120EE8
  c->r[5]=R32(c->r[1]+0x000000A4u); // 80120EEC
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80120EF0
  c->r[4]=R32(c->r[1]+0x000000A8u); // 80120EF4
  W32(c->r[1]+0x000000B0u,c->r[6]); // 80120EF8
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80120EFC
  W32(c->r[1]+0x000000B4u,c->r[5]); // 80120F00
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120F04
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120F08
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[4]); // 80120F0C
  W32(c->r[1]+0x000000B8u,c->r[4]); // 80120F10
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 80120F14
  W32(c->r[1]+0x000000BCu,c->r[0]); // 80120F18
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120F1C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120F20
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80120F24
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[3]);} // 80120F28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80120F2C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[2]);} // 80120F30
  c->r[6]=R32(c->r[1]+0x000000B0u); // 80120F34
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 80120F38
  c->r[5]=R32(c->r[1]+0x000000B4u); // 80120F3C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80120F40
  c->r[4]=R32(c->r[1]+0x000000B8u); // 80120F44
  W32(c->r[1]+0x00000080u,c->r[6]); // 80120F48
  c->r[0]=R32(c->r[1]+0x000000BCu); // 80120F4C
  W32(c->r[1]+0x00000084u,c->r[5]); // 80120F50
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120F54
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120F58
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[8]); // 80120F5C
  W32(c->r[1]+0x00000088u,c->r[4]); // 80120F60
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[8]); // 80120F64
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80120F68
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120F6C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120F70
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[8]); // 80120F74
  W32(c->r[1]+0x00000090u,c->r[11]); // 80120F78
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[8]); // 80120F7C
  W32(c->r[1]+0x00000094u,c->r[10]); // 80120F80
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120F84
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80120F88
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[7]); // 80120F8C
  W32(c->r[1]+0x00000098u,c->r[9]); // 80120F90
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[6]); // 80120F94
  W32(c->r[1]+0x0000009Cu,c->r[8]); // 80120F98
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80120F9C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80120FA0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 80120FA4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[3]);} // 80120FA8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 80120FAC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 80120FB0
  c->r[5]=R32(c->r[1]+0x00000090u); // 80120FB4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 80120FB8
  c->r[4]=R32(c->r[1]+0x00000094u); // 80120FBC
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 80120FC0
  c->r[0]=R32(c->r[1]+0x00000098u); // 80120FC4
  c->r[7]=R32(c->r[1]+0x0000009Cu); // 80120FC8
  W32(c->r[1]+0x00000040u,c->r[11]); // 80120FCC
  W32(c->r[1]+0x00000044u,c->r[10]); // 80120FD0
  W32(c->r[1]+0x00000048u,c->r[9]); // 80120FD4
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 80120FD8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[7]);} // 80120FDC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[6]);} // 80120FE0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[5]);} // 80120FE4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 80120FE8
  W32(c->r[3]+0x0000030Cu,c->r[5]); // 80120FEC
  W32(c->r[3]+0x00000310u,c->r[4]); // 80120FF0
  W32(c->r[3]+0x00000314u,c->r[0]); // 80120FF4
  W32(c->r[3]+0x00000318u,c->r[7]); // 80120FF8
  W32(c->r[1]+0x00000070u,c->r[5]); // 80120FFC
  c->r[6]=R32(c->r[3]+0x00000360u); // 80121000
  W32(c->r[1]+0x00000074u,c->r[4]); // 80121004
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80121008
  W32(c->r[1]+0x00000078u,c->r[0]); // 8012100C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121010
  W32(c->r[1]+0x00000060u,c->r[6]); // 80121014
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121018
  c->f[12]=c->ps1[12]=S(c->f[0]*c->f[4]); // 8012101C
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 80121020
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121024
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80121028
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012102C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80121030
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80121034
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80121038
  c->r[5]=R32(c->r[3]+0x00000364u); // 8012103C
  c->f[7]=-c->f[3]; // 80121040
  W32(c->r[1]+0x00000064u,c->r[5]); // 80121044
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80121048
  {uint32_t ea=c->r[3]+0x00000320u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012104C
  c->f[11]=c->ps1[11]=S(c->f[4]+c->f[12]); // 80121050
  c->r[4]=R32(c->r[3]+0x00000368u); // 80121054
  c->f[10]=c->ps1[10]=S(c->f[3]+c->f[2]); // 80121058
  c->r[0]=R32(c->r[3]+0x0000036Cu); // 8012105C
  {uint32_t ea=c->r[3]+0x00000324u; c->f[3]=c->ps1[3]=RF32(ea);} // 80121060
  {uint32_t ea=c->r[3]+0x00000328u; c->f[4]=c->ps1[4]=RF32(ea);} // 80121064
  {uint32_t ea=c->r[1]+0x00000064u; c->f[5]=c->ps1[5]=RF32(ea);} // 80121068
  c->f[9]=c->ps1[9]=S(c->f[3]+c->f[1]); // 8012106C
  W32(c->r[1]+0x00000068u,c->r[4]); // 80121070
  c->f[8]=c->ps1[8]=S(c->f[4]+c->f[0]); // 80121074
  c->f[6]=-c->f[5]; // 80121078
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8012107C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80121080
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80121084
  c->f[5]=-c->f[3]; // 80121088
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[7]);} // 8012108C
  c->f[4]=-c->f[4]; // 80121090
  {uint32_t ea=c->r[3]+0x00000360u; c->f[3]=c->ps1[3]=RF32(ea);} // 80121094
  c->r[0]=R32(c->r[1]+0x00000060u); // 80121098
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[6]);} // 8012109C
  W32(c->r[1]+0x00000140u,c->r[0]); // 801210A0
  c->r[5]=R32(c->r[1]+0x00000064u); // 801210A4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[5]);} // 801210A8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[7]=c->ps1[7]=RF32(ea);} // 801210AC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[4]);} // 801210B0
  c->r[4]=R32(c->r[1]+0x00000068u); // 801210B4
  W32(c->r[1]+0x00000144u,c->r[5]); // 801210B8
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801210BC
  W32(c->r[1]+0x00000148u,c->r[4]); // 801210C0
  {uint32_t ea=c->r[1]+0x00000144u; c->f[6]=c->ps1[6]=RF32(ea);} // 801210C4
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 801210C8
  {uint32_t ea=c->r[1]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 801210CC
  {uint32_t ea=c->r[3]+0x0000031Cu; WF32(ea,c->f[11]);} // 801210D0
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801210D4
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[10]);} // 801210D8
  {uint32_t ea=c->r[3]+0x00000324u; WF32(ea,c->f[9]);} // 801210DC
  {uint32_t ea=c->r[3]+0x00000328u; WF32(ea,c->f[8]);} // 801210E0
  {uint32_t ea=c->r[12]+0x000000ECu; c->f[8]=c->ps1[8]=RF32(ea);} // 801210E4
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 801210E8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[8]); // 801210EC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[12]);} // 801210F0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[8]); // 801210F4
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[7]);} // 801210F8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[8]); // 801210FC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[8]); // 80121100
  c->r[0]=R32(c->r[1]+0x00000140u); // 80121104
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[6]);} // 80121108
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[5]);} // 8012110C
  c->r[5]=R32(c->r[1]+0x00000144u); // 80121110
  c->r[4]=R32(c->r[1]+0x00000148u); // 80121114
  W32(c->r[1]+0x00000058u,c->r[4]); // 80121118
  {uint32_t ea=c->r[1]+0x00000058u; c->f[5]=c->ps1[5]=RF32(ea);} // 8012111C
  W32(c->r[1]+0x00000050u,c->r[0]); // 80121120
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 80121124
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[4]);} // 80121128
  {uint32_t ea=c->r[1]+0x00000050u; c->f[4]=c->ps1[4]=RF32(ea);} // 8012112C
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 80121130
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[9]); // 80121134
  W32(c->r[1]+0x00000054u,c->r[5]); // 80121138
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 8012113C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[7]); // 80121140
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80121144
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[9]); // 80121148
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8012114C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 80121150
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[9]); // 80121154
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80121158
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8012115C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[7]);} // 80121160
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[6]);} // 80121164
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 80121168
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[4]);} // 8012116C
  {uint32_t ea=c->r[3]+0x00000360u; WF32(ea,c->f[3]);} // 80121170
  {uint32_t ea=c->r[3]+0x00000364u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121174
  {uint32_t ea=c->r[3]+0x00000368u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121178
  {uint32_t ea=c->r[3]+0x0000036Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012117C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 80121180
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 80121184
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 80121188
  {uint32_t ea=c->r[3]+0x00000364u; WF32(ea,c->f[2]);} // 8012118C
  {uint32_t ea=c->r[3]+0x00000368u; WF32(ea,c->f[1]);} // 80121190
  {uint32_t ea=c->r[3]+0x0000036Cu; WF32(ea,c->f[0]);} // 80121194
L_80121198:;
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,31,ea,0,0);} // 80121198
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[31]=RF64(ea);} // 8012119C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,30,ea,0,0);} // 801211A0
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[30]=RF64(ea);} // 801211A4
  c->r[31]=R32(c->r[1]+0x0000019Cu); // 801211A8
  c->r[30]=R32(c->r[1]+0x00000198u); // 801211AC
  c->r[0]=R32(c->r[1]+0x000001C4u); // 801211B0
  c->r[29]=R32(c->r[1]+0x00000194u); // 801211B4
  c->lr=c->r[0]; // 801211B8
  c->r[1]=c->r[1]+0x000001C0u; // 801211BC
  return; // 801211C0
}

// fn_801211C4
void f_801211C4(Ctx* __restrict c) {
  trace_call(0x801211C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801211C4
  c->r[0]=c->lr; // 801211C8
  W32(c->r[1]+0x00000104u,c->r[0]); // 801211CC
  W32(c->r[1]+0x000000FCu,c->r[31]); // 801211D0
  c->r[31]=c->r[3]|c->r[3]; // 801211D4
  W32(c->r[1]+0x000000F8u,c->r[30]); // 801211D8
  c->r[0]=R32(c->r[3]+0x00000380u); // 801211DC
  cmps(c,0,(int32_t)c->r[0],3); // 801211E0
  if (!crb(c,2)) { goto L_8012121C; } // 801211E4
  c->r[0]=R8(c->r[3]+0x000002F0u); // 801211E8
  cmps(c,0,(int32_t)c->r[0],0); // 801211EC
  if (!crb(c,2)) { goto L_8012124C; } // 801211F0
  {uint32_t ea=c->r[3]+0x00000320u; c->f[1]=c->ps1[1]=RF32(ea);} // 801211F4
  c->r[0]=0u+0x00000001u; // 801211F8
  {uint32_t ea=c->r[2]+0xFFFF8AD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801211FC
  {uint32_t ea=c->r[3]+0x00000340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121200
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80121204
  W8(c->r[3]+0x000002F0u,c->r[0]); // 80121208
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8012120C
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[1]);} // 80121210
  {uint32_t ea=c->r[3]+0x00000340u; WF32(ea,c->f[0]);} // 80121214
  goto L_8012124C; // 80121218
L_8012121C:;
  c->r[0]=R8(c->r[3]+0x000002F0u); // 8012121C
  cmps(c,0,(int32_t)c->r[0],0); // 80121220
  if (crb(c,2)) { goto L_8012124C; } // 80121224
  {uint32_t ea=c->r[3]+0x00000320u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121228
  c->r[0]=0u+0x00000000u; // 8012122C
  {uint32_t ea=c->r[2]+0xFFFF8AD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121230
  {uint32_t ea=c->r[3]+0x00000340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121234
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80121238
  W8(c->r[3]+0x000002F0u,c->r[0]); // 8012123C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80121240
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[1]);} // 80121244
  {uint32_t ea=c->r[3]+0x00000340u; WF32(ea,c->f[0]);} // 80121248
L_8012124C:;
  c->r[0]=R32(c->r[3]+0x00000380u); // 8012124C
  cmps(c,0,(int32_t)c->r[0],2); // 80121250
  if (crb(c,2)) { goto L_8012126C; } // 80121254
  cmps(c,0,(int32_t)c->r[0],3); // 80121258
  if (crb(c,2)) { goto L_8012152C; } // 8012125C
  cmps(c,0,(int32_t)c->r[0],1); // 80121260
  if (crb(c,2)) { goto L_80121844; } // 80121264
  goto L_80121A5C; // 80121268
L_8012126C:;
  c->r[0]=R32(c->r[3]+0x00000360u); // 8012126C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80121270
  c->r[4]=R32(c->r[3]+0x00000364u); // 80121274
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80121278
  c->r[0]=R32(c->r[3]+0x00000368u); // 8012127C
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80121280
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121284
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121288
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 8012128C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80121290
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 80121294
  c->r[5]=R32(c->r[3]+0x0000036Cu); // 80121298
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8012129C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801212A0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801212A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 801212A8
  c->r[0]=R32(c->r[1]+0x00000018u); // 801212AC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801212B0
  W32(c->r[3]+0x00000370u,c->r[0]); // 801212B4
  {uint32_t ea=c->r[2]+0xFFFF8AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801212B8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801212BC
  {uint32_t ea=c->r[3]+0x00000370u; c->f[2]=c->ps1[2]=RF32(ea);} // 801212C0
  W32(c->r[3]+0x00000374u,c->r[4]); // 801212C4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801212C8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801212CC
  {uint32_t ea=c->r[3]+0x00000374u; c->f[1]=c->ps1[1]=RF32(ea);} // 801212D0
  W32(c->r[3]+0x00000378u,c->r[0]); // 801212D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801212D8
  {uint32_t ea=c->r[2]+0xFFFF8AD8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801212DC
  W32(c->r[1]+0x00000024u,c->r[5]); // 801212E0
  {uint32_t ea=c->r[3]+0x00000378u; c->f[3]=c->ps1[3]=RF32(ea);} // 801212E4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801212E8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 801212EC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 801212F0
  {uint32_t ea=c->r[2]+0xFFFF8ADCu; c->f[7]=c->ps1[7]=RF32(ea);} // 801212F4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[5]); // 801212F8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 801212FC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 80121300
  c->r[0]=R32(c->r[1]+0x00000024u); // 80121304
  fcmp(c,0,c->f[2],c->f[0]); // 80121308
  W32(c->r[3]+0x0000037Cu,c->r[0]); // 8012130C
  if (!crb(c,0)) { goto L_8012131C; } // 80121310
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121314
  goto L_80121338; // 80121318
L_8012131C:;
  c->f[0]=frsqrte(c->f[2]); // 8012131C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80121320
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 80121324
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[7])); // 80121328
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8012132C
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 80121330
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80121334
L_80121338:;
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80121338
  fcmp(c,0,c->f[5],c->f[0]); // 8012133C
  if (crb(c,2)) { goto L_80121A5C; } // 80121340
  c->r[4]=R32(c->r[3]+0x00000370u); // 80121344
  c->r[0]=R32(c->r[3]+0x00000374u); // 80121348
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8012134C
  {uint32_t ea=c->r[2]+0xFFFF8AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121350
  W32(c->r[1]+0x00000068u,c->r[4]); // 80121354
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80121358
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012135C
  c->r[0]=R32(c->r[3]+0x0000037Cu); // 80121360
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80121364
  c->r[4]=R32(c->r[3]+0x00000378u); // 80121368
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 8012136C
  W32(c->r[1]+0x00000070u,c->r[4]); // 80121370
  {uint32_t ea=c->r[2]+0xFFFF8AD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80121374
  {uint32_t ea=c->r[1]+0x00000070u; c->f[3]=c->ps1[3]=RF32(ea);} // 80121378
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8012137C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80121380
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 80121384
  {uint32_t ea=c->r[2]+0xFFFF8ADCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80121388
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 8012138C
  fcmp(c,0,c->f[2],c->f[0]); // 80121390
  if (!crb(c,0)) { goto L_8012139C; } // 80121394
  goto L_801213B8; // 80121398
L_8012139C:;
  c->f[0]=frsqrte(c->f[2]); // 8012139C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 801213A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 801213A4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 801213A8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801213AC
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 801213B0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[0]); // 801213B4
L_801213B8:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801213B8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801213BC
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[5]); // 801213C0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801213C4
  {uint32_t ea=c->r[2]+0xFFFF8AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801213C8
  {uint32_t ea=c->r[2]+0xFFFF8AD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801213CC
  {uint32_t ea=c->r[2]+0xFFFF8ADCu; c->f[6]=c->ps1[6]=RF32(ea);} // 801213D0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 801213D4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[5]); // 801213D8
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 801213DC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[5]); // 801213E0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 801213E4
  {uint32_t ea=c->r[3]+0x00000370u; c->f[2]=c->ps1[2]=RF32(ea);} // 801213E8
  {uint32_t ea=c->r[3]+0x00000374u; c->f[1]=c->ps1[1]=RF32(ea);} // 801213EC
  {uint32_t ea=c->r[3]+0x00000378u; c->f[3]=c->ps1[3]=RF32(ea);} // 801213F0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801213F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801213F8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801213FC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80121400
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 80121404
  fcmp(c,0,c->f[2],c->f[0]); // 80121408
  if (!crb(c,0)) { goto L_80121418; } // 8012140C
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121410
  goto L_80121434; // 80121414
L_80121418:;
  c->f[0]=frsqrte(c->f[2]); // 80121418
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8012141C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80121420
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[6])); // 80121424
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80121428
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 8012142C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80121430
L_80121434:;
  c->f[1]=-c->f[0]; // 80121434
  c->r[3]=c->r[1]+0x00000058u; // 80121438
  c->r[4]=c->r[1]+0x00000068u; // 8012143C
  c->lr=0x80121444u; f_802601F0(c); // 80121440
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 80121444
  c->r[3]=R32(c->r[5]+0x000000B0u); // 80121448
  cmps(c,0,(int32_t)c->r[3],0); // 8012144C
  if (crb(c,2)) { goto L_80121458; } // 80121450
  goto L_80121484; // 80121454
L_80121458:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121458
  cmps(c,0,(int32_t)c->r[3],0); // 8012145C
  if (crb(c,2)) { goto L_80121480; } // 80121460
  c->r[4]=R32(c->r[5]+0x000000A8u); // 80121464
  c->r[6]=0u+0x00000000u; // 80121468
  c->r[8]=R32(c->r[5]+0x000000ACu); // 8012146C
  c->r[5]=0u+0x00000000u; // 80121470
  c->r[7]=0u+0x00000000u; // 80121474
  c->lr=0x8012147Cu; f_802BA9F4(c); // 80121478
  goto L_80121484; // 8012147C
L_80121480:;
  c->r[3]=0u+0x00000000u; // 80121480
L_80121484:;
  cmps(c,0,(int32_t)c->r[3],0); // 80121484
  if (crb(c,2)) { goto L_801214B8; } // 80121488
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 8012148C
  goto L_801214A8; // 80121490
L_80121494:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80121494
  cmps(c,0,(int32_t)c->r[0],17); // 80121498
  if (!crb(c,2)) { goto L_801214A4; } // 8012149C
  goto L_801214BC; // 801214A0
L_801214A4:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 801214A4
L_801214A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801214A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80121494; } // 801214AC
  c->r[31]=0u+0x00000000u; // 801214B0
  goto L_801214BC; // 801214B4
L_801214B8:;
  c->r[31]=0u+0x00000000u; // 801214B8
L_801214BC:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 801214BC
  c->r[3]=c->r[1]+0x00000048u; // 801214C0
  c->r[4]=c->r[3]|c->r[3]; // 801214C4
  c->r[5]=c->r[1]+0x00000058u; // 801214C8
  c->r[6]=R32(c->r[6]+0x00000030u); // 801214CC
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801214D0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801214D4
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801214D8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801214DC
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801214E0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 801214E4
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801214E8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801214EC
  c->lr=0x801214F4u; f_8025FB90(c); // 801214F0
  c->r[3]=R32(c->r[31]+0x00000018u); // 801214F4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801214F8
  c->r[3]=R32(c->r[3]+0x00000034u); // 801214FC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80121500
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121504
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80121508
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012150C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80121510
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121514
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80121518
  c->r[0]=R32(c->r[3]+0x00000034u); // 8012151C
  c->r[0]=c->r[0]|0x00100000u; // 80121520
  W32(c->r[3]+0x00000034u,c->r[0]); // 80121524
  goto L_80121A5C; // 80121528
L_8012152C:;
  {uint32_t ea=c->r[3]+0x00000320u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012152C
  {uint32_t ea=c->r[3]+0x00000340u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121530
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 80121534
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80121538
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012153C
  fcmp(c,0,c->f[0],c->f[1]); // 80121540
  if (!crb(c,1)) { goto L_80121588; } // 80121544
  {uint32_t ea=c->r[3]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121548
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 8012154C
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80121550
  {uint32_t ea=c->r[3]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121554
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 80121558
  {uint32_t ea=c->r[3]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012155C
  {uint32_t ea=c->r[3]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121560
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80121564
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80121568
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[5]);} // 8012156C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80121570
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[3]);} // 80121574
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[2]);} // 80121578
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[1]);} // 8012157C
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 80121580
  goto L_801215D0; // 80121584
L_80121588:;
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80121588
  fcmp(c,0,c->f[0],c->f[1]); // 8012158C
  if (!crb(c,0)) { goto L_801215D0; } // 80121590
  {uint32_t ea=c->r[3]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121594
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 80121598
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8012159C
  {uint32_t ea=c->r[3]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 801215A0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 801215A4
  {uint32_t ea=c->r[3]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 801215A8
  {uint32_t ea=c->r[3]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 801215AC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 801215B0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801215B4
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[5]);} // 801215B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 801215BC
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[3]);} // 801215C0
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[2]);} // 801215C4
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[1]);} // 801215C8
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 801215CC
L_801215D0:;
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 801215D0
  {uint32_t ea=c->r[3]+0x0000033Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801215D4
  c->r[4]=R32(c->r[5]+0x000000B0u); // 801215D8
  {uint32_t ea=c->r[3]+0x00000320u; c->f[2]=c->ps1[2]=RF32(ea);} // 801215DC
  {uint32_t ea=c->r[3]+0x00000344u; c->f[1]=c->ps1[1]=RF32(ea);} // 801215E0
  cmps(c,0,(int32_t)c->r[4],0); // 801215E4
  {uint32_t ea=c->r[3]+0x00000348u; c->f[0]=c->ps1[0]=RF32(ea);} // 801215E8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 801215EC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 801215F0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801215F4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801215F8
  if (crb(c,2)) { goto L_80121604; } // 801215FC
  goto L_80121634; // 80121600
L_80121604:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121604
  cmps(c,0,(int32_t)c->r[3],0); // 80121608
  if (crb(c,2)) { goto L_8012162C; } // 8012160C
  c->r[4]=R32(c->r[5]+0x000000A8u); // 80121610
  c->r[6]=0u+0x00000000u; // 80121614
  c->r[8]=R32(c->r[5]+0x000000ACu); // 80121618
  c->r[5]=0u+0x00000000u; // 8012161C
  c->r[7]=0u+0x00000000u; // 80121620
  c->lr=0x80121628u; f_802BA9F4(c); // 80121624
  goto L_80121630; // 80121628
L_8012162C:;
  c->r[3]=0u+0x00000000u; // 8012162C
L_80121630:;
  c->r[4]=c->r[3]|c->r[3]; // 80121630
L_80121634:;
  cmps(c,0,(int32_t)c->r[4],0); // 80121634
  if (crb(c,2)) { goto L_80121668; } // 80121638
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8012163C
  goto L_80121658; // 80121640
L_80121644:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80121644
  cmps(c,0,(int32_t)c->r[0],17); // 80121648
  if (!crb(c,2)) { goto L_80121654; } // 8012164C
  goto L_8012166C; // 80121650
L_80121654:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80121654
L_80121658:;
  cmps(c,0,(int32_t)c->r[3],0); // 80121658
  if (!crb(c,2)) { IRQCHK(c); goto L_80121644; } // 8012165C
  c->r[3]=0u+0x00000000u; // 80121660
  goto L_8012166C; // 80121664
L_80121668:;
  c->r[3]=0u+0x00000000u; // 80121668
L_8012166C:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8012166C
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[9]=c->ps1[9]=RF32(ea);} // 80121670
  c->r[3]=R32(c->r[3]+0x00000034u); // 80121674
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121678
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[9]); // 8012167C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80121680
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121684
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80121688
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012168C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80121690
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121694
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80121698
  {uint32_t ea=c->r[2]+0xFFFF8AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012169C
  c->r[0]=R32(c->r[3]+0x00000034u); // 801216A0
  {uint32_t ea=c->r[2]+0xFFFF8AD8u; c->f[7]=c->ps1[7]=RF32(ea);} // 801216A4
  c->r[0]=c->r[0]|0x00100000u; // 801216A8
  W32(c->r[3]+0x00000034u,c->r[0]); // 801216AC
  {uint32_t ea=c->r[2]+0xFFFF8ADCu; c->f[8]=c->ps1[8]=RF32(ea);} // 801216B0
  c->r[0]=R32(c->r[31]+0x00000364u); // 801216B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801216B8
  {uint32_t ea=c->r[13]+0xFFFFE83Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801216BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801216C0
  c->r[0]=R32(c->r[31]+0x00000360u); // 801216C4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 801216C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801216CC
  c->r[4]=R32(c->r[31]+0x00000368u); // 801216D0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801216D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801216D8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801216DC
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 801216E0
  W32(c->r[31]+0x00000374u,c->r[0]); // 801216E4
  c->r[3]=R32(c->r[31]+0x0000036Cu); // 801216E8
  {uint32_t ea=c->r[31]+0x00000374u; c->f[1]=c->ps1[1]=RF32(ea);} // 801216EC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801216F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801216F4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801216F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801216FC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80121700
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80121704
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[6]); // 80121708
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 8012170C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[6]); // 80121710
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 80121714
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 80121718
  c->r[0]=R32(c->r[1]+0x00000008u); // 8012171C
  c->r[3]=R32(c->r[1]+0x00000010u); // 80121720
  W32(c->r[31]+0x00000370u,c->r[0]); // 80121724
  fcmp(c,0,c->f[2],c->f[0]); // 80121728
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8012172C
  W32(c->r[31]+0x00000378u,c->r[3]); // 80121730
  c->r[0]=R32(c->r[1]+0x00000014u); // 80121734
  W32(c->r[31]+0x0000037Cu,c->r[0]); // 80121738
  {uint32_t ea=c->r[31]+0x00000378u; WF32(ea,c->f[9]);} // 8012173C
  {uint32_t ea=c->r[31]+0x00000370u; WF32(ea,c->f[9]);} // 80121740
  if (!crb(c,0)) { goto L_8012174C; } // 80121744
  goto L_80121768; // 80121748
L_8012174C:;
  c->f[0]=frsqrte(c->f[2]); // 8012174C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80121750
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 80121754
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[8])); // 80121758
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8012175C
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 80121760
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[0]); // 80121764
L_80121768:;
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121768
  fcmp(c,0,c->f[0],c->f[9]); // 8012176C
  if (crb(c,2)) { goto L_80121A5C; } // 80121770
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 80121774
  c->r[3]=R32(c->r[5]+0x000000B0u); // 80121778
  cmps(c,0,(int32_t)c->r[3],0); // 8012177C
  if (crb(c,2)) { goto L_80121788; } // 80121780
  goto L_801217B4; // 80121784
L_80121788:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121788
  cmps(c,0,(int32_t)c->r[3],0); // 8012178C
  if (crb(c,2)) { goto L_801217B0; } // 80121790
  c->r[4]=R32(c->r[5]+0x000000A8u); // 80121794
  c->r[6]=0u+0x00000000u; // 80121798
  c->r[8]=R32(c->r[5]+0x000000ACu); // 8012179C
  c->r[5]=0u+0x00000000u; // 801217A0
  c->r[7]=0u+0x00000000u; // 801217A4
  c->lr=0x801217ACu; f_802BA9F4(c); // 801217A8
  goto L_801217B4; // 801217AC
L_801217B0:;
  c->r[3]=0u+0x00000000u; // 801217B0
L_801217B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801217B4
  if (crb(c,2)) { goto L_801217E8; } // 801217B8
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 801217BC
  goto L_801217D8; // 801217C0
L_801217C4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801217C4
  cmps(c,0,(int32_t)c->r[0],17); // 801217C8
  if (!crb(c,2)) { goto L_801217D4; } // 801217CC
  goto L_801217EC; // 801217D0
L_801217D4:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 801217D4
L_801217D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801217D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801217C4; } // 801217DC
  c->r[30]=0u+0x00000000u; // 801217E0
  goto L_801217EC; // 801217E4
L_801217E8:;
  c->r[30]=0u+0x00000000u; // 801217E8
L_801217EC:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 801217EC
  c->r[3]=c->r[1]+0x00000078u; // 801217F0
  c->r[4]=R32(c->r[4]+0x00000030u); // 801217F4
  c->r[4]=c->r[4]+0x00000010u; // 801217F8
  c->lr=0x80121800u; f_8025F350(c); // 801217FC
  {uint32_t ea=c->r[31]+0x00000374u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121800
  c->r[3]=c->r[1]+0x000000B8u; // 80121804
  c->lr=0x8012180Cu; f_8025A4F0(c); // 80121808
  c->r[3]=c->r[1]+0x00000078u; // 8012180C
  c->r[4]=c->r[1]+0x000000B8u; // 80121810
  c->lr=0x80121818u; f_80262200(c); // 80121814
  c->r[3]=c->r[1]+0x00000078u; // 80121818
  c->lr=0x80121820u; f_8011A60C(c); // 8012181C
  c->r[3]=R32(c->r[30]+0x00000018u); // 80121820
  c->r[4]=c->r[1]+0x00000078u; // 80121824
  c->r[30]=R32(c->r[3]+0x00000034u); // 80121828
  c->r[3]=c->r[30]+0x00000010u; // 8012182C
  c->lr=0x80121834u; f_8025F5D0(c); // 80121830
  c->r[0]=R32(c->r[30]+0x00000034u); // 80121834
  c->r[0]=c->r[0]|0x00100000u; // 80121838
  W32(c->r[30]+0x00000034u,c->r[0]); // 8012183C
  goto L_80121A5C; // 80121840
L_80121844:;
  {uint32_t ea=c->r[3]+0x00000320u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121844
  {uint32_t ea=c->r[3]+0x00000340u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121848
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8012184C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80121850
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121854
  fcmp(c,0,c->f[0],c->f[1]); // 80121858
  if (!crb(c,1)) { goto L_801218A0; } // 8012185C
  {uint32_t ea=c->r[3]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121860
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 80121864
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80121868
  {uint32_t ea=c->r[3]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012186C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 80121870
  {uint32_t ea=c->r[3]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121874
  {uint32_t ea=c->r[3]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121878
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 8012187C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80121880
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[5]);} // 80121884
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80121888
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[3]);} // 8012188C
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[2]);} // 80121890
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[1]);} // 80121894
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 80121898
  goto L_801218E8; // 8012189C
L_801218A0:;
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801218A0
  fcmp(c,0,c->f[0],c->f[1]); // 801218A4
  if (!crb(c,0)) { goto L_801218E8; } // 801218A8
  {uint32_t ea=c->r[3]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801218AC
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 801218B0
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801218B4
  {uint32_t ea=c->r[3]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 801218B8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 801218BC
  {uint32_t ea=c->r[3]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 801218C0
  {uint32_t ea=c->r[3]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 801218C4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 801218C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801218CC
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[5]);} // 801218D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 801218D4
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[3]);} // 801218D8
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[2]);} // 801218DC
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[1]);} // 801218E0
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 801218E4
L_801218E8:;
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801218E8
  {uint32_t ea=c->r[3]+0x0000033Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801218EC
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 801218F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801218F4
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801218F8
  fcmp(c,0,c->f[0],c->f[1]); // 801218FC
  if (!crb(c,1)) { goto L_80121944; } // 80121900
  {uint32_t ea=c->r[3]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121904
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 80121908
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8012190C
  {uint32_t ea=c->r[3]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121910
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 80121914
  {uint32_t ea=c->r[3]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121918
  {uint32_t ea=c->r[3]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012191C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80121920
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80121924
  {uint32_t ea=c->r[3]+0x0000031Cu; WF32(ea,c->f[5]);} // 80121928
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8012192C
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[3]);} // 80121930
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[2]);} // 80121934
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[1]);} // 80121938
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 8012193C
  goto L_8012198C; // 80121940
L_80121944:;
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80121944
  fcmp(c,0,c->f[0],c->f[1]); // 80121948
  if (!crb(c,0)) { goto L_8012198C; } // 8012194C
  {uint32_t ea=c->r[3]+0x0000030Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121950
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 80121954
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80121958
  {uint32_t ea=c->r[3]+0x00000310u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012195C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 80121960
  {uint32_t ea=c->r[3]+0x00000314u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121964
  {uint32_t ea=c->r[3]+0x00000318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121968
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 8012196C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80121970
  {uint32_t ea=c->r[3]+0x0000031Cu; WF32(ea,c->f[5]);} // 80121974
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80121978
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[3]);} // 8012197C
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[2]);} // 80121980
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[1]);} // 80121984
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 80121988
L_8012198C:;
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 8012198C
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80121990
  c->r[4]=R32(c->r[5]+0x000000B0u); // 80121994
  {uint32_t ea=c->r[3]+0x00000320u; c->f[2]=c->ps1[2]=RF32(ea);} // 80121998
  {uint32_t ea=c->r[3]+0x00000344u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012199C
  cmps(c,0,(int32_t)c->r[4],0); // 801219A0
  {uint32_t ea=c->r[3]+0x00000348u; c->f[0]=c->ps1[0]=RF32(ea);} // 801219A4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 801219A8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 801219AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801219B0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801219B4
  if (crb(c,2)) { goto L_801219C0; } // 801219B8
  goto L_801219F0; // 801219BC
L_801219C0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 801219C0
  cmps(c,0,(int32_t)c->r[3],0); // 801219C4
  if (crb(c,2)) { goto L_801219E8; } // 801219C8
  c->r[4]=R32(c->r[5]+0x000000A8u); // 801219CC
  c->r[6]=0u+0x00000000u; // 801219D0
  c->r[8]=R32(c->r[5]+0x000000ACu); // 801219D4
  c->r[5]=0u+0x00000000u; // 801219D8
  c->r[7]=0u+0x00000000u; // 801219DC
  c->lr=0x801219E4u; f_802BA9F4(c); // 801219E0
  goto L_801219EC; // 801219E4
L_801219E8:;
  c->r[3]=0u+0x00000000u; // 801219E8
L_801219EC:;
  c->r[4]=c->r[3]|c->r[3]; // 801219EC
L_801219F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801219F0
  if (crb(c,2)) { goto L_80121A24; } // 801219F4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801219F8
  goto L_80121A14; // 801219FC
L_80121A00:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80121A00
  cmps(c,0,(int32_t)c->r[0],17); // 80121A04
  if (!crb(c,2)) { goto L_80121A10; } // 80121A08
  goto L_80121A28; // 80121A0C
L_80121A10:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80121A10
L_80121A14:;
  cmps(c,0,(int32_t)c->r[3],0); // 80121A14
  if (!crb(c,2)) { IRQCHK(c); goto L_80121A00; } // 80121A18
  c->r[3]=0u+0x00000000u; // 80121A1C
  goto L_80121A28; // 80121A20
L_80121A24:;
  c->r[3]=0u+0x00000000u; // 80121A24
L_80121A28:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80121A28
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121A2C
  c->r[3]=R32(c->r[3]+0x00000034u); // 80121A30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80121A34
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80121A38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80121A3C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80121A40
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121A44
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80121A48
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80121A4C
  c->r[0]=R32(c->r[3]+0x00000034u); // 80121A50
  c->r[0]=c->r[0]|0x00100000u; // 80121A54
  W32(c->r[3]+0x00000034u,c->r[0]); // 80121A58
L_80121A5C:;
  c->r[0]=R32(c->r[1]+0x00000104u); // 80121A5C
  c->r[31]=R32(c->r[1]+0x000000FCu); // 80121A60
  c->r[30]=R32(c->r[1]+0x000000F8u); // 80121A64
  c->lr=c->r[0]; // 80121A68
  c->r[1]=c->r[1]+0x00000100u; // 80121A6C
  return; // 80121A70
}

// fn_80121A74
void f_80121A74(Ctx* __restrict c) {
  trace_call(0x80121A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80121A74
  c->r[0]=c->lr; // 80121A78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80121A7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80121A80
  W32(c->r[1]+0x00000008u,c->r[30]); // 80121A84
  c->r[30]=c->r[3]|c->r[3]; // 80121A88
  c->r[0]=R8(c->r[3]+0x000002A0u); // 80121A8C
  cmps(c,0,(int32_t)c->r[0],0); // 80121A90
  if (crb(c,2)) { goto L_80121AC0; } // 80121A94
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 80121A98
  c->r[31]=R32(c->r[3]+0x00000094u); // 80121A9C
  cmps(c,0,(int32_t)c->r[31],0); // 80121AA0
  if (crb(c,2)) { goto L_80121AC0; } // 80121AA4
  c->r[3]=c->r[31]|c->r[31]; // 80121AA8
  c->lr=0x80121AB0u; f_8030D188(c); // 80121AAC
  c->r[3]=c->r[31]|c->r[31]; // 80121AB0
  c->r[4]=c->r[30]|c->r[30]; // 80121AB4
  c->r[5]=0u+0x00000000u; // 80121AB8
  c->lr=0x80121AC0u; f_8030D51C(c); // 80121ABC
L_80121AC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80121AC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80121AC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80121AC8
  c->lr=c->r[0]; // 80121ACC
  c->r[1]=c->r[1]+0x00000010u; // 80121AD0
  return; // 80121AD4
}

// fn_80121AD8
void f_80121AD8(Ctx* __restrict c) {
  trace_call(0x80121AD8u);
  c->r[0]=cntlz(c->r[4]); // 80121AD8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80121ADC
  W32(c->r[3]+0x000002F8u,c->r[0]); // 80121AE0
  return; // 80121AE4
}

// fn_80121AE8
void f_80121AE8(Ctx* __restrict c) {
  trace_call(0x80121AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80121AE8
  c->r[0]=c->lr; // 80121AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80121AF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80121AF4
  c->r[31]=c->r[3]|c->r[3]; // 80121AF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80121AFC
  c->r[30]=R32(c->r[3]+0x00000038u); // 80121B00
  cmps(c,0,(int32_t)c->r[30],0); // 80121B04
  if (crb(c,2)) { goto L_80121B10; } // 80121B08
  goto L_80121B40; // 80121B0C
L_80121B10:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121B10
  cmps(c,0,(int32_t)c->r[3],0); // 80121B14
  if (crb(c,2)) { goto L_80121B38; } // 80121B18
  c->r[4]=R32(c->r[31]+0x00000030u); // 80121B1C
  c->r[5]=0u+0x00000000u; // 80121B20
  c->r[8]=R32(c->r[31]+0x00000034u); // 80121B24
  c->r[6]=0u+0x00000000u; // 80121B28
  c->r[7]=0u+0x00000000u; // 80121B2C
  c->lr=0x80121B34u; f_802BA9F4(c); // 80121B30
  goto L_80121B3C; // 80121B34
L_80121B38:;
  c->r[3]=0u+0x00000000u; // 80121B38
L_80121B3C:;
  c->r[30]=c->r[3]|c->r[3]; // 80121B3C
L_80121B40:;
  c->r[0]=R8(c->r[31]+0x0000003Cu); // 80121B40
  c->r[3]=c->r[30]|c->r[30]; // 80121B44
  c->r[12]=R32(c->r[30]+0x000000B4u); // 80121B48
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80121B4C
  c->r[0]=0u-c->r[4]; // 80121B50
  c->r[12]=R32(c->r[12]+0x00000100u); // 80121B54
  c->r[0]=c->r[0]|c->r[4]; // 80121B58
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80121B5C
  c->ctr=c->r[12]; // 80121B60
  if (true) { c->lr=0x80121B68u; dispatch(c,c->ctr); } // 80121B64
  c->r[5]=R32(c->r[30]+0x0000004Cu); // 80121B68
  c->r[31]=R32(c->r[5]+0x00000108u); // 80121B6C
  cmps(c,0,(int32_t)c->r[31],0); // 80121B70
  if (crb(c,2)) { goto L_80121B7C; } // 80121B74
  goto L_80121BAC; // 80121B78
L_80121B7C:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80121B80
  if (crb(c,2)) { goto L_80121BA4; } // 80121B84
  c->r[4]=R32(c->r[5]+0x00000100u); // 80121B88
  c->r[6]=0u+0x00000000u; // 80121B8C
  c->r[8]=R32(c->r[5]+0x00000104u); // 80121B90
  c->r[5]=0u+0x00000000u; // 80121B94
  c->r[7]=0u+0x00000000u; // 80121B98
  c->lr=0x80121BA0u; f_802BA9F4(c); // 80121B9C
  goto L_80121BA8; // 80121BA0
L_80121BA4:;
  c->r[3]=0u+0x00000000u; // 80121BA4
L_80121BA8:;
  c->r[31]=c->r[3]|c->r[3]; // 80121BA8
L_80121BAC:;
  c->r[3]=c->r[31]|c->r[31]; // 80121BAC
  c->lr=0x80121BB4u; f_80034170(c); // 80121BB0
  c->r[0]=R8(c->r[31]+0x000000E4u); // 80121BB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80121BB8
  c->r[5]=c->r[3]+c->r[0]; // 80121BBC
  c->r[3]=R32(c->r[5]+0x00000024u); // 80121BC0
  cmps(c,0,(int32_t)c->r[3],0); // 80121BC4
  if (crb(c,2)) { goto L_80121BD0; } // 80121BC8
  goto L_80121BFC; // 80121BCC
L_80121BD0:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80121BD4
  if (crb(c,2)) { goto L_80121BF8; } // 80121BD8
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 80121BDC
  c->r[6]=0u+0x00000000u; // 80121BE0
  c->r[8]=R32(c->r[5]+0x00000020u); // 80121BE4
  c->r[5]=0u+0x00000000u; // 80121BE8
  c->r[7]=0u+0x00000000u; // 80121BEC
  c->lr=0x80121BF4u; f_802BA9F4(c); // 80121BF0
  goto L_80121BFC; // 80121BF4
L_80121BF8:;
  c->r[3]=0u+0x00000000u; // 80121BF8
L_80121BFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80121BFC
  if (crb(c,2)) { goto L_80121C20; } // 80121C00
  c->lr=0x80121C08u; f_8003361C(c); // 80121C04
  c->r[12]=R32(c->r[30]+0x000000B4u); // 80121C08
  c->r[4]=c->r[3]|c->r[3]; // 80121C0C
  c->r[3]=c->r[30]|c->r[30]; // 80121C10
  c->r[12]=R32(c->r[12]+0x00000104u); // 80121C14
  c->ctr=c->r[12]; // 80121C18
  if (true) { c->lr=0x80121C20u; dispatch(c,c->ctr); } // 80121C1C
L_80121C20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80121C20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80121C24
  c->r[30]=R32(c->r[1]+0x00000008u); // 80121C28
  c->lr=c->r[0]; // 80121C2C
  c->r[1]=c->r[1]+0x00000010u; // 80121C30
  return; // 80121C34
}

// fn_80121C38
void f_80121C38(Ctx* __restrict c) {
  trace_call(0x80121C38u);
  W32(c->r[3]+0x00000380u,c->r[4]); // 80121C38
  return; // 80121C3C
}

// fn_80121C40
void f_80121C40(Ctx* __restrict c) {
  trace_call(0x80121C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80121C40
  c->r[0]=c->lr; // 80121C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80121C48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80121C4C
  c->r[31]=c->r[3]|c->r[3]; // 80121C50
  c->r[4]=R32(c->r[3]+0x00000038u); // 80121C54
  cmps(c,0,(int32_t)c->r[4],0); // 80121C58
  if (crb(c,2)) { goto L_80121C64; } // 80121C5C
  goto L_80121C94; // 80121C60
L_80121C64:;
  c->r[3]=R32(c->r[13]+0xFFFFE8B4u); // 80121C64
  cmps(c,0,(int32_t)c->r[3],0); // 80121C68
  if (crb(c,2)) { goto L_80121C8C; } // 80121C6C
  c->r[4]=R32(c->r[31]+0x00000030u); // 80121C70
  c->r[5]=0u+0x00000000u; // 80121C74
  c->r[8]=R32(c->r[31]+0x00000034u); // 80121C78
  c->r[6]=0u+0x00000000u; // 80121C7C
  c->r[7]=0u+0x00000000u; // 80121C80
  c->lr=0x80121C88u; f_802BA9F4(c); // 80121C84
  goto L_80121C90; // 80121C88
L_80121C8C:;
  c->r[3]=0u+0x00000000u; // 80121C8C
L_80121C90:;
  c->r[4]=c->r[3]|c->r[3]; // 80121C90
L_80121C94:;
  c->r[3]=R32(c->r[4]+0x0000004Cu); // 80121C94
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80121C98
  W32(c->r[3]+0x000000A8u,c->r[0]); // 80121C9C
  c->r[0]=R32(c->r[31]+0x00000040u); // 80121CA0
  W32(c->r[3]+0x000000ACu,c->r[0]); // 80121CA4
  c->r[0]=R32(c->r[31]+0x00000044u); // 80121CA8
  W32(c->r[3]+0x000000B0u,c->r[0]); // 80121CAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80121CB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80121CB4
  c->lr=c->r[0]; // 80121CB8
  c->r[1]=c->r[1]+0x00000010u; // 80121CBC
  return; // 80121CC0
}

// fn_80121CC4
void f_80121CC4(Ctx* __restrict c) {
  trace_call(0x80121CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80121CC4
  c->r[0]=c->lr; // 80121CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80121CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80121CD0
  c->r[31]=c->r[3]|c->r[3]; // 80121CD4
  c->lr=0x80121CDCu; f_801408F8(c); // 80121CD8
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80121CDC
  c->r[3]=0u+0x80420000u; // 80121CE0
  c->r[0]=0u+0x00000000u; // 80121CE4
  W8(c->r[31]+0x000001E0u,c->r[0]); // 80121CE8
  c->r[3]=c->r[3]+0x000037E0u; // 80121CEC
  c->r[6]=0u+0x80480000u; // 80121CF0
  W32(c->r[31]+0x00000020u,c->r[3]); // 80121CF4
  c->r[3]=c->r[31]|c->r[31]; // 80121CF8
  c->r[4]=R32(c->r[31]+0x00000018u); // 80121CFC
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[0]);} // 80121D00
  {uint32_t ea=c->r[31]+0x0000018Cu; WF32(ea,c->f[0]);} // 80121D04
  W8(c->r[31]+0x000001B0u,c->r[0]); // 80121D08
  W8(c->r[31]+0x000001E1u,c->r[0]); // 80121D0C
  {uint32_t ea=c->r[6]+0xFFFFF648u; c->r[5]=R32(ea); c->r[6]=ea;} // 80121D10
  c->r[0]=R32(c->r[6]+0x00000004u); // 80121D14
  W32(c->r[31]+0x000001BCu,c->r[0]); // 80121D18
  W32(c->r[31]+0x000001B8u,c->r[5]); // 80121D1C
  c->r[0]=R32(c->r[6]+0x00000008u); // 80121D20
  W32(c->r[31]+0x000001C0u,c->r[0]); // 80121D24
  c->r[5]=R32(c->r[6]+0x00000000u); // 80121D28
  c->r[0]=R32(c->r[6]+0x00000004u); // 80121D2C
  W32(c->r[31]+0x000001CCu,c->r[0]); // 80121D30
  W32(c->r[31]+0x000001C8u,c->r[5]); // 80121D34
  c->r[0]=R32(c->r[6]+0x00000008u); // 80121D38
  W32(c->r[31]+0x000001D0u,c->r[0]); // 80121D3C
  c->r[5]=R32(c->r[6]+0x00000000u); // 80121D40
  c->r[0]=R32(c->r[6]+0x00000004u); // 80121D44
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80121D48
  W32(c->r[31]+0x000001D4u,c->r[5]); // 80121D4C
  c->r[0]=R32(c->r[6]+0x00000008u); // 80121D50
  W32(c->r[31]+0x000001DCu,c->r[0]); // 80121D54
  {uint32_t ea=c->r[31]+0x000001B4u; WF32(ea,c->f[0]);} // 80121D58
  {uint32_t ea=c->r[31]+0x000001C4u; WF32(ea,c->f[0]);} // 80121D5C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80121D60
  c->r[0]=c->r[0]|0x80000000u; // 80121D64
  W32(c->r[4]+0x00000018u,c->r[0]); // 80121D68
  c->r[4]=R32(c->r[31]+0x00000018u); // 80121D6C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80121D70
  c->r[0]=c->r[0]|0x20000000u; // 80121D74
  W32(c->r[4]+0x00000018u,c->r[0]); // 80121D78
  c->r[4]=R32(c->r[31]+0x00000018u); // 80121D7C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80121D80
  c->r[0]=c->r[0]|0x10000000u; // 80121D84
  W32(c->r[4]+0x00000018u,c->r[0]); // 80121D88
  c->r[4]=R32(c->r[31]+0x00000018u); // 80121D8C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80121D90
  c->r[0]=c->r[0]|0x08000000u; // 80121D94
  W32(c->r[4]+0x00000018u,c->r[0]); // 80121D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80121D9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80121DA0
  c->lr=c->r[0]; // 80121DA4
  c->r[1]=c->r[1]+0x00000010u; // 80121DA8
  return; // 80121DAC
}

// fn_80121DB0
void f_80121DB0(Ctx* __restrict c) {
  trace_call(0x80121DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80121DB0
  c->r[0]=c->lr; // 80121DB4
  cmps(c,0,(int32_t)c->r[3],0); // 80121DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80121DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80121DC0
  c->r[31]=c->r[4]|c->r[4]; // 80121DC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80121DC8
  c->r[30]=c->r[3]|c->r[3]; // 80121DCC
  if (crb(c,2)) { goto L_80121DEC; } // 80121DD0
  c->r[4]=0u+0x00000000u; // 80121DD4
  c->lr=0x80121DDCu; f_801409F8(c); // 80121DD8
  cmps(c,0,(int32_t)c->r[31],0); // 80121DDC
  if (!crb(c,1)) { goto L_80121DEC; } // 80121DE0
  c->r[3]=c->r[30]|c->r[30]; // 80121DE4
  c->lr=0x80121DECu; f_80244DC0(c); // 80121DE8
L_80121DEC:;
  c->r[3]=c->r[30]|c->r[30]; // 80121DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80121DF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80121DF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80121DF8
  c->lr=c->r[0]; // 80121DFC
  c->r[1]=c->r[1]+0x00000010u; // 80121E00
  return; // 80121E04
}

