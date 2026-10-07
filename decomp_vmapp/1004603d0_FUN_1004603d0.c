
void FUN_1004603d0(long param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint local_58;
  
  bVar7 = *param_2;
  bVar9 = param_2[4];
  *param_2 = bVar9;
  uVar19 = 1;
  if (param_3 != 0) {
    uVar21 = (uint)bVar9;
    uVar20 = param_3 + 1;
    uVar19 = 1;
    do {
      cVar2 = *(char *)(param_1 + 0x1744 +
                       (((ulong)param_2[(ulong)((int)uVar19 + 1) * 4] | 0x100) - (ulong)bVar9));
      cVar3 = *(char *)(param_1 + (((ulong)bVar9 + 0x1844) - (ulong)bVar7));
      cVar4 = *(char *)(param_1 + (((ulong)bVar7 + 0x1844) - (long)(int)uVar21));
      if (cVar4 == '\0' && (cVar3 == '\0' && cVar2 == '\0')) {
        while( true ) {
          iVar26 = *(int *)(param_1 + 0x40);
          iVar11 = iVar26 + -1;
          *(int *)(param_1 + 0x40) = iVar11;
          uVar15 = *(uint *)(param_1 + 0x44);
          if (iVar11 < 0) {
            uVar27 = uVar15 << (1U - (char)iVar26 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar15 = *puVar5;
            uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar15;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar27 = uVar15 >> ((byte)iVar11 & 0x1f) | uVar27;
          }
          else {
            uVar27 = uVar15 >> ((byte)iVar11 & 0x1f);
          }
          iVar26 = *(int *)(param_1 + 0x48);
          bVar9 = (byte)uVar21;
          bVar7 = (byte)*(int *)(&DAT_100b42f40 + (long)iVar26 * 4);
          uVar25 = (uint)uVar19;
          if ((uVar27 & 1) == 0) break;
          uVar27 = 1 << (bVar7 & 0x1f);
          uVar15 = uVar20 - uVar25;
          if (uVar15 < uVar27) {
            uVar27 = uVar20;
            if (uVar20 != uVar25) goto LAB_100460583;
          }
          else {
            uVar15 = uVar27;
            if (iVar26 < 0x1f) {
              *(int *)(param_1 + 0x48) = iVar26 + 1;
            }
LAB_100460583:
            uVar27 = uVar15;
            if (uVar15 == 0) {
LAB_100460622:
              uVar10 = uVar27 - 1;
              if ((uVar27 & 3) != 0) {
                iVar26 = -(uVar27 & 3);
                do {
                  param_2[uVar19 * 4] = bVar9;
                  uVar27 = uVar27 - 1;
                  uVar19 = (ulong)((int)uVar19 + 1);
                  iVar26 = iVar26 + 1;
                } while (iVar26 != 0);
              }
              if (2 < uVar10) {
                do {
                  iVar26 = (int)uVar19;
                  param_2[uVar19 * 4] = bVar9;
                  param_2[(ulong)(iVar26 + 1) * 4] = bVar9;
                  param_2[(ulong)(iVar26 + 2) * 4] = bVar9;
                  param_2[(ulong)(iVar26 + 3) * 4] = bVar9;
                  uVar19 = (ulong)(iVar26 + 4);
                  uVar27 = uVar27 - 4;
                } while (uVar27 != 0);
              }
            }
            else {
              uVar10 = uVar15 & 0xfffffffe;
              if (uVar10 != 0) {
                if (((uVar10 - 2 >> 1) + 1 & 1) != 0) {
                  param_2[uVar19 * 4] = bVar9;
                  param_2[(ulong)(uVar25 + 1) * 4] = bVar9;
                  uVar19 = (ulong)(uVar25 + 2);
                }
                uVar27 = uVar15 - (uVar15 & 0xfffffffe);
                if (uVar10 - 2 != 0) {
                  do {
                    iVar26 = (int)uVar19;
                    param_2[uVar19 * 4] = bVar9;
                    param_2[(ulong)(iVar26 + 1) * 4] = bVar9;
                    param_2[(ulong)(iVar26 + 2) * 4] = bVar9;
                    param_2[(ulong)(iVar26 + 3) * 4] = bVar9;
                    uVar19 = (ulong)(iVar26 + 4U);
                  } while (uVar10 + uVar25 != iVar26 + 4U);
                }
                uVar19 = (ulong)((uVar15 & 0xfffffffe) + uVar25);
              }
              if (uVar15 + uVar25 != (int)uVar19) goto LAB_100460622;
            }
            uVar27 = uVar15 + uVar25;
          }
          uVar19 = (ulong)uVar27;
          if (param_3 < uVar27) {
            param_2[uVar19 * 4] = param_2[(ulong)(uVar27 - 1) * 4];
            return;
          }
        }
        iVar11 = iVar11 - *(int *)(&DAT_100b42f40 + (long)iVar26 * 4);
        *(int *)(param_1 + 0x40) = iVar11;
        if (iVar11 < 0) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar27 = *puVar5;
          uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                   uVar27 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar27;
          iVar26 = *(int *)(param_1 + 0x40) + 0x20;
          *(int *)(param_1 + 0x40) = iVar26;
          uVar15 = uVar15 << (-(byte)iVar11 & 0x1f) | uVar27 >> ((byte)iVar26 & 0x1f);
        }
        else {
          uVar15 = uVar15 >> ((byte)iVar11 & 0x1f);
        }
        uVar10 = -1 << (bVar7 & 0x1f);
        uVar13 = ~uVar10 & uVar15;
        uVar27 = uVar20 - uVar25;
        if (uVar13 <= uVar20 - uVar25) {
          uVar27 = uVar13;
        }
        if (uVar27 != 0) {
          uVar13 = uVar25 + (-2 - param_3);
          uVar10 = uVar10 | ~uVar15;
          uVar15 = uVar10;
          if (uVar10 < uVar13) {
            uVar15 = uVar13;
          }
          uVar14 = uVar25;
          if (uVar15 == 0xffffffff) {
LAB_100460aa8:
            uVar15 = uVar27 - 1;
            if ((uVar27 & 3) != 0) {
              iVar26 = -(uVar27 & 3);
              do {
                param_2[(ulong)uVar14 * 4] = bVar9;
                uVar27 = uVar27 - 1;
                uVar14 = uVar14 + 1;
                iVar26 = iVar26 + 1;
              } while (iVar26 != 0);
            }
            if (2 < uVar15) {
              do {
                param_2[(ulong)uVar14 * 4] = bVar9;
                param_2[(ulong)(uVar14 + 1) * 4] = bVar9;
                param_2[(ulong)(uVar14 + 2) * 4] = bVar9;
                param_2[(ulong)(uVar14 + 3) * 4] = bVar9;
                uVar14 = uVar14 + 4;
                uVar27 = uVar27 - 4;
              } while (uVar27 != 0);
            }
          }
          else {
            uVar15 = ~uVar15;
            if ((uVar15 & 0xfffffffe) != 0) {
              uVar14 = uVar13;
              if (uVar13 < uVar10) {
                uVar14 = uVar10;
              }
              uVar28 = (~uVar14 & 0xfffffffe) - 2;
              if (((uVar28 >> 1) + 1 & 1) != 0) {
                param_2[uVar19 * 4] = bVar9;
                param_2[(ulong)(uVar25 + 1) * 4] = bVar9;
                uVar19 = (ulong)(uVar25 + 2);
              }
              uVar27 = uVar27 - (uVar15 & 0xfffffffe);
              uVar14 = (uVar15 & 0xfffffffe) + uVar25;
              if (uVar28 != 0) {
                uVar28 = uVar13;
                if (uVar13 < uVar10) {
                  uVar28 = uVar10;
                }
                do {
                  iVar26 = (int)uVar19;
                  param_2[uVar19 * 4] = bVar9;
                  param_2[(ulong)(iVar26 + 1) * 4] = bVar9;
                  param_2[(ulong)(iVar26 + 2) * 4] = bVar9;
                  param_2[(ulong)(iVar26 + 3) * 4] = bVar9;
                  uVar19 = (ulong)(iVar26 + 4U);
                } while ((~uVar28 & 0xfffffffe) + uVar25 != iVar26 + 4U);
              }
            }
            if (uVar25 + uVar15 != uVar14) goto LAB_100460aa8;
          }
          if (uVar10 < uVar13) {
            uVar10 = uVar13;
          }
          uVar19 = (ulong)((uVar25 - 1) - uVar10);
        }
        if (param_3 < (uint)uVar19) {
          param_2[uVar19 * 4] = param_2[(ulong)((uint)uVar19 - 1) * 4];
          return;
        }
        bVar7 = param_2[uVar19 * 4];
        iVar11 = uVar21 - bVar7;
        iVar26 = -iVar11;
        if (0 < iVar11) {
          iVar26 = iVar11;
        }
        uVar15 = 0 < iVar26 ^ 1;
        uVar23 = (ulong)uVar15;
        if (iVar26 < 1) {
          iVar11 = *(int *)(param_1 + 0x614) / 2 + *(int *)(param_1 + 0xbd8);
          uVar27 = uVar21;
        }
        else {
          iVar11 = *(int *)(param_1 + 0xbd4);
          uVar27 = (uint)bVar7;
        }
        local_58 = (uint)(0 < iVar26);
        uVar12 = (ulong)(uVar15 + 0x16d);
        iVar16 = -1;
        do {
          iVar16 = iVar16 + 1;
          bVar9 = (byte)iVar16;
        } while (*(int *)(param_1 + 0x5c + uVar12 * 4) << (bVar9 & 0x1f) < iVar11);
        iVar11 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        iVar22 = *(int *)(param_1 + 0x40);
        uVar25 = *(uint *)(param_1 + 0x44);
        bVar6 = 0x20U - (char)iVar22 & 0x1f;
        if ((iVar22 == 0) || (uVar25 << bVar6 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar25 = *puVar5;
          uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                   uVar25 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar25;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar18 = 0x20;
          iVar17 = iVar22;
          uVar10 = uVar25;
        }
        else {
          iVar17 = 0;
          uVar10 = uVar25 << bVar6;
          iVar18 = iVar22;
        }
        uVar13 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> uVar13 == 0; uVar13 = uVar13 - 1) {
          }
        }
        iVar18 = (uVar13 ^ 0xffffffe0) + iVar18;
        *(int *)(param_1 + 0x40) = iVar18;
        iVar17 = (uVar13 ^ 0x1f) + iVar17;
        if (iVar17 < 0x14 - iVar11) {
          iVar18 = iVar18 - iVar16;
          *(int *)(param_1 + 0x40) = iVar18;
          if (iVar18 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar10 = *puVar5;
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar10;
            iVar11 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar11;
            uVar25 = uVar25 << (-(byte)iVar18 & 0x1f) | uVar10 >> ((byte)iVar11 & 0x1f);
          }
          else {
            uVar25 = uVar25 >> ((byte)iVar18 & 0x1f);
          }
          uVar25 = ~(-1 << (bVar9 & 0x1f)) & uVar25 | iVar17 << (bVar9 & 0x1f);
        }
        else {
          iVar11 = iVar18 + -6;
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
            uVar25 = uVar10 >> ((byte)iVar11 & 0x1f) | uVar25 << (6U - (char)iVar18 & 0x1f);
          }
          else {
            uVar25 = uVar25 >> ((byte)iVar11 & 0x1f);
          }
          uVar25 = (uVar25 & 0x3f) + 1;
        }
        uVar10 = uVar25 + uVar15 & 1;
        iVar11 = (int)(uVar25 + uVar15 + uVar10) / 2;
        if (((uVar10 == 0 && iVar16 == 0) &&
            (*(int *)(param_1 + 0x618 + uVar23 * 4) * 2 < *(int *)(param_1 + 0x5c + uVar12 * 4))) ||
           ((uVar10 != 0 &&
            (*(int *)(param_1 + 0x5c + uVar12 * 4) <= *(int *)(param_1 + 0x618 + uVar23 * 4) * 2))))
        {
          iVar22 = -iVar11;
        }
        else {
          iVar22 = -iVar11;
          if (uVar10 == 0) {
            iVar22 = iVar11;
          }
          if (iVar16 == 0) {
            iVar22 = iVar11;
          }
        }
        iVar11 = 1;
        if (0 < iVar26) {
          iVar11 = -1;
        }
        if ((int)uVar21 <= (int)(uint)bVar7) {
          iVar11 = 1;
        }
        iVar26 = iVar11 * iVar22 + uVar27;
        if (iVar26 < 0) {
          uVar15 = iVar26 + 0x40;
LAB_100460d98:
          uVar21 = uVar15;
          if ((int)uVar21 < 0) {
            uVar21 = 0;
          }
        }
        else {
          uVar15 = iVar26 + (uint)(0x3f < iVar26) * -0x40;
          uVar21 = 0x3f;
          if ((int)uVar15 < 0x40) goto LAB_100460d98;
        }
        if (iVar22 < 0) {
          piVar1 = (int *)(param_1 + 0x618 + uVar23 * 4);
          *piVar1 = *piVar1 + 1;
        }
        iVar11 = (int)(uVar25 + local_58) / 2 + *(int *)(param_1 + 0x620 + uVar12 * 4);
        *(int *)(param_1 + 0x620 + uVar12 * 4) = iVar11;
        iVar26 = *(int *)(param_1 + 0x5c + uVar12 * 4);
        if (iVar26 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + uVar12 * 4) = iVar11 / 2;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0x5c + uVar12 * 4) = iVar26;
          *(int *)(param_1 + 0x618 + uVar23 * 4) = *(int *)(param_1 + 0x618 + uVar23 * 4) / 2;
        }
        *(int *)(param_1 + 0x5c + uVar12 * 4) = iVar26 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        iVar26 = (int)cVar2;
        if ((cVar2 == '\0') && (iVar26 = (int)cVar3, cVar3 == '\0')) {
          iVar26 = (int)cVar4;
        }
        uVar25 = iVar26 >> 0x1f | 1;
        uVar27 = (uint)bVar9;
        uVar15 = uVar21;
        if ((int)uVar21 < (int)(uint)bVar9) {
          uVar15 = uVar27;
        }
        uVar10 = uVar27;
        if ((int)uVar21 <= (int)(uint)bVar9) {
          uVar10 = uVar21;
        }
        if (((int)(uint)bVar7 < (int)uVar15) &&
           (bVar8 = (int)uVar10 < (int)(uint)bVar7, uVar10 = uVar15, bVar8)) {
          uVar10 = (uVar27 - bVar7) + uVar21;
        }
        lVar24 = (long)(int)((cVar3 * 9 + cVar2 * 0x51 + (int)cVar4) * uVar25);
        iVar11 = *(int *)(param_1 + 0x1190 + lVar24 * 4) * uVar25 + uVar10;
        iVar26 = 0x3f;
        if ((iVar11 < 0x40) && (iVar26 = iVar11, iVar11 < 0)) {
          iVar26 = 0;
        }
        iVar11 = -1;
        do {
          iVar11 = iVar11 + 1;
          bVar7 = (byte)iVar11;
        } while (*(int *)(param_1 + 0x5c + lVar24 * 4) << (bVar7 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar24 * 4));
        iVar16 = *(int *)(param_1 + 0x40);
        uVar21 = *(uint *)(param_1 + 0x44);
        bVar9 = 0x20U - (char)iVar16 & 0x1f;
        if ((iVar16 == 0) || (uVar21 << bVar9 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar21 = *puVar5;
          uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar21;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar17 = 0x20;
          iVar22 = iVar16;
          uVar15 = uVar21;
        }
        else {
          iVar22 = 0;
          uVar15 = uVar21 << bVar9;
          iVar17 = iVar16;
        }
        uVar27 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> uVar27 == 0; uVar27 = uVar27 - 1) {
          }
        }
        iVar17 = (uVar27 ^ 0xffffffe0) + iVar17;
        *(int *)(param_1 + 0x40) = iVar17;
        iVar22 = (uVar27 ^ 0x1f) + iVar22;
        if (iVar22 < 0x15) {
          iVar17 = iVar17 - iVar11;
          *(int *)(param_1 + 0x40) = iVar17;
          if (iVar17 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar15 = *puVar5;
            uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar15;
            iVar16 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar16;
            uVar21 = uVar21 << (-(byte)iVar17 & 0x1f) | uVar15 >> ((byte)iVar16 & 0x1f);
          }
          else {
            uVar21 = uVar21 >> ((byte)iVar17 & 0x1f);
          }
          uVar21 = ~(-1 << (bVar7 & 0x1f)) & uVar21 | iVar22 << (bVar7 & 0x1f);
        }
        else {
          iVar16 = iVar17 + -6;
          *(int *)(param_1 + 0x40) = iVar16;
          if (iVar16 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar15 = *puVar5;
            uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar15;
            iVar16 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar16;
            uVar21 = uVar15 >> ((byte)iVar16 & 0x1f) | uVar21 << (6U - (char)iVar17 & 0x1f);
          }
          else {
            uVar21 = uVar21 >> ((byte)iVar16 & 0x1f);
          }
          uVar21 = (uVar21 & 0x3f) + 1;
        }
        if (iVar11 == 0) {
          bVar8 = *(int *)(param_1 + 0xbdc + lVar24 * 4) * 2 <=
                  -*(int *)(param_1 + 0x5c + lVar24 * 4);
        }
        else {
          bVar8 = false;
        }
        uVar15 = (int)uVar21 / 2;
        if ((bVar8 + uVar21 & 1) != 0) {
          uVar15 = ~uVar15;
        }
        iVar26 = uVar25 * uVar15 + iVar26;
        if (iVar26 < 0) {
          uVar27 = iVar26 + 0x40;
LAB_100460894:
          uVar21 = uVar27;
          if ((int)uVar27 < 0) {
            uVar21 = 0;
          }
        }
        else {
          uVar27 = iVar26 + (uint)(0x3f < iVar26) * -0x40;
          uVar21 = 0x3f;
          if ((int)uVar27 < 0x40) goto LAB_100460894;
        }
        uVar27 = -uVar15;
        if (0 < (int)uVar15) {
          uVar27 = uVar15;
        }
        iVar26 = uVar27 + *(int *)(param_1 + 0x620 + lVar24 * 4);
        *(int *)(param_1 + 0x620 + lVar24 * 4) = iVar26;
        iVar11 = uVar15 + *(int *)(param_1 + 0xbdc + lVar24 * 4);
        *(int *)(param_1 + 0xbdc + lVar24 * 4) = iVar11;
        uVar15 = *(uint *)(param_1 + 0x5c + lVar24 * 4);
        if (uVar15 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar24 * 4) = iVar26 / 2;
          iVar11 = iVar11 / 2;
          *(int *)(param_1 + 0xbdc + lVar24 * 4) = iVar11;
          uVar15 = (int)uVar15 / 2;
          *(uint *)(param_1 + 0x5c + lVar24 * 4) = uVar15;
        }
        iVar26 = uVar15 + 1;
        *(int *)(param_1 + 0x5c + lVar24 * 4) = iVar26;
        if ((int)~uVar15 < iVar11) {
          if (0 < iVar11) {
            iVar16 = iVar11 - iVar26;
            if (iVar16 != 0 && iVar26 <= iVar11) {
              iVar16 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar24 * 4) = iVar16;
            iVar26 = *(int *)(param_1 + 0x1190 + lVar24 * 4);
            if (iVar26 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar24 * 4) = iVar26 + 1;
            }
          }
        }
        else {
          iVar16 = -uVar15;
          if ((int)~uVar15 < iVar26 + iVar11) {
            iVar16 = iVar26 + iVar11;
          }
          *(int *)(param_1 + 0xbdc + lVar24 * 4) = iVar16;
          iVar26 = *(int *)(param_1 + 0x1190 + lVar24 * 4);
          if (-0x80 < iVar26) {
            *(int *)(param_1 + 0x1190 + lVar24 * 4) = iVar26 + -1;
          }
        }
      }
      bVar7 = param_2[uVar19 * 4];
      bVar9 = (byte)uVar21;
      param_2[uVar19 * 4] = bVar9;
      uVar15 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar15;
      if (param_3 < uVar15) break;
      bVar9 = param_2[uVar19 * 4];
    } while( true );
  }
  param_2[uVar19 * 4] = bVar9;
  return;
}

