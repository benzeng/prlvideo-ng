
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044ece0(uint *param_1,undefined1 (*param_2) [16],int param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar11 = _UNK_100b42e58;
  iVar10 = _DAT_100b42e50;
  uVar9 = _UNK_100b42e48;
  iVar8 = _DAT_100b42e40;
  uVar1 = _UNK_100b406e8;
  iVar7 = _DAT_100b406e0;
  iVar6 = _UNK_100b3f6bc;
  iVar5 = _UNK_100b3f6b8;
  iVar4 = _UNK_100b3f6b4;
  iVar3 = _DAT_100b3f6b0;
  auVar2 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar12 = (ulong)(param_3 - 1);
    uVar17 = uVar12 + 1 & 0x1fffffffc;
    pauVar14 = param_2;
    puVar15 = param_1;
    uVar16 = 0;
    if ((uVar17 != 0) &&
       ((*param_2 + uVar12 * 4 < param_1 ||
        (uVar16 = 0, (undefined1 (*) [16])(param_1 + uVar12) < param_2)))) {
      puVar15 = param_1 + uVar17;
      pauVar14 = (undefined1 (*) [16])(*param_2 + uVar17 * 4);
      param_3 = param_3 - (int)uVar17;
      uVar13 = uVar12 + 1 & 0xfffffffffffffffc;
      do {
        auVar18 = *param_2;
        auVar19._0_4_ = auVar18._0_4_ >> 0x10;
        auVar19._4_4_ = auVar18._4_4_ >> 0x10;
        auVar19._8_4_ = auVar18._8_4_ >> 0x10;
        auVar19._12_4_ = auVar18._12_4_ >> 0x10;
        auVar19 = auVar19 & auVar2;
        auVar20._0_4_ = auVar18._0_4_ >> 8;
        auVar20._4_4_ = auVar18._4_4_ >> 8;
        auVar20._8_4_ = auVar18._8_4_ >> 8;
        auVar20._12_4_ = auVar18._12_4_ >> 8;
        auVar20 = auVar20 & auVar2;
        auVar18 = auVar18 & auVar2;
        *param_1 = (uint)(auVar18._0_4_ * iVar10 + auVar19._0_4_ * iVar8 + auVar20._0_4_ * iVar7 +
                         iVar3) >> 8;
        param_1[1] = (uint)(auVar18._4_4_ * iVar10 + auVar19._4_4_ * iVar8 + auVar20._4_4_ * iVar7 +
                           iVar4) >> 8;
        param_1[2] = (uint)((int)((auVar18._8_8_ & 0xffffffff) * (ulong)uVar11) +
                            (int)((auVar19._8_8_ & 0xffffffff) * (ulong)uVar9) +
                            (int)((auVar20._8_8_ & 0xffffffff) * (ulong)uVar1) + iVar5) >> 8;
        param_1[3] = auVar18._12_4_ * uVar11 + auVar19._12_4_ * uVar9 + auVar20._12_4_ * uVar1 +
                     iVar6 >> 8;
        param_2 = param_2 + 1;
        param_1 = param_1 + 4;
        uVar13 = uVar13 - 4;
        uVar16 = uVar17;
      } while (uVar13 != 0);
    }
    if (uVar12 + 1 != uVar16) {
      do {
        uVar1 = *(uint *)*pauVar14;
        pauVar14 = (undefined1 (*) [16])(*pauVar14 + 4);
        *puVar15 = (uVar1 >> 8 & 0xff) * 0x96 + 0x80 +
                   (uVar1 & 0xff) * 0x1d + (uVar1 >> 0x10 & 0xff) * 0x4d >> 8;
        puVar15 = puVar15 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

