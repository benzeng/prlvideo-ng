
/* WARNING: Removing unreachable block (ram,0x0001003ea4c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003ea430(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lVar21;
  
  lVar1 = *(long *)(param_1 + 0x128);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar1 + 0x10) + 3);
  iVar11 = 0;
  if (uVar7 != 0) {
    puVar2 = (uint *)(lVar1 + 0x24);
    uVar4 = 0;
    uVar10 = 0;
    do {
      if ((puVar2[-1] <= param_2) && (param_2 <= *puVar2)) {
        uVar10 = uVar4 & 0xffffffff;
      }
      uVar4 = uVar4 + 1;
      puVar2 = (uint *)((long)puVar2 + 0x12);
    } while ((long)uVar4 < (long)uVar7);
    iVar11 = 0;
    uVar9 = (uint)uVar10;
    if (0 < (int)uVar9) {
      uVar6 = uVar9 - 1;
      uVar7 = (ulong)uVar6 + 1;
      uVar8 = uVar7 & 0x1fffffff8;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      uVar4 = 0;
      if (uVar8 != 0) {
        piVar5 = (int *)(lVar1 + 0x2c);
        iVar11 = 0;
        iVar12 = 0;
        iVar13 = 0;
        iVar14 = 0;
        uVar3 = 0;
        iVar15 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
        do {
          auVar17._8_4_ = (int)uVar3;
          auVar17._0_8_ = uVar3;
          auVar17._12_4_ = (int)(uVar3 >> 0x20);
          lVar21 = auVar17._8_8_;
          iVar11 = iVar11 + *piVar5 + _DAT_100b406e0;
          iVar12 = iVar12 + *(int *)(lVar1 + 0x2c + (lVar21 + 1) * 0x12) + _UNK_100b406e4;
          iVar13 = iVar13 + *(int *)(lVar1 + 0x2c + (uVar3 + _DAT_100b4afd0) * 0x12) +
                   _UNK_100b406e8;
          iVar14 = iVar14 + *(int *)(lVar1 + 0x2c + (lVar21 + _UNK_100b4afd8) * 0x12) +
                   _UNK_100b406ec;
          iVar15 = iVar15 + *(int *)(lVar1 + 0x2c + (uVar3 + _DAT_100b4aff0) * 0x12) +
                   _DAT_100b406e0;
          iVar18 = iVar18 + *(int *)(lVar1 + 0x2c + (lVar21 + _UNK_100b4aff8) * 0x12) +
                   _UNK_100b406e4;
          iVar19 = iVar19 + *(int *)(lVar1 + 0x2c + (uVar3 + _DAT_100b4afe0) * 0x12) +
                   _UNK_100b406e8;
          iVar20 = iVar20 + *(int *)(lVar1 + 0x2c + (lVar21 + _UNK_100b4afe8) * 0x12) +
                   _UNK_100b406ec;
          uVar3 = uVar3 + 8;
          piVar5 = piVar5 + 0x24;
          uVar4 = uVar8;
        } while (((ulong)uVar6 + 1 & 0xfffffffffffffff8) != uVar3);
      }
      auVar16._0_4_ = iVar13 + iVar19 + iVar11 + iVar15;
      auVar16._4_4_ = iVar14 + iVar20 + iVar12 + iVar18;
      auVar16._8_4_ = iVar11 + iVar15 + iVar13 + iVar19;
      auVar16._12_4_ = iVar12 + iVar18 + iVar14 + iVar20;
      auVar17 = phaddd(auVar16,auVar16);
      iVar11 = auVar17._0_4_;
      if (uVar7 != uVar4) {
        iVar12 = (int)uVar4;
        if ((uVar10 & 3) != 0) {
          piVar5 = (int *)(lVar1 + 0x2c + uVar4 * 0x12);
          iVar13 = -(uVar9 & 3);
          do {
            iVar11 = iVar11 + 0x96 + *piVar5;
            uVar4 = uVar4 + 1;
            piVar5 = (int *)((long)piVar5 + 0x12);
            iVar13 = iVar13 + 1;
          } while (iVar13 != 0);
        }
        if (2 < uVar6 - iVar12) {
          piVar5 = (int *)(lVar1 + 0x62 + uVar4 * 0x12);
          iVar12 = (uVar9 + 3) - ((int)uVar4 + 3);
          do {
            iVar11 = *piVar5 + 600 +
                     iVar11 + *(int *)((long)piVar5 + -0x36) + piVar5[-9] +
                     *(int *)((long)piVar5 + -0x12);
            piVar5 = piVar5 + 0x12;
            iVar12 = iVar12 + -4;
          } while (iVar12 != 0);
        }
      }
    }
  }
  return iVar11;
}

