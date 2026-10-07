
undefined8 FUN_100736d50(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  
  plVar21 = param_2;
  if ((int)param_2[1] < (int)param_3[1]) {
    plVar21 = param_3;
    param_3 = param_2;
  }
  iVar2 = (int)plVar21[1];
  iVar3 = (int)param_3[1];
  lVar19 = (long)iVar3;
  if ((*(int *)((long)param_1 + 0xc) <= iVar2) &&
     (lVar8 = FUN_10072d730(param_1,iVar2 + 1), lVar8 == 0)) {
    return 0;
  }
  *(int *)(param_1 + 1) = iVar2;
  uVar20 = iVar2 - iVar3;
  lVar8 = *plVar21;
  lVar4 = *param_1;
  lVar9 = FUN_100737dd0(lVar4,lVar8,*param_3,iVar3);
  if (lVar9 == 0) {
    puVar10 = (undefined8 *)(lVar4 + lVar19 * 8);
    puVar12 = (undefined8 *)(lVar8 + lVar19 * 8);
  }
  else {
    lVar19 = lVar19 * 8;
    do {
      lVar22 = lVar8;
      lVar9 = lVar4;
      if (uVar20 == 0) {
        *(undefined8 *)(lVar9 + lVar19) = 1;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        goto LAB_100736f4a;
      }
      uVar20 = uVar20 - 1;
      lVar14 = *(long *)(lVar19 + lVar22) + 1;
      *(long *)(lVar19 + lVar9) = lVar14;
      lVar4 = lVar9 + 8;
      lVar8 = lVar22 + 8;
    } while (lVar14 == 0);
    puVar12 = (undefined8 *)(lVar22 + 8 + lVar19);
    puVar10 = (undefined8 *)(lVar9 + 8 + lVar19);
  }
  if ((uVar20 != 0) && (puVar10 != puVar12)) {
    uVar17 = (ulong)(uVar20 - 1);
    uVar16 = uVar17 + 1 & 0x1fffffffc;
    puVar11 = puVar10;
    puVar13 = puVar12;
    uVar15 = 0;
    if ((uVar16 != 0) && ((puVar12 + uVar17 < puVar10 || (uVar15 = 0, puVar10 + uVar17 < puVar12))))
    {
      puVar11 = puVar10 + uVar16;
      uVar20 = uVar20 - (int)uVar16;
      puVar13 = puVar12 + uVar16;
      puVar10 = puVar10 + 2;
      puVar12 = puVar12 + 2;
      uVar18 = uVar17 + 1 & 0xfffffffffffffffc;
      do {
        uVar5 = puVar12[-1];
        uVar6 = *puVar12;
        uVar7 = puVar12[1];
        puVar10[-2] = puVar12[-2];
        puVar10[-1] = uVar5;
        *puVar10 = uVar6;
        puVar10[1] = uVar7;
        puVar10 = puVar10 + 4;
        puVar12 = puVar12 + 4;
        uVar18 = uVar18 - 4;
        uVar15 = uVar16;
      } while (uVar18 != 0);
    }
    if (uVar17 + 1 != uVar15) {
      uVar1 = uVar20 - 1;
      if ((uVar20 & 7) != 0) {
        lVar8 = 0;
        lVar19 = 0;
        do {
          puVar11[lVar19] = puVar13[lVar19];
          lVar19 = lVar19 + 1;
          lVar8 = lVar8 + -8;
        } while ((uVar20 & 7) != (uint)lVar19);
        puVar11 = (undefined8 *)((long)puVar11 - lVar8);
        uVar20 = uVar20 - (uint)lVar19;
        puVar13 = (undefined8 *)((long)puVar13 - lVar8);
      }
      if (6 < uVar1) {
        do {
          *puVar11 = *puVar13;
          puVar11[1] = puVar13[1];
          puVar11[2] = puVar13[2];
          puVar11[3] = puVar13[3];
          puVar11[4] = puVar13[4];
          puVar11[5] = puVar13[5];
          puVar11[6] = puVar13[6];
          uVar20 = uVar20 - 8;
          puVar10 = puVar13 + 7;
          puVar13 = puVar13 + 8;
          puVar11[7] = *puVar10;
          puVar11 = puVar11 + 8;
        } while (uVar20 != 0);
      }
    }
  }
LAB_100736f4a:
  *(undefined4 *)(param_1 + 2) = 0;
  return 1;
}

