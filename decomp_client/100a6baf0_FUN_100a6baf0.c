
/* WARNING: Removing unreachable block (ram,0x000100a6bb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a6baf0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  uVar5 = (ulong)uVar1;
  iVar8 = 0;
  if (uVar5 != 0) {
    uVar4 = 1;
    if (1 < uVar1) {
      uVar4 = uVar5;
    }
    iVar8 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar13 = 0;
    uVar2 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    if (uVar1 != (uVar1 & 7)) {
      uVar2 = uVar5 - (uVar1 & 7);
      iVar8 = 0;
      iVar10 = 0;
      iVar11 = 0;
      iVar13 = 0;
      lVar3 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      do {
        auVar7._8_4_ = (int)lVar3;
        auVar7._0_8_ = lVar3;
        auVar7._12_4_ = (int)((ulong)lVar3 >> 0x20);
        lVar9 = lVar3 + uVar4;
        lVar12 = auVar7._8_8_ + uVar4;
        iVar8 = *(int *)(param_1 + 0x84 + lVar9 * 8) + iVar8;
        iVar10 = *(int *)(param_1 + 0x84 + (lVar12 + 1) * 8) + iVar10;
        iVar11 = *(int *)(param_1 + 0x84 + (lVar9 + _DAT_101cd4570) * 8) + iVar11;
        iVar13 = *(int *)(param_1 + 0x84 + (lVar12 + _UNK_101cd4578) * 8) + iVar13;
        iVar14 = *(int *)(param_1 + 0x84 + (lVar9 + _DAT_101cd4590) * 8) + iVar14;
        iVar15 = *(int *)(param_1 + 0x84 + (lVar12 + _UNK_101cd4598) * 8) + iVar15;
        iVar16 = *(int *)(param_1 + 0x84 + (lVar9 + _DAT_101cd4580) * 8) + iVar16;
        iVar17 = *(int *)(param_1 + 0x84 + (lVar12 + _UNK_101cd4588) * 8) + iVar17;
        lVar3 = lVar3 + 8;
      } while (uVar5 - (uVar5 & 7) != lVar3);
    }
    auVar6._0_4_ = iVar11 + iVar16 + iVar8 + iVar14;
    auVar6._4_4_ = iVar13 + iVar17 + iVar10 + iVar15;
    auVar6._8_4_ = iVar8 + iVar14 + iVar11 + iVar16;
    auVar6._12_4_ = iVar10 + iVar15 + iVar13 + iVar17;
    auVar7 = phaddd(auVar6,auVar6);
    iVar8 = auVar7._0_4_;
    if (uVar5 != uVar2) {
      do {
        iVar8 = iVar8 + *(int *)(param_1 + 0x84 + uVar4 * 8 + uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar5);
    }
  }
  return iVar8;
}

