
undefined8 FUN_1003c8030(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  ulong uVar7;
  
  uVar15 = *param_1;
  if ((*(uint *)(&DAT_100b3f714 + (ulong)uVar15 * 8) & 4) == 0) {
    uVar16 = *param_3;
    if ((*(uint *)(&DAT_100b3f714 + (ulong)uVar16 * 8) & 4) == 0) {
      if (((*(uint *)(&DAT_100b3f714 + (ulong)uVar16 * 8) |
           *(uint *)(&DAT_100b3f714 + (ulong)uVar15 * 8)) & 0x40) == 0) {
        if ((uVar16 == 0) || (uVar16 == 7)) {
          FUN_1003cc6d0(param_1,param_2);
        }
        else {
          FUN_1003ce050(param_1,param_2);
        }
      }
      else if ((uVar15 == 0x1f) && (uVar16 == 0x22)) {
        uVar15 = param_2[1];
        uVar16 = param_2[3];
        if (uVar15 < uVar16) {
          iVar2 = param_2[2];
          iVar3 = *param_2;
          uVar20 = param_3[3];
          puVar14 = (uint *)((ulong)(param_4[1] * uVar20 + *param_4 * 4) + *(long *)(param_3 + 4));
          uVar9 = param_1[3];
          puVar13 = (uint *)((ulong)(uVar9 * uVar15 + iVar3 * 4) + *(long *)(param_1 + 4));
          uVar4 = (iVar2 + -1) - iVar3;
          uVar7 = (ulong)uVar4;
          uVar1 = uVar7 + 1;
          uVar5 = iVar2 - iVar3;
          do {
            if (iVar2 != iVar3) {
              uVar17 = uVar1 & 0x1fffffffc;
              if (uVar17 == 0) {
LAB_1003c8181:
                uVar17 = 0;
                puVar12 = puVar14;
                puVar19 = puVar13;
              }
              else {
                puVar12 = puVar14 + uVar17;
                puVar19 = puVar13 + uVar17;
                puVar8 = puVar13;
                puVar10 = puVar14;
                uVar11 = uVar1 & 0xfffffffffffffffc;
                if ((puVar14 <= puVar13 + uVar7) && (puVar13 <= puVar14 + uVar7))
                goto LAB_1003c8181;
                do {
                  uVar16 = puVar8[1];
                  uVar20 = puVar8[2];
                  uVar9 = puVar8[3];
                  *puVar10 = *puVar8 >> 0x18 | *puVar8 << 8;
                  puVar10[1] = uVar16 >> 0x18 | uVar16 << 8;
                  puVar10[2] = uVar20 >> 0x18 | uVar20 << 8;
                  puVar10[3] = uVar9 >> 0x18 | uVar9 << 8;
                  puVar8 = puVar8 + 4;
                  puVar10 = puVar10 + 4;
                  uVar11 = uVar11 - 4;
                } while (uVar11 != 0);
              }
              uVar16 = (uint)uVar17;
              if (uVar1 != uVar17) {
                uVar20 = uVar4 - uVar16;
                if ((uVar5 & 3) != 0) {
                  iVar18 = -(uVar5 & 3);
                  do {
                    *puVar12 = *puVar19 << 8 | *puVar19 >> 0x18;
                    puVar12 = puVar12 + 1;
                    puVar19 = puVar19 + 1;
                    uVar16 = (int)uVar17 + 1;
                    uVar17 = (ulong)uVar16;
                    iVar18 = iVar18 + 1;
                  } while (iVar18 != 0);
                }
                if (2 < uVar20) {
                  iVar18 = uVar5 - uVar16;
                  do {
                    *puVar12 = *puVar19 << 8 | *puVar19 >> 0x18;
                    puVar12[1] = puVar19[1] << 8 | puVar19[1] >> 0x18;
                    puVar12[2] = puVar19[2] << 8 | puVar19[2] >> 0x18;
                    puVar12[3] = puVar19[3] << 8 | puVar19[3] >> 0x18;
                    puVar19 = puVar19 + 4;
                    puVar12 = puVar12 + 4;
                    iVar18 = iVar18 + -4;
                  } while (iVar18 != 0);
                }
              }
              uVar9 = param_1[3];
              uVar20 = param_3[3];
              uVar16 = param_2[3];
            }
            puVar13 = (uint *)((long)puVar13 + (ulong)uVar9);
            puVar14 = (uint *)((long)puVar14 + (ulong)uVar20);
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
      }
      else if ((uVar15 == 0x22) && (uVar16 == 0x1f)) {
        uVar15 = param_2[1];
        uVar16 = param_2[3];
        if (uVar15 < uVar16) {
          iVar2 = param_2[2];
          iVar3 = *param_2;
          uVar20 = param_3[3];
          puVar13 = (uint *)((ulong)(param_4[1] * uVar20 + *param_4 * 4) + *(long *)(param_3 + 4));
          uVar9 = param_1[3];
          puVar14 = (uint *)((ulong)(uVar9 * uVar15 + iVar3 * 4) + *(long *)(param_1 + 4));
          uVar4 = (iVar2 + -1) - iVar3;
          uVar7 = (ulong)uVar4;
          uVar1 = uVar7 + 1;
          uVar5 = iVar2 - iVar3;
          do {
            if (iVar2 != iVar3) {
              uVar17 = uVar1 & 0x1fffffffc;
              if (uVar17 == 0) {
LAB_1003c8361:
                uVar17 = 0;
                puVar12 = puVar13;
                puVar19 = puVar14;
              }
              else {
                puVar12 = puVar13 + uVar17;
                puVar19 = puVar14 + uVar17;
                puVar8 = puVar14;
                puVar10 = puVar13;
                uVar11 = uVar1 & 0xfffffffffffffffc;
                if ((puVar13 <= puVar14 + uVar7) && (puVar14 <= puVar13 + uVar7))
                goto LAB_1003c8361;
                do {
                  uVar16 = puVar8[1];
                  uVar20 = puVar8[2];
                  uVar9 = puVar8[3];
                  *puVar10 = *puVar8 << 0x18 | *puVar8 >> 8;
                  puVar10[1] = uVar16 << 0x18 | uVar16 >> 8;
                  puVar10[2] = uVar20 << 0x18 | uVar20 >> 8;
                  puVar10[3] = uVar9 << 0x18 | uVar9 >> 8;
                  puVar8 = puVar8 + 4;
                  puVar10 = puVar10 + 4;
                  uVar11 = uVar11 - 4;
                } while (uVar11 != 0);
              }
              uVar16 = (uint)uVar17;
              if (uVar1 != uVar17) {
                uVar20 = uVar4 - uVar16;
                if ((uVar5 & 3) != 0) {
                  iVar18 = -(uVar5 & 3);
                  do {
                    *puVar12 = *puVar19 << 0x18 | *puVar19 >> 8;
                    puVar12 = puVar12 + 1;
                    puVar19 = puVar19 + 1;
                    uVar16 = (int)uVar17 + 1;
                    uVar17 = (ulong)uVar16;
                    iVar18 = iVar18 + 1;
                  } while (iVar18 != 0);
                }
                if (2 < uVar20) {
                  iVar18 = uVar5 - uVar16;
                  do {
                    *puVar12 = *puVar19 << 0x18 | *puVar19 >> 8;
                    puVar12[1] = puVar19[1] << 0x18 | puVar19[1] >> 8;
                    puVar12[2] = puVar19[2] << 0x18 | puVar19[2] >> 8;
                    puVar12[3] = puVar19[3] << 0x18 | puVar19[3] >> 8;
                    puVar19 = puVar19 + 4;
                    puVar12 = puVar12 + 4;
                    iVar18 = iVar18 + -4;
                  } while (iVar18 != 0);
                }
              }
              uVar9 = param_1[3];
              uVar20 = param_3[3];
              uVar16 = param_2[3];
            }
            puVar14 = (uint *)((long)puVar14 + (ulong)uVar9);
            puVar13 = (uint *)((long)puVar13 + (ulong)uVar20);
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
      }
      else {
        FUN_1003d5620(param_1,param_2);
      }
      return 1;
    }
  }
  uVar6 = FUN_1003d55c0(param_1,param_2);
  return uVar6;
}

