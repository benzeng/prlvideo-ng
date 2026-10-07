
void FUN_100462400(long param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  uint local_78;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar21 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x14);
  bVar10 = *param_2;
  bVar12 = param_2[4];
  *param_2 = bVar12;
  uVar29 = 1;
  if (param_3 != 0) {
    uVar24 = (uint)bVar12;
    iVar9 = iVar5 * 2 + 1;
    iVar21 = iVar21 * iVar9;
    uVar18 = ~(-1 << ((byte)iVar6 & 0x1f));
    uVar31 = param_3 + 1;
    uVar29 = 1;
    do {
      cVar2 = *(char *)(param_1 + 0x1744 +
                       (((ulong)param_2[(ulong)((int)uVar29 + 1) * 4] | 0x100) - (ulong)bVar12));
      cVar3 = *(char *)(param_1 + (((ulong)bVar12 + 0x1844) - (ulong)bVar10));
      cVar4 = *(char *)(param_1 + (((ulong)bVar10 + 0x1844) - (long)(int)uVar24));
      if (cVar4 == '\0' && (cVar3 == '\0' && cVar2 == '\0')) {
        while( true ) {
          iVar26 = *(int *)(param_1 + 0x40);
          iVar14 = iVar26 + -1;
          *(int *)(param_1 + 0x40) = iVar14;
          uVar19 = *(uint *)(param_1 + 0x44);
          if (iVar14 < 0) {
            uVar27 = uVar19 << (1U - (char)iVar26 & 0x1f);
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar19 = *puVar7;
            uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar19;
            iVar14 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar14;
            uVar27 = uVar19 >> ((byte)iVar14 & 0x1f) | uVar27;
          }
          else {
            uVar27 = uVar19 >> ((byte)iVar14 & 0x1f);
          }
          iVar26 = *(int *)(param_1 + 0x48);
          bVar12 = (byte)uVar24;
          bVar10 = (byte)*(int *)(&DAT_100b42f40 + (long)iVar26 * 4);
          uVar25 = (uint)uVar29;
          if ((uVar27 & 1) == 0) break;
          uVar27 = 1 << (bVar10 & 0x1f);
          uVar19 = uVar31 - uVar25;
          if (uVar19 < uVar27) {
            uVar27 = uVar31;
            if (uVar31 != uVar25) goto LAB_100462613;
          }
          else {
            uVar19 = uVar27;
            if (iVar26 < 0x1f) {
              *(int *)(param_1 + 0x48) = iVar26 + 1;
            }
LAB_100462613:
            uVar27 = uVar19;
            if (uVar19 == 0) {
LAB_1004626b2:
              uVar13 = uVar27 - 1;
              if ((uVar27 & 3) != 0) {
                iVar26 = -(uVar27 & 3);
                do {
                  param_2[uVar29 * 4] = bVar12;
                  uVar27 = uVar27 - 1;
                  uVar29 = (ulong)((int)uVar29 + 1);
                  iVar26 = iVar26 + 1;
                } while (iVar26 != 0);
              }
              if (2 < uVar13) {
                do {
                  iVar26 = (int)uVar29;
                  param_2[uVar29 * 4] = bVar12;
                  param_2[(ulong)(iVar26 + 1) * 4] = bVar12;
                  param_2[(ulong)(iVar26 + 2) * 4] = bVar12;
                  param_2[(ulong)(iVar26 + 3) * 4] = bVar12;
                  uVar29 = (ulong)(iVar26 + 4);
                  uVar27 = uVar27 - 4;
                } while (uVar27 != 0);
              }
            }
            else {
              uVar13 = uVar19 & 0xfffffffe;
              if (uVar13 != 0) {
                if (((uVar13 - 2 >> 1) + 1 & 1) != 0) {
                  param_2[uVar29 * 4] = bVar12;
                  param_2[(ulong)(uVar25 + 1) * 4] = bVar12;
                  uVar29 = (ulong)(uVar25 + 2);
                }
                uVar27 = uVar19 - (uVar19 & 0xfffffffe);
                if (uVar13 - 2 != 0) {
                  do {
                    iVar26 = (int)uVar29;
                    param_2[uVar29 * 4] = bVar12;
                    param_2[(ulong)(iVar26 + 1) * 4] = bVar12;
                    param_2[(ulong)(iVar26 + 2) * 4] = bVar12;
                    param_2[(ulong)(iVar26 + 3) * 4] = bVar12;
                    uVar29 = (ulong)(iVar26 + 4U);
                  } while (uVar13 + uVar25 != iVar26 + 4U);
                }
                uVar29 = (ulong)((uVar19 & 0xfffffffe) + uVar25);
              }
              if (uVar19 + uVar25 != (int)uVar29) goto LAB_1004626b2;
            }
            uVar27 = uVar19 + uVar25;
          }
          uVar29 = (ulong)uVar27;
          if (param_3 < uVar27) {
            param_2[uVar29 * 4] = param_2[(ulong)(uVar27 - 1) * 4];
            return;
          }
        }
        iVar14 = iVar14 - *(int *)(&DAT_100b42f40 + (long)iVar26 * 4);
        *(int *)(param_1 + 0x40) = iVar14;
        if (iVar14 < 0) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar27 = *puVar7;
          uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                   uVar27 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar27;
          iVar26 = *(int *)(param_1 + 0x40) + 0x20;
          *(int *)(param_1 + 0x40) = iVar26;
          uVar19 = uVar19 << (-(byte)iVar14 & 0x1f) | uVar27 >> ((byte)iVar26 & 0x1f);
        }
        else {
          uVar19 = uVar19 >> ((byte)iVar14 & 0x1f);
        }
        uVar13 = -1 << (bVar10 & 0x1f);
        uVar16 = ~uVar13 & uVar19;
        uVar27 = uVar31 - uVar25;
        if (uVar16 <= uVar31 - uVar25) {
          uVar27 = uVar16;
        }
        if (uVar27 != 0) {
          uVar16 = uVar25 + (-2 - param_3);
          uVar13 = uVar13 | ~uVar19;
          uVar19 = uVar13;
          if (uVar13 < uVar16) {
            uVar19 = uVar16;
          }
          uVar17 = uVar25;
          if (uVar19 == 0xffffffff) {
LAB_100462b68:
            uVar19 = uVar27 - 1;
            if ((uVar27 & 3) != 0) {
              iVar26 = -(uVar27 & 3);
              do {
                param_2[(ulong)uVar17 * 4] = bVar12;
                uVar27 = uVar27 - 1;
                uVar17 = uVar17 + 1;
                iVar26 = iVar26 + 1;
              } while (iVar26 != 0);
            }
            if (2 < uVar19) {
              do {
                param_2[(ulong)uVar17 * 4] = bVar12;
                param_2[(ulong)(uVar17 + 1) * 4] = bVar12;
                param_2[(ulong)(uVar17 + 2) * 4] = bVar12;
                param_2[(ulong)(uVar17 + 3) * 4] = bVar12;
                uVar17 = uVar17 + 4;
                uVar27 = uVar27 - 4;
              } while (uVar27 != 0);
            }
          }
          else {
            uVar19 = ~uVar19;
            if ((uVar19 & 0xfffffffe) != 0) {
              uVar17 = uVar16;
              if (uVar16 < uVar13) {
                uVar17 = uVar13;
              }
              uVar28 = (~uVar17 & 0xfffffffe) - 2;
              if (((uVar28 >> 1) + 1 & 1) != 0) {
                param_2[uVar29 * 4] = bVar12;
                param_2[(ulong)(uVar25 + 1) * 4] = bVar12;
                uVar29 = (ulong)(uVar25 + 2);
              }
              uVar27 = uVar27 - (uVar19 & 0xfffffffe);
              uVar17 = (uVar19 & 0xfffffffe) + uVar25;
              if (uVar28 != 0) {
                uVar28 = uVar16;
                if (uVar16 < uVar13) {
                  uVar28 = uVar13;
                }
                do {
                  iVar26 = (int)uVar29;
                  param_2[uVar29 * 4] = bVar12;
                  param_2[(ulong)(iVar26 + 1) * 4] = bVar12;
                  param_2[(ulong)(iVar26 + 2) * 4] = bVar12;
                  param_2[(ulong)(iVar26 + 3) * 4] = bVar12;
                  uVar29 = (ulong)(iVar26 + 4U);
                } while ((~uVar28 & 0xfffffffe) + uVar25 != iVar26 + 4U);
              }
            }
            if (uVar25 + uVar19 != uVar17) goto LAB_100462b68;
          }
          if (uVar13 < uVar16) {
            uVar13 = uVar16;
          }
          uVar29 = (ulong)((uVar25 - 1) - uVar13);
        }
        if (param_3 < (uint)uVar29) {
          param_2[uVar29 * 4] = param_2[(ulong)((uint)uVar29 - 1) * 4];
          return;
        }
        bVar10 = param_2[uVar29 * 4];
        iVar14 = uVar24 - bVar10;
        iVar26 = -iVar14;
        if (0 < iVar14) {
          iVar26 = iVar14;
        }
        uVar19 = iVar5 < iVar26 ^ 1;
        uVar32 = (ulong)uVar19;
        if (iVar5 < iVar26) {
          iVar14 = *(int *)(param_1 + 0xbd4);
          uVar27 = (uint)bVar10;
        }
        else {
          iVar14 = *(int *)(param_1 + 0x614) / 2 + *(int *)(param_1 + 0xbd8);
          uVar27 = uVar24;
        }
        local_78 = (uint)(iVar5 < iVar26);
        uVar15 = (ulong)(uVar19 + 0x16d);
        iVar20 = -1;
        do {
          iVar20 = iVar20 + 1;
          bVar12 = (byte)iVar20;
        } while (*(int *)(param_1 + 0x5c + uVar15 * 4) << (bVar12 & 0x1f) < iVar14);
        iVar14 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        iVar33 = *(int *)(param_1 + 0x40);
        uVar25 = *(uint *)(param_1 + 0x44);
        bVar8 = 0x20U - (char)iVar33 & 0x1f;
        if ((iVar33 == 0) || (uVar25 << bVar8 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar25 = *puVar7;
          uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                   uVar25 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar25;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar23 = 0x20;
          iVar22 = iVar33;
          uVar13 = uVar25;
        }
        else {
          iVar22 = 0;
          uVar13 = uVar25 << bVar8;
          iVar23 = iVar33;
        }
        uVar16 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        iVar23 = (uVar16 ^ 0xffffffe0) + iVar23;
        *(int *)(param_1 + 0x40) = iVar23;
        iVar22 = (uVar16 ^ 0x1f) + iVar22;
        if (iVar22 < (0x1e - iVar6) - iVar14) {
          iVar23 = iVar23 - iVar20;
          *(int *)(param_1 + 0x40) = iVar23;
          if (iVar23 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar13 = *puVar7;
            uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar13;
            iVar14 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar14;
            uVar25 = uVar25 << (-(byte)iVar23 & 0x1f) | uVar13 >> ((byte)iVar14 & 0x1f);
          }
          else {
            uVar25 = uVar25 >> ((byte)iVar23 & 0x1f);
          }
          uVar25 = ~(-1 << (bVar12 & 0x1f)) & uVar25 | iVar22 << (bVar12 & 0x1f);
        }
        else {
          iVar23 = iVar23 - iVar6;
          *(int *)(param_1 + 0x40) = iVar23;
          if (iVar23 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar13 = *puVar7;
            uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar13;
            iVar14 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar14;
            uVar25 = uVar13 >> ((byte)iVar14 & 0x1f) | uVar25 << (-(byte)iVar23 & 0x1f);
          }
          else {
            uVar25 = uVar25 >> ((byte)iVar23 & 0x1f);
          }
          uVar25 = (uVar25 & uVar18) + 1;
        }
        uVar13 = uVar25 + uVar19 & 1;
        iVar14 = (int)(uVar25 + uVar19 + uVar13) / 2;
        if (((uVar13 == 0 && iVar20 == 0) &&
            (*(int *)(param_1 + 0x618 + uVar32 * 4) * 2 < *(int *)(param_1 + 0x5c + uVar15 * 4))) ||
           ((uVar13 != 0 &&
            (*(int *)(param_1 + 0x5c + uVar15 * 4) <= *(int *)(param_1 + 0x618 + uVar32 * 4) * 2))))
        {
          iVar33 = -iVar14;
        }
        else {
          iVar33 = -iVar14;
          if (uVar13 == 0) {
            iVar33 = iVar14;
          }
          if (iVar20 == 0) {
            iVar33 = iVar14;
          }
        }
        iVar14 = 1;
        if (iVar5 < iVar26) {
          iVar14 = -1;
        }
        if ((int)uVar24 <= (int)(uint)bVar10) {
          iVar14 = 1;
        }
        iVar14 = iVar14 * iVar9 * iVar33 + uVar27;
        iVar26 = iVar21;
        if (-iVar5 <= iVar14) {
          iVar26 = 0;
          if (iVar5 + 0xff < iVar14) {
            iVar26 = iVar21;
          }
          iVar26 = -iVar26;
        }
        uVar19 = iVar14 + iVar26;
        uVar24 = 0xff;
        if (((int)uVar19 < 0x100) && (uVar24 = uVar19, (int)uVar19 < 0)) {
          uVar24 = 0;
        }
        if (iVar33 < 0) {
          piVar1 = (int *)(param_1 + 0x618 + uVar32 * 4);
          *piVar1 = *piVar1 + 1;
        }
        iVar14 = (int)(uVar25 + local_78) / 2 + *(int *)(param_1 + 0x620 + uVar15 * 4);
        *(int *)(param_1 + 0x620 + uVar15 * 4) = iVar14;
        iVar26 = *(int *)(param_1 + 0x5c + uVar15 * 4);
        if (iVar26 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + uVar15 * 4) = iVar14 / 2;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0x5c + uVar15 * 4) = iVar26;
          *(int *)(param_1 + 0x618 + uVar32 * 4) = *(int *)(param_1 + 0x618 + uVar32 * 4) / 2;
        }
        *(int *)(param_1 + 0x5c + uVar15 * 4) = iVar26 + 1;
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
        uVar27 = (uint)bVar12;
        uVar19 = uVar24;
        if ((int)uVar24 < (int)(uint)bVar12) {
          uVar19 = uVar27;
        }
        uVar13 = uVar27;
        if ((int)uVar24 <= (int)(uint)bVar12) {
          uVar13 = uVar24;
        }
        if (((int)(uint)bVar10 < (int)uVar19) &&
           (bVar11 = (int)uVar13 < (int)(uint)bVar10, uVar13 = uVar19, bVar11)) {
          uVar13 = (uVar27 - bVar10) + uVar24;
        }
        lVar30 = (long)(int)((cVar3 * 9 + cVar2 * 0x51 + (int)cVar4) * uVar25);
        iVar14 = *(int *)(param_1 + 0x1190 + lVar30 * 4) * uVar25 + uVar13;
        iVar26 = 0xff;
        if ((iVar14 < 0x100) && (iVar26 = iVar14, iVar14 < 0)) {
          iVar26 = 0;
        }
        iVar14 = -1;
        do {
          iVar14 = iVar14 + 1;
          bVar10 = (byte)iVar14;
        } while (*(int *)(param_1 + 0x5c + lVar30 * 4) << (bVar10 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar30 * 4));
        iVar20 = *(int *)(param_1 + 0x40);
        uVar24 = *(uint *)(param_1 + 0x44);
        bVar12 = 0x20U - (char)iVar20 & 0x1f;
        if ((iVar20 == 0) || (uVar24 << bVar12 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar24 = *puVar7;
          uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                   uVar24 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar24;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar22 = 0x20;
          iVar33 = iVar20;
          uVar19 = uVar24;
        }
        else {
          iVar33 = 0;
          uVar19 = uVar24 << bVar12;
          iVar22 = iVar20;
        }
        uVar27 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> uVar27 == 0; uVar27 = uVar27 - 1) {
          }
        }
        iVar22 = (uVar27 ^ 0xffffffe0) + iVar22;
        *(int *)(param_1 + 0x40) = iVar22;
        iVar33 = (uVar27 ^ 0x1f) + iVar33;
        if (iVar33 < 0x1f - iVar6) {
          iVar22 = iVar22 - iVar14;
          *(int *)(param_1 + 0x40) = iVar22;
          if (iVar22 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar19 = *puVar7;
            uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar19;
            iVar20 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar20;
            uVar24 = uVar24 << (-(byte)iVar22 & 0x1f) | uVar19 >> ((byte)iVar20 & 0x1f);
          }
          else {
            uVar24 = uVar24 >> ((byte)iVar22 & 0x1f);
          }
          uVar24 = ~(-1 << (bVar10 & 0x1f)) & uVar24 | iVar33 << (bVar10 & 0x1f);
        }
        else {
          iVar22 = iVar22 - iVar6;
          *(int *)(param_1 + 0x40) = iVar22;
          if (iVar22 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar19 = *puVar7;
            uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar19;
            iVar20 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar20;
            uVar24 = uVar19 >> ((byte)iVar20 & 0x1f) | uVar24 << (-(byte)iVar22 & 0x1f);
          }
          else {
            uVar24 = uVar24 >> ((byte)iVar22 & 0x1f);
          }
          uVar24 = (uVar24 & uVar18) + 1;
        }
        if (iVar14 == 0 && iVar5 == 0) {
          bVar11 = *(int *)(param_1 + 0xbdc + lVar30 * 4) * 2 <=
                   -*(int *)(param_1 + 0x5c + lVar30 * 4);
        }
        else {
          bVar11 = false;
        }
        uVar19 = (int)uVar24 / 2;
        if ((bVar11 + uVar24 & 1) != 0) {
          uVar19 = ~uVar19;
        }
        iVar26 = uVar25 * iVar9 * uVar19 + iVar26;
        iVar14 = iVar21;
        if (-iVar5 <= iVar26) {
          iVar14 = 0;
          if (iVar5 + 0xff < iVar26) {
            iVar14 = iVar21;
          }
          iVar14 = -iVar14;
        }
        uVar27 = iVar26 + iVar14;
        uVar24 = 0xff;
        if (((int)uVar27 < 0x100) && (uVar24 = uVar27, (int)uVar27 < 0)) {
          uVar24 = 0;
        }
        uVar27 = -uVar19;
        if (0 < (int)uVar19) {
          uVar27 = uVar19;
        }
        iVar26 = uVar27 + *(int *)(param_1 + 0x620 + lVar30 * 4);
        *(int *)(param_1 + 0x620 + lVar30 * 4) = iVar26;
        iVar14 = uVar19 * iVar9 + *(int *)(param_1 + 0xbdc + lVar30 * 4);
        *(int *)(param_1 + 0xbdc + lVar30 * 4) = iVar14;
        uVar19 = *(uint *)(param_1 + 0x5c + lVar30 * 4);
        if (uVar19 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar30 * 4) = iVar26 / 2;
          iVar14 = iVar14 / 2;
          *(int *)(param_1 + 0xbdc + lVar30 * 4) = iVar14;
          uVar19 = (int)uVar19 / 2;
          *(uint *)(param_1 + 0x5c + lVar30 * 4) = uVar19;
        }
        iVar26 = uVar19 + 1;
        *(int *)(param_1 + 0x5c + lVar30 * 4) = iVar26;
        if ((int)~uVar19 < iVar14) {
          if (0 < iVar14) {
            iVar20 = iVar14 - iVar26;
            if (iVar20 != 0 && iVar26 <= iVar14) {
              iVar20 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar30 * 4) = iVar20;
            iVar26 = *(int *)(param_1 + 0x1190 + lVar30 * 4);
            if (iVar26 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar30 * 4) = iVar26 + 1;
            }
          }
        }
        else {
          iVar20 = -uVar19;
          if ((int)~uVar19 < iVar26 + iVar14) {
            iVar20 = iVar26 + iVar14;
          }
          *(int *)(param_1 + 0xbdc + lVar30 * 4) = iVar20;
          iVar26 = *(int *)(param_1 + 0x1190 + lVar30 * 4);
          if (-0x80 < iVar26) {
            *(int *)(param_1 + 0x1190 + lVar30 * 4) = iVar26 + -1;
          }
        }
      }
      bVar10 = param_2[uVar29 * 4];
      bVar12 = (byte)uVar24;
      param_2[uVar29 * 4] = bVar12;
      uVar19 = (int)uVar29 + 1;
      uVar29 = (ulong)uVar19;
      if (param_3 < uVar19) break;
      bVar12 = param_2[uVar29 * 4];
    } while( true );
  }
  param_2[uVar29 * 4] = bVar12;
  return;
}

