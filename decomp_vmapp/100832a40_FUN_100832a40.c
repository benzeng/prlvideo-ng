
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100832a40(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM9 [16];
  undefined1 in_XMM10 [16];
  undefined1 in_XMM11 [16];
  undefined1 in_XMM12 [16];
  undefined1 in_XMM13 [16];
  undefined1 in_XMM14 [16];
  undefined1 in_XMM15 [16];
  
  uVar3 = 0x10;
  pauVar2 = (undefined1 (*) [16])(ulong)*(uint *)param_3[0xf];
  auVar4 = ~in_XMM9 & in_XMM0;
  auVar5._0_4_ = auVar4._0_4_ >> 4;
  auVar5._4_4_ = auVar4._4_4_ >> 4;
  auVar5._8_4_ = auVar4._8_4_ >> 4;
  auVar5._12_4_ = auVar4._12_4_ >> 4;
  auVar6 = pshufb(_DAT_100833270,in_XMM0 & in_XMM9);
  auVar4 = pshufb(_DAT_100833280,auVar5);
  auVar4 = auVar4 ^ auVar6 ^ *param_3;
  param_3 = param_3 + 1;
  pauVar1 = param_3;
  while( true ) {
    auVar5 = ~in_XMM9 & auVar4;
    auVar6._0_4_ = auVar5._0_4_ >> 4;
    auVar6._4_4_ = auVar5._4_4_ >> 4;
    auVar6._8_4_ = auVar5._8_4_ >> 4;
    auVar6._12_4_ = auVar5._12_4_ >> 4;
    auVar8 = pshufb(in_XMM11,auVar4 & in_XMM9);
    auVar4 = auVar4 & in_XMM9 ^ auVar6;
    auVar5 = pshufb(in_XMM10,auVar6);
    auVar7 = pshufb(in_XMM10,auVar4);
    auVar5 = pshufb(in_XMM10,auVar5 ^ auVar8);
    auVar5 = auVar5 ^ auVar4;
    auVar4 = pshufb(in_XMM10,auVar7 ^ auVar8);
    auVar4 = auVar4 ^ auVar6;
    if (pauVar1 == (undefined1 (*) [16])0x0) break;
    auVar7 = pshufb(in_XMM13,auVar5);
    auVar6 = pshufb(in_XMM12,auVar4);
    auVar6 = auVar6 ^ auVar7 ^ *param_3;
    auVar7 = pshufb(in_XMM15,auVar5);
    auVar4 = pshufb(in_XMM14,auVar4);
    auVar5 = pshufb(auVar6,*(undefined1 (*) [16])(&DAT_1008332f0 + uVar3));
    param_3 = param_3 + 1;
    auVar5 = auVar5 ^ auVar4 ^ auVar7;
    auVar6 = pshufb(auVar6,*(undefined1 (*) [16])(&DAT_100833330 + uVar3));
    auVar4 = pshufb(auVar5,*(undefined1 (*) [16])(&DAT_1008332f0 + uVar3));
    uVar3 = uVar3 + 0x10 & 0x30;
    auVar4 = auVar4 ^ auVar6 ^ auVar5;
    pauVar2 = (undefined1 (*) [16])(pauVar2[-1] + 0xf);
    pauVar1 = pauVar2;
  }
  auVar5 = pshufb(_DAT_1008332d0,auVar5);
  auVar4 = pshufb(_DAT_1008332e0,auVar4);
  auVar4 = pshufb(auVar4 ^ auVar5 ^ *param_3,*(undefined1 (*) [16])(&DAT_100833370 + uVar3));
  return auVar4._0_8_;
}

