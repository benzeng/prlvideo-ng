
undefined8 FUN_100737060(ulong *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  byte bVar21;
  ulong uVar22;
  
  iVar19 = (int)(((uint)(param_3 >> 0x1f) >> 0x1a) + param_3) >> 6;
  iVar18 = (int)param_2[1];
  if ((iVar18 < iVar19) || (iVar18 == 0)) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    if (param_1 == param_2) {
      if (param_3 == 0) {
        return 1;
      }
    }
    else {
      *(int *)(param_1 + 2) = (int)param_2[2];
      if (*(int *)((long)param_1 + 0xc) <= iVar18 - iVar19) {
        lVar4 = FUN_10072d730(param_1);
        if (lVar4 == 0) {
          return 0;
        }
        iVar18 = (int)param_2[1];
      }
    }
    lVar4 = (long)iVar19;
    uVar13 = *param_2;
    puVar11 = (ulong *)(uVar13 + lVar4 * 8);
    puVar8 = (ulong *)*param_1;
    uVar16 = iVar18 - iVar19;
    *(uint *)(param_1 + 1) = uVar16;
    if (param_3 % 0x40 == 0) {
      if (iVar18 != iVar19) {
        uVar12 = (ulong)(uint)((iVar18 + -1) - iVar19);
        uVar22 = uVar12 + 1 & 0x1fffffffc;
        puVar10 = puVar8;
        uVar14 = 0;
        uVar3 = uVar16;
        if ((uVar22 != 0) &&
           (((ulong *)(uVar13 + (lVar4 + uVar12) * 8) < puVar8 ||
            (uVar14 = 0, puVar8 + uVar12 < (ulong *)(uVar13 + lVar4 * 8))))) {
          uVar3 = uVar16 - (int)uVar22;
          puVar11 = (ulong *)(uVar13 + (lVar4 + uVar22) * 8);
          puVar10 = puVar8 + uVar22;
          puVar15 = puVar8 + 2;
          puVar7 = (ulong *)(uVar13 + 0x10 + lVar4 * 8);
          uVar13 = uVar12 + 1 & 0xfffffffffffffffc;
          do {
            uVar14 = puVar7[-1];
            uVar1 = *puVar7;
            uVar2 = puVar7[1];
            puVar15[-2] = puVar7[-2];
            puVar15[-1] = uVar14;
            *puVar15 = uVar1;
            puVar15[1] = uVar2;
            puVar15 = puVar15 + 4;
            puVar7 = puVar7 + 4;
            uVar13 = uVar13 - 4;
            uVar14 = uVar22;
          } while (uVar13 != 0);
        }
        if (uVar12 + 1 != uVar14) {
          uVar6 = uVar3 - 1;
          if ((uVar3 & 7) != 0) {
            lVar4 = 0;
            lVar5 = 0;
            do {
              puVar10[lVar5] = puVar11[lVar5];
              lVar5 = lVar5 + 1;
              lVar4 = lVar4 + -8;
            } while ((uVar3 & 7) != (uint)lVar5);
            uVar3 = uVar3 - (uint)lVar5;
            puVar11 = (ulong *)((long)puVar11 - lVar4);
            puVar10 = (ulong *)((long)puVar10 - lVar4);
          }
          if (6 < uVar6) {
            do {
              *puVar10 = *puVar11;
              puVar10[1] = puVar11[1];
              puVar10[2] = puVar11[2];
              puVar10[3] = puVar11[3];
              puVar10[4] = puVar11[4];
              puVar10[5] = puVar11[5];
              puVar10[6] = puVar11[6];
              puVar10[7] = puVar11[7];
              puVar11 = puVar11 + 8;
              puVar10 = puVar10 + 8;
              uVar3 = uVar3 - 8;
            } while (uVar3 != 0);
          }
        }
      }
    }
    else {
      bVar20 = (byte)(param_3 % 0x40);
      uVar14 = *puVar11 >> (bVar20 & 0x3f);
      iVar17 = uVar16 - 1;
      puVar11 = puVar8;
      if (iVar17 != 0) {
        bVar21 = 0x40 - bVar20;
        uVar3 = (iVar18 + -2) - iVar19;
        uVar6 = (iVar18 + -1) - iVar19;
        if ((uVar6 & 3) == 0) {
          puVar11 = (ulong *)(uVar13 + 8 + lVar4 * 8);
          puVar10 = puVar8;
        }
        else {
          lVar4 = uVar13 + 8 + lVar4 * 8;
          lVar5 = 0;
          lVar9 = 0;
          do {
            uVar13 = *(ulong *)(lVar4 + lVar9 * 8);
            puVar8[lVar9] = uVar13 << (bVar21 & 0x3f) | uVar14;
            uVar14 = uVar13 >> (bVar20 & 0x3f);
            lVar9 = lVar9 + 1;
            lVar5 = lVar5 + -8;
          } while ((uVar6 & 3) != (uint)lVar9);
          iVar17 = uVar6 - (uint)lVar9;
          puVar11 = (ulong *)(lVar4 - lVar5);
          puVar10 = (ulong *)((long)puVar8 - lVar5);
        }
        if (2 < uVar3) {
          do {
            uVar13 = *puVar11;
            *puVar10 = uVar13 << (bVar21 & 0x3f) | uVar14;
            uVar14 = puVar11[1];
            puVar10[1] = uVar14 << (bVar21 & 0x3f) | uVar13 >> (bVar20 & 0x3f);
            uVar13 = puVar11[2];
            puVar10[2] = uVar13 << (bVar21 & 0x3f) | uVar14 >> (bVar20 & 0x3f);
            uVar14 = puVar11[3];
            puVar10[3] = uVar14 << (bVar21 & 0x3f) | uVar13 >> (bVar20 & 0x3f);
            uVar14 = uVar14 >> (bVar20 & 0x3f);
            puVar11 = puVar11 + 4;
            puVar10 = puVar10 + 4;
            iVar17 = iVar17 + -4;
          } while (iVar17 != 0);
        }
        puVar11 = puVar8 + (ulong)uVar3 + 1;
      }
      *puVar11 = uVar14;
    }
    if (0 < (int)uVar16) {
      puVar8 = puVar8 + (int)(uVar16 - 1);
      iVar19 = (iVar18 + 1) - iVar19;
      do {
        if (*puVar8 != 0) {
          return 1;
        }
        puVar8 = puVar8 + -1;
        *(int *)(param_1 + 1) = iVar19 + -2;
        iVar19 = iVar19 + -1;
      } while (1 < iVar19);
    }
  }
  return 1;
}

