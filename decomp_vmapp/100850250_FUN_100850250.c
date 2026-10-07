
undefined8 FUN_100850250(ulong *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  ulong *puVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  
  if (param_3 < 0) {
    FUN_100887ce0(3,0x92,0x77,"bn_shift.c",0xb7);
    uVar6 = 0;
  }
  else {
    iVar18 = (int)(((uint)(param_3 >> 0x1f) >> 0x1a) + param_3) >> 6;
    if ((iVar18 < (int)param_2[1]) && ((int)param_2[1] != 0)) {
      iVar4 = FUN_10084b410(param_2);
      iVar4 = (0x3f - param_3) + iVar4;
      iVar4 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1a) + iVar4) >> 6;
      if (param_1 == param_2) {
        if (param_3 == 0) {
          return 1;
        }
      }
      else {
        *(int *)(param_1 + 2) = (int)param_2[2];
        if ((*(int *)((long)param_1 + 0xc) < iVar4) &&
           (lVar5 = FUN_10084b900(param_1,iVar4), lVar5 == 0)) {
          return 0;
        }
      }
      lVar5 = (long)iVar18;
      uVar12 = *param_2;
      puVar17 = (ulong *)(uVar12 + lVar5 * 8);
      puVar13 = (ulong *)*param_1;
      iVar1 = (int)param_2[1];
      uVar15 = iVar1 - iVar18;
      *(int *)(param_1 + 1) = iVar4;
      if (param_3 % 0x40 == 0) {
        uVar6 = 1;
        if (iVar1 != iVar18) {
          uVar11 = (ulong)(uint)((iVar1 + -1) - iVar18);
          uVar9 = uVar11 + 1 & 0x1fffffffc;
          puVar14 = puVar13;
          uVar8 = 0;
          if ((uVar9 != 0) &&
             (((ulong *)(uVar12 + (lVar5 + uVar11) * 8) < puVar13 ||
              (uVar8 = 0, puVar13 + uVar11 < (ulong *)(uVar12 + lVar5 * 8))))) {
            puVar17 = (ulong *)(uVar12 + (lVar5 + uVar9) * 8);
            puVar14 = puVar13 + uVar9;
            uVar15 = uVar15 - (int)uVar9;
            puVar13 = puVar13 + 2;
            puVar7 = (ulong *)(uVar12 + 0x10 + lVar5 * 8);
            uVar12 = uVar11 + 1 & 0xfffffffffffffffc;
            do {
              uVar8 = puVar7[-1];
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              puVar13[-2] = puVar7[-2];
              puVar13[-1] = uVar8;
              *puVar13 = uVar2;
              puVar13[1] = uVar3;
              puVar13 = puVar13 + 4;
              puVar7 = puVar7 + 4;
              uVar12 = uVar12 - 4;
              uVar8 = uVar9;
            } while (uVar12 != 0);
          }
          if (uVar11 + 1 != uVar8) {
            uVar16 = uVar15 - 1;
            if ((uVar15 & 7) != 0) {
              lVar5 = 0;
              lVar10 = 0;
              do {
                puVar14[lVar10] = puVar17[lVar10];
                lVar10 = lVar10 + 1;
                lVar5 = lVar5 + -8;
              } while ((uVar15 & 7) != (uint)lVar10);
              puVar17 = (ulong *)((long)puVar17 - lVar5);
              puVar14 = (ulong *)((long)puVar14 - lVar5);
              uVar15 = uVar15 - (uint)lVar10;
            }
            if (6 < uVar16) {
              do {
                *puVar14 = *puVar17;
                puVar14[1] = puVar17[1];
                puVar14[2] = puVar17[2];
                puVar14[3] = puVar17[3];
                puVar14[4] = puVar17[4];
                puVar14[5] = puVar17[5];
                puVar14[6] = puVar17[6];
                puVar14[7] = puVar17[7];
                puVar17 = puVar17 + 8;
                puVar14 = puVar14 + 8;
                uVar15 = uVar15 - 8;
              } while (uVar15 != 0);
            }
          }
        }
      }
      else {
        bVar19 = (byte)(param_3 % 0x40);
        uVar8 = *puVar17 >> (bVar19 & 0x3f);
        iVar4 = uVar15 - 1;
        if (iVar4 != 0) {
          bVar20 = 0x40 - bVar19;
          uVar16 = (iVar1 + -2) - iVar18;
          uVar15 = (iVar1 + -1) - iVar18;
          puVar17 = (ulong *)(uVar12 + 8 + lVar5 * 8);
          puVar14 = puVar13;
          if ((uVar15 & 3) != 0) {
            lVar5 = 0;
            lVar10 = 0;
            do {
              uVar12 = puVar17[lVar10];
              puVar13[lVar10] = uVar12 << (bVar20 & 0x3f) | uVar8;
              uVar8 = uVar12 >> (bVar19 & 0x3f);
              lVar10 = lVar10 + 1;
              lVar5 = lVar5 + -8;
            } while ((uVar15 & 3) != (uint)lVar10);
            iVar4 = uVar15 - (uint)lVar10;
            puVar17 = (ulong *)((long)puVar17 - lVar5);
            puVar14 = (ulong *)((long)puVar13 - lVar5);
          }
          if (2 < uVar16) {
            do {
              uVar12 = *puVar17;
              *puVar14 = uVar12 << (bVar20 & 0x3f) | uVar8;
              uVar8 = puVar17[1];
              puVar14[1] = uVar8 << (bVar20 & 0x3f) | uVar12 >> (bVar19 & 0x3f);
              uVar12 = puVar17[2];
              puVar14[2] = uVar12 << (bVar20 & 0x3f) | uVar8 >> (bVar19 & 0x3f);
              uVar8 = puVar17[3];
              puVar14[3] = uVar8 << (bVar20 & 0x3f) | uVar12 >> (bVar19 & 0x3f);
              uVar8 = uVar8 >> (bVar19 & 0x3f);
              puVar17 = puVar17 + 4;
              puVar14 = puVar14 + 4;
              iVar4 = iVar4 + -4;
            } while (iVar4 != 0);
          }
          puVar13 = puVar13 + (ulong)uVar16 + 1;
        }
        uVar6 = 1;
        if (uVar8 != 0) {
          *puVar13 = uVar8;
        }
      }
    }
    else {
      FUN_10084bbb0(param_1,0);
      uVar6 = 1;
    }
  }
  return uVar6;
}

