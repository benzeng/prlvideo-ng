
undefined8 FUN_100c32c10(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  
  uVar19 = *(uint *)(param_3 + 0x28);
  lVar24 = (long)(int)uVar19;
  if (lVar24 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    iVar23 = uVar19 * 2;
    if ((*(int *)((long)param_2 + 0xc) < iVar23) &&
       (lVar13 = FUN_100c26b00(param_2,iVar23), lVar13 == 0)) {
      return 0;
    }
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    plVar18 = (long *)*param_2;
    iVar7 = (int)param_2[1];
    if (iVar7 < iVar23) {
      ___bzero(plVar18 + iVar7,(ulong)((uVar19 * 2 + -1) - iVar7) * 8 + 8);
    }
    *(int *)(param_2 + 1) = iVar23;
    uVar26 = 0;
    if (0 < (int)uVar19) {
      lVar13 = *(long *)(param_3 + 0x50);
      uVar26 = 0;
      uVar25 = uVar19;
      do {
        lVar14 = FUN_100c2ec50(plVar18,uVar8,uVar19,*plVar18 * lVar13);
        uVar22 = lVar14 + uVar26 + plVar18[lVar24];
        uVar26 = (ulong)((uint)uVar26 | (uint)(lVar14 + uVar26 != 0)) &
                 (ulong)(uVar22 <= (ulong)plVar18[lVar24]);
        plVar18[lVar24] = uVar22;
        plVar18 = plVar18 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    if ((*(int *)((long)param_1 + 0xc) < (int)uVar19) &&
       (lVar13 = FUN_100c26b00(param_1,uVar19), lVar13 == 0)) {
      return 0;
    }
    *(uint *)(param_1 + 1) = uVar19;
    *(int *)(param_1 + 2) = (int)param_2[2];
    uVar9 = *param_1;
    lVar13 = *param_2;
    uVar22 = lVar13 + lVar24 * 8;
    lVar14 = FUN_100c2f030(uVar9,uVar22,uVar8,uVar19);
    uVar26 = ~(uVar26 - lVar14) & uVar9 | uVar22 & uVar26 - lVar14;
    uVar25 = 0;
    if (4 < (int)uVar19) {
      lVar14 = lVar13 + 0x18 + lVar24 * 8;
      lVar21 = 0;
      do {
        uVar8 = *(undefined8 *)(uVar26 + lVar21 * 8);
        uVar10 = *(undefined8 *)(uVar26 + 8 + lVar21 * 8);
        uVar11 = *(undefined8 *)(uVar26 + 0x10 + lVar21 * 8);
        *(undefined8 *)(lVar14 + -0x18 + lVar21 * 8) = 0;
        uVar12 = *(undefined8 *)(uVar26 + 0x18 + lVar21 * 8);
        *(undefined8 *)(lVar14 + -0x10 + lVar21 * 8) = 0;
        *(undefined8 *)(uVar9 + lVar21 * 8) = uVar8;
        *(undefined8 *)(lVar14 + -8 + lVar21 * 8) = 0;
        *(undefined8 *)(uVar9 + 8 + lVar21 * 8) = uVar10;
        *(undefined8 *)(lVar14 + lVar21 * 8) = 0;
        *(undefined8 *)(uVar9 + 0x10 + lVar21 * 8) = uVar11;
        *(undefined8 *)(uVar9 + 0x18 + lVar21 * 8) = uVar12;
        lVar21 = lVar21 + 4;
      } while (lVar21 < (int)(uVar19 - 4));
      uVar25 = 4;
      if (4 < (int)(uVar19 - 4)) {
        uVar25 = uVar19 - 1 & 0xfffffffc;
      }
    }
    if ((int)uVar25 < (int)uVar19) {
      lVar21 = (long)(int)uVar25;
      uVar22 = (ulong)((uVar19 - 1) - uVar25);
      lVar14 = uVar22 + 1 + lVar21;
      if ((uVar22 + 1 & 0x1fffffffc) != 0) {
        uVar5 = uVar9 + lVar21 * 8;
        uVar6 = uVar9 + (lVar21 + uVar22) * 8;
        uVar1 = lVar13 + (lVar21 + lVar24) * 8;
        uVar2 = lVar13 + (lVar21 + lVar24 + uVar22) * 8;
        uVar3 = uVar26 + lVar21 * 8;
        uVar4 = uVar26 + (lVar21 + uVar22) * 8;
        if (((uVar2 < uVar5 || uVar6 < uVar1) && (uVar4 < uVar5 || uVar6 < uVar3)) &&
           (uVar4 < uVar1 || uVar2 < uVar3)) {
          lVar21 = lVar21 + (uVar22 + 1 & 0x1fffffffc);
          lVar15 = (long)(int)uVar25;
          puVar17 = (undefined8 *)(lVar13 + 0x10 + (lVar15 + lVar24) * 8);
          puVar20 = (undefined8 *)(uVar9 + 0x10 + lVar15 * 8);
          puVar16 = (undefined8 *)(uVar26 + 0x10 + lVar15 * 8);
          uVar22 = uVar22 + 1 & 0xfffffffffffffffc;
          do {
            uVar8 = puVar16[-1];
            uVar10 = *puVar16;
            uVar11 = puVar16[1];
            puVar20[-2] = puVar16[-2];
            puVar20[-1] = uVar8;
            *puVar20 = uVar10;
            puVar20[1] = uVar11;
            puVar17[-2] = 0;
            puVar17[-1] = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17 = puVar17 + 4;
            puVar20 = puVar20 + 4;
            puVar16 = puVar16 + 4;
            uVar22 = uVar22 - 4;
          } while (uVar22 != 0);
        }
      }
      if (lVar14 != lVar21) {
        iVar23 = (int)lVar21;
        if ((uVar19 & 1) != 0) {
          *(undefined8 *)(uVar9 + lVar21 * 8) = *(undefined8 *)(uVar26 + lVar21 * 8);
          *(undefined8 *)(lVar13 + (lVar21 + lVar24) * 8) = 0;
          lVar21 = lVar21 + 1;
        }
        if (uVar19 - 1 != iVar23) {
          puVar17 = (undefined8 *)(uVar26 + 8 + lVar21 * 8);
          puVar20 = (undefined8 *)(uVar9 + 8 + lVar21 * 8);
          puVar16 = (undefined8 *)(lVar13 + 8 + (lVar24 + lVar21) * 8);
          iVar23 = (uVar19 + 1) - ((int)lVar21 + 1);
          do {
            puVar20[-1] = puVar17[-1];
            puVar16[-1] = 0;
            *puVar20 = *puVar17;
            *puVar16 = 0;
            puVar17 = puVar17 + 2;
            puVar20 = puVar20 + 2;
            puVar16 = puVar16 + 2;
            iVar23 = iVar23 + -2;
          } while (iVar23 != 0);
        }
      }
    }
    uVar26 = (ulong)(int)param_2[1];
    if (0 < (long)uVar26) {
      plVar18 = (long *)(*param_2 + -8 + uVar26 * 8);
      do {
        uVar25 = (uint)uVar26;
        uVar19 = uVar25;
        if (*plVar18 != 0) break;
        plVar18 = plVar18 + -1;
        uVar19 = uVar25 - 1;
        uVar26 = (ulong)uVar19;
      } while (1 < (int)uVar25);
      *(uint *)(param_2 + 1) = uVar19;
    }
    uVar26 = (ulong)(int)param_1[1];
    if (0 < (long)uVar26) {
      plVar18 = (long *)((*param_1 - 8) + uVar26 * 8);
      do {
        uVar25 = (uint)uVar26;
        uVar19 = uVar25;
        if (*plVar18 != 0) break;
        plVar18 = plVar18 + -1;
        uVar19 = uVar25 - 1;
        uVar26 = (ulong)uVar19;
      } while (1 < (int)uVar25);
      *(uint *)(param_1 + 1) = uVar19;
    }
  }
  return 1;
}

