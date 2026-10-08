
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100df0bf0(undefined4 *param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined6 uVar4;
  undefined1 auVar5 [12];
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  short sVar13;
  uint uVar14;
  uint uVar19;
  uint uVar20;
  undefined1 auVar15 [16];
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar16 [16];
  undefined1 uVar17;
  undefined2 uVar18;
  
  iVar22 = 0;
  if (param_2 != 0) {
    uVar1 = (ulong)(param_2 - 1) + 1;
    uVar9 = uVar1 & 0x1fffffffc;
    iVar22 = 0;
    iVar23 = 0;
    iVar24 = 0;
    iVar25 = 0;
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar8 = (ulong)(param_2 - 1) + 1 & 0xfffffffffffffffc;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      puVar6 = param_1;
      do {
        uVar2 = *puVar6;
        uVar17 = (undefined1)((uint)uVar2 >> 0x18);
        uVar18 = CONCAT11(uVar17,uVar17);
        uVar17 = (undefined1)((uint)uVar2 >> 0x10);
        uVar3 = CONCAT35(CONCAT21(uVar18,uVar17),CONCAT14(uVar17,uVar2));
        uVar17 = (undefined1)((uint)uVar2 >> 8);
        uVar4 = CONCAT51(CONCAT41((int)((ulong)uVar3 >> 0x20),uVar17),uVar17);
        sVar13 = CONCAT11((char)uVar2,(char)uVar2);
        uVar7 = CONCAT62(uVar4,sVar13);
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar7;
        auVar16._12_2_ = uVar18;
        auVar16._14_2_ = uVar18;
        uVar18 = (undefined2)((ulong)uVar3 >> 0x20);
        auVar15._12_4_ = auVar16._12_4_;
        auVar15._8_2_ = 0;
        auVar15._0_8_ = uVar7;
        auVar15._10_2_ = uVar18;
        auVar12._10_6_ = auVar15._10_6_;
        auVar12._8_2_ = uVar18;
        auVar12._0_8_ = uVar7;
        uVar18 = (undefined2)uVar4;
        auVar5._4_8_ = auVar12._8_8_;
        auVar5._2_2_ = uVar18;
        auVar5._0_2_ = uVar18;
        uVar14 = (int)sVar13 >> 8;
        uVar19 = auVar5._0_4_ >> 0x18;
        uVar20 = auVar12._8_4_ >> 0x18;
        uVar21 = auVar15._12_4_ >> 0x18;
        iVar22 = (uVar14 >> 7 & _DAT_101db39f0) +
                 (uVar14 >> 6 & _DAT_101db39f0) +
                 (uVar14 >> 5 & _DAT_101db39f0) +
                 (uVar14 >> 4 & _DAT_101db39f0) +
                 (uVar14 >> 3 & _DAT_101db39f0) +
                 (uVar14 >> 2 & _DAT_101db39f0) +
                 (uVar14 >> 1 & _DAT_101db39f0) + (uVar14 & _DAT_101db39f0) + iVar22;
        iVar23 = (uVar19 >> 7 & _UNK_101db39f4) +
                 (uVar19 >> 6 & _UNK_101db39f4) +
                 (uVar19 >> 5 & _UNK_101db39f4) +
                 (uVar19 >> 4 & _UNK_101db39f4) +
                 (uVar19 >> 3 & _UNK_101db39f4) +
                 (uVar19 >> 2 & _UNK_101db39f4) +
                 (uVar19 >> 1 & _UNK_101db39f4) + (uVar19 & _UNK_101db39f4) + iVar23;
        iVar24 = (uVar20 >> 7 & _UNK_101db39f8) +
                 (uVar20 >> 6 & _UNK_101db39f8) +
                 (uVar20 >> 5 & _UNK_101db39f8) +
                 (uVar20 >> 4 & _UNK_101db39f8) +
                 (uVar20 >> 3 & _UNK_101db39f8) +
                 (uVar20 >> 2 & _UNK_101db39f8) +
                 (uVar20 >> 1 & _UNK_101db39f8) + (uVar20 & _UNK_101db39f8) + iVar24;
        iVar25 = (uVar21 >> 7 & _UNK_101db39fc) +
                 (uVar21 >> 6 & _UNK_101db39fc) +
                 (uVar21 >> 5 & _UNK_101db39fc) +
                 (uVar21 >> 4 & _UNK_101db39fc) +
                 (uVar21 >> 3 & _UNK_101db39fc) +
                 (uVar21 >> 2 & _UNK_101db39fc) +
                 (uVar21 >> 1 & _UNK_101db39fc) + (uVar21 & _UNK_101db39fc) + iVar25;
        puVar6 = puVar6 + 1;
        uVar8 = uVar8 - 4;
        uVar7 = uVar9;
      } while (uVar8 != 0);
    }
    auVar11._0_4_ = iVar24 + iVar22;
    auVar11._4_4_ = iVar25 + iVar23;
    auVar11._8_4_ = iVar22 + iVar24;
    auVar11._12_4_ = iVar23 + iVar25;
    auVar12 = phaddd(auVar11,auVar11);
    iVar22 = auVar12._0_4_;
    if (uVar1 == uVar7) {
      return iVar22;
    }
    param_2 = param_2 - (int)uVar7;
    pcVar10 = (char *)((long)param_1 + uVar7);
    do {
      uVar14 = (uint)*pcVar10;
      iVar22 = (uVar14 >> 7 & 1) +
               (uVar14 >> 6 & 1) +
               (uVar14 >> 5 & 1) +
               (uVar14 >> 4 & 1) +
               (uVar14 >> 3 & 1) + (uVar14 >> 2 & 1) + (uVar14 >> 1 & 1) + (uVar14 & 1) + iVar22;
      pcVar10 = pcVar10 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar22;
}

