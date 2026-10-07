
void FUN_100455720(long param_1,byte *param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint *puVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  byte bVar25;
  int iVar26;
  byte bVar27;
  uint uVar28;
  byte bVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  bVar9 = *param_2;
  bVar14 = param_2[1];
  bVar27 = param_2[2];
  bVar29 = param_2[4];
  bVar10 = param_2[5];
  bVar25 = param_2[6];
  *param_2 = bVar29;
  param_2[1] = bVar10;
  param_2[2] = bVar25;
  uVar19 = 1;
  if (param_4 != 0) {
    local_38 = (uint)bVar29;
    local_34 = (uint)bVar10;
    local_3c = (uint)bVar25;
    uVar19 = 1;
    do {
      uVar12 = (uint)uVar19;
      uVar13 = (ulong)(uVar12 + 1);
      uVar21 = (uint)*(byte *)(param_3 + -4 + uVar19 * 4);
      bVar1 = *(byte *)(param_3 + -3 + uVar19 * 4);
      bVar2 = *(byte *)(param_3 + -2 + uVar19 * 4);
      uVar17 = (uint)bVar2;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar29) + (ulong)param_2[uVar13 * 4]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar29 + 0x1844) - (ulong)bVar9));
      iVar22 = (int)*(char *)(param_1 + (((ulong)bVar9 + 0x1844) - (long)(int)local_38));
      iVar26 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar26 = (int)cVar4, cVar4 == '\0')) {
        iVar26 = iVar22;
      }
      uVar33 = iVar26 >> 0x1f | 1;
      cVar5 = *(char *)(param_1 + (0x1844 - (ulong)bVar10) + (ulong)param_2[uVar13 * 4 + 1]);
      cVar6 = *(char *)(param_1 + (((ulong)bVar10 + 0x1844) - (ulong)bVar14));
      iVar23 = (int)*(char *)(param_1 + (((ulong)bVar14 + 0x1844) - (long)(int)local_34));
      iVar26 = (int)cVar5;
      if ((cVar5 == '\0') && (iVar26 = (int)cVar6, cVar6 == '\0')) {
        iVar26 = iVar23;
      }
      iVar20 = (cVar4 * 9 + cVar3 * 0x51 + iVar22) * uVar33;
      uVar24 = iVar26 >> 0x1f | 1;
      iVar22 = (cVar6 * 9 + cVar5 * 0x51 + iVar23) * uVar24;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar25) + (ulong)param_2[uVar13 * 4 + 2]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar25 + 0x1844) - (ulong)bVar27));
      iVar23 = (int)*(char *)(param_1 + (((ulong)bVar27 + 0x1844) - (long)(int)local_3c));
      iVar26 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar26 = (int)cVar4, cVar4 == '\0')) {
        iVar26 = iVar23;
      }
      uVar28 = iVar26 >> 0x1f | 1;
      iVar26 = (cVar4 * 9 + cVar3 * 0x51 + iVar23) * uVar28;
      if ((iVar22 == 0 && iVar20 == 0) && iVar26 == 0) {
        iVar22 = uVar21 - local_38;
        iVar26 = -iVar22;
        if (0 < iVar22) {
          iVar26 = iVar22;
        }
        if (iVar26 < 4) {
          iVar26 = 0;
          do {
            uVar13 = (ulong)(uVar12 + iVar26);
            uVar33 = (uint)bVar1;
            iVar23 = uVar33 - local_34;
            iVar22 = -iVar23;
            if (0 < iVar23) {
              iVar22 = iVar23;
            }
            uVar32 = uVar13;
            iVar23 = iVar26;
            if (3 < iVar22) break;
            iVar20 = uVar17 - local_3c;
            iVar22 = -iVar20;
            if (0 < iVar20) {
              iVar22 = iVar20;
            }
            uVar32 = uVar19;
            if (3 < iVar22) break;
            iVar23 = iVar26 + 1;
            param_2[uVar13 * 4] = (byte)local_38;
            param_2[uVar13 * 4 + 1] = (byte)local_34;
            param_2[uVar13 * 4 + 2] = (byte)local_3c;
            uVar17 = uVar12 + 1 + iVar26;
            if (param_4 < uVar17) {
              FUN_10045aea0(param_1,iVar23,1);
              uVar19 = (ulong)uVar17;
              param_2[uVar19 * 4] = param_2[uVar13 * 4];
              param_2[uVar19 * 4 + 1] = param_2[uVar13 * 4 + 1];
              param_2[uVar19 * 4 + 2] = param_2[uVar13 * 4 + 2];
              return;
            }
            uVar32 = (ulong)((int)uVar19 + 1);
            uVar19 = (ulong)uVar17;
            uVar21 = (uint)*(byte *)(param_3 + -4 + uVar19 * 4);
            bVar1 = *(byte *)(param_3 + -3 + uVar19 * 4);
            uVar33 = (uint)bVar1;
            uVar17 = (uint)*(byte *)(param_3 + -2 + uVar19 * 4);
            iVar26 = uVar21 - local_38;
            iVar22 = -iVar26;
            if (0 < iVar26) {
              iVar22 = iVar26;
            }
            uVar19 = uVar32;
            iVar26 = iVar23;
          } while (iVar22 < 4);
        }
        else {
          uVar33 = (uint)bVar1;
          uVar32 = uVar19;
          iVar23 = 0;
        }
        FUN_10045aea0(param_1,iVar23,0);
        bVar9 = param_2[uVar32 * 4];
        bVar14 = param_2[uVar32 * 4 + 1];
        bVar27 = param_2[uVar32 * 4 + 2];
        iVar26 = 1;
        if (local_38 != bVar9 && (int)(uint)bVar9 <= (int)local_38) {
          iVar26 = -1;
        }
        iVar23 = (uVar21 - bVar9) * iVar26;
        uVar12 = iVar23 >> 0x1f & 0xfffffffa;
        iVar22 = iVar23 + 3 + uVar12;
        iVar23 = (int)((ulong)((long)iVar22 * -0x6db6db6d) >> 0x20) + 3 + iVar23 + uVar12;
        iVar23 = (iVar23 >> 2) - (iVar23 >> 0x1f);
        uVar12 = iVar26 * iVar23 * 7 + (uint)bVar9;
        local_38 = 0xff;
        if (((int)uVar12 < 0x100) && (local_38 = uVar12, (int)uVar12 < 0)) {
          local_38 = 0;
        }
        iVar26 = 0;
        if (iVar22 < -6) {
          iVar26 = 0x26;
        }
        iVar26 = iVar26 + iVar23;
        iVar22 = *(int *)(param_1 + 0x610);
        iVar23 = -1;
        do {
          iVar23 = iVar23 + 1;
          bVar9 = (byte)iVar23;
        } while (iVar22 << (bVar9 & 0x1f) < *(int *)(param_1 + 0xbd4));
        iVar20 = 0x26;
        if (iVar26 < 0x13) {
          iVar20 = 0;
        }
        iVar30 = iVar26 - iVar20;
        if ((((iVar30 == 0 || iVar26 < iVar20) || (iVar23 != 0)) ||
            (uVar12 = 1, iVar22 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar30 || (uVar12 = 1, *(int *)(param_1 + 0x618) * 2 < iVar22)))) {
          uVar12 = (uint)(iVar23 != 0 && iVar30 < 0);
        }
        iVar26 = -iVar30;
        if (0 < iVar30) {
          iVar26 = iVar30;
        }
        uVar12 = iVar26 * 2 - uVar12;
        uVar21 = (int)uVar12 >> (bVar9 & 0x1f);
        if ((int)uVar21 < 0x18 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar22 = *(int *)(param_1 + 0x30) + ~uVar21;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar21 = 1U >> (-(byte)iVar22 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar21 = 1 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar22 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar24 = ~(-1 << (bVar9 & 0x1f)) & uVar12;
          iVar22 = iVar22 - iVar23;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar21 = (int)uVar24 >> (-(byte)iVar22 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
LAB_100456705:
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar21 = uVar24 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar21 = uVar24 << ((byte)iVar22 & 0x1f) | uVar21;
          }
        }
        else {
          iVar26 = *(int *)(param_1 + 0x30) -
                   (0x19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar26;
          if (iVar26 < 0) {
            uVar21 = 1U >> (-(byte)iVar26 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar26 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar26;
            uVar21 = 1 << ((byte)iVar26 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar26 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar24 = uVar12 - 1;
          iVar22 = iVar26 + -6;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar21 = (int)uVar24 >> (6U - (char)iVar26 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            goto LAB_100456705;
          }
          uVar21 = uVar24 << ((byte)iVar22 & 0x1f) | uVar21;
        }
        *(uint *)(param_1 + 0x44) = uVar21;
        if (iVar30 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar23 = ((int)((uVar12 + 1) - ((int)(uVar12 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar23;
        iVar26 = *(int *)(param_1 + 0x610);
        if (iVar26 == *(int *)(param_1 + 0x24)) {
          iVar23 = iVar23 / 2;
          *(int *)(param_1 + 0xbd4) = iVar23;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0x610) = iVar26;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        iVar26 = iVar26 + 1;
        *(int *)(param_1 + 0x610) = iVar26;
        iVar20 = 1;
        if (local_34 != bVar14 && (int)(uint)bVar14 <= (int)local_34) {
          iVar20 = -1;
        }
        iVar18 = (uVar33 - bVar14) * iVar20;
        uVar12 = iVar18 >> 0x1f & 0xfffffffa;
        iVar30 = iVar18 + 3 + uVar12;
        iVar18 = (int)((ulong)((long)iVar30 * -0x6db6db6d) >> 0x20) + 3 + iVar18 + uVar12;
        iVar18 = (iVar18 >> 2) - (iVar18 >> 0x1f);
        uVar12 = iVar20 * iVar18 * 7 + (uint)bVar14;
        local_34 = 0xff;
        if (((int)uVar12 < 0x100) && (local_34 = uVar12, (int)uVar12 < 0)) {
          local_34 = 0;
        }
        iVar20 = 0;
        if (iVar30 < -6) {
          iVar20 = 0x26;
        }
        iVar18 = iVar18 + iVar20;
        iVar20 = -1;
        do {
          iVar20 = iVar20 + 1;
          bVar9 = (byte)iVar20;
        } while (iVar26 << (bVar9 & 0x1f) < iVar23);
        iVar23 = 0x26;
        if (iVar18 < 0x13) {
          iVar23 = 0;
        }
        iVar30 = iVar18 - iVar23;
        if ((((iVar30 == 0 || iVar18 < iVar23) || (iVar20 != 0)) ||
            (uVar12 = 1, iVar26 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar30 || (uVar12 = 1, *(int *)(param_1 + 0x618) * 2 < iVar26)))) {
          uVar12 = (uint)(iVar20 != 0 && iVar30 < 0);
        }
        iVar26 = -iVar30;
        if (0 < iVar30) {
          iVar26 = iVar30;
        }
        uVar12 = iVar26 * 2 - uVar12;
        uVar33 = (int)uVar12 >> (bVar9 & 0x1f);
        if ((int)uVar33 < 0x18 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar22 = iVar22 + ~uVar33;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar21 = 1U >> (-(byte)iVar22 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar21 = 1 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar22 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar33 = ~(-1 << (bVar9 & 0x1f)) & uVar12;
          iVar22 = iVar22 - iVar20;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar21 = (int)uVar33 >> (-(char)iVar22 & 0x1fU) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
            goto LAB_1004569d1;
          }
LAB_1004569b1:
          uVar33 = uVar33 << ((byte)iVar22 & 0x1f) | uVar21;
        }
        else {
          iVar26 = iVar22 - (0x19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar26;
          if (iVar26 < 0) {
            uVar21 = 1U >> (-(byte)iVar26 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar26 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar26;
            uVar21 = 1 << ((byte)iVar26 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar26 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar33 = uVar12 - 1;
          iVar22 = iVar26 + -6;
          *(int *)(param_1 + 0x30) = iVar22;
          if (-1 < iVar22) goto LAB_1004569b1;
          uVar21 = (int)uVar33 >> (6U - (char)iVar26 & 0x1f) | uVar21;
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
LAB_1004569d1:
          puVar7 = *(uint **)(param_1 + 0x28);
          *(uint **)(param_1 + 0x28) = puVar7 + 1;
          *puVar7 = uVar21;
          iVar22 = *(int *)(param_1 + 0x30) + 0x20;
          *(int *)(param_1 + 0x30) = iVar22;
          uVar33 = uVar33 << ((byte)iVar22 & 0x1f);
        }
        *(uint *)(param_1 + 0x44) = uVar33;
        if (iVar30 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar23 = ((int)((uVar12 + 1) - ((int)(uVar12 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar23;
        iVar26 = *(int *)(param_1 + 0x610);
        if (iVar26 == *(int *)(param_1 + 0x24)) {
          iVar23 = iVar23 / 2;
          *(int *)(param_1 + 0xbd4) = iVar23;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0x610) = iVar26;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        iVar26 = iVar26 + 1;
        *(int *)(param_1 + 0x610) = iVar26;
        iVar20 = 1;
        if (local_3c != bVar27 && (int)(uint)bVar27 <= (int)local_3c) {
          iVar20 = -1;
        }
        iVar18 = (uVar17 - bVar27) * iVar20;
        uVar12 = iVar18 >> 0x1f & 0xfffffffa;
        iVar30 = iVar18 + 3 + uVar12;
        iVar18 = (int)((ulong)((long)iVar30 * -0x6db6db6d) >> 0x20) + 3 + iVar18 + uVar12;
        iVar18 = (iVar18 >> 2) - (iVar18 >> 0x1f);
        uVar12 = iVar20 * iVar18 * 7 + (uint)bVar27;
        local_3c = 0xff;
        if (((int)uVar12 < 0x100) && (local_3c = uVar12, (int)uVar12 < 0)) {
          local_3c = 0;
        }
        iVar20 = 0;
        if (iVar30 < -6) {
          iVar20 = 0x26;
        }
        iVar18 = iVar18 + iVar20;
        iVar20 = -1;
        do {
          iVar20 = iVar20 + 1;
          bVar9 = (byte)iVar20;
        } while (iVar26 << (bVar9 & 0x1f) < iVar23);
        iVar23 = 0x26;
        if (iVar18 < 0x13) {
          iVar23 = 0;
        }
        iVar30 = iVar18 - iVar23;
        if ((((iVar30 == 0 || iVar18 < iVar23) || (iVar20 != 0)) ||
            (uVar12 = 1, iVar26 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar30 || (uVar12 = 1, *(int *)(param_1 + 0x618) * 2 < iVar26)))) {
          uVar12 = (uint)(iVar20 != 0 && iVar30 < 0);
        }
        iVar26 = -iVar30;
        if (0 < iVar30) {
          iVar26 = iVar30;
        }
        uVar12 = iVar26 * 2 - uVar12;
        uVar17 = (int)uVar12 >> (bVar9 & 0x1f);
        if ((int)uVar17 < 0x18 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar22 = iVar22 + ~uVar17;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar33 = 1U >> (-(byte)iVar22 & 0x1f) | uVar33;
            *(uint *)(param_1 + 0x44) = uVar33;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                      uVar33 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar33 = 1 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar33 = 1 << ((byte)iVar22 & 0x1f) | uVar33;
          }
          *(uint *)(param_1 + 0x44) = uVar33;
          uVar17 = ~(-1 << (bVar9 & 0x1f)) & uVar12;
          iVar22 = iVar22 - iVar20;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar33 = (int)uVar17 >> (-(byte)iVar22 & 0x1f) | uVar33;
            *(uint *)(param_1 + 0x44) = uVar33;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                      uVar33 << 0x18;
            iVar26 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar26;
            uVar33 = uVar17 << ((byte)iVar26 & 0x1f);
          }
          else {
            uVar33 = uVar17 << ((byte)iVar22 & 0x1f) | uVar33;
          }
          *(uint *)(param_1 + 0x44) = uVar33;
        }
        else {
          iVar22 = iVar22 - (0x19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar33 = 1U >> (-(byte)iVar22 & 0x1f) | uVar33;
            *(uint *)(param_1 + 0x44) = uVar33;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                      uVar33 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar33 = 1 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar33 = 1 << ((byte)iVar22 & 0x1f) | uVar33;
          }
          *(uint *)(param_1 + 0x44) = uVar33;
          iVar26 = uVar12 - 1;
          iVar23 = iVar22 + -6;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar33 = iVar26 >> (6U - (char)iVar22 & 0x1f) | uVar33;
            *(uint *)(param_1 + 0x44) = uVar33;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                      uVar33 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar33 = iVar26 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar33 = iVar26 << ((byte)iVar23 & 0x1f) | uVar33;
          }
          *(uint *)(param_1 + 0x44) = uVar33;
        }
        if (iVar30 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar22 = ((int)((uVar12 + 1) - ((int)(uVar12 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar22;
        iVar26 = *(int *)(param_1 + 0x610);
        if (iVar26 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0xbd4) = iVar22 / 2;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0x610) = iVar26;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar26 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
        uVar12 = (uint)uVar32;
      }
      else {
        uVar16 = (uint)bVar29;
        uVar17 = uVar16;
        if ((int)local_38 <= (int)uVar16) {
          uVar17 = local_38;
        }
        uVar11 = local_38;
        if ((int)local_38 < (int)uVar16) {
          uVar11 = uVar16;
        }
        uVar15 = (uint)bVar9;
        if (((int)uVar15 < (int)uVar11) &&
           (bVar8 = (int)uVar17 < (int)uVar15, uVar17 = uVar11, bVar8)) {
          uVar17 = (uVar16 - uVar15) + local_38;
        }
        lVar31 = (long)iVar20;
        iVar20 = *(int *)(param_1 + 0x1190 + lVar31 * 4) * uVar33 + uVar17;
        iVar23 = 0xff;
        if ((iVar20 < 0x100) && (iVar23 = iVar20, iVar20 < 0)) {
          iVar23 = 0;
        }
        iVar30 = (uVar21 - iVar23) * uVar33;
        uVar17 = iVar30 >> 0x1f & 0xfffffffa;
        iVar20 = iVar30 + 3 + uVar17;
        iVar30 = (int)((ulong)((long)iVar20 * -0x6db6db6d) >> 0x20) + 3 + iVar30 + uVar17;
        iVar30 = (iVar30 >> 2) - (iVar30 >> 0x1f);
        uVar17 = uVar33 * iVar30 * 7 + iVar23;
        local_38 = 0xff;
        if (((int)uVar17 < 0x100) && (local_38 = uVar17, (int)uVar17 < 0)) {
          local_38 = 0;
        }
        iVar23 = 0;
        if (iVar20 < -6) {
          iVar23 = 0x26;
        }
        iVar23 = iVar23 + iVar30;
        iVar20 = -1;
        do {
          iVar20 = iVar20 + 1;
          bVar9 = (byte)iVar20;
        } while (*(int *)(param_1 + 0x5c + lVar31 * 4) << (bVar9 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar31 * 4));
        iVar30 = 0x26;
        if (iVar23 < 0x13) {
          iVar30 = 0;
        }
        iVar23 = iVar23 - iVar30;
        uVar17 = iVar23 >> 0x1f ^ iVar23 * 2;
        uVar21 = (int)uVar17 >> (bVar9 & 0x1f);
        iVar30 = *(int *)(param_1 + 0x30);
        if ((int)uVar21 < 0x19) {
          iVar30 = iVar30 + ~uVar21;
          *(int *)(param_1 + 0x30) = iVar30;
          if (iVar30 < 0) {
            uVar21 = 1U >> (-(byte)iVar30 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar30 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar30;
            uVar21 = 1 << ((byte)iVar30 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar30 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar17 = uVar17 & ~(-1 << (bVar9 & 0x1f));
          iVar30 = iVar30 - iVar20;
          *(int *)(param_1 + 0x30) = iVar30;
          if (iVar30 < 0) {
            uVar21 = (int)uVar17 >> (-(byte)iVar30 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar20 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar20;
            uVar21 = uVar17 << ((byte)iVar20 & 0x1f);
          }
          else {
            uVar21 = uVar17 << ((byte)iVar30 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
        }
        else {
          iVar20 = iVar30 + -0x1a;
          *(int *)(param_1 + 0x30) = iVar20;
          if (iVar20 < 0) {
            uVar21 = 1U >> (0x1aU - (char)iVar30 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar20 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar20;
            uVar21 = 1 << ((byte)iVar20 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar20 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          iVar18 = uVar17 - 1;
          iVar30 = iVar20 + -6;
          *(int *)(param_1 + 0x30) = iVar30;
          if (iVar30 < 0) {
            uVar21 = iVar18 >> (6U - (char)iVar20 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar20 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar20;
            uVar21 = iVar18 << ((byte)iVar20 & 0x1f);
          }
          else {
            uVar21 = iVar18 << ((byte)iVar30 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
        }
        iVar20 = -iVar23;
        if (0 < iVar23) {
          iVar20 = iVar23;
        }
        iVar20 = iVar20 + *(int *)(param_1 + 0x620 + lVar31 * 4);
        *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar20;
        iVar23 = iVar23 * 7 + *(int *)(param_1 + 0xbdc + lVar31 * 4);
        *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
        uVar17 = *(uint *)(param_1 + 0x5c + lVar31 * 4);
        if (uVar17 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar20 / 2;
          iVar23 = iVar23 / 2;
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
          uVar17 = (int)uVar17 / 2;
          *(uint *)(param_1 + 0x5c + lVar31 * 4) = uVar17;
        }
        iVar20 = uVar17 + 1;
        *(int *)(param_1 + 0x5c + lVar31 * 4) = iVar20;
        if ((int)~uVar17 < iVar23) {
          if (0 < iVar23) {
            iVar30 = iVar23 - iVar20;
            if (iVar30 != 0 && iVar20 <= iVar23) {
              iVar30 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar30;
            iVar23 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
            if (iVar23 < 0x7f) {
              iVar23 = iVar23 + 1;
              goto LAB_100455dc7;
            }
          }
        }
        else {
          iVar30 = -uVar17;
          if ((int)~uVar17 < iVar20 + iVar23) {
            iVar30 = iVar20 + iVar23;
          }
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar30;
          iVar23 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
          if (-0x80 < iVar23) {
            iVar23 = iVar23 + -1;
LAB_100455dc7:
            *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar23;
          }
        }
        uVar33 = (uint)bVar14;
        uVar21 = (uint)bVar10;
        uVar17 = uVar21;
        if ((int)local_34 <= (int)uVar21) {
          uVar17 = local_34;
        }
        uVar16 = local_34;
        if ((int)local_34 < (int)uVar21) {
          uVar16 = uVar21;
        }
        if (((int)uVar33 < (int)uVar16) &&
           (bVar8 = (int)uVar17 < (int)uVar33, uVar17 = uVar16, bVar8)) {
          uVar17 = (uVar21 - uVar33) + local_34;
        }
        lVar31 = (long)iVar22;
        iVar23 = *(int *)(param_1 + 0x1190 + lVar31 * 4) * uVar24 + uVar17;
        iVar22 = 0xff;
        if ((iVar23 < 0x100) && (iVar22 = iVar23, iVar23 < 0)) {
          iVar22 = 0;
        }
        iVar20 = ((uint)bVar1 - iVar22) * uVar24;
        uVar17 = iVar20 >> 0x1f & 0xfffffffa;
        iVar23 = iVar20 + 3 + uVar17;
        iVar20 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20) + 3 + iVar20 + uVar17;
        iVar20 = (iVar20 >> 2) - (iVar20 >> 0x1f);
        uVar17 = uVar24 * iVar20 * 7 + iVar22;
        local_34 = 0xff;
        if (((int)uVar17 < 0x100) && (local_34 = uVar17, (int)uVar17 < 0)) {
          local_34 = 0;
        }
        iVar22 = 0;
        if (iVar23 < -6) {
          iVar22 = 0x26;
        }
        iVar22 = iVar22 + iVar20;
        iVar23 = -1;
        do {
          iVar23 = iVar23 + 1;
          bVar9 = (byte)iVar23;
        } while (*(int *)(param_1 + 0x5c + lVar31 * 4) << (bVar9 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar31 * 4));
        iVar20 = 0x26;
        if (iVar22 < 0x13) {
          iVar20 = 0;
        }
        iVar22 = iVar22 - iVar20;
        uVar17 = iVar22 >> 0x1f ^ iVar22 * 2;
        uVar21 = (int)uVar17 >> (bVar9 & 0x1f);
        iVar20 = *(int *)(param_1 + 0x30);
        if ((int)uVar21 < 0x19) {
          iVar20 = iVar20 + ~uVar21;
          *(int *)(param_1 + 0x30) = iVar20;
          if (iVar20 < 0) {
            uVar21 = 1U >> (-(byte)iVar20 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar20 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar20;
            uVar21 = 1 << ((byte)iVar20 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar20 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar17 = uVar17 & ~(-1 << (bVar9 & 0x1f));
          iVar20 = iVar20 - iVar23;
          *(int *)(param_1 + 0x30) = iVar20;
          if (iVar20 < 0) {
            uVar21 = (int)uVar17 >> (-(byte)iVar20 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
LAB_100455ffe:
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar21 = uVar17 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar21 = uVar17 << ((byte)iVar20 & 0x1f) | uVar21;
          }
        }
        else {
          iVar23 = iVar20 + -0x1a;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar21 = 1U >> (0x1aU - (char)iVar20 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar21 = 1 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar17 = uVar17 - 1;
          iVar20 = iVar23 + -6;
          *(int *)(param_1 + 0x30) = iVar20;
          if (iVar20 < 0) {
            uVar21 = (int)uVar17 >> (6U - (char)iVar23 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            goto LAB_100455ffe;
          }
          uVar21 = uVar17 << ((byte)iVar20 & 0x1f) | uVar21;
        }
        *(uint *)(param_1 + 0x44) = uVar21;
        iVar23 = -iVar22;
        if (0 < iVar22) {
          iVar23 = iVar22;
        }
        iVar23 = iVar23 + *(int *)(param_1 + 0x620 + lVar31 * 4);
        *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar23;
        iVar22 = iVar22 * 7 + *(int *)(param_1 + 0xbdc + lVar31 * 4);
        *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar22;
        uVar17 = *(uint *)(param_1 + 0x5c + lVar31 * 4);
        if (uVar17 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar23 / 2;
          iVar22 = iVar22 / 2;
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar22;
          uVar17 = (int)uVar17 / 2;
          *(uint *)(param_1 + 0x5c + lVar31 * 4) = uVar17;
        }
        iVar23 = uVar17 + 1;
        *(int *)(param_1 + 0x5c + lVar31 * 4) = iVar23;
        if ((int)~uVar17 < iVar22) {
          if (0 < iVar22) {
            iVar20 = iVar22 - iVar23;
            if (iVar20 != 0 && iVar23 <= iVar22) {
              iVar20 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar20;
            iVar22 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
            if (iVar22 < 0x7f) {
              iVar22 = iVar22 + 1;
              goto LAB_1004560e0;
            }
          }
        }
        else {
          iVar20 = -uVar17;
          if ((int)~uVar17 < iVar23 + iVar22) {
            iVar20 = iVar23 + iVar22;
          }
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar20;
          iVar22 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
          if (-0x80 < iVar22) {
            iVar22 = iVar22 + -1;
LAB_1004560e0:
            *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar22;
          }
        }
        uVar21 = (uint)bVar25;
        uVar17 = (uint)bVar25;
        if ((int)local_3c <= (int)uVar21) {
          uVar17 = local_3c;
        }
        uVar33 = local_3c;
        if ((int)local_3c < (int)uVar21) {
          uVar33 = uVar21;
        }
        uVar24 = (uint)bVar27;
        if (((int)uVar24 < (int)uVar33) &&
           (bVar8 = (int)uVar17 < (int)uVar24, uVar17 = uVar33, bVar8)) {
          uVar17 = (uVar21 - uVar24) + local_3c;
        }
        lVar31 = (long)iVar26;
        iVar22 = *(int *)(param_1 + 0x1190 + lVar31 * 4) * uVar28 + uVar17;
        iVar26 = 0xff;
        if ((iVar22 < 0x100) && (iVar26 = iVar22, iVar22 < 0)) {
          iVar26 = 0;
        }
        iVar23 = ((uint)bVar2 - iVar26) * uVar28;
        uVar17 = iVar23 >> 0x1f & 0xfffffffa;
        iVar22 = iVar23 + 3 + uVar17;
        iVar23 = (int)((ulong)((long)iVar22 * -0x6db6db6d) >> 0x20) + 3 + iVar23 + uVar17;
        iVar23 = (iVar23 >> 2) - (iVar23 >> 0x1f);
        uVar17 = uVar28 * iVar23 * 7 + iVar26;
        local_3c = 0xff;
        if (((int)uVar17 < 0x100) && (local_3c = uVar17, (int)uVar17 < 0)) {
          local_3c = 0;
        }
        iVar26 = 0;
        if (iVar22 < -6) {
          iVar26 = 0x26;
        }
        iVar26 = iVar26 + iVar23;
        iVar22 = -1;
        do {
          iVar22 = iVar22 + 1;
          bVar9 = (byte)iVar22;
        } while (*(int *)(param_1 + 0x5c + lVar31 * 4) << (bVar9 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar31 * 4));
        iVar23 = 0x26;
        if (iVar26 < 0x13) {
          iVar23 = 0;
        }
        iVar26 = iVar26 - iVar23;
        uVar17 = iVar26 >> 0x1f ^ iVar26 * 2;
        uVar21 = (int)uVar17 >> (bVar9 & 0x1f);
        iVar23 = *(int *)(param_1 + 0x30);
        if ((int)uVar21 < 0x19) {
          iVar23 = iVar23 + ~uVar21;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar21 = 1U >> (-(byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar23 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar23;
            uVar21 = 1 << ((byte)iVar23 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          uVar17 = uVar17 & ~(-1 << (bVar9 & 0x1f));
          iVar23 = iVar23 - iVar22;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar21 = (int)uVar17 >> (-(byte)iVar23 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar21 = uVar17 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar21 = uVar17 << ((byte)iVar23 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
        }
        else {
          iVar22 = iVar23 + -0x1a;
          *(int *)(param_1 + 0x30) = iVar22;
          if (iVar22 < 0) {
            uVar21 = 1U >> (0x1aU - (char)iVar23 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar21 = 1 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar21 = 1 << ((byte)iVar22 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar21;
          iVar20 = uVar17 - 1;
          iVar23 = iVar22 + -6;
          *(int *)(param_1 + 0x30) = iVar23;
          if (iVar23 < 0) {
            uVar21 = iVar20 >> (6U - (char)iVar22 & 0x1f) | uVar21;
            *(uint *)(param_1 + 0x44) = uVar21;
            puVar7 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar7 + 1;
            *puVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
            iVar22 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar22;
            uVar21 = iVar20 << ((byte)iVar22 & 0x1f);
          }
          else {
            uVar21 = iVar20 << ((byte)iVar23 & 0x1f) | uVar21;
          }
          *(uint *)(param_1 + 0x44) = uVar21;
        }
        iVar22 = -iVar26;
        if (0 < iVar26) {
          iVar22 = iVar26;
        }
        iVar22 = iVar22 + *(int *)(param_1 + 0x620 + lVar31 * 4);
        *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar22;
        iVar26 = iVar26 * 7 + *(int *)(param_1 + 0xbdc + lVar31 * 4);
        *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar26;
        uVar17 = *(uint *)(param_1 + 0x5c + lVar31 * 4);
        if (uVar17 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar22 / 2;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar26;
          uVar17 = (int)uVar17 / 2;
          *(uint *)(param_1 + 0x5c + lVar31 * 4) = uVar17;
        }
        iVar22 = uVar17 + 1;
        *(int *)(param_1 + 0x5c + lVar31 * 4) = iVar22;
        if ((int)~uVar17 < iVar26) {
          if (0 < iVar26) {
            iVar23 = iVar26 - iVar22;
            if (iVar23 != 0 && iVar22 <= iVar26) {
              iVar23 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
            iVar26 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
            if (iVar26 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar26 + 1;
            }
          }
        }
        else {
          iVar23 = -uVar17;
          if ((int)~uVar17 < iVar22 + iVar26) {
            iVar23 = iVar22 + iVar26;
          }
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
          iVar26 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
          if (-0x80 < iVar26) {
            *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar26 + -1;
          }
        }
      }
      uVar19 = (ulong)uVar12;
      bVar9 = param_2[uVar19 * 4];
      bVar14 = param_2[uVar19 * 4 + 1];
      bVar27 = param_2[uVar19 * 4 + 2];
      bVar29 = (byte)local_38;
      param_2[uVar19 * 4] = bVar29;
      bVar10 = (byte)local_34;
      param_2[uVar19 * 4 + 1] = bVar10;
      bVar25 = (byte)local_3c;
      param_2[uVar19 * 4 + 2] = bVar25;
      uVar19 = (ulong)(uVar12 + 1);
      if (param_4 < uVar12 + 1) break;
      bVar29 = param_2[uVar19 * 4];
      bVar10 = param_2[uVar19 * 4 + 1];
      bVar25 = param_2[uVar19 * 4 + 2];
    } while( true );
  }
  param_2[uVar19 * 4] = bVar29;
  param_2[uVar19 * 4 + 1] = bVar10;
  param_2[uVar19 * 4 + 2] = bVar25;
  return;
}

