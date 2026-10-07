
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10084ffd0(long *param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  
  if (param_3 < 0) {
    FUN_100887ce0(3,0x91,0x77,"bn_shift.c",0x8d);
    return 0;
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  iVar18 = (int)(((uint)(param_3 >> 0x1f) >> 0x1a) + param_3) >> 6;
  iVar11 = (int)param_2[1];
  if (*(int *)((long)param_1 + 0xc) <= iVar11 + iVar18) {
    lVar8 = FUN_10084b900(param_1,iVar11 + iVar18 + 1);
    if (lVar8 == 0) {
      return 0;
    }
    iVar11 = (int)param_2[1];
  }
  lVar8 = *param_2;
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + (long)(iVar11 + iVar18) * 8) = 0;
  lVar10 = _DAT_100b55870;
  if (param_3 % 0x40 == 0) {
    if (0 < iVar11) {
      uVar9 = (ulong)iVar11;
      lVar15 = (long)iVar18;
      uVar13 = ~uVar9;
      if ((long)uVar13 < -2) {
        uVar13 = 0xfffffffffffffffe;
      }
      if (uVar13 + uVar9 != -2) {
        uVar14 = uVar13 + uVar9 + 2;
        uVar16 = (ulong)iVar11;
        uVar12 = ~uVar16;
        uVar13 = 0xfffffffffffffffe;
        if (-3 < (long)uVar12) {
          uVar13 = uVar12;
        }
        uVar19 = uVar14 & 0xfffffffffffffffc;
        uVar17 = 0;
        if ((uVar19 != 0) &&
           ((lVar8 + (-2 - uVar13) * 8 < lVar4 + -8 + (uVar16 + lVar15) * 8 ||
            (uVar17 = 0, lVar4 + ((lVar15 + -2) - uVar13) * 8 < lVar8 + -8 + uVar16 * 8)))) {
          uVar9 = uVar9 - uVar19;
          uVar13 = 0xfffffffffffffffe;
          if (-3 < (long)uVar12) {
            uVar13 = uVar12;
          }
          uVar13 = uVar13 + 2 + uVar16 & 0xfffffffffffffffc;
          do {
            lVar20 = uVar16 + lVar10;
            puVar2 = (undefined8 *)(lVar8 + -8 + lVar20 * 8);
            uVar5 = puVar2[1];
            puVar3 = (undefined8 *)(lVar8 + -0x18 + lVar20 * 8);
            uVar6 = *puVar3;
            uVar7 = puVar3[1];
            puVar3 = (undefined8 *)(lVar4 + -8 + (lVar20 + lVar15) * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            puVar2 = (undefined8 *)(lVar4 + -0x18 + (lVar20 + lVar15) * 8);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            uVar16 = uVar16 - 4;
            uVar13 = uVar13 - 4;
            uVar17 = uVar19;
          } while (uVar13 != 0);
        }
        if (uVar14 == uVar17) goto LAB_1008501f3;
      }
      lVar10 = uVar9 + 1;
      do {
        *(undefined8 *)(lVar4 + lVar15 * 8 + -0x10 + lVar10 * 8) =
             *(undefined8 *)(lVar8 + -0x10 + lVar10 * 8);
        lVar10 = lVar10 + -1;
      } while (1 < lVar10);
    }
  }
  else if (0 < iVar11) {
    lVar15 = (long)iVar11 + 1;
    lVar10 = lVar4 + (long)iVar18 * 8;
    do {
      uVar9 = *(ulong *)(lVar8 + -0x10 + lVar15 * 8);
      puVar1 = (ulong *)(lVar10 + -8 + lVar15 * 8);
      *puVar1 = *puVar1 | uVar9 >> (0x40U - (char)param_3 & 0x3f);
      *(ulong *)(lVar10 + -0x10 + lVar15 * 8) = uVar9 << ((byte)(param_3 % 0x40) & 0x3f);
      lVar15 = lVar15 + -1;
    } while (1 < lVar15);
  }
LAB_1008501f3:
  ___bzero(lVar4,(long)iVar18 << 3);
  iVar11 = (int)param_2[1] + iVar18;
  *(int *)(param_1 + 1) = (int)param_2[1] + 1 + iVar18;
  if (-1 < iVar11) {
    lVar8 = (long)iVar11;
    do {
      if (*(long *)(*param_1 + lVar8 * 8) != 0) break;
      lVar8 = lVar8 + -1;
    } while (1 < (int)lVar8 + 2);
    *(int *)(param_1 + 1) = (int)lVar8 + 1;
  }
  return 1;
}

