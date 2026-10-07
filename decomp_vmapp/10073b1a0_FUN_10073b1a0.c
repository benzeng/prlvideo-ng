
void FUN_10073b1a0(undefined8 *param_1,ulong *param_2,uint param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined1 (*pauVar18) [16];
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  int iVar23;
  uint uVar24;
  ulong *puVar25;
  
  iVar15 = param_3 * 2;
  param_1[(int)(param_3 * 2 + -1)] = 0;
  *param_1 = 0;
  pauVar18 = param_4;
  if ((int)param_3 < 2) {
LAB_10073b272:
    FUN_100737dd0(param_1,param_1,param_1,iVar15);
    if ((int)param_3 < 1) goto LAB_10073b3bb;
    if (3 < param_3) {
      uVar20 = param_3 - 4;
      uVar24 = uVar20 >> 2;
      puVar17 = param_2;
      do {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *puVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar17;
        *pauVar18 = auVar1 * auVar8;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = puVar17[1];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = puVar17[1];
        pauVar18[1] = auVar2 * auVar9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = puVar17[2];
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar17[2];
        pauVar18[2] = auVar3 * auVar10;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar17[3];
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar17[3];
        pauVar18[3] = auVar4 * auVar11;
        param_3 = param_3 - 4;
        puVar17 = puVar17 + 4;
        pauVar18 = pauVar18 + 4;
      } while (3 < param_3);
      param_3 = uVar20 + uVar24 * -4;
      if (param_3 == 0) goto LAB_10073b3bb;
      param_2 = param_2 + (ulong)uVar24 * 4 + 4;
      pauVar18 = param_4 + (ulong)uVar24 * 4 + 4;
    }
  }
  else {
    iVar23 = param_3 - 1;
    uVar16 = FUN_100737ec0(param_1 + 1,param_2 + 1,iVar23,*param_2);
    param_1[(long)iVar23 + 1] = uVar16;
    if (2 < (int)param_3) {
      puVar21 = param_1 + 3;
      puVar19 = param_1 + (long)(int)(param_3 - 2) + 3;
      puVar17 = param_2;
      puVar25 = param_2 + 1;
      do {
        iVar23 = iVar23 + -1;
        puVar22 = puVar17 + 2;
        uVar16 = FUN_100739c90(puVar21,puVar22,iVar23,*puVar25);
        *puVar19 = uVar16;
        puVar21 = puVar21 + 2;
        puVar19 = puVar19 + 1;
        puVar17 = puVar25;
        puVar25 = puVar22;
      } while (1 < iVar23);
      goto LAB_10073b272;
    }
    FUN_100737dd0(param_1,param_1,param_1,iVar15);
    param_3 = 2;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *param_2;
  *pauVar18 = auVar5 * auVar12;
  if ((param_3 != 1) &&
     (auVar6._8_8_ = 0, auVar6._0_8_ = param_2[1], auVar13._8_8_ = 0, auVar13._0_8_ = param_2[1],
     pauVar18[1] = auVar6 * auVar13, param_3 != 2)) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_2[2];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_2[2];
    pauVar18[2] = auVar7 * auVar14;
  }
LAB_10073b3bb:
  FUN_100737dd0(param_1,param_1,param_4,iVar15);
  return;
}

