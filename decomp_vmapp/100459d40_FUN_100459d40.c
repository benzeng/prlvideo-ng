
void FUN_100459d40(long param_1,byte *param_2,long param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  int iVar23;
  
  bVar8 = *param_2;
  bVar21 = param_2[4];
  *param_2 = bVar21;
  uVar22 = 1;
  if (param_4 != 0) {
    uVar15 = (uint)bVar21;
    uVar22 = 1;
    while( true ) {
      iVar17 = (int)uVar22;
      uVar10 = (uint)*(byte *)(param_3 + -4 + uVar22 * 4);
      cVar2 = *(char *)(param_1 + 0x1744 +
                       (((ulong)param_2[(ulong)(iVar17 + 1) * 4] | 0x100) - (ulong)bVar21));
      cVar3 = *(char *)(param_1 + (((ulong)bVar21 + 0x1844) - (ulong)bVar8));
      cVar4 = *(char *)(param_1 + (((ulong)bVar8 + 0x1844) - (long)(int)uVar15));
      if (cVar4 == '\0' && (cVar3 == '\0' && cVar2 == '\0')) {
        iVar23 = uVar10 - uVar15;
        iVar14 = -iVar23;
        if (0 < iVar23) {
          iVar14 = iVar23;
        }
        iVar23 = 0;
        if (iVar14 < 4) {
          iVar23 = 0;
          do {
            uVar13 = iVar17 + iVar23;
            uVar10 = iVar17 + 1 + iVar23;
            iVar23 = iVar23 + 1;
            param_2[(ulong)uVar13 * 4] = (byte)uVar15;
            if (param_4 < uVar10) {
              FUN_10045aea0(param_1,iVar23,1);
              param_2[(ulong)uVar10 * 4] = param_2[(ulong)uVar13 * 4];
              return;
            }
            uVar10 = (uint)*(byte *)(param_3 + -4 + (ulong)uVar10 * 4);
            iVar16 = uVar10 - uVar15;
            iVar14 = -iVar16;
            if (0 < iVar16) {
              iVar14 = iVar16;
            }
          } while (iVar14 < 4);
          uVar22 = (ulong)(uint)(iVar17 + iVar23);
        }
        FUN_10045aea0(param_1,iVar23,0);
        bVar8 = param_2[uVar22 * 4];
        iVar14 = uVar15 - bVar8;
        iVar17 = -iVar14;
        if (0 < iVar14) {
          iVar17 = iVar14;
        }
        uVar13 = uVar15;
        if (3 < iVar17) {
          uVar13 = (uint)bVar8;
        }
        iVar14 = 1;
        if (3 < iVar17) {
          iVar14 = -1;
        }
        if ((int)uVar15 <= (int)(uint)bVar8) {
          iVar14 = 1;
        }
        iVar16 = (uVar10 - uVar13) * iVar14;
        uVar15 = iVar16 >> 0x1f & 0xfffffffa;
        iVar23 = iVar16 + 3 + uVar15;
        iVar16 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20) + 3 + iVar16 + uVar15;
        iVar16 = (iVar16 >> 2) - (iVar16 >> 0x1f);
        uVar13 = iVar14 * iVar16 * 7 + uVar13;
        uVar15 = 0xff;
        if (((int)uVar13 < 0x100) && (uVar15 = uVar13, (int)uVar13 < 0)) {
          uVar15 = 0;
        }
        uVar10 = 3 < iVar17 ^ 1;
        uVar19 = (ulong)uVar10;
        iVar14 = 0;
        if (iVar23 < -6) {
          iVar14 = 0x26;
        }
        iVar14 = iVar14 + iVar16;
        iVar23 = 0x26;
        if (iVar14 < 0x13) {
          iVar23 = 0;
        }
        if (iVar17 < 4) {
          iVar16 = *(int *)(param_1 + 0x614) / 2 + *(int *)(param_1 + 0xbd8);
        }
        else {
          iVar16 = *(int *)(param_1 + 0xbd4);
        }
        iVar14 = iVar14 - iVar23;
        uVar20 = (ulong)(uVar10 + 0x16d);
        iVar23 = *(int *)(param_1 + 0x5c + uVar20 * 4);
        iVar11 = -1;
        do {
          iVar11 = iVar11 + 1;
          bVar8 = (byte)iVar11;
        } while (iVar23 << (bVar8 & 0x1f) < iVar16);
        if ((((iVar14 < 1) || (iVar11 != 0)) ||
            (uVar13 = 1, iVar23 <= *(int *)(param_1 + 0x618 + uVar19 * 4) * 2)) &&
           ((-1 < iVar14 || (uVar13 = 1, *(int *)(param_1 + 0x618 + uVar19 * 4) * 2 < iVar23)))) {
          uVar13 = (uint)(iVar11 != 0 && iVar14 < 0);
        }
        iVar23 = -iVar14;
        if (0 < iVar14) {
          iVar23 = iVar14;
        }
        uVar13 = (iVar23 * 2 - uVar10) - uVar13;
        uVar10 = (int)uVar13 >> (bVar8 & 0x1f);
        if ((int)uVar10 < 0x18 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar23 = *(int *)(param_1 + 0x30) + ~uVar10;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar10 = 1U >> (-(byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar10;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                      uVar10 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar10 = 1 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar10 = 1 << ((byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar10;
          uVar9 = ~(-1 << (bVar8 & 0x1f)) & uVar13;
          iVar23 = iVar23 - iVar11;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar10 = (int)uVar9 >> (-(byte)iVar23 & 0x1f) | uVar10;
            *(uint *)(param_1 + 0x44) = uVar10;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                      uVar10 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            *(uint *)(param_1 + 0x44) = uVar9 << ((byte)iVar23 & 0x1f);
          }
          else {
            *(uint *)(param_1 + 0x44) = uVar9 << ((byte)iVar23 & 0x1f) | uVar10;
          }
        }
        else {
          iVar23 = *(int *)(param_1 + 0x30) -
                   (0x19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar10 = 1U >> (-(byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar10;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                      uVar10 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar10 = 1 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar10 = 1 << ((byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar10;
          iVar16 = uVar13 - 1;
          iVar11 = iVar23 + -6;
          *(int *)(param_1 + 0x30) = iVar11;
          if (iVar11 < 0) {
            uVar10 = iVar16 >> (6U - (char)iVar23 & 0x1f) | uVar10;
            *(uint *)(param_1 + 0x44) = uVar10;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                      uVar10 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar10 = iVar16 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar10 = iVar16 << ((byte)iVar11 & 0x1f) | uVar10;
          }
          *(uint *)(param_1 + 0x44) = uVar10;
        }
        if (iVar14 < 0) {
          piVar1 = (int *)(param_1 + 0x618 + uVar19 * 4);
          *piVar1 = *piVar1 + 1;
        }
        iVar14 = (int)(uVar13 + (3 < iVar17)) / 2 + *(int *)(param_1 + 0x620 + uVar20 * 4);
        *(int *)(param_1 + 0x620 + uVar20 * 4) = iVar14;
        iVar17 = *(int *)(param_1 + 0x5c + uVar20 * 4);
        if (iVar17 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + uVar20 * 4) = iVar14 / 2;
          iVar17 = iVar17 / 2;
          *(int *)(param_1 + 0x5c + uVar20 * 4) = iVar17;
          *(int *)(param_1 + 0x618 + uVar19 * 4) = *(int *)(param_1 + 0x618 + uVar19 * 4) / 2;
        }
        *(int *)(param_1 + 0x5c + uVar20 * 4) = iVar17 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        iVar17 = (int)cVar2;
        if ((cVar2 == '\0') && (iVar17 = (int)cVar3, cVar3 == '\0')) {
          iVar17 = (int)cVar4;
        }
        uVar9 = iVar17 >> 0x1f | 1;
        uVar12 = (uint)bVar21;
        uVar13 = uVar12;
        if ((int)uVar15 <= (int)(uint)bVar21) {
          uVar13 = uVar15;
        }
        uVar7 = uVar15;
        if ((int)uVar15 < (int)(uint)bVar21) {
          uVar7 = uVar12;
        }
        if (((int)(uint)bVar8 < (int)uVar7) &&
           (bVar6 = (int)uVar13 < (int)(uint)bVar8, uVar13 = uVar7, bVar6)) {
          uVar13 = (uVar12 - bVar8) + uVar15;
        }
        lVar18 = (long)(int)((cVar3 * 9 + cVar2 * 0x51 + (int)cVar4) * uVar9);
        iVar14 = *(int *)(param_1 + 0x1190 + lVar18 * 4) * uVar9 + uVar13;
        iVar17 = 0xff;
        if ((iVar14 < 0x100) && (iVar17 = iVar14, iVar14 < 0)) {
          iVar17 = 0;
        }
        iVar23 = (uVar10 - iVar17) * uVar9;
        uVar15 = iVar23 >> 0x1f & 0xfffffffa;
        iVar14 = iVar23 + 3 + uVar15;
        iVar23 = (int)((ulong)((long)iVar14 * -0x6db6db6d) >> 0x20) + 3 + iVar23 + uVar15;
        iVar23 = (iVar23 >> 2) - (iVar23 >> 0x1f);
        uVar10 = uVar9 * iVar23 * 7 + iVar17;
        uVar15 = 0xff;
        if (((int)uVar10 < 0x100) && (uVar15 = uVar10, (int)uVar10 < 0)) {
          uVar15 = 0;
        }
        iVar17 = 0;
        if (iVar14 < -6) {
          iVar17 = 0x26;
        }
        iVar17 = iVar17 + iVar23;
        iVar14 = -1;
        do {
          iVar14 = iVar14 + 1;
          bVar8 = (byte)iVar14;
        } while (*(int *)(param_1 + 0x5c + lVar18 * 4) << (bVar8 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar18 * 4));
        iVar23 = 0x26;
        if (iVar17 < 0x13) {
          iVar23 = 0;
        }
        iVar17 = iVar17 - iVar23;
        uVar10 = iVar17 >> 0x1f ^ iVar17 * 2;
        uVar13 = (int)uVar10 >> (bVar8 & 0x1f);
        iVar23 = *(int *)(param_1 + 0x30);
        if ((int)uVar13 < 0x19) {
          iVar23 = iVar23 + ~uVar13;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar13 = 1U >> (-(byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar13 = 1 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar13 = 1 << ((byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar13;
          uVar10 = uVar10 & ~(-1 << (bVar8 & 0x1f));
          iVar23 = iVar23 - iVar14;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar13 = (int)uVar10 >> (-(byte)iVar23 & 0x1f) | uVar13;
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            uVar13 = uVar10 << ((byte)iVar14 & 0x1f);
          }
          else {
            uVar13 = uVar10 << ((byte)iVar23 & 0x1f) | uVar13;
          }
          *(uint *)(param_1 + 0x44) = uVar13;
        }
        else {
          iVar14 = iVar23 + -0x1a;
          *(int *)(param_1 + 0x30) = iVar14;
          if (iVar14 < 0) {
            uVar13 = 1U >> (0x1aU - (char)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            uVar13 = 1 << ((byte)iVar14 & 0x1f);
          }
          else {
            uVar13 = 1 << ((byte)iVar14 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar13;
          iVar16 = uVar10 - 1;
          iVar23 = iVar14 + -6;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar13 = iVar16 >> (6U - (char)iVar14 & 0x1f) | uVar13;
            *(uint *)(param_1 + 0x44) = uVar13;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
            iVar14 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar14;
            uVar13 = iVar16 << ((byte)iVar14 & 0x1f);
          }
          else {
            uVar13 = iVar16 << ((byte)iVar23 & 0x1f) | uVar13;
          }
          *(uint *)(param_1 + 0x44) = uVar13;
        }
        iVar14 = -iVar17;
        if (0 < iVar17) {
          iVar14 = iVar17;
        }
        iVar14 = iVar14 + *(int *)(param_1 + 0x620 + lVar18 * 4);
        *(int *)(param_1 + 0x620 + lVar18 * 4) = iVar14;
        iVar17 = iVar17 * 7 + *(int *)(param_1 + 0xbdc + lVar18 * 4);
        *(int *)(param_1 + 0xbdc + lVar18 * 4) = iVar17;
        uVar10 = *(uint *)(param_1 + 0x5c + lVar18 * 4);
        if (uVar10 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar18 * 4) = iVar14 / 2;
          iVar17 = iVar17 / 2;
          *(int *)(param_1 + 0xbdc + lVar18 * 4) = iVar17;
          uVar10 = (int)uVar10 / 2;
          *(uint *)(param_1 + 0x5c + lVar18 * 4) = uVar10;
        }
        iVar14 = uVar10 + 1;
        *(int *)(param_1 + 0x5c + lVar18 * 4) = iVar14;
        if ((int)~uVar10 < iVar17) {
          if (0 < iVar17) {
            iVar23 = iVar17 - iVar14;
            if (iVar23 != 0 && iVar14 <= iVar17) {
              iVar23 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar18 * 4) = iVar23;
            iVar17 = *(int *)(param_1 + 0x1190 + lVar18 * 4);
            if (iVar17 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar18 * 4) = iVar17 + 1;
            }
          }
        }
        else {
          iVar23 = -uVar10;
          if ((int)~uVar10 < iVar14 + iVar17) {
            iVar23 = iVar14 + iVar17;
          }
          *(int *)(param_1 + 0xbdc + lVar18 * 4) = iVar23;
          iVar17 = *(int *)(param_1 + 0x1190 + lVar18 * 4);
          if (-0x80 < iVar17) {
            *(int *)(param_1 + 0x1190 + lVar18 * 4) = iVar17 + -1;
          }
        }
      }
      bVar8 = param_2[uVar22 * 4];
      bVar21 = (byte)uVar15;
      param_2[uVar22 * 4] = bVar21;
      uVar10 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar10;
      if (param_4 < uVar10) break;
      bVar21 = param_2[uVar22 * 4];
    }
  }
  param_2[uVar22 * 4] = bVar21;
  return;
}

