
void FUN_100461930(long param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  
  bVar8 = *param_2;
  bVar9 = param_2[4];
  *param_2 = bVar9;
  uVar23 = 1;
  if (param_3 != 0) {
    uVar26 = (uint)bVar9;
    uVar24 = param_3 + 1;
    uVar23 = 1;
    do {
      cVar2 = *(char *)(param_1 + 0x1744 +
                       (((ulong)param_2[(ulong)((int)uVar23 + 1) * 4] | 0x100) - (ulong)bVar9));
      cVar3 = *(char *)(param_1 + (((ulong)bVar9 + 0x1844) - (ulong)bVar8));
      cVar4 = *(char *)(param_1 + (((ulong)bVar8 + 0x1844) - (long)(int)uVar26));
      if (cVar4 == '\0' && (cVar3 == '\0' && cVar2 == '\0')) {
        while( true ) {
          iVar13 = *(int *)(param_1 + 0x40);
          iVar11 = iVar13 + -1;
          *(int *)(param_1 + 0x40) = iVar11;
          uVar21 = *(uint *)(param_1 + 0x44);
          if (iVar11 < 0) {
            uVar14 = uVar21 << (1U - (char)iVar13 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar21 = *puVar5;
            uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar21;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar14 = uVar21 >> ((byte)iVar11 & 0x1f) | uVar14;
          }
          else {
            uVar14 = uVar21 >> ((byte)iVar11 & 0x1f);
          }
          iVar13 = *(int *)(param_1 + 0x48);
          bVar9 = (byte)uVar26;
          bVar8 = (byte)*(int *)(&DAT_100b42f40 + (long)iVar13 * 4);
          uVar28 = (uint)uVar23;
          if ((uVar14 & 1) == 0) break;
          uVar14 = 1 << (bVar8 & 0x1f);
          uVar21 = uVar24 - uVar28;
          if (uVar21 < uVar14) {
            uVar14 = uVar24;
            if (uVar24 != uVar28) goto LAB_100461ae3;
          }
          else {
            uVar21 = uVar14;
            if (iVar13 < 0x1f) {
              *(int *)(param_1 + 0x48) = iVar13 + 1;
            }
LAB_100461ae3:
            uVar14 = uVar21;
            if (uVar21 == 0) {
LAB_100461b88:
              uVar10 = uVar14 - 1;
              if ((uVar14 & 3) != 0) {
                iVar13 = -(uVar14 & 3);
                do {
                  param_2[uVar23 * 4] = bVar9;
                  uVar14 = uVar14 - 1;
                  uVar23 = (ulong)((int)uVar23 + 1);
                  iVar13 = iVar13 + 1;
                } while (iVar13 != 0);
              }
              if (2 < uVar10) {
                do {
                  iVar13 = (int)uVar23;
                  param_2[uVar23 * 4] = bVar9;
                  param_2[(ulong)(iVar13 + 1) * 4] = bVar9;
                  param_2[(ulong)(iVar13 + 2) * 4] = bVar9;
                  param_2[(ulong)(iVar13 + 3) * 4] = bVar9;
                  uVar23 = (ulong)(iVar13 + 4);
                  uVar14 = uVar14 - 4;
                } while (uVar14 != 0);
              }
            }
            else {
              uVar10 = uVar21 & 0xfffffffe;
              if (uVar10 != 0) {
                if (((uVar10 - 2 >> 1) + 1 & 1) != 0) {
                  param_2[uVar23 * 4] = bVar9;
                  param_2[(ulong)(uVar28 + 1) * 4] = bVar9;
                  uVar23 = (ulong)(uVar28 + 2);
                }
                uVar14 = uVar21 - (uVar21 & 0xfffffffe);
                if (uVar10 - 2 != 0) {
                  do {
                    iVar13 = (int)uVar23;
                    param_2[uVar23 * 4] = bVar9;
                    param_2[(ulong)(iVar13 + 1) * 4] = bVar9;
                    param_2[(ulong)(iVar13 + 2) * 4] = bVar9;
                    param_2[(ulong)(iVar13 + 3) * 4] = bVar9;
                    uVar23 = (ulong)(iVar13 + 4U);
                  } while (uVar10 + uVar28 != iVar13 + 4U);
                }
                uVar23 = (ulong)((uVar21 & 0xfffffffe) + uVar28);
              }
              if (uVar21 + uVar28 != (int)uVar23) goto LAB_100461b88;
            }
            uVar14 = uVar21 + uVar28;
          }
          uVar23 = (ulong)uVar14;
          if (param_3 < uVar14) {
            param_2[uVar23 * 4] = param_2[(ulong)(uVar14 - 1) * 4];
            return;
          }
        }
        iVar11 = iVar11 - *(int *)(&DAT_100b42f40 + (long)iVar13 * 4);
        *(int *)(param_1 + 0x40) = iVar11;
        if (iVar11 < 0) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar14 = *puVar5;
          uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                   uVar14 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar14;
          iVar13 = *(int *)(param_1 + 0x40) + 0x20;
          *(int *)(param_1 + 0x40) = iVar13;
          uVar21 = uVar21 << (-(byte)iVar11 & 0x1f) | uVar14 >> ((byte)iVar13 & 0x1f);
        }
        else {
          uVar21 = uVar21 >> ((byte)iVar11 & 0x1f);
        }
        uVar10 = -1 << (bVar8 & 0x1f);
        uVar16 = ~uVar10 & uVar21;
        uVar14 = uVar24 - uVar28;
        if (uVar16 <= uVar24 - uVar28) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          uVar16 = uVar28 + (-2 - param_3);
          uVar10 = uVar10 | ~uVar21;
          uVar21 = uVar10;
          if (uVar10 < uVar16) {
            uVar21 = uVar16;
          }
          uVar17 = uVar28;
          if (uVar21 == 0xffffffff) {
LAB_100462032:
            uVar21 = uVar14 - 1;
            if ((uVar14 & 3) != 0) {
              iVar13 = -(uVar14 & 3);
              do {
                param_2[(ulong)uVar17 * 4] = bVar9;
                uVar14 = uVar14 - 1;
                uVar17 = uVar17 + 1;
                iVar13 = iVar13 + 1;
              } while (iVar13 != 0);
            }
            if (2 < uVar21) {
              do {
                param_2[(ulong)uVar17 * 4] = bVar9;
                param_2[(ulong)(uVar17 + 1) * 4] = bVar9;
                param_2[(ulong)(uVar17 + 2) * 4] = bVar9;
                param_2[(ulong)(uVar17 + 3) * 4] = bVar9;
                uVar17 = uVar17 + 4;
                uVar14 = uVar14 - 4;
              } while (uVar14 != 0);
            }
          }
          else {
            uVar21 = ~uVar21;
            if ((uVar21 & 0xfffffffe) != 0) {
              uVar17 = uVar16;
              if (uVar16 < uVar10) {
                uVar17 = uVar10;
              }
              uVar19 = (~uVar17 & 0xfffffffe) - 2;
              if (((uVar19 >> 1) + 1 & 1) != 0) {
                param_2[uVar23 * 4] = bVar9;
                param_2[(ulong)(uVar28 + 1) * 4] = bVar9;
                uVar23 = (ulong)(uVar28 + 2);
              }
              uVar14 = uVar14 - (uVar21 & 0xfffffffe);
              uVar17 = (uVar21 & 0xfffffffe) + uVar28;
              if (uVar19 != 0) {
                uVar19 = uVar16;
                if (uVar16 < uVar10) {
                  uVar19 = uVar10;
                }
                do {
                  iVar13 = (int)uVar23;
                  param_2[uVar23 * 4] = bVar9;
                  param_2[(ulong)(iVar13 + 1) * 4] = bVar9;
                  param_2[(ulong)(iVar13 + 2) * 4] = bVar9;
                  param_2[(ulong)(iVar13 + 3) * 4] = bVar9;
                  uVar23 = (ulong)(iVar13 + 4U);
                } while ((~uVar19 & 0xfffffffe) + uVar28 != iVar13 + 4U);
              }
            }
            if (uVar28 + uVar21 != uVar17) goto LAB_100462032;
          }
          if (uVar10 < uVar16) {
            uVar10 = uVar16;
          }
          uVar23 = (ulong)((uVar28 - 1) - uVar10);
        }
        if (param_3 < (uint)uVar23) {
          param_2[uVar23 * 4] = param_2[(ulong)((uint)uVar23 - 1) * 4];
          return;
        }
        bVar8 = param_2[uVar23 * 4];
        iVar11 = uVar26 - bVar8;
        iVar13 = -iVar11;
        if (0 < iVar11) {
          iVar13 = iVar11;
        }
        uVar21 = uVar26;
        if (3 < iVar13) {
          uVar21 = (uint)bVar8;
        }
        uVar14 = 3 < iVar13 ^ 1;
        uVar18 = (ulong)uVar14;
        if (iVar13 < 4) {
          iVar11 = *(int *)(param_1 + 0x614) / 2 + *(int *)(param_1 + 0xbd8);
        }
        else {
          iVar11 = *(int *)(param_1 + 0xbd4);
        }
        uVar12 = (ulong)(uVar14 + 0x16d);
        iVar15 = -1;
        do {
          iVar15 = iVar15 + 1;
          bVar9 = (byte)iVar15;
        } while (*(int *)(param_1 + 0x5c + uVar12 * 4) << (bVar9 & 0x1f) < iVar11);
        iVar11 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        iVar27 = *(int *)(param_1 + 0x40);
        uVar28 = *(uint *)(param_1 + 0x44);
        bVar7 = 0x20U - (char)iVar27 & 0x1f;
        if ((iVar27 == 0) || (uVar28 << bVar7 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar28 = *puVar5;
          uVar28 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                   uVar28 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar28;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar22 = 0x20;
          iVar20 = iVar27;
          uVar10 = uVar28;
        }
        else {
          iVar20 = 0;
          uVar10 = uVar28 << bVar7;
          iVar22 = iVar27;
        }
        uVar16 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        iVar22 = (uVar16 ^ 0xffffffe0) + iVar22;
        *(int *)(param_1 + 0x40) = iVar22;
        iVar20 = (uVar16 ^ 0x1f) + iVar20;
        if (iVar20 < 0x18 - iVar11) {
          iVar22 = iVar22 - iVar15;
          *(int *)(param_1 + 0x40) = iVar22;
          if (iVar22 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar10 = *puVar5;
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar10;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar28 = uVar28 << (-(byte)iVar22 & 0x1f) | uVar10 >> ((byte)iVar11 & 0x1f);
          }
          else {
            uVar28 = uVar28 >> ((byte)iVar22 & 0x1f);
          }
          uVar28 = ~(-1 << (bVar9 & 0x1f)) & uVar28 | iVar20 << (bVar9 & 0x1f);
        }
        else {
          iVar11 = iVar22 + -6;
          *(int *)(param_1 + 0x40) = iVar11;
          if (iVar11 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar10 = *puVar5;
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar10;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar28 = uVar10 >> ((byte)iVar11 & 0x1f) | uVar28 << (6U - (char)iVar22 & 0x1f);
          }
          else {
            uVar28 = uVar28 >> ((byte)iVar11 & 0x1f);
          }
          uVar28 = (uVar28 & 0x3f) + 1;
        }
        uVar10 = uVar28 + uVar14 & 1;
        iVar11 = (int)(uVar28 + uVar14 + uVar10) / 2;
        if (((uVar10 == 0 && iVar15 == 0) &&
            (*(int *)(param_1 + 0x618 + uVar18 * 4) * 2 < *(int *)(param_1 + 0x5c + uVar12 * 4))) ||
           ((uVar10 != 0 &&
            (*(int *)(param_1 + 0x5c + uVar12 * 4) <= *(int *)(param_1 + 0x618 + uVar18 * 4) * 2))))
        {
          iVar27 = -iVar11;
        }
        else {
          iVar27 = -iVar11;
          if (uVar10 == 0) {
            iVar27 = iVar11;
          }
          if (iVar15 == 0) {
            iVar27 = iVar11;
          }
        }
        iVar11 = 7;
        if (3 < iVar13) {
          iVar11 = -7;
        }
        if ((int)uVar26 <= (int)(uint)bVar8) {
          iVar11 = 7;
        }
        iVar11 = iVar11 * iVar27 + uVar21;
        if (iVar11 < -3) {
          uVar21 = iVar11 + 0x10a;
        }
        else {
          iVar15 = 0;
          if (0x102 < iVar11) {
            iVar15 = 0x10a;
          }
          uVar21 = iVar11 - iVar15;
        }
        uVar26 = 0xff;
        if (((int)uVar21 < 0x100) && (uVar26 = uVar21, (int)uVar21 < 0)) {
          uVar26 = 0;
        }
        if (iVar27 < 0) {
          piVar1 = (int *)(param_1 + 0x618 + uVar18 * 4);
          *piVar1 = *piVar1 + 1;
        }
        iVar11 = (int)(uVar28 + (3 < iVar13)) / 2 + *(int *)(param_1 + 0x620 + uVar12 * 4);
        *(int *)(param_1 + 0x620 + uVar12 * 4) = iVar11;
        iVar13 = *(int *)(param_1 + 0x5c + uVar12 * 4);
        if (iVar13 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + uVar12 * 4) = iVar11 / 2;
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0x5c + uVar12 * 4) = iVar13;
          *(int *)(param_1 + 0x618 + uVar18 * 4) = *(int *)(param_1 + 0x618 + uVar18 * 4) / 2;
        }
        *(int *)(param_1 + 0x5c + uVar12 * 4) = iVar13 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        iVar13 = (int)cVar2;
        if ((cVar2 == '\0') && (iVar13 = (int)cVar3, cVar3 == '\0')) {
          iVar13 = (int)cVar4;
        }
        uVar28 = iVar13 >> 0x1f | 1;
        uVar14 = (uint)bVar9;
        uVar21 = uVar26;
        if ((int)uVar26 < (int)(uint)bVar9) {
          uVar21 = uVar14;
        }
        uVar10 = uVar14;
        if ((int)uVar26 <= (int)(uint)bVar9) {
          uVar10 = uVar26;
        }
        if (((int)(uint)bVar8 < (int)uVar21) &&
           (bVar6 = (int)uVar10 < (int)(uint)bVar8, uVar10 = uVar21, bVar6)) {
          uVar10 = (uVar14 - bVar8) + uVar26;
        }
        lVar25 = (long)(int)((cVar3 * 9 + cVar2 * 0x51 + (int)cVar4) * uVar28);
        iVar11 = *(int *)(param_1 + 0x1190 + lVar25 * 4) * uVar28 + uVar10;
        iVar13 = 0xff;
        if ((iVar11 < 0x100) && (iVar13 = iVar11, iVar11 < 0)) {
          iVar13 = 0;
        }
        iVar11 = -1;
        do {
          iVar11 = iVar11 + 1;
          bVar8 = (byte)iVar11;
        } while (*(int *)(param_1 + 0x5c + lVar25 * 4) << (bVar8 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar25 * 4));
        iVar15 = *(int *)(param_1 + 0x40);
        uVar26 = *(uint *)(param_1 + 0x44);
        bVar9 = 0x20U - (char)iVar15 & 0x1f;
        if ((iVar15 == 0) || (uVar26 << bVar9 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar26 = *puVar5;
          uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                   uVar26 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar26;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar20 = 0x20;
          iVar27 = iVar15;
          uVar21 = uVar26;
        }
        else {
          iVar27 = 0;
          uVar21 = uVar26 << bVar9;
          iVar20 = iVar15;
        }
        uVar14 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> uVar14 == 0; uVar14 = uVar14 - 1) {
          }
        }
        iVar20 = (uVar14 ^ 0xffffffe0) + iVar20;
        *(int *)(param_1 + 0x40) = iVar20;
        iVar27 = (uVar14 ^ 0x1f) + iVar27;
        if (iVar27 < 0x19) {
          iVar20 = iVar20 - iVar11;
          *(int *)(param_1 + 0x40) = iVar20;
          if (iVar20 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar21 = *puVar5;
            uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar21;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar26 = uVar26 << (-(byte)iVar20 & 0x1f) | uVar21 >> ((byte)iVar11 & 0x1f);
          }
          else {
            uVar26 = uVar26 >> ((byte)iVar20 & 0x1f);
          }
          uVar26 = ~(-1 << (bVar8 & 0x1f)) & uVar26 | iVar27 << (bVar8 & 0x1f);
        }
        else {
          iVar11 = iVar20 + -6;
          *(int *)(param_1 + 0x40) = iVar11;
          if (iVar11 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar21 = *puVar5;
            uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar21;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar26 = uVar21 >> ((byte)iVar11 & 0x1f) | uVar26 << (6U - (char)iVar20 & 0x1f);
          }
          else {
            uVar26 = uVar26 >> ((byte)iVar11 & 0x1f);
          }
          uVar26 = (uVar26 & 0x3f) + 1;
        }
        uVar21 = (int)uVar26 / 2;
        if ((uVar26 & 1) != 0) {
          uVar21 = ~uVar21;
        }
        iVar13 = uVar28 * uVar21 * 7 + iVar13;
        if (iVar13 < -3) {
          uVar14 = iVar13 + 0x10a;
        }
        else {
          iVar11 = 0;
          if (0x102 < iVar13) {
            iVar11 = 0x10a;
          }
          uVar14 = iVar13 - iVar11;
        }
        uVar26 = 0xff;
        if (((int)uVar14 < 0x100) && (uVar26 = uVar14, (int)uVar14 < 0)) {
          uVar26 = 0;
        }
        uVar14 = -uVar21;
        if (0 < (int)uVar21) {
          uVar14 = uVar21;
        }
        iVar13 = uVar14 + *(int *)(param_1 + 0x620 + lVar25 * 4);
        *(int *)(param_1 + 0x620 + lVar25 * 4) = iVar13;
        iVar11 = uVar21 * 7 + *(int *)(param_1 + 0xbdc + lVar25 * 4);
        *(int *)(param_1 + 0xbdc + lVar25 * 4) = iVar11;
        uVar21 = *(uint *)(param_1 + 0x5c + lVar25 * 4);
        if (uVar21 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar25 * 4) = iVar13 / 2;
          iVar11 = iVar11 / 2;
          *(int *)(param_1 + 0xbdc + lVar25 * 4) = iVar11;
          uVar21 = (int)uVar21 / 2;
          *(uint *)(param_1 + 0x5c + lVar25 * 4) = uVar21;
        }
        iVar13 = uVar21 + 1;
        *(int *)(param_1 + 0x5c + lVar25 * 4) = iVar13;
        if ((int)~uVar21 < iVar11) {
          if (0 < iVar11) {
            iVar15 = iVar11 - iVar13;
            if (iVar15 != 0 && iVar13 <= iVar11) {
              iVar15 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar25 * 4) = iVar15;
            iVar13 = *(int *)(param_1 + 0x1190 + lVar25 * 4);
            if (iVar13 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar25 * 4) = iVar13 + 1;
            }
          }
        }
        else {
          iVar15 = -uVar21;
          if ((int)~uVar21 < iVar13 + iVar11) {
            iVar15 = iVar13 + iVar11;
          }
          *(int *)(param_1 + 0xbdc + lVar25 * 4) = iVar15;
          iVar13 = *(int *)(param_1 + 0x1190 + lVar25 * 4);
          if (-0x80 < iVar13) {
            *(int *)(param_1 + 0x1190 + lVar25 * 4) = iVar13 + -1;
          }
        }
      }
      bVar8 = param_2[uVar23 * 4];
      bVar9 = (byte)uVar26;
      param_2[uVar23 * 4] = bVar9;
      uVar21 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar21;
      if (param_3 < uVar21) break;
      bVar9 = param_2[uVar23 * 4];
    } while( true );
  }
  param_2[uVar23 * 4] = bVar9;
  return;
}

