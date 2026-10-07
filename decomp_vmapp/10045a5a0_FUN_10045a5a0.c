
void FUN_10045a5a0(long param_1,byte *param_2,long param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  byte bVar27;
  uint uVar28;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar6 = *(uint *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  bVar12 = *param_2;
  bVar27 = param_2[4];
  *param_2 = bVar27;
  uVar26 = 1;
  if (param_4 != 0) {
    uVar28 = (uint)bVar27;
    iVar18 = (int)((uVar6 + 1) - ((int)(uVar6 + 1) >> 0x1f)) >> 1;
    iVar10 = iVar5 * 2 + 1;
    uVar26 = 1;
    while( true ) {
      iVar19 = (int)uVar26;
      uVar21 = (uint)*(byte *)(param_3 + -4 + uVar26 * 4);
      cVar2 = *(char *)(param_1 + 0x1744 +
                       (((ulong)param_2[(ulong)(iVar19 + 1) * 4] | 0x100) - (ulong)bVar27));
      cVar3 = *(char *)(param_1 + (((ulong)bVar27 + 0x1844) - (ulong)bVar12));
      cVar4 = *(char *)(param_1 + (((ulong)bVar12 + 0x1844) - (long)(int)uVar28));
      if (cVar4 == '\0' && (cVar3 == '\0' && cVar2 == '\0')) {
        iVar15 = uVar21 - uVar28;
        iVar14 = -iVar15;
        if (0 < iVar15) {
          iVar14 = iVar15;
        }
        iVar15 = 0;
        if (iVar14 <= iVar5) {
          iVar15 = 0;
          do {
            uVar13 = iVar19 + iVar15;
            uVar21 = iVar19 + 1 + iVar15;
            iVar15 = iVar15 + 1;
            param_2[(ulong)uVar13 * 4] = (byte)uVar28;
            if (param_4 < uVar21) {
              FUN_10045aea0(param_1,iVar15,1);
              param_2[(ulong)uVar21 * 4] = param_2[(ulong)uVar13 * 4];
              return;
            }
            uVar21 = (uint)*(byte *)(param_3 + -4 + (ulong)uVar21 * 4);
            iVar16 = uVar21 - uVar28;
            iVar14 = -iVar16;
            if (0 < iVar16) {
              iVar14 = iVar16;
            }
          } while (iVar14 <= iVar5);
          uVar26 = (ulong)(uint)(iVar19 + iVar15);
        }
        FUN_10045aea0(param_1,iVar15,0);
        bVar12 = param_2[uVar26 * 4];
        iVar14 = uVar28 - bVar12;
        iVar19 = -iVar14;
        if (0 < iVar14) {
          iVar19 = iVar14;
        }
        uVar13 = uVar28;
        if (iVar5 < iVar19) {
          uVar13 = (uint)bVar12;
        }
        iVar14 = 1;
        if (iVar5 < iVar19) {
          iVar14 = -1;
        }
        if ((int)uVar28 <= (int)(uint)bVar12) {
          iVar14 = 1;
        }
        iVar15 = (uVar21 - uVar13) * iVar14;
        uVar28 = uVar21;
        if (iVar5 != 0) {
          iVar16 = iVar5;
          if (iVar15 < 0) {
            iVar16 = -iVar5;
          }
          iVar15 = (iVar16 + iVar15) / iVar10;
          uVar13 = iVar14 * iVar10 * iVar15 + uVar13;
          uVar28 = 0xff;
          if (((int)uVar13 < 0x100) && (uVar28 = uVar13, (int)uVar13 < 0)) {
            uVar28 = 0;
          }
        }
        uVar13 = iVar5 < iVar19 ^ 1;
        uVar24 = (ulong)uVar13;
        iVar15 = (iVar15 >> 0x1f & uVar6) + iVar15;
        uVar21 = uVar6;
        if (iVar15 < iVar18) {
          uVar21 = 0;
        }
        if (iVar5 < iVar19) {
          iVar14 = *(int *)(param_1 + 0xbd4);
        }
        else {
          iVar14 = *(int *)(param_1 + 0x614) / 2 + *(int *)(param_1 + 0xbd8);
        }
        iVar15 = iVar15 - uVar21;
        uVar25 = (ulong)(uVar13 + 0x16d);
        iVar16 = *(int *)(param_1 + 0x5c + uVar25 * 4);
        iVar17 = -1;
        do {
          iVar17 = iVar17 + 1;
          bVar12 = (byte)iVar17;
        } while (iVar16 << (bVar12 & 0x1f) < iVar14);
        if ((((iVar15 < 1) || (iVar17 != 0)) ||
            (uVar21 = 1, iVar16 <= *(int *)(param_1 + 0x618 + uVar24 * 4) * 2)) &&
           ((-1 < iVar15 || (uVar21 = 1, *(int *)(param_1 + 0x618 + uVar24 * 4) * 2 < iVar16)))) {
          uVar21 = (uint)(iVar17 != 0 && iVar15 < 0);
        }
        iVar14 = -iVar15;
        if (0 < iVar15) {
          iVar14 = iVar15;
        }
        uVar21 = (iVar14 * 2 - uVar13) - uVar21;
        uVar13 = (int)uVar21 >> (bVar12 & 0x1f);
        iVar14 = (0x1f - iVar7) - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4);
        if ((int)uVar13 < iVar14 + -1) {
          iVar14 = *(int *)(param_1 + 0x30) + ~uVar13;
          *(int *)(param_1 + 0x30) = iVar14;
          if (iVar14 < 0) {
            uVar13 = 1U >> (-(byte)iVar14 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            uVar13 = 1 << ((byte)iVar14 & 0x1f);
          }
          else {
            uVar13 = 1 << ((byte)iVar14 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar13;
          uVar22 = ~(-1 << (bVar12 & 0x1f)) & uVar21;
          iVar14 = iVar14 - iVar17;
          *(int *)(param_1 + 0x30) = iVar14;
          if (iVar14 < 0) {
            uVar13 = (int)uVar22 >> (-(byte)iVar14 & 0x1f) | uVar13;
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            *(uint *)(param_1 + 0x44) = uVar22 << ((byte)iVar14 & 0x1f);
          }
          else {
            *(uint *)(param_1 + 0x44) = uVar22 << ((byte)iVar14 & 0x1f) | uVar13;
          }
        }
        else {
          iVar14 = *(int *)(param_1 + 0x30) - iVar14;
          *(int *)(param_1 + 0x30) = iVar14;
          if (iVar14 < 0) {
            uVar13 = 1U >> (-(byte)iVar14 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            uVar13 = 1 << ((byte)iVar14 & 0x1f);
          }
          else {
            uVar13 = 1 << ((byte)iVar14 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar13;
          iVar16 = uVar21 - 1;
          iVar14 = iVar14 - iVar7;
          *(int *)(param_1 + 0x30) = iVar14;
          if (iVar14 < 0) {
            uVar13 = iVar16 >> (-(byte)iVar14 & 0x1f) | uVar13;
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            uVar13 = iVar16 << ((byte)iVar14 & 0x1f);
          }
          else {
            uVar13 = iVar16 << ((byte)iVar14 & 0x1f) | uVar13;
          }
          *(uint *)(param_1 + 0x44) = uVar13;
        }
        if (iVar15 < 0) {
          piVar1 = (int *)(param_1 + 0x618 + uVar24 * 4);
          *piVar1 = *piVar1 + 1;
        }
        iVar14 = (int)(uVar21 + (iVar5 < iVar19)) / 2 + *(int *)(param_1 + 0x620 + uVar25 * 4);
        *(int *)(param_1 + 0x620 + uVar25 * 4) = iVar14;
        iVar19 = *(int *)(param_1 + 0x5c + uVar25 * 4);
        if (iVar19 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + uVar25 * 4) = iVar14 / 2;
          iVar19 = iVar19 / 2;
          *(int *)(param_1 + 0x5c + uVar25 * 4) = iVar19;
          *(int *)(param_1 + 0x618 + uVar24 * 4) = *(int *)(param_1 + 0x618 + uVar24 * 4) / 2;
        }
        *(int *)(param_1 + 0x5c + uVar25 * 4) = iVar19 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        iVar19 = (int)cVar2;
        if ((cVar2 == '\0') && (iVar19 = (int)cVar3, cVar3 == '\0')) {
          iVar19 = (int)cVar4;
        }
        uVar20 = iVar19 >> 0x1f | 1;
        uVar22 = (uint)bVar27;
        uVar13 = uVar22;
        if ((int)uVar28 <= (int)(uint)bVar27) {
          uVar13 = uVar28;
        }
        uVar11 = uVar28;
        if ((int)uVar28 < (int)(uint)bVar27) {
          uVar11 = uVar22;
        }
        if (((int)(uint)bVar12 < (int)uVar11) &&
           (bVar9 = (int)uVar13 < (int)(uint)bVar12, uVar13 = uVar11, bVar9)) {
          uVar13 = (uVar22 - bVar12) + uVar28;
        }
        lVar23 = (long)(int)((cVar3 * 9 + cVar2 * 0x51 + (int)cVar4) * uVar20);
        iVar14 = *(int *)(param_1 + 0x1190 + lVar23 * 4) * uVar20 + uVar13;
        iVar19 = 0xff;
        if ((iVar14 < 0x100) && (iVar19 = iVar14, iVar14 < 0)) {
          iVar19 = 0;
        }
        iVar14 = (uVar21 - iVar19) * uVar20;
        uVar28 = uVar21;
        if (iVar5 != 0) {
          iVar15 = iVar5;
          if (iVar14 < 0) {
            iVar15 = -iVar5;
          }
          iVar14 = (iVar15 + iVar14) / iVar10;
          uVar21 = uVar20 * iVar10 * iVar14 + iVar19;
          uVar28 = 0xff;
          if (((int)uVar21 < 0x100) && (uVar28 = uVar21, (int)uVar21 < 0)) {
            uVar28 = 0;
          }
        }
        iVar14 = (iVar14 >> 0x1f & uVar6) + iVar14;
        iVar19 = *(int *)(param_1 + 0x5c + lVar23 * 4);
        iVar15 = -1;
        do {
          iVar15 = iVar15 + 1;
          bVar12 = (byte)iVar15;
        } while (iVar19 << (bVar12 & 0x1f) < *(int *)(param_1 + 0x620 + lVar23 * 4));
        uVar13 = 0;
        uVar21 = uVar6;
        if (iVar14 < iVar18) {
          uVar21 = uVar13;
        }
        iVar14 = iVar14 - uVar21;
        if (iVar15 == 0 && iVar5 == 0) {
          uVar13 = (uint)(*(int *)(param_1 + 0xbdc + lVar23 * 4) * 2 <= -iVar19);
        }
        if (iVar14 < 0) {
          uVar13 = ~(iVar14 * 2) - uVar13;
        }
        else {
          uVar13 = iVar14 * 2 | uVar13;
        }
        uVar21 = (int)uVar13 >> (bVar12 & 0x1f);
        if ((int)uVar21 < 0x1f - iVar7) {
          iVar19 = *(int *)(param_1 + 0x30) + ~uVar21;
          *(int *)(param_1 + 0x30) = iVar19;
          if (iVar19 < 0) {
            uVar21 = 1U >> (-(byte)iVar19 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar19 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar19;
            uVar21 = 1 << ((byte)iVar19 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar19 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar13 = uVar13 & ~(-1 << (bVar12 & 0x1f));
          iVar19 = iVar19 - iVar15;
          *(int *)(param_1 + 0x30) = iVar19;
          if (iVar19 < 0) {
            uVar21 = (int)uVar13 >> (-(byte)iVar19 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar19 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar19;
            uVar21 = uVar13 << ((byte)iVar19 & 0x1f);
          }
          else {
            uVar21 = uVar13 << ((byte)iVar19 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
        }
        else {
          iVar19 = *(int *)(param_1 + 0x30) - (0x20 - iVar7);
          *(int *)(param_1 + 0x30) = iVar19;
          if (iVar19 < 0) {
            uVar21 = 1U >> (-(byte)iVar19 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar19 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar19;
            uVar21 = 1 << ((byte)iVar19 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar19 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          iVar15 = uVar13 - 1;
          iVar19 = iVar19 - iVar7;
          *(int *)(param_1 + 0x30) = iVar19;
          if (iVar19 < 0) {
            uVar21 = iVar15 >> (-(byte)iVar19 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar19 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar19;
            uVar21 = iVar15 << ((byte)iVar19 & 0x1f);
          }
          else {
            uVar21 = iVar15 << ((byte)iVar19 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
        }
        iVar19 = -iVar14;
        if (0 < iVar14) {
          iVar19 = iVar14;
        }
        iVar19 = iVar19 + *(int *)(param_1 + 0x620 + lVar23 * 4);
        *(int *)(param_1 + 0x620 + lVar23 * 4) = iVar19;
        iVar14 = iVar14 * iVar10 + *(int *)(param_1 + 0xbdc + lVar23 * 4);
        *(int *)(param_1 + 0xbdc + lVar23 * 4) = iVar14;
        uVar21 = *(uint *)(param_1 + 0x5c + lVar23 * 4);
        if (uVar21 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar23 * 4) = iVar19 / 2;
          iVar14 = iVar14 / 2;
          *(int *)(param_1 + 0xbdc + lVar23 * 4) = iVar14;
          uVar21 = (int)uVar21 / 2;
          *(uint *)(param_1 + 0x5c + lVar23 * 4) = uVar21;
        }
        iVar19 = uVar21 + 1;
        *(int *)(param_1 + 0x5c + lVar23 * 4) = iVar19;
        if ((int)~uVar21 < iVar14) {
          if (0 < iVar14) {
            iVar15 = iVar14 - iVar19;
            if (iVar15 != 0 && iVar19 <= iVar14) {
              iVar15 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar23 * 4) = iVar15;
            iVar19 = *(int *)(param_1 + 0x1190 + lVar23 * 4);
            if (iVar19 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar23 * 4) = iVar19 + 1;
            }
          }
        }
        else {
          iVar15 = -uVar21;
          if ((int)~uVar21 < iVar19 + iVar14) {
            iVar15 = iVar19 + iVar14;
          }
          *(int *)(param_1 + 0xbdc + lVar23 * 4) = iVar15;
          iVar19 = *(int *)(param_1 + 0x1190 + lVar23 * 4);
          if (-0x80 < iVar19) {
            *(int *)(param_1 + 0x1190 + lVar23 * 4) = iVar19 + -1;
          }
        }
      }
      bVar12 = param_2[uVar26 * 4];
      bVar27 = (byte)uVar28;
      param_2[uVar26 * 4] = bVar27;
      uVar21 = (int)uVar26 + 1;
      uVar26 = (ulong)uVar21;
      if (param_4 < uVar21) break;
      bVar27 = param_2[uVar26 * 4];
    }
  }
  param_2[uVar26 * 4] = bVar27;
  return;
}

