
/* WARNING: Removing unreachable block (ram,0x000100847a56) */

undefined8 FUN_1008479e0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong *puVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  ulong uVar14;
  
  uVar17 = *(uint *)(param_2 + 1);
  uVar10 = *(uint *)(param_3 + 1);
  uVar8 = (ulong)uVar10;
  iVar16 = uVar17 - uVar10;
  if (iVar16 < 0) {
    FUN_100887ce0(3,0x73,100,"bn_add.c",0xb7);
    uVar7 = 0;
  }
  else {
    if ((*(int *)((long)param_1 + 0xc) < (int)uVar17) &&
       (lVar5 = FUN_10084b900(param_1,uVar17), lVar5 == 0)) {
      return 0;
    }
    puVar1 = (ulong *)*param_2;
    puVar9 = (ulong *)*param_1;
    puVar6 = puVar9;
    puVar15 = puVar1;
    if (uVar10 != 0) {
      puVar15 = (ulong *)*param_3;
      uVar13 = uVar10 - 1;
      uVar14 = (ulong)uVar13;
      if ((uVar10 & 1) == 0) {
        bVar18 = false;
        puVar4 = puVar1;
      }
      else {
        uVar8 = *puVar15;
        bVar18 = *puVar1 < uVar8;
        puVar15 = puVar15 + 1;
        *puVar9 = *puVar1 - uVar8;
        puVar6 = puVar9 + 1;
        uVar8 = uVar14;
        puVar4 = puVar1 + 1;
      }
      while (uVar13 != 0) {
        uVar11 = *puVar4;
        uVar2 = *puVar15;
        if (bVar18) {
          bVar18 = uVar11 <= uVar2;
          uVar11 = uVar11 - 1;
        }
        else {
          bVar18 = uVar11 < uVar2;
        }
        *puVar6 = uVar11 - uVar2;
        uVar11 = puVar4[1];
        uVar2 = puVar15[1];
        if (bVar18) {
          bVar18 = uVar11 <= uVar2;
          uVar11 = uVar11 - 1;
        }
        else {
          bVar18 = uVar11 < uVar2;
        }
        puVar6[1] = uVar11 - uVar2;
        puVar15 = puVar15 + 2;
        uVar13 = (int)uVar8 - 2;
        puVar6 = puVar6 + 2;
        uVar8 = (ulong)uVar13;
        puVar4 = puVar4 + 2;
      }
      if (bVar18) {
        if (uVar17 == uVar10) {
          return 0;
        }
        lVar5 = 0;
        do {
          bVar18 = iVar16 == 1;
          iVar16 = iVar16 + -1;
          lVar3 = *(long *)((long)puVar1 + lVar5 + uVar14 * 8 + 8);
          *(long *)((long)puVar9 + lVar5 + uVar14 * 8 + 8) = lVar3 + -1;
          puVar15 = (ulong *)((long)puVar1 + lVar5 + uVar14 * 8 + 0x10);
          puVar6 = (ulong *)((long)puVar9 + lVar5 + uVar14 * 8 + 0x10);
          if (bVar18) break;
          lVar5 = lVar5 + 8;
        } while (lVar3 == 0);
      }
      else {
        puVar6 = puVar9 + uVar14 + 1;
        puVar15 = puVar1 + uVar14 + 1;
      }
    }
    if ((puVar6 != puVar15) && (iVar16 != 0)) {
      lVar5 = 0;
      do {
        puVar6[lVar5] = puVar15[lVar5];
        iVar12 = (int)lVar5;
        if (((iVar16 + -1 == iVar12) ||
            (puVar6[lVar5 + 1] = puVar15[lVar5 + 1], iVar16 + -2 == iVar12)) ||
           (puVar6[lVar5 + 2] = puVar15[lVar5 + 2], iVar16 + -3 == iVar12)) break;
        puVar6[lVar5 + 3] = puVar15[lVar5 + 3];
        lVar5 = lVar5 + 4;
      } while (iVar16 != (int)lVar5);
    }
    *(uint *)(param_1 + 1) = uVar17;
    *(undefined4 *)(param_1 + 2) = 0;
    uVar7 = 1;
    if (0 < (int)uVar17) {
      puVar9 = puVar9 + (long)(int)uVar17 + -1;
      do {
        uVar10 = uVar17;
        if (*puVar9 != 0) break;
        puVar9 = puVar9 + -1;
        uVar10 = uVar17 - 1;
        bVar18 = 1 < (int)uVar17;
        uVar17 = uVar10;
      } while (bVar18);
      *(uint *)(param_1 + 1) = uVar10;
    }
  }
  return uVar7;
}

