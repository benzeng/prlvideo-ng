
undefined8
_aesni_set_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar14 = *param_6;
  *param_5 = auVar14;
  pauVar10 = param_5 + 1;
  auVar13 = aeskeygenassist(auVar14,1);
  uVar12 = FUN_10061b850(auVar14._0_4_,auVar13._0_8_,param_3,param_4,0);
  auVar14._8_4_ = extraout_XMM0_Dc;
  auVar14._0_8_ = uVar12;
  auVar14._12_4_ = extraout_XMM0_Dd;
  auVar14 = aeskeygenassist(auVar14,2);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar13._8_4_ = extraout_XMM0_Dc_00;
  auVar13._0_8_ = uVar12;
  auVar13._12_4_ = extraout_XMM0_Dd_00;
  auVar14 = aeskeygenassist(auVar13,4);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar1._8_4_ = extraout_XMM0_Dc_01;
  auVar1._0_8_ = uVar12;
  auVar1._12_4_ = extraout_XMM0_Dd_01;
  auVar14 = aeskeygenassist(auVar1,8);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar2._8_4_ = extraout_XMM0_Dc_02;
  auVar2._0_8_ = uVar12;
  auVar2._12_4_ = extraout_XMM0_Dd_02;
  auVar14 = aeskeygenassist(auVar2,0x10);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar3._8_4_ = extraout_XMM0_Dc_03;
  auVar3._0_8_ = uVar12;
  auVar3._12_4_ = extraout_XMM0_Dd_03;
  auVar14 = aeskeygenassist(auVar3,0x20);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar4._8_4_ = extraout_XMM0_Dc_04;
  auVar4._0_8_ = uVar12;
  auVar4._12_4_ = extraout_XMM0_Dd_04;
  auVar14 = aeskeygenassist(auVar4,0x40);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar5._8_4_ = extraout_XMM0_Dc_05;
  auVar5._0_8_ = uVar12;
  auVar5._12_4_ = extraout_XMM0_Dd_05;
  auVar14 = aeskeygenassist(auVar5,0x80);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar6._8_4_ = extraout_XMM0_Dc_06;
  auVar6._0_8_ = uVar12;
  auVar6._12_4_ = extraout_XMM0_Dd_06;
  auVar14 = aeskeygenassist(auVar6,0x1b);
  uVar12 = FUN_10061b850((int)uVar12,auVar14._0_8_);
  auVar7._8_4_ = extraout_XMM0_Dc_07;
  auVar7._0_8_ = uVar12;
  auVar7._12_4_ = extraout_XMM0_Dd_07;
  auVar14 = aeskeygenassist(auVar7,0x36);
  FUN_10061b850((int)uVar12,auVar14._0_8_);
  uVar12 = *(undefined8 *)(*param_5 + 8);
  uVar8 = *(undefined8 *)pauVar10[-1];
  uVar9 = *(undefined8 *)(pauVar10[-1] + 8);
  *(undefined8 *)pauVar10[0xe] = *(undefined8 *)*param_5;
  *(undefined8 *)(pauVar10[0xe] + 8) = uVar12;
  *(undefined8 *)param_5[0xf] = uVar8;
  *(undefined8 *)(param_5[0xf] + 8) = uVar9;
  param_5 = param_5 + 1;
  pauVar11 = pauVar10 + 0xd;
  do {
    auVar14 = aesimc(*param_5);
    *pauVar11 = auVar14;
    param_5 = param_5 + 1;
    pauVar11 = pauVar11 + -1;
  } while (param_5 < pauVar10 + -1);
  return 0;
}

