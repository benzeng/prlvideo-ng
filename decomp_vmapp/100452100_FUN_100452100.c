
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100452100(uint *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar8 = _UNK_100b3f62c;
  uVar7 = _UNK_100b3f628;
  uVar6 = _UNK_100b3f624;
  uVar5 = _DAT_100b3f620;
  uVar4 = _UNK_100b2ea4c;
  uVar3 = _UNK_100b2ea48;
  uVar2 = _UNK_100b2ea44;
  uVar11 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar9 = (ulong)(param_3 - 1);
    uVar15 = uVar9 + 1 & 0x1fffffff8;
    puVar12 = param_2;
    puVar13 = param_1;
    uVar14 = 0;
    if ((uVar15 != 0) && ((param_2 + uVar9 < param_1 || (uVar14 = 0, param_1 + uVar9 < param_2)))) {
      puVar12 = param_2 + uVar15;
      param_3 = param_3 - (int)uVar15;
      puVar13 = param_1 + uVar15;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      uVar10 = uVar9 + 1 & 0xfffffffffffffff8;
      do {
        uVar16 = param_2[-4] & uVar11;
        uVar17 = param_2[-3] & uVar2;
        uVar18 = param_2[-2] & uVar3;
        uVar19 = param_2[-1] & uVar4;
        uVar20 = *param_2 & uVar11;
        uVar21 = param_2[1] & uVar2;
        uVar22 = param_2[2] & uVar3;
        uVar23 = param_2[3] & uVar4;
        param_1[-4] = uVar16 << 8 | uVar16 | uVar16 << 0x10 | uVar5;
        param_1[-3] = uVar17 << 8 | uVar17 | uVar17 << 0x10 | uVar6;
        param_1[-2] = uVar18 << 8 | uVar18 | uVar18 << 0x10 | uVar7;
        param_1[-1] = uVar19 << 8 | uVar19 | uVar19 << 0x10 | uVar8;
        *param_1 = uVar20 << 8 | uVar20 | uVar20 << 0x10 | uVar5;
        param_1[1] = uVar21 << 8 | uVar21 | uVar21 << 0x10 | uVar6;
        param_1[2] = uVar22 << 8 | uVar22 | uVar22 << 0x10 | uVar7;
        param_1[3] = uVar23 << 8 | uVar23 | uVar23 << 0x10 | uVar8;
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 8;
        uVar14 = uVar15;
      } while (uVar10 != 0);
    }
    if (uVar9 + 1 != uVar14) {
      uVar11 = param_3 - 1;
      if ((param_3 & 1) != 0) {
        uVar1 = (undefined1)*puVar12;
        puVar12 = puVar12 + 1;
        *puVar13 = CONCAT12(uVar1,CONCAT11(uVar1,uVar1)) | 0xff000000;
        puVar13 = puVar13 + 1;
        param_3 = uVar11;
      }
      while (uVar11 != 0) {
        uVar1 = (undefined1)*puVar12;
        *puVar13 = CONCAT12(uVar1,CONCAT11(uVar1,uVar1)) | 0xff000000;
        uVar1 = (undefined1)puVar12[1];
        puVar13[1] = CONCAT12(uVar1,CONCAT11(uVar1,uVar1)) | 0xff000000;
        puVar12 = puVar12 + 2;
        puVar13 = puVar13 + 2;
        uVar11 = param_3 - 2;
        param_3 = uVar11;
      }
    }
  }
  return;
}

