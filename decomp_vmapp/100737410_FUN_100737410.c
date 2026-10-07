
/* WARNING: Removing unreachable block (ram,0x000100737490) */

undefined8 FUN_100737410(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ulong *puVar16;
  int iVar17;
  bool bVar18;
  ulong uVar15;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_3 + 1);
  uVar7 = (ulong)uVar2;
  uVar12 = 0;
  iVar17 = uVar1 - uVar2;
  if ((-1 < iVar17) &&
     (((int)uVar1 <= *(int *)((long)param_1 + 0xc) || (lVar8 = FUN_10072d730(), lVar8 != 0)))) {
    puVar3 = (ulong *)*param_2;
    puVar10 = (ulong *)*param_1;
    puVar9 = puVar10;
    puVar16 = puVar3;
    if (uVar2 != 0) {
      puVar16 = (ulong *)*param_3;
      uVar14 = uVar2 - 1;
      uVar15 = (ulong)uVar14;
      if ((uVar2 & 1) == 0) {
        bVar18 = false;
        puVar6 = puVar3;
      }
      else {
        uVar7 = *puVar16;
        bVar18 = *puVar3 < uVar7;
        puVar16 = puVar16 + 1;
        *puVar10 = *puVar3 - uVar7;
        puVar9 = puVar10 + 1;
        uVar7 = uVar15;
        puVar6 = puVar3 + 1;
      }
      while (uVar14 != 0) {
        uVar11 = *puVar6;
        uVar4 = *puVar16;
        if (bVar18) {
          bVar18 = uVar11 <= uVar4;
          uVar11 = uVar11 - 1;
        }
        else {
          bVar18 = uVar11 < uVar4;
        }
        *puVar9 = uVar11 - uVar4;
        uVar11 = puVar6[1];
        uVar4 = puVar16[1];
        if (bVar18) {
          bVar18 = uVar11 <= uVar4;
          uVar11 = uVar11 - 1;
        }
        else {
          bVar18 = uVar11 < uVar4;
        }
        puVar9[1] = uVar11 - uVar4;
        puVar16 = puVar16 + 2;
        uVar14 = (int)uVar7 - 2;
        puVar9 = puVar9 + 2;
        uVar7 = (ulong)uVar14;
        puVar6 = puVar6 + 2;
      }
      if (bVar18) {
        if (uVar1 == uVar2) {
          return 0;
        }
        lVar8 = 0;
        do {
          bVar18 = iVar17 == 1;
          iVar17 = iVar17 + -1;
          lVar5 = *(long *)((long)puVar3 + lVar8 + uVar15 * 8 + 8);
          *(long *)((long)puVar10 + lVar8 + uVar15 * 8 + 8) = lVar5 + -1;
          puVar16 = (ulong *)((long)puVar3 + lVar8 + uVar15 * 8 + 0x10);
          puVar9 = (ulong *)((long)puVar10 + lVar8 + uVar15 * 8 + 0x10);
          if (bVar18) break;
          lVar8 = lVar8 + 8;
        } while (lVar5 == 0);
      }
      else {
        puVar9 = puVar10 + uVar15 + 1;
        puVar16 = puVar3 + uVar15 + 1;
      }
    }
    if ((puVar9 != puVar16) && (iVar17 != 0)) {
      lVar8 = 0;
      do {
        puVar9[lVar8] = puVar16[lVar8];
        iVar13 = (int)lVar8;
        if (((iVar17 + -1 == iVar13) ||
            (puVar9[lVar8 + 1] = puVar16[lVar8 + 1], iVar17 + -2 == iVar13)) ||
           (puVar9[lVar8 + 2] = puVar16[lVar8 + 2], iVar17 + -3 == iVar13)) break;
        puVar9[lVar8 + 3] = puVar16[lVar8 + 3];
        lVar8 = lVar8 + 4;
      } while (iVar17 != (int)lVar8);
    }
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)(param_1 + 2) = 0;
    uVar12 = 1;
    if (0 < (int)uVar1) {
      puVar10 = puVar10 + (long)(int)uVar1 + -1;
      iVar17 = uVar1 + 1;
      do {
        if (*puVar10 != 0) {
          return 1;
        }
        puVar10 = puVar10 + -1;
        *(int *)(param_1 + 1) = iVar17 + -2;
        iVar17 = iVar17 + -1;
      } while (1 < iVar17);
    }
  }
  return uVar12;
}

