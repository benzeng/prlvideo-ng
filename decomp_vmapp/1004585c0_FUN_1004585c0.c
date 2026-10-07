
void FUN_1004585c0(long param_1,byte *param_2,long param_3,uint param_4)

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
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  uint uVar23;
  ulong uVar19;
  
  bVar8 = *param_2;
  bVar22 = param_2[4];
  *param_2 = bVar22;
  uVar21 = 1;
  if (param_4 != 0) {
    uVar21 = 1;
    uVar14 = (uint)bVar22;
    while( true ) {
      iVar13 = (int)uVar21;
      uVar23 = (uint)*(byte *)(param_3 + -4 + uVar21 * 4);
      cVar2 = *(char *)(param_1 + 0x1744 +
                       (((ulong)param_2[(ulong)(iVar13 + 1) * 4] | 0x100) - (ulong)bVar22));
      cVar3 = *(char *)(param_1 + (((ulong)bVar22 + 0x1844) - (ulong)bVar8));
      cVar4 = *(char *)(param_1 + (((ulong)bVar8 + 0x1844) - (long)(int)uVar14));
      if (cVar4 == '\0' && (cVar3 == '\0' && cVar2 == '\0')) {
        iVar16 = uVar23 - uVar14;
        iVar10 = -iVar16;
        if (0 < iVar16) {
          iVar10 = iVar16;
        }
        iVar16 = 0;
        if (iVar10 < 1) {
          iVar16 = 0;
          do {
            uVar9 = iVar13 + iVar16;
            uVar23 = iVar13 + 1 + iVar16;
            iVar16 = iVar16 + 1;
            param_2[(ulong)uVar9 * 4] = (byte)uVar14;
            if (param_4 < uVar23) {
              FUN_10045aea0(param_1,iVar16,1);
              param_2[(ulong)uVar23 * 4] = param_2[(ulong)uVar9 * 4];
              return;
            }
            uVar23 = (uint)*(byte *)(param_3 + -4 + (ulong)uVar23 * 4);
            iVar15 = uVar23 - uVar14;
            iVar10 = -iVar15;
            if (0 < iVar15) {
              iVar10 = iVar15;
            }
          } while (iVar10 < 1);
          uVar21 = (ulong)(uint)(iVar13 + iVar16);
        }
        FUN_10045aea0(param_1,iVar16,0);
        bVar8 = param_2[uVar21 * 4];
        iVar10 = uVar14 - bVar8;
        iVar13 = -iVar10;
        if (0 < iVar10) {
          iVar13 = iVar10;
        }
        uVar9 = uVar14;
        if (0 < iVar13) {
          uVar9 = (uint)bVar8;
        }
        iVar10 = 1;
        if (0 < iVar13) {
          iVar10 = -1;
        }
        if (uVar14 <= bVar8) {
          iVar10 = 1;
        }
        uVar18 = 0 < iVar13 ^ 1;
        uVar19 = (ulong)uVar18;
        uVar14 = (uVar23 - uVar9) * iVar10;
        iVar10 = (uVar14 >> 0x17 & 0x100) + uVar14;
        if (iVar13 < 1) {
          iVar16 = *(int *)(param_1 + 0x614) / 2 + *(int *)(param_1 + 0xbd8);
        }
        else {
          iVar16 = *(int *)(param_1 + 0xbd4);
        }
        iVar10 = iVar10 + (uint)(0x7f < iVar10) * -0x100;
        uVar20 = (ulong)(uVar18 + 0x16d);
        iVar15 = *(int *)(param_1 + 0x5c + uVar20 * 4);
        iVar11 = -1;
        do {
          iVar11 = iVar11 + 1;
          bVar8 = (byte)iVar11;
        } while (iVar15 << (bVar8 & 0x1f) < iVar16);
        if ((((iVar10 < 1) || (iVar11 != 0)) ||
            (uVar14 = 1, iVar15 <= *(int *)(param_1 + 0x618 + uVar19 * 4) * 2)) &&
           ((-1 < iVar10 || (uVar14 = 1, *(int *)(param_1 + 0x618 + uVar19 * 4) * 2 < iVar15)))) {
          uVar14 = (uint)(iVar11 != 0 && iVar10 < 0);
        }
        iVar16 = -iVar10;
        if (0 < iVar10) {
          iVar16 = iVar10;
        }
        uVar14 = (iVar16 * 2 - uVar18) - uVar14;
        uVar9 = (int)uVar14 >> (bVar8 & 0x1f);
        if ((int)uVar9 < 0x16 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar16 = *(int *)(param_1 + 0x30) + ~uVar9;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar9 = 1U >> (-(byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar9 = 1 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar9 = 1 << ((byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar9;
          uVar18 = ~(-1 << (bVar8 & 0x1f)) & uVar14;
          iVar16 = iVar16 - iVar11;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar9 = (int)uVar18 >> (-(byte)iVar16 & 0x1f) | uVar9;
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            *(uint *)(param_1 + 0x44) = uVar18 << ((byte)iVar16 & 0x1f);
          }
          else {
            *(uint *)(param_1 + 0x44) = uVar18 << ((byte)iVar16 & 0x1f) | uVar9;
          }
        }
        else {
          iVar16 = *(int *)(param_1 + 0x30) -
                   (0x17 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar9 = 1U >> (-(byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar9 = 1 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar9 = 1 << ((byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar9;
          iVar15 = uVar14 - 1;
          iVar11 = iVar16 + -8;
          *(int *)(param_1 + 0x30) = iVar11;
          if (iVar11 < 0) {
            uVar9 = iVar15 >> (8U - (char)iVar16 & 0x1f) | uVar9;
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar9 = iVar15 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar9 = iVar15 << ((byte)iVar11 & 0x1f) | uVar9;
          }
          *(uint *)(param_1 + 0x44) = uVar9;
        }
        if (iVar10 < 0) {
          piVar1 = (int *)(param_1 + 0x618 + uVar19 * 4);
          *piVar1 = *piVar1 + 1;
        }
        iVar10 = (int)(uVar14 + (0 < iVar13)) / 2 + *(int *)(param_1 + 0x620 + uVar20 * 4);
        *(int *)(param_1 + 0x620 + uVar20 * 4) = iVar10;
        iVar13 = *(int *)(param_1 + 0x5c + uVar20 * 4);
        if (iVar13 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + uVar20 * 4) = iVar10 / 2;
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0x5c + uVar20 * 4) = iVar13;
          *(int *)(param_1 + 0x618 + uVar19 * 4) = *(int *)(param_1 + 0x618 + uVar19 * 4) / 2;
        }
        *(int *)(param_1 + 0x5c + uVar20 * 4) = iVar13 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        iVar13 = (int)cVar2;
        if ((cVar2 == '\0') && (iVar13 = (int)cVar3, cVar3 == '\0')) {
          iVar13 = (int)cVar4;
        }
        uVar12 = iVar13 >> 0x1f | 1;
        uVar18 = (uint)bVar22;
        uVar9 = uVar18;
        if (uVar14 <= bVar22) {
          uVar9 = uVar14;
        }
        uVar7 = uVar14;
        if (uVar14 < bVar22) {
          uVar7 = uVar18;
        }
        if ((bVar8 < uVar7) && (bVar6 = uVar9 < bVar8, uVar9 = uVar7, bVar6)) {
          uVar9 = (uVar18 - bVar8) + uVar14;
        }
        lVar17 = (long)(int)((cVar3 * 9 + cVar2 * 0x51 + (int)cVar4) * uVar12);
        iVar10 = *(int *)(param_1 + 0x1190 + lVar17 * 4) * uVar12 + uVar9;
        iVar13 = 0xff;
        if ((iVar10 < 0x100) && (iVar13 = iVar10, iVar10 < 0)) {
          iVar13 = 0;
        }
        uVar12 = (uVar23 - iVar13) * uVar12;
        iVar16 = (uVar12 >> 0x17 & 0x100) + uVar12;
        iVar13 = *(int *)(param_1 + 0x5c + lVar17 * 4);
        iVar10 = -1;
        do {
          iVar10 = iVar10 + 1;
          bVar8 = (byte)iVar10;
        } while (iVar13 << (bVar8 & 0x1f) < *(int *)(param_1 + 0x620 + lVar17 * 4));
        iVar16 = iVar16 + (uint)(0x7f < iVar16) * -0x100;
        if (iVar10 == 0) {
          uVar14 = (uint)(*(int *)(param_1 + 0xbdc + lVar17 * 4) * 2 <= -iVar13);
        }
        else {
          uVar14 = 0;
        }
        if (iVar16 < 0) {
          uVar14 = ~(iVar16 * 2) - uVar14;
        }
        else {
          uVar14 = iVar16 * 2 | uVar14;
        }
        uVar9 = (int)uVar14 >> (bVar8 & 0x1f);
        iVar13 = *(int *)(param_1 + 0x30);
        if ((int)uVar9 < 0x17) {
          iVar13 = iVar13 + ~uVar9;
          *(int *)(param_1 + 0x30) = iVar13;
          if (iVar13 < 0) {
            uVar9 = 1U >> (-(byte)iVar13 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar13 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar13;
            uVar9 = 1 << ((byte)iVar13 & 0x1f);
          }
          else {
            uVar9 = 1 << ((byte)iVar13 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar9;
          uVar14 = uVar14 & ~(-1 << (bVar8 & 0x1f));
          iVar13 = iVar13 - iVar10;
          *(int *)(param_1 + 0x30) = iVar13;
          if (iVar13 < 0) {
            uVar9 = (int)uVar14 >> (-(byte)iVar13 & 0x1f) | uVar9;
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar13 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar13;
            uVar9 = uVar14 << ((byte)iVar13 & 0x1f);
          }
          else {
            uVar9 = uVar14 << ((byte)iVar13 & 0x1f) | uVar9;
          }
          *(uint *)(param_1 + 0x44) = uVar9;
        }
        else {
          iVar10 = iVar13 + -0x18;
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar9 = 1U >> (0x18U - (char)iVar13 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar10 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar10;
            uVar9 = 1 << ((byte)iVar10 & 0x1f);
          }
          else {
            uVar9 = 1 << ((byte)iVar10 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar9;
          iVar15 = uVar14 - 1;
          iVar13 = iVar10 + -8;
          *(int *)(param_1 + 0x30) = iVar13;
          if (iVar13 < 0) {
            uVar9 = iVar15 >> (8U - (char)iVar10 & 0x1f) | uVar9;
            *(uint *)(param_1 + 0x44) = uVar9;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            iVar13 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar13;
            uVar9 = iVar15 << ((byte)iVar13 & 0x1f);
          }
          else {
            uVar9 = iVar15 << ((byte)iVar13 & 0x1f) | uVar9;
          }
          *(uint *)(param_1 + 0x44) = uVar9;
        }
        iVar13 = -iVar16;
        if (0 < iVar16) {
          iVar13 = iVar16;
        }
        iVar13 = iVar13 + *(int *)(param_1 + 0x620 + lVar17 * 4);
        *(int *)(param_1 + 0x620 + lVar17 * 4) = iVar13;
        iVar16 = iVar16 + *(int *)(param_1 + 0xbdc + lVar17 * 4);
        *(int *)(param_1 + 0xbdc + lVar17 * 4) = iVar16;
        uVar14 = *(uint *)(param_1 + 0x5c + lVar17 * 4);
        if (uVar14 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar17 * 4) = iVar13 / 2;
          iVar16 = iVar16 / 2;
          *(int *)(param_1 + 0xbdc + lVar17 * 4) = iVar16;
          uVar14 = (int)uVar14 / 2;
          *(uint *)(param_1 + 0x5c + lVar17 * 4) = uVar14;
        }
        iVar13 = uVar14 + 1;
        *(int *)(param_1 + 0x5c + lVar17 * 4) = iVar13;
        if ((int)~uVar14 < iVar16) {
          if (0 < iVar16) {
            iVar10 = iVar16 - iVar13;
            if (iVar10 != 0 && iVar13 <= iVar16) {
              iVar10 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar17 * 4) = iVar10;
            iVar13 = *(int *)(param_1 + 0x1190 + lVar17 * 4);
            if (iVar13 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar17 * 4) = iVar13 + 1;
            }
          }
        }
        else {
          iVar10 = -uVar14;
          if ((int)~uVar14 < iVar13 + iVar16) {
            iVar10 = iVar13 + iVar16;
          }
          *(int *)(param_1 + 0xbdc + lVar17 * 4) = iVar10;
          iVar13 = *(int *)(param_1 + 0x1190 + lVar17 * 4);
          if (-0x80 < iVar13) {
            *(int *)(param_1 + 0x1190 + lVar17 * 4) = iVar13 + -1;
          }
        }
      }
      bVar8 = param_2[uVar21 * 4];
      bVar22 = (byte)uVar23;
      param_2[uVar21 * 4] = bVar22;
      uVar14 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar14;
      if (param_4 < uVar14) break;
      bVar22 = param_2[uVar21 * 4];
      uVar14 = uVar23;
    }
  }
  param_2[uVar21 * 4] = bVar22;
  return;
}

