
undefined8 FUN_1003db240(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  uint uVar22;
  uint local_5c;
  uint local_58;
  uint local_50;
  
  uVar21 = 0;
  uVar13 = (undefined1)(param_3 >> 8);
  uVar20 = (undefined1)(param_3 >> 0x10);
  switch(*param_1) {
  case 0x53:
  case 0x54:
    uVar18 = param_2[1];
    uVar22 = param_2[3];
    uVar21 = 1;
    if (uVar18 < uVar22) {
      uVar10 = param_2[2] - *param_2 >> 1;
      uVar12 = (ulong)uVar10;
      uVar6 = param_1[3];
      lVar14 = (ulong)(*param_2 * 2 & 0xfffffffc) + (ulong)(uVar6 * uVar18) + *(long *)(param_1 + 4)
      ;
      do {
        if (uVar10 != 0) {
          uVar5 = 0;
          if (uVar10 == 0) {
LAB_1003db318:
            lVar3 = uVar12 - uVar5;
            puVar8 = (uint *)(lVar14 + uVar5 * 4);
            do {
              *puVar8 = param_3;
              puVar8 = puVar8 + 1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          else {
            uVar5 = 0;
            if (uVar10 != (uVar10 & 3)) {
              uVar5 = uVar12 - (uVar10 & 3);
              puVar4 = (undefined8 *)(lVar14 + 8);
              lVar3 = uVar12 - (uVar12 & 3);
              do {
                puVar4[-1] = CONCAT44(param_3,param_3);
                *puVar4 = CONCAT44(param_3,param_3);
                puVar4 = puVar4 + 2;
                lVar3 = lVar3 + -4;
              } while (lVar3 != 0);
            }
            if (uVar12 != uVar5) goto LAB_1003db318;
          }
          uVar6 = param_1[3];
          uVar22 = param_2[3];
        }
        lVar14 = lVar14 + (ulong)uVar6;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar22);
    }
    break;
  case 0x55:
    uVar18 = param_2[1];
    uVar22 = param_2[3];
    uVar21 = 1;
    if (uVar18 < uVar22) {
      uVar10 = param_3 & 0xffff | (param_3 & 0xff) << 0x10 | (param_3 & 0xff0000) << 8;
      uVar15 = param_2[2] - *param_2 >> 1;
      uVar12 = (ulong)uVar15;
      uVar6 = param_1[3];
      lVar14 = (ulong)(*param_2 * 2 & 0xfffffffc) + (ulong)(uVar6 * uVar18) + *(long *)(param_1 + 4)
      ;
      do {
        if (uVar15 != 0) {
          uVar5 = 0;
          if (uVar15 == 0) {
LAB_1003db418:
            lVar3 = uVar12 - uVar5;
            puVar8 = (uint *)(lVar14 + uVar5 * 4);
            do {
              *puVar8 = uVar10;
              puVar8 = puVar8 + 1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          else {
            uVar5 = 0;
            if (uVar15 != (uVar15 & 3)) {
              uVar5 = uVar12 - (uVar15 & 3);
              puVar4 = (undefined8 *)(lVar14 + 8);
              lVar3 = uVar12 - (uVar12 & 3);
              do {
                puVar4[-1] = CONCAT44(uVar10,uVar10);
                *puVar4 = CONCAT44(uVar10,uVar10);
                puVar4 = puVar4 + 2;
                lVar3 = lVar3 + -4;
              } while (lVar3 != 0);
            }
            if (uVar12 != uVar5) goto LAB_1003db418;
          }
          uVar6 = param_1[3];
          uVar22 = param_2[3];
        }
        lVar14 = lVar14 + (ulong)uVar6;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar22);
    }
    break;
  case 0x56:
    uVar18 = param_2[1];
    uVar22 = param_2[3];
    uVar21 = 1;
    if (uVar18 < uVar22) {
      uVar10 = param_3 & 0xff0000 | param_3 << 0x18 | (param_3 & 0xff) << 8 | param_3 >> 8 & 0xff;
      uVar15 = param_2[2] - *param_2 >> 1;
      uVar12 = (ulong)uVar15;
      uVar6 = param_1[3];
      lVar14 = (ulong)(*param_2 * 2 & 0xfffffffc) + (ulong)(uVar6 * uVar18) + *(long *)(param_1 + 4)
      ;
      do {
        if (uVar15 != 0) {
          uVar5 = 0;
          if (uVar15 == 0) {
LAB_1003db518:
            lVar3 = uVar12 - uVar5;
            puVar8 = (uint *)(lVar14 + uVar5 * 4);
            do {
              *puVar8 = uVar10;
              puVar8 = puVar8 + 1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          else {
            uVar5 = 0;
            if (uVar15 != (uVar15 & 3)) {
              uVar5 = uVar12 - (uVar15 & 3);
              puVar4 = (undefined8 *)(lVar14 + 8);
              lVar3 = uVar12 - (uVar12 & 3);
              do {
                puVar4[-1] = CONCAT44(uVar10,uVar10);
                *puVar4 = CONCAT44(uVar10,uVar10);
                puVar4 = puVar4 + 2;
                lVar3 = lVar3 + -4;
              } while (lVar3 != 0);
            }
            if (uVar12 != uVar5) goto LAB_1003db518;
          }
          uVar6 = param_1[3];
          uVar22 = param_2[3];
        }
        lVar14 = lVar14 + (ulong)uVar6;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar22);
    }
    break;
  case 0x57:
    uVar18 = param_2[1];
    uVar22 = param_2[3];
    uVar21 = 1;
    if (uVar22 != uVar18) {
      lVar14 = *(long *)(param_1 + 4);
      uVar6 = param_2[2];
      uVar10 = *param_2;
      uVar7 = param_1[3] * uVar18 + uVar10;
      uVar15 = (uVar10 >> 1) + param_1[2] * param_1[3] + (uVar18 >> 1) * ((uint)param_1[1] >> 1);
      local_5c = ((uint)param_1[2] >> 1) * ((uint)param_1[1] >> 1) + uVar15;
      uVar12 = (ulong)(uVar6 - uVar10 >> 1);
      uVar11 = 0;
      local_58 = param_3 & 0xff;
      do {
        _memset((void *)((ulong)uVar7 + lVar14),local_58,(ulong)(uVar6 - uVar10));
        uVar7 = uVar7 + param_1[3];
        if ((uVar11 & 1) != 0) {
          _memset((void *)((ulong)uVar15 + lVar14),param_3 >> 0x10 & 0xff,uVar12);
          _memset((void *)((ulong)local_5c + lVar14),param_3 >> 8 & 0xff,uVar12);
          uVar15 = uVar15 + ((uint)param_1[1] >> 1);
          local_5c = local_5c + ((uint)param_1[1] >> 1);
        }
        uVar11 = uVar11 + 1;
      } while (uVar22 - uVar18 != uVar11);
      uVar21 = 1;
    }
    break;
  case 0x58:
    uVar18 = param_2[1];
    uVar22 = param_2[3];
    uVar21 = 1;
    if (uVar22 != uVar18) {
      lVar14 = *(long *)(param_1 + 4);
      uVar6 = param_2[2];
      uVar10 = *param_2;
      uVar19 = param_1[3] * uVar18 + uVar10;
      uVar15 = (uVar10 & 0xfffffffe) + param_1[2] * param_1[3] +
               ((uint)param_1[1] >> 1) * (uVar18 >> 1);
      local_5c = uVar15 + 1;
      uVar7 = uVar6 - uVar10 >> 1;
      uVar11 = 0;
      local_50 = param_3 & 0xff;
      do {
        _memset((void *)((ulong)uVar19 + lVar14),local_50,(ulong)(uVar6 - uVar10));
        uVar19 = uVar19 + param_1[3];
        if ((uVar11 & 1) != 0) {
          uVar12 = (ulong)uVar7;
          uVar2 = local_5c;
          uVar1 = uVar15;
          if (uVar7 != 0) {
            do {
              *(undefined1 *)(lVar14 + (ulong)uVar2) = uVar20;
              *(undefined1 *)(lVar14 + (ulong)uVar1) = uVar13;
              uVar12 = uVar12 - 1;
              uVar2 = uVar2 + 1;
              uVar1 = uVar1 + 1;
            } while (uVar12 != 0);
          }
          local_5c = local_5c + param_1[1];
          uVar15 = uVar15 + param_1[1];
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar22 - uVar18);
      uVar21 = 1;
    }
    break;
  case 0x59:
    uVar18 = param_2[1];
    uVar22 = param_2[3];
    uVar21 = 1;
    if (uVar22 != uVar18) {
      lVar14 = *(long *)(param_1 + 4);
      uVar6 = param_2[2];
      uVar10 = *param_2;
      uVar19 = param_1[3] * uVar18 + uVar10;
      uVar15 = (uVar10 & 0xfffffffe) + param_1[2] * param_1[3] +
               ((uint)param_1[1] >> 1) * (uVar18 >> 1);
      local_5c = uVar15 + 1;
      uVar7 = uVar6 - uVar10 >> 1;
      uVar11 = 0;
      local_50 = param_3 & 0xff;
      do {
        _memset((void *)((ulong)uVar19 + lVar14),local_50,(ulong)(uVar6 - uVar10));
        uVar19 = uVar19 + param_1[3];
        if ((uVar11 & 1) != 0) {
          uVar12 = (ulong)uVar7;
          uVar2 = local_5c;
          uVar1 = uVar15;
          if (uVar7 != 0) {
            do {
              *(undefined1 *)(lVar14 + (ulong)uVar1) = uVar20;
              *(undefined1 *)(lVar14 + (ulong)uVar2) = uVar13;
              uVar12 = uVar12 - 1;
              uVar2 = uVar2 + 1;
              uVar1 = uVar1 + 1;
            } while (uVar12 != 0);
          }
          uVar15 = uVar15 + param_1[1];
          local_5c = local_5c + param_1[1];
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar22 - uVar18);
      uVar21 = 1;
    }
    break;
  case 0x5b:
    uVar18 = *param_2;
    uVar22 = param_2[1];
    uVar6 = param_2[3];
    uVar21 = 1;
    if (uVar22 < uVar6) {
      uVar11 = param_3 << 8 | param_3 >> 0x18;
      uVar10 = param_2[2];
      uVar15 = param_1[3];
      lVar14 = (ulong)(uVar15 * uVar22) + (ulong)uVar18 * 4 + *(long *)(param_1 + 4);
      uVar7 = (uVar10 - 1) - uVar18;
      uVar12 = (ulong)uVar7 + 1;
      do {
        if (uVar10 != uVar18) {
          uVar5 = 0;
          if ((uVar12 & 0x1fffffffc) != 0) {
            puVar4 = (undefined8 *)(lVar14 + 8);
            uVar9 = uVar12 & 0xfffffffffffffffc;
            do {
              puVar4[-1] = CONCAT44(uVar11,uVar11);
              *puVar4 = CONCAT44(uVar11,uVar11);
              puVar4 = puVar4 + 2;
              uVar9 = uVar9 - 4;
              uVar5 = uVar12 & 0x1fffffffc;
            } while (uVar9 != 0);
          }
          if (uVar12 != uVar5) {
            iVar17 = (int)uVar5;
            if (((uVar10 - uVar18) - iVar17 & 7) != 0) {
              iVar16 = -((uVar10 - uVar18) - iVar17 & 7);
              do {
                *(uint *)(lVar14 + uVar5 * 4) = uVar11;
                uVar5 = uVar5 + 1;
                iVar16 = iVar16 + 1;
              } while (iVar16 != 0);
            }
            if (6 < uVar7 - iVar17) {
              iVar17 = ((uVar10 + 7) - uVar18) - ((int)uVar5 + 7);
              puVar8 = (uint *)(lVar14 + 0x1c + uVar5 * 4);
              do {
                puVar8[-7] = uVar11;
                puVar8[-6] = uVar11;
                puVar8[-5] = uVar11;
                puVar8[-4] = uVar11;
                puVar8[-3] = uVar11;
                puVar8[-2] = uVar11;
                puVar8[-1] = uVar11;
                *puVar8 = uVar11;
                puVar8 = puVar8 + 8;
                iVar17 = iVar17 + -8;
              } while (iVar17 != 0);
            }
          }
          uVar15 = param_1[3];
          uVar6 = param_2[3];
        }
        lVar14 = lVar14 + (ulong)uVar15;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar6);
      uVar21 = 1;
    }
  }
  return uVar21;
}

