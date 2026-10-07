
void FUN_100836850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*in_RCX) [16];
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar3 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar4 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM8 [16];
  undefined1 in_XMM9 [16];
  
  auVar1 = *in_RCX;
  auVar2 = in_RCX[1];
  auVar3._0_4_ = (uint)param_3 ^ auVar1._0_4_;
  auVar3._4_4_ = (uint)((ulong)param_3 >> 0x20) ^ auVar1._4_4_;
  auVar3._8_4_ = in_XMM2_Dc ^ auVar1._8_4_;
  auVar3._12_4_ = in_XMM2_Dd ^ auVar1._12_4_;
  auVar4._0_4_ = (uint)param_4 ^ auVar1._0_4_;
  auVar4._4_4_ = (uint)((ulong)param_4 >> 0x20) ^ auVar1._4_4_;
  auVar4._8_4_ = in_XMM3_Dc ^ auVar1._8_4_;
  auVar4._12_4_ = in_XMM3_Dd ^ auVar1._12_4_;
  auVar3 = aesdec(auVar3,auVar2);
  auVar4 = aesdec(auVar4,auVar2);
  auVar5 = aesdec(in_XMM4 ^ auVar1,auVar2);
  auVar6 = aesdec(in_XMM5 ^ auVar1,auVar2);
  auVar7 = aesdec(in_XMM6 ^ auVar1,auVar2);
  auVar8 = aesdec(in_XMM7 ^ auVar1,auVar2);
  aesdec(in_XMM8 ^ auVar1,auVar2);
  aesdec(in_XMM9 ^ auVar1,auVar2);
  FUN_1008368f0(*(undefined4 *)in_RCX[2],*(undefined4 *)in_RCX[3],auVar3._0_8_,auVar4._0_8_,
                auVar5._0_8_,auVar6._0_8_,auVar7._0_8_,auVar8._0_8_);
  return;
}

