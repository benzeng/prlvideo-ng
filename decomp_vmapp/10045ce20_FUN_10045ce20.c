
void FUN_10045ce20(long param_1,byte *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  uint uVar33;
  
  bVar7 = *param_2;
  bVar10 = param_2[1];
  bVar31 = param_2[2];
  bVar8 = param_2[4];
  bVar30 = param_2[5];
  bVar32 = param_2[6];
  *param_2 = bVar8;
  param_2[1] = bVar30;
  param_2[2] = bVar32;
  uVar28 = 1;
  if (param_3 != 0) {
    uVar33 = (uint)bVar8;
    uVar24 = (uint)bVar30;
    uVar25 = (uint)bVar32;
    uVar14 = param_3 + 1;
    uVar28 = 1;
    do {
      uVar9 = (ulong)((int)uVar28 + 1);
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar8) + (ulong)param_2[uVar9 * 4]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar8 + 0x1844) - (ulong)bVar7));
      iVar15 = (int)*(char *)(param_1 + (((ulong)bVar7 + 0x1844) - (long)(int)uVar33));
      iVar23 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar23 = (int)cVar2, cVar2 == '\0')) {
        iVar23 = iVar15;
      }
      uVar12 = iVar23 >> 0x1f | 1;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar30) + (ulong)param_2[uVar9 * 4 + 1]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar30 + 0x1844) - (ulong)bVar10));
      iVar27 = (int)*(char *)(param_1 + (((ulong)bVar10 + 0x1844) - (long)(int)uVar24));
      iVar23 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar23 = (int)cVar4, cVar4 == '\0')) {
        iVar23 = iVar27;
      }
      iVar26 = (cVar2 * 9 + cVar1 * 0x51 + iVar15) * uVar12;
      uVar16 = iVar23 >> 0x1f | 1;
      iVar15 = (cVar4 * 9 + cVar3 * 0x51 + iVar27) * uVar16;
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar32) + (ulong)param_2[uVar9 * 4 + 2]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar32 + 0x1844) - (ulong)bVar31));
      iVar27 = (int)*(char *)(param_1 + (((ulong)bVar31 + 0x1844) - (long)(int)uVar25));
      iVar23 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar23 = (int)cVar2, cVar2 == '\0')) {
        iVar23 = iVar27;
      }
      uVar21 = iVar23 >> 0x1f | 1;
      iVar23 = (cVar2 * 9 + cVar1 * 0x51 + iVar27) * uVar21;
      if ((iVar15 == 0 && iVar26 == 0) && iVar23 == 0) {
        while( true ) {
          iVar23 = *(int *)(param_1 + 0x40);
          iVar15 = iVar23 + -1;
          *(int *)(param_1 + 0x40) = iVar15;
          uVar12 = *(uint *)(param_1 + 0x44);
          if (iVar15 < 0) {
            uVar16 = uVar12 << (1U - (char)iVar23 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar16 = uVar12 >> ((byte)iVar15 & 0x1f) | uVar16;
          }
          else {
            uVar16 = uVar12 >> ((byte)iVar15 & 0x1f);
          }
          iVar23 = *(int *)(param_1 + 0x48);
          bVar8 = (byte)uVar33;
          bVar10 = (byte)uVar24;
          bVar31 = (byte)uVar25;
          bVar7 = (byte)*(int *)(&DAT_100b42f40 + (long)iVar23 * 4);
          uVar21 = (uint)uVar28;
          if ((uVar16 & 1) == 0) break;
          uVar16 = 1 << (bVar7 & 0x1f);
          uVar12 = uVar14 - uVar21;
          if (uVar12 < uVar16) {
            uVar16 = uVar14;
            if (uVar14 != uVar21) goto LAB_10045d122;
          }
          else {
            uVar12 = uVar16;
            if (iVar23 < 0x1f) {
              *(int *)(param_1 + 0x48) = iVar23 + 1;
            }
LAB_10045d122:
            uVar16 = uVar12 - 1;
            uVar19 = uVar12;
            if ((uVar12 & 1) != 0) {
              param_2[uVar28 * 4] = bVar8;
              param_2[uVar28 * 4 + 1] = bVar10;
              param_2[uVar28 * 4 + 2] = bVar31;
              uVar28 = (ulong)(uVar21 + 1);
              uVar19 = uVar16;
            }
            while (uVar16 != 0) {
              param_2[uVar28 * 4] = bVar8;
              param_2[uVar28 * 4 + 1] = bVar10;
              param_2[uVar28 * 4 + 2] = bVar31;
              uVar9 = (ulong)((int)uVar28 + 1);
              param_2[uVar9 * 4] = bVar8;
              param_2[uVar9 * 4 + 1] = bVar10;
              param_2[uVar9 * 4 + 2] = bVar31;
              uVar28 = (ulong)((int)uVar28 + 2);
              uVar16 = uVar19 - 2;
              uVar19 = uVar16;
            }
            uVar16 = uVar12 + uVar21;
          }
          uVar28 = (ulong)uVar16;
          if (param_3 < uVar16) {
            uVar28 = (ulong)(uVar16 - 1);
            uVar9 = (ulong)uVar16;
            param_2[uVar9 * 4] = param_2[uVar28 * 4];
            param_2[uVar9 * 4 + 1] = param_2[uVar28 * 4 + 1];
            param_2[uVar9 * 4 + 2] = param_2[uVar28 * 4 + 2];
            return;
          }
        }
        iVar15 = iVar15 - *(int *)(&DAT_100b42f40 + (long)iVar23 * 4);
        *(int *)(param_1 + 0x40) = iVar15;
        if (iVar15 < 0) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar16 = *puVar5;
          uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                   uVar16 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar16;
          iVar23 = *(int *)(param_1 + 0x40) + 0x20;
          *(int *)(param_1 + 0x40) = iVar23;
          uVar12 = uVar12 << (-(byte)iVar15 & 0x1f) | uVar16 >> ((byte)iVar23 & 0x1f);
        }
        else {
          uVar12 = uVar12 >> ((byte)iVar15 & 0x1f);
        }
        uVar19 = -1 << (bVar7 & 0x1f);
        uVar22 = ~uVar19 & uVar12;
        uVar16 = uVar14 - uVar21;
        if (uVar22 <= uVar14 - uVar21) {
          uVar16 = uVar22;
        }
        if (uVar16 != 0) {
          uVar20 = uVar21 + (-2 - param_3);
          uVar17 = ~uVar22;
          if (~uVar22 < uVar20) {
            uVar17 = uVar20;
          }
          uVar22 = uVar21;
          if ((~uVar17 & 1) != 0) {
            param_2[uVar28 * 4] = bVar8;
            param_2[uVar28 * 4 + 1] = bVar10;
            param_2[uVar28 * 4 + 2] = bVar31;
            uVar16 = uVar16 - 1;
            uVar22 = uVar21 + 1;
          }
          uVar19 = uVar19 | ~uVar12;
          if (uVar17 != 0xfffffffe) {
            do {
              uVar28 = (ulong)uVar22;
              param_2[uVar28 * 4] = bVar8;
              param_2[uVar28 * 4 + 1] = bVar10;
              param_2[uVar28 * 4 + 2] = bVar31;
              uVar28 = (ulong)(uVar22 + 1);
              param_2[uVar28 * 4] = bVar8;
              param_2[uVar28 * 4 + 1] = bVar10;
              param_2[uVar28 * 4 + 2] = bVar31;
              uVar22 = uVar22 + 2;
              uVar16 = uVar16 - 2;
            } while (uVar16 != 0);
          }
          if (uVar19 < uVar20) {
            uVar19 = uVar20;
          }
          uVar28 = (ulong)((uVar21 - 1) - uVar19);
        }
        if (param_3 < (uint)uVar28) {
          uVar9 = (ulong)((uint)uVar28 - 1);
          param_2[uVar28 * 4] = param_2[uVar9 * 4];
          param_2[uVar28 * 4 + 1] = param_2[uVar9 * 4 + 1];
          param_2[uVar28 * 4 + 2] = param_2[uVar9 * 4 + 2];
          return;
        }
        bVar7 = param_2[uVar28 * 4];
        bVar10 = param_2[uVar28 * 4 + 1];
        bVar31 = param_2[uVar28 * 4 + 2];
        iVar23 = -1;
        do {
          iVar23 = iVar23 + 1;
          bVar8 = (byte)iVar23;
        } while (*(int *)(param_1 + 0x610) << (bVar8 & 0x1f) < *(int *)(param_1 + 0xbd4));
        iVar15 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        iVar27 = *(int *)(param_1 + 0x40);
        uVar12 = *(uint *)(param_1 + 0x44);
        bVar30 = 0x20U - (char)iVar27 & 0x1f;
        if ((iVar27 == 0) || (uVar12 << bVar30 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar12 = *puVar5;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar12;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar11 = 0x20;
          iVar26 = iVar27;
          uVar16 = uVar12;
        }
        else {
          iVar26 = 0;
          uVar16 = uVar12 << bVar30;
          iVar11 = iVar27;
        }
        uVar21 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
          }
        }
        iVar11 = (uVar21 ^ 0xffffffe0) + iVar11;
        *(int *)(param_1 + 0x40) = iVar11;
        iVar26 = (uVar21 ^ 0x1f) + iVar26;
        if (iVar26 < 0x18 - iVar15) {
          iVar15 = iVar11 - iVar23;
          *(int *)(param_1 + 0x40) = iVar15;
          if (iVar15 < 0) {
            uVar16 = uVar12 << (-(byte)iVar15 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar16 = uVar12 >> ((byte)iVar15 & 0x1f) | uVar16;
          }
          else {
            uVar16 = uVar12 >> ((byte)iVar15 & 0x1f);
          }
          uVar16 = ~(-1 << (bVar8 & 0x1f)) & uVar16 | iVar26 << (bVar8 & 0x1f);
        }
        else {
          iVar15 = iVar11 + -6;
          *(int *)(param_1 + 0x40) = iVar15;
          if (iVar15 < 0) {
            uVar16 = uVar12 << (6U - (char)iVar11 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar16 = uVar12 >> ((byte)iVar15 & 0x1f) | uVar16;
          }
          else {
            uVar16 = uVar12 >> ((byte)iVar15 & 0x1f);
          }
          uVar16 = (uVar16 & 0x3f) + 1;
        }
        uVar21 = uVar16 & 1;
        iVar27 = (int)(uVar21 + uVar16) / 2;
        if (((uVar21 == 0 && iVar23 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar21 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar26 = -iVar27;
        }
        else {
          iVar26 = -iVar27;
          if (uVar21 == 0) {
            iVar26 = iVar27;
          }
          if (iVar23 == 0) {
            iVar26 = iVar27;
          }
        }
        iVar23 = 7;
        if ((int)(uint)bVar7 < (int)uVar33) {
          iVar23 = -7;
        }
        iVar23 = iVar23 * iVar26 + (uint)bVar7;
        if (iVar23 < -3) {
          uVar21 = iVar23 + 0x10a;
        }
        else {
          iVar27 = 0;
          if (0x102 < iVar23) {
            iVar27 = 0x10a;
          }
          uVar21 = iVar23 - iVar27;
        }
        uVar33 = 0xff;
        if (((int)uVar21 < 0x100) && (uVar33 = uVar21, (int)uVar21 < 0)) {
          uVar33 = 0;
        }
        if (iVar26 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar27 = ((int)((uVar16 + 1) - ((int)(uVar16 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar27;
        iVar23 = *(int *)(param_1 + 0x610);
        if (iVar23 == *(int *)(param_1 + 0x24)) {
          iVar27 = iVar27 / 2;
          *(int *)(param_1 + 0xbd4) = iVar27;
          iVar23 = iVar23 / 2;
          *(int *)(param_1 + 0x610) = iVar23;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar23 + 1;
        iVar26 = -1;
        do {
          iVar26 = iVar26 + 1;
          bVar7 = (byte)iVar26;
        } while (iVar23 + 1 << (bVar7 & 0x1f) < iVar27);
        iVar23 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        bVar8 = 0x20U - (char)iVar15 & 0x1f;
        if ((iVar15 == 0) || (uVar12 << bVar8 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar12 = *puVar5;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar12;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar11 = 0x20;
          iVar27 = iVar15;
          uVar16 = uVar12;
        }
        else {
          iVar27 = 0;
          uVar16 = uVar12 << bVar8;
          iVar11 = iVar15;
        }
        uVar21 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
          }
        }
        iVar11 = (uVar21 ^ 0xffffffe0) + iVar11;
        *(int *)(param_1 + 0x40) = iVar11;
        iVar27 = (uVar21 ^ 0x1f) + iVar27;
        if (iVar27 < 0x18 - iVar23) {
          iVar23 = iVar11 - iVar26;
          *(int *)(param_1 + 0x40) = iVar23;
          if (iVar23 < 0) {
            uVar16 = uVar12 << (-(byte)iVar23 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar23 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar23;
            uVar16 = uVar12 >> ((byte)iVar23 & 0x1f) | uVar16;
          }
          else {
            uVar16 = uVar12 >> ((byte)iVar23 & 0x1f);
          }
          uVar16 = ~(-1 << (bVar7 & 0x1f)) & uVar16 | iVar27 << (bVar7 & 0x1f);
        }
        else {
          iVar23 = iVar11 + -6;
          *(int *)(param_1 + 0x40) = iVar23;
          if (iVar23 < 0) {
            uVar16 = uVar12 << (6U - (char)iVar11 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar23 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar23;
            uVar16 = uVar12 >> ((byte)iVar23 & 0x1f) | uVar16;
          }
          else {
            uVar16 = uVar12 >> ((byte)iVar23 & 0x1f);
          }
          uVar16 = (uVar16 & 0x3f) + 1;
        }
        uVar21 = uVar16 & 1;
        iVar15 = (int)(uVar21 + uVar16) / 2;
        if (((uVar21 == 0 && iVar26 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar21 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar27 = -iVar15;
        }
        else {
          iVar27 = -iVar15;
          if (uVar21 == 0) {
            iVar27 = iVar15;
          }
          if (iVar26 == 0) {
            iVar27 = iVar15;
          }
        }
        iVar15 = 7;
        if ((int)(uint)bVar10 < (int)uVar24) {
          iVar15 = -7;
        }
        iVar15 = iVar15 * iVar27 + (uint)bVar10;
        if (iVar15 < -3) {
          uVar21 = iVar15 + 0x10a;
        }
        else {
          iVar26 = 0;
          if (0x102 < iVar15) {
            iVar26 = 0x10a;
          }
          uVar21 = iVar15 - iVar26;
        }
        uVar24 = 0xff;
        if (((int)uVar21 < 0x100) && (uVar24 = uVar21, (int)uVar21 < 0)) {
          uVar24 = 0;
        }
        if (iVar27 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar27 = ((int)((uVar16 + 1) - ((int)(uVar16 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar27;
        iVar15 = *(int *)(param_1 + 0x610);
        if (iVar15 == *(int *)(param_1 + 0x24)) {
          iVar27 = iVar27 / 2;
          *(int *)(param_1 + 0xbd4) = iVar27;
          iVar15 = iVar15 / 2;
          *(int *)(param_1 + 0x610) = iVar15;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar15 + 1;
        iVar26 = -1;
        do {
          iVar26 = iVar26 + 1;
          bVar7 = (byte)iVar26;
        } while (iVar15 + 1 << (bVar7 & 0x1f) < iVar27);
        iVar15 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        bVar10 = 0x20U - (char)iVar23 & 0x1f;
        if ((iVar23 == 0) || (uVar12 << bVar10 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar12 = *puVar5;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar12;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar11 = 0x20;
          iVar27 = iVar23;
          uVar16 = uVar12;
        }
        else {
          iVar27 = 0;
          uVar16 = uVar12 << bVar10;
          iVar11 = iVar23;
        }
        uVar21 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
          }
        }
        iVar11 = (uVar21 ^ 0xffffffe0) + iVar11;
        *(int *)(param_1 + 0x40) = iVar11;
        iVar27 = (uVar21 ^ 0x1f) + iVar27;
        if (iVar27 < 0x18 - iVar15) {
          iVar11 = iVar11 - iVar26;
          *(int *)(param_1 + 0x40) = iVar11;
          if (iVar11 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar16 = *puVar5;
            uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar16;
            iVar23 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar23;
            uVar12 = uVar12 << (-(byte)iVar11 & 0x1f) | uVar16 >> ((byte)iVar23 & 0x1f);
          }
          else {
            uVar12 = uVar12 >> ((byte)iVar11 & 0x1f);
          }
          uVar12 = ~(-1 << (bVar7 & 0x1f)) & uVar12 | iVar27 << (bVar7 & 0x1f);
        }
        else {
          iVar23 = iVar11 + -6;
          *(int *)(param_1 + 0x40) = iVar23;
          if (iVar23 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar16 = *puVar5;
            uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar16;
            iVar23 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar23;
            uVar12 = uVar16 >> ((byte)iVar23 & 0x1f) | uVar12 << (6U - (char)iVar11 & 0x1f);
          }
          else {
            uVar12 = uVar12 >> ((byte)iVar23 & 0x1f);
          }
          uVar12 = (uVar12 & 0x3f) + 1;
        }
        uVar16 = uVar12 & 1;
        iVar23 = (int)(uVar16 + uVar12) / 2;
        if (((uVar16 == 0 && iVar26 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar16 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar15 = -iVar23;
        }
        else {
          iVar15 = -iVar23;
          if (uVar16 == 0) {
            iVar15 = iVar23;
          }
          if (iVar26 == 0) {
            iVar15 = iVar23;
          }
        }
        iVar23 = 7;
        if ((int)(uint)bVar31 < (int)uVar25) {
          iVar23 = -7;
        }
        iVar23 = iVar23 * iVar15 + (uint)bVar31;
        if (iVar23 < -3) {
          uVar16 = iVar23 + 0x10a;
        }
        else {
          iVar27 = 0;
          if (0x102 < iVar23) {
            iVar27 = 0x10a;
          }
          uVar16 = iVar23 - iVar27;
        }
        uVar25 = 0xff;
        if (((int)uVar16 < 0x100) && (uVar25 = uVar16, (int)uVar16 < 0)) {
          uVar25 = 0;
        }
        if (iVar15 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar15 = ((int)((uVar12 + 1) - ((int)(uVar12 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar15;
        iVar23 = *(int *)(param_1 + 0x610);
        if (iVar23 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0xbd4) = iVar15 / 2;
          iVar23 = iVar23 / 2;
          *(int *)(param_1 + 0x610) = iVar23;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar23 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        uVar22 = (uint)bVar8;
        uVar19 = uVar33;
        if ((int)uVar33 < (int)uVar22) {
          uVar19 = uVar22;
        }
        uVar17 = uVar22;
        if ((int)uVar33 <= (int)uVar22) {
          uVar17 = uVar33;
        }
        uVar20 = (uint)bVar7;
        if (((int)uVar20 < (int)uVar19) &&
           (bVar6 = (int)uVar17 < (int)uVar20, uVar17 = uVar19, bVar6)) {
          uVar17 = (uVar22 - uVar20) + uVar33;
        }
        lVar29 = (long)iVar26;
        iVar26 = *(int *)(param_1 + 0x1190 + lVar29 * 4) * uVar12 + uVar17;
        iVar27 = 0xff;
        if ((iVar26 < 0x100) && (iVar27 = iVar26, iVar26 < 0)) {
          iVar27 = 0;
        }
        iVar26 = -1;
        do {
          iVar26 = iVar26 + 1;
          bVar7 = (byte)iVar26;
        } while (*(int *)(param_1 + 0x5c + lVar29 * 4) << (bVar7 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar29 * 4));
        iVar11 = *(int *)(param_1 + 0x40);
        uVar33 = *(uint *)(param_1 + 0x44);
        bVar8 = 0x20U - (char)iVar11 & 0x1f;
        if ((iVar11 == 0) || (uVar33 << bVar8 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar33 = *puVar5;
          uVar33 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar33;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar18 = 0x20;
          iVar13 = iVar11;
          uVar19 = uVar33;
        }
        else {
          iVar13 = 0;
          uVar19 = uVar33 << bVar8;
          iVar18 = iVar11;
        }
        uVar22 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> uVar22 == 0; uVar22 = uVar22 - 1) {
          }
        }
        iVar18 = (uVar22 ^ 0xffffffe0) + iVar18;
        *(int *)(param_1 + 0x40) = iVar18;
        iVar13 = (uVar22 ^ 0x1f) + iVar13;
        if (iVar13 < 0x19) {
          iVar18 = iVar18 - iVar26;
          *(int *)(param_1 + 0x40) = iVar18;
          if (iVar18 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar19 = *puVar5;
            uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar19;
            iVar26 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar26;
            uVar33 = uVar33 << (-(byte)iVar18 & 0x1f) | uVar19 >> ((byte)iVar26 & 0x1f);
          }
          else {
            uVar33 = uVar33 >> ((byte)iVar18 & 0x1f);
          }
          uVar33 = ~(-1 << (bVar7 & 0x1f)) & uVar33 | iVar13 << (bVar7 & 0x1f);
        }
        else {
          iVar26 = iVar18 + -6;
          *(int *)(param_1 + 0x40) = iVar26;
          if (iVar26 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar19 = *puVar5;
            uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar19;
            iVar26 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar26;
            uVar33 = uVar19 >> ((byte)iVar26 & 0x1f) | uVar33 << (6U - (char)iVar18 & 0x1f);
          }
          else {
            uVar33 = uVar33 >> ((byte)iVar26 & 0x1f);
          }
          uVar33 = (uVar33 & 0x3f) + 1;
        }
        uVar19 = (int)uVar33 / 2;
        if ((uVar33 & 1) != 0) {
          uVar19 = ~uVar19;
        }
        iVar27 = uVar12 * uVar19 * 7 + iVar27;
        if (iVar27 < -3) {
          uVar12 = iVar27 + 0x10a;
        }
        else {
          iVar26 = 0;
          if (0x102 < iVar27) {
            iVar26 = 0x10a;
          }
          uVar12 = iVar27 - iVar26;
        }
        uVar33 = 0xff;
        if (((int)uVar12 < 0x100) && (uVar33 = uVar12, (int)uVar12 < 0)) {
          uVar33 = 0;
        }
        uVar12 = -uVar19;
        if (0 < (int)uVar19) {
          uVar12 = uVar19;
        }
        iVar27 = uVar12 + *(int *)(param_1 + 0x620 + lVar29 * 4);
        *(int *)(param_1 + 0x620 + lVar29 * 4) = iVar27;
        iVar26 = uVar19 * 7 + *(int *)(param_1 + 0xbdc + lVar29 * 4);
        *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar26;
        uVar12 = *(uint *)(param_1 + 0x5c + lVar29 * 4);
        if (uVar12 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar29 * 4) = iVar27 / 2;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar26;
          uVar12 = (int)uVar12 / 2;
          *(uint *)(param_1 + 0x5c + lVar29 * 4) = uVar12;
        }
        iVar27 = uVar12 + 1;
        *(int *)(param_1 + 0x5c + lVar29 * 4) = iVar27;
        if ((int)~uVar12 < iVar26) {
          if (0 < iVar26) {
            iVar11 = iVar26 - iVar27;
            if (iVar11 != 0 && iVar27 <= iVar26) {
              iVar11 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar11;
            iVar27 = *(int *)(param_1 + 0x1190 + lVar29 * 4);
            if (iVar27 < 0x7f) {
              iVar27 = iVar27 + 1;
              goto LAB_10045d43a;
            }
          }
        }
        else {
          iVar11 = -uVar12;
          if ((int)~uVar12 < iVar27 + iVar26) {
            iVar11 = iVar27 + iVar26;
          }
          *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar11;
          iVar27 = *(int *)(param_1 + 0x1190 + lVar29 * 4);
          if (-0x80 < iVar27) {
            iVar27 = iVar27 + -1;
LAB_10045d43a:
            *(int *)(param_1 + 0x1190 + lVar29 * 4) = iVar27;
          }
        }
        uVar22 = (uint)bVar10;
        uVar19 = (uint)bVar30;
        uVar12 = uVar24;
        if ((int)uVar24 < (int)uVar19) {
          uVar12 = uVar19;
        }
        uVar17 = uVar19;
        if ((int)uVar24 <= (int)uVar19) {
          uVar17 = uVar24;
        }
        if (((int)uVar22 < (int)uVar12) &&
           (bVar6 = (int)uVar17 < (int)uVar22, uVar17 = uVar12, bVar6)) {
          uVar17 = (uVar19 - uVar22) + uVar24;
        }
        lVar29 = (long)iVar15;
        iVar27 = *(int *)(param_1 + 0x1190 + lVar29 * 4) * uVar16 + uVar17;
        iVar15 = 0xff;
        if ((iVar27 < 0x100) && (iVar15 = iVar27, iVar27 < 0)) {
          iVar15 = 0;
        }
        iVar27 = -1;
        do {
          iVar27 = iVar27 + 1;
          bVar7 = (byte)iVar27;
        } while (*(int *)(param_1 + 0x5c + lVar29 * 4) << (bVar7 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar29 * 4));
        iVar26 = *(int *)(param_1 + 0x40);
        uVar24 = *(uint *)(param_1 + 0x44);
        bVar10 = 0x20U - (char)iVar26 & 0x1f;
        if ((iVar26 == 0) || (uVar24 << bVar10 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar24 = *puVar5;
          uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                   uVar24 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar24;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar13 = 0x20;
          iVar11 = iVar26;
          uVar12 = uVar24;
        }
        else {
          iVar11 = 0;
          uVar12 = uVar24 << bVar10;
          iVar13 = iVar26;
        }
        uVar19 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> uVar19 == 0; uVar19 = uVar19 - 1) {
          }
        }
        iVar13 = (uVar19 ^ 0xffffffe0) + iVar13;
        *(int *)(param_1 + 0x40) = iVar13;
        iVar11 = (uVar19 ^ 0x1f) + iVar11;
        if (iVar11 < 0x19) {
          iVar13 = iVar13 - iVar27;
          *(int *)(param_1 + 0x40) = iVar13;
          if (iVar13 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar27 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar27;
            uVar24 = uVar24 << (-(byte)iVar13 & 0x1f) | uVar12 >> ((byte)iVar27 & 0x1f);
          }
          else {
            uVar24 = uVar24 >> ((byte)iVar13 & 0x1f);
          }
          uVar24 = ~(-1 << (bVar7 & 0x1f)) & uVar24 | iVar11 << (bVar7 & 0x1f);
        }
        else {
          iVar27 = iVar13 + -6;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar27 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar27;
            uVar24 = uVar12 >> ((byte)iVar27 & 0x1f) | uVar24 << (6U - (char)iVar13 & 0x1f);
          }
          else {
            uVar24 = uVar24 >> ((byte)iVar27 & 0x1f);
          }
          uVar24 = (uVar24 & 0x3f) + 1;
        }
        uVar19 = (uint)bVar31;
        uVar12 = (int)uVar24 / 2;
        if ((uVar24 & 1) != 0) {
          uVar12 = ~uVar12;
        }
        iVar15 = uVar16 * uVar12 * 7 + iVar15;
        if (iVar15 < -3) {
          uVar16 = iVar15 + 0x10a;
        }
        else {
          iVar27 = 0;
          if (0x102 < iVar15) {
            iVar27 = 0x10a;
          }
          uVar16 = iVar15 - iVar27;
        }
        uVar24 = 0xff;
        if (((int)uVar16 < 0x100) && (uVar24 = uVar16, (int)uVar16 < 0)) {
          uVar24 = 0;
        }
        uVar16 = -uVar12;
        if (0 < (int)uVar12) {
          uVar16 = uVar12;
        }
        iVar15 = uVar16 + *(int *)(param_1 + 0x620 + lVar29 * 4);
        *(int *)(param_1 + 0x620 + lVar29 * 4) = iVar15;
        iVar27 = uVar12 * 7 + *(int *)(param_1 + 0xbdc + lVar29 * 4);
        *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar27;
        uVar12 = *(uint *)(param_1 + 0x5c + lVar29 * 4);
        if (uVar12 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar29 * 4) = iVar15 / 2;
          iVar27 = iVar27 / 2;
          *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar27;
          uVar12 = (int)uVar12 / 2;
          *(uint *)(param_1 + 0x5c + lVar29 * 4) = uVar12;
        }
        iVar15 = uVar12 + 1;
        *(int *)(param_1 + 0x5c + lVar29 * 4) = iVar15;
        if ((int)~uVar12 < iVar27) {
          if (0 < iVar27) {
            iVar26 = iVar27 - iVar15;
            if (iVar26 != 0 && iVar15 <= iVar27) {
              iVar26 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar26;
            iVar15 = *(int *)(param_1 + 0x1190 + lVar29 * 4);
            if (iVar15 < 0x7f) {
              iVar15 = iVar15 + 1;
              goto LAB_10045d712;
            }
          }
        }
        else {
          iVar26 = -uVar12;
          if ((int)~uVar12 < iVar15 + iVar27) {
            iVar26 = iVar15 + iVar27;
          }
          *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar26;
          iVar15 = *(int *)(param_1 + 0x1190 + lVar29 * 4);
          if (-0x80 < iVar15) {
            iVar15 = iVar15 + -1;
LAB_10045d712:
            *(int *)(param_1 + 0x1190 + lVar29 * 4) = iVar15;
          }
        }
        uVar16 = (uint)bVar32;
        uVar12 = uVar25;
        if ((int)uVar25 < (int)uVar16) {
          uVar12 = uVar16;
        }
        uVar22 = uVar16;
        if ((int)uVar25 <= (int)uVar16) {
          uVar22 = uVar25;
        }
        if (((int)uVar19 < (int)uVar12) &&
           (bVar6 = (int)uVar22 < (int)uVar19, uVar22 = uVar12, bVar6)) {
          uVar22 = (uVar16 - uVar19) + uVar25;
        }
        lVar29 = (long)iVar23;
        iVar15 = *(int *)(param_1 + 0x1190 + lVar29 * 4) * uVar21 + uVar22;
        iVar23 = 0xff;
        if ((iVar15 < 0x100) && (iVar23 = iVar15, iVar15 < 0)) {
          iVar23 = 0;
        }
        iVar15 = -1;
        do {
          iVar15 = iVar15 + 1;
          bVar7 = (byte)iVar15;
        } while (*(int *)(param_1 + 0x5c + lVar29 * 4) << (bVar7 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar29 * 4));
        iVar27 = *(int *)(param_1 + 0x40);
        uVar25 = *(uint *)(param_1 + 0x44);
        bVar10 = 0x20U - (char)iVar27 & 0x1f;
        if ((iVar27 == 0) || (uVar25 << bVar10 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar25 = *puVar5;
          uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                   uVar25 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar25;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar11 = 0x20;
          iVar26 = iVar27;
          uVar12 = uVar25;
        }
        else {
          iVar26 = 0;
          uVar12 = uVar25 << bVar10;
          iVar11 = iVar27;
        }
        uVar16 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        iVar11 = (uVar16 ^ 0xffffffe0) + iVar11;
        *(int *)(param_1 + 0x40) = iVar11;
        iVar26 = (uVar16 ^ 0x1f) + iVar26;
        if (iVar26 < 0x19) {
          iVar11 = iVar11 - iVar15;
          *(int *)(param_1 + 0x40) = iVar11;
          if (iVar11 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar25 = uVar25 << (-(byte)iVar11 & 0x1f) | uVar12 >> ((byte)iVar15 & 0x1f);
          }
          else {
            uVar25 = uVar25 >> ((byte)iVar11 & 0x1f);
          }
          uVar25 = ~(-1 << (bVar7 & 0x1f)) & uVar25 | iVar26 << (bVar7 & 0x1f);
        }
        else {
          iVar15 = iVar11 + -6;
          *(int *)(param_1 + 0x40) = iVar15;
          if (iVar15 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar12 = *puVar5;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar12;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar25 = uVar12 >> ((byte)iVar15 & 0x1f) | uVar25 << (6U - (char)iVar11 & 0x1f);
          }
          else {
            uVar25 = uVar25 >> ((byte)iVar15 & 0x1f);
          }
          uVar25 = (uVar25 & 0x3f) + 1;
        }
        uVar12 = (int)uVar25 / 2;
        if ((uVar25 & 1) != 0) {
          uVar12 = ~uVar12;
        }
        iVar23 = uVar21 * uVar12 * 7 + iVar23;
        if (iVar23 < -3) {
          uVar16 = iVar23 + 0x10a;
        }
        else {
          iVar15 = 0;
          if (0x102 < iVar23) {
            iVar15 = 0x10a;
          }
          uVar16 = iVar23 - iVar15;
        }
        uVar25 = 0xff;
        if (((int)uVar16 < 0x100) && (uVar25 = uVar16, (int)uVar16 < 0)) {
          uVar25 = 0;
        }
        uVar16 = -uVar12;
        if (0 < (int)uVar12) {
          uVar16 = uVar12;
        }
        iVar23 = uVar16 + *(int *)(param_1 + 0x620 + lVar29 * 4);
        *(int *)(param_1 + 0x620 + lVar29 * 4) = iVar23;
        iVar15 = uVar12 * 7 + *(int *)(param_1 + 0xbdc + lVar29 * 4);
        *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar15;
        uVar12 = *(uint *)(param_1 + 0x5c + lVar29 * 4);
        if (uVar12 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar29 * 4) = iVar23 / 2;
          iVar15 = iVar15 / 2;
          *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar15;
          uVar12 = (int)uVar12 / 2;
          *(uint *)(param_1 + 0x5c + lVar29 * 4) = uVar12;
        }
        iVar23 = uVar12 + 1;
        *(int *)(param_1 + 0x5c + lVar29 * 4) = iVar23;
        if ((int)~uVar12 < iVar15) {
          if (0 < iVar15) {
            iVar27 = iVar15 - iVar23;
            if (iVar27 != 0 && iVar23 <= iVar15) {
              iVar27 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar27;
            iVar23 = *(int *)(param_1 + 0x1190 + lVar29 * 4);
            if (iVar23 < 0x7f) {
              iVar23 = iVar23 + 1;
              goto LAB_10045d9e2;
            }
          }
        }
        else {
          iVar27 = -uVar12;
          if ((int)~uVar12 < iVar23 + iVar15) {
            iVar27 = iVar23 + iVar15;
          }
          *(int *)(param_1 + 0xbdc + lVar29 * 4) = iVar27;
          iVar23 = *(int *)(param_1 + 0x1190 + lVar29 * 4);
          if (-0x80 < iVar23) {
            iVar23 = iVar23 + -1;
LAB_10045d9e2:
            *(int *)(param_1 + 0x1190 + lVar29 * 4) = iVar23;
          }
        }
      }
      bVar7 = param_2[uVar28 * 4];
      bVar10 = param_2[uVar28 * 4 + 1];
      bVar31 = param_2[uVar28 * 4 + 2];
      bVar8 = (byte)uVar33;
      param_2[uVar28 * 4] = bVar8;
      bVar30 = (byte)uVar24;
      param_2[uVar28 * 4 + 1] = bVar30;
      bVar32 = (byte)uVar25;
      param_2[uVar28 * 4 + 2] = bVar32;
      uVar12 = (int)uVar28 + 1;
      uVar28 = (ulong)uVar12;
      if (param_3 < uVar12) break;
      bVar8 = param_2[uVar28 * 4];
      bVar30 = param_2[uVar28 * 4 + 1];
      bVar32 = param_2[uVar28 * 4 + 2];
    } while( true );
  }
  param_2[uVar28 * 4] = bVar8;
  param_2[uVar28 * 4 + 1] = bVar30;
  param_2[uVar28 * 4 + 2] = bVar32;
  return;
}

