
void FUN_10045b960(long param_1,byte *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  uint uVar31;
  byte bVar32;
  uint uVar33;
  
  bVar6 = *param_2;
  bVar12 = param_2[1];
  bVar29 = param_2[2];
  bVar8 = param_2[4];
  bVar32 = param_2[5];
  bVar30 = param_2[6];
  *param_2 = bVar8;
  param_2[1] = bVar32;
  param_2[2] = bVar30;
  uVar23 = 1;
  if (param_3 != 0) {
    uVar27 = (uint)bVar8;
    uVar33 = (uint)bVar32;
    uVar31 = (uint)bVar30;
    uVar10 = param_3 + 1;
    uVar23 = 1;
    do {
      uVar9 = (ulong)((int)uVar23 + 1);
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar8) + (ulong)param_2[uVar9 * 4]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar8 + 0x1844) - (ulong)bVar6));
      iVar13 = (int)*(char *)(param_1 + (((ulong)bVar6 + 0x1844) - (long)(int)uVar27));
      iVar15 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar15 = (int)cVar2, cVar2 == '\0')) {
        iVar15 = iVar13;
      }
      uVar11 = iVar15 >> 0x1f | 1;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar32) + (ulong)param_2[uVar9 * 4 + 1]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar32 + 0x1844) - (ulong)bVar12));
      iVar26 = (int)*(char *)(param_1 + (((ulong)bVar12 + 0x1844) - (long)(int)uVar33));
      iVar15 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar15 = (int)cVar4, cVar4 == '\0')) {
        iVar15 = iVar26;
      }
      iVar25 = (cVar2 * 9 + cVar1 * 0x51 + iVar13) * uVar11;
      uVar14 = iVar15 >> 0x1f | 1;
      iVar13 = (cVar4 * 9 + cVar3 * 0x51 + iVar26) * uVar14;
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar30) + (ulong)param_2[uVar9 * 4 + 2]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar30 + 0x1844) - (ulong)bVar29));
      iVar26 = (int)*(char *)(param_1 + (((ulong)bVar29 + 0x1844) - (long)(int)uVar31));
      iVar15 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar15 = (int)cVar2, cVar2 == '\0')) {
        iVar15 = iVar26;
      }
      uVar20 = iVar15 >> 0x1f | 1;
      iVar15 = (cVar2 * 9 + cVar1 * 0x51 + iVar26) * uVar20;
      if ((iVar13 == 0 && iVar25 == 0) && iVar15 == 0) {
        while( true ) {
          iVar15 = *(int *)(param_1 + 0x40);
          iVar13 = iVar15 + -1;
          *(int *)(param_1 + 0x40) = iVar13;
          uVar11 = *(uint *)(param_1 + 0x44);
          if (iVar13 < 0) {
            uVar14 = uVar11 << (1U - (char)iVar15 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar13 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar13;
            uVar14 = uVar11 >> ((byte)iVar13 & 0x1f) | uVar14;
          }
          else {
            uVar14 = uVar11 >> ((byte)iVar13 & 0x1f);
          }
          iVar15 = *(int *)(param_1 + 0x48);
          bVar12 = (byte)uVar27;
          bVar8 = (byte)uVar33;
          bVar29 = (byte)uVar31;
          bVar6 = (byte)*(int *)(&DAT_100b42f40 + (long)iVar15 * 4);
          uVar20 = (uint)uVar23;
          if ((uVar14 & 1) == 0) break;
          uVar14 = 1 << (bVar6 & 0x1f);
          uVar11 = uVar10 - uVar20;
          if (uVar11 < uVar14) {
            uVar14 = uVar10;
            if (uVar10 != uVar20) goto LAB_10045bc62;
          }
          else {
            uVar11 = uVar14;
            if (iVar15 < 0x1f) {
              *(int *)(param_1 + 0x48) = iVar15 + 1;
            }
LAB_10045bc62:
            uVar14 = uVar11 - 1;
            uVar18 = uVar11;
            if ((uVar11 & 1) != 0) {
              param_2[uVar23 * 4] = bVar12;
              param_2[uVar23 * 4 + 1] = bVar8;
              param_2[uVar23 * 4 + 2] = bVar29;
              uVar23 = (ulong)(uVar20 + 1);
              uVar18 = uVar14;
            }
            while (uVar14 != 0) {
              param_2[uVar23 * 4] = bVar12;
              param_2[uVar23 * 4 + 1] = bVar8;
              param_2[uVar23 * 4 + 2] = bVar29;
              uVar9 = (ulong)((int)uVar23 + 1);
              param_2[uVar9 * 4] = bVar12;
              param_2[uVar9 * 4 + 1] = bVar8;
              param_2[uVar9 * 4 + 2] = bVar29;
              uVar23 = (ulong)((int)uVar23 + 2);
              uVar14 = uVar18 - 2;
              uVar18 = uVar14;
            }
            uVar14 = uVar11 + uVar20;
          }
          uVar23 = (ulong)uVar14;
          if (param_3 < uVar14) {
            uVar23 = (ulong)(uVar14 - 1);
            uVar9 = (ulong)uVar14;
            param_2[uVar9 * 4] = param_2[uVar23 * 4];
            param_2[uVar9 * 4 + 1] = param_2[uVar23 * 4 + 1];
            param_2[uVar9 * 4 + 2] = param_2[uVar23 * 4 + 2];
            return;
          }
        }
        iVar13 = iVar13 - *(int *)(&DAT_100b42f40 + (long)iVar15 * 4);
        *(int *)(param_1 + 0x40) = iVar13;
        if (iVar13 < 0) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar14 = *puVar5;
          uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                   uVar14 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar14;
          iVar15 = *(int *)(param_1 + 0x40) + 0x20;
          *(int *)(param_1 + 0x40) = iVar15;
          uVar11 = uVar11 << (-(byte)iVar13 & 0x1f) | uVar14 >> ((byte)iVar15 & 0x1f);
        }
        else {
          uVar11 = uVar11 >> ((byte)iVar13 & 0x1f);
        }
        uVar18 = -1 << (bVar6 & 0x1f);
        uVar16 = ~uVar18 & uVar11;
        uVar14 = uVar10 - uVar20;
        if (uVar16 <= uVar10 - uVar20) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          uVar22 = uVar20 + (-2 - param_3);
          uVar21 = ~uVar16;
          if (~uVar16 < uVar22) {
            uVar21 = uVar22;
          }
          uVar16 = uVar20;
          if ((~uVar21 & 1) != 0) {
            param_2[uVar23 * 4] = bVar12;
            param_2[uVar23 * 4 + 1] = bVar8;
            param_2[uVar23 * 4 + 2] = bVar29;
            uVar14 = uVar14 - 1;
            uVar16 = uVar20 + 1;
          }
          uVar18 = uVar18 | ~uVar11;
          if (uVar21 != 0xfffffffe) {
            do {
              uVar23 = (ulong)uVar16;
              param_2[uVar23 * 4] = bVar12;
              param_2[uVar23 * 4 + 1] = bVar8;
              param_2[uVar23 * 4 + 2] = bVar29;
              uVar23 = (ulong)(uVar16 + 1);
              param_2[uVar23 * 4] = bVar12;
              param_2[uVar23 * 4 + 1] = bVar8;
              param_2[uVar23 * 4 + 2] = bVar29;
              uVar16 = uVar16 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
          }
          if (uVar18 < uVar22) {
            uVar18 = uVar22;
          }
          uVar23 = (ulong)((uVar20 - 1) - uVar18);
        }
        if (param_3 < (uint)uVar23) {
          uVar9 = (ulong)((uint)uVar23 - 1);
          param_2[uVar23 * 4] = param_2[uVar9 * 4];
          param_2[uVar23 * 4 + 1] = param_2[uVar9 * 4 + 1];
          param_2[uVar23 * 4 + 2] = param_2[uVar9 * 4 + 2];
          return;
        }
        bVar6 = param_2[uVar23 * 4];
        bVar12 = param_2[uVar23 * 4 + 1];
        bVar29 = param_2[uVar23 * 4 + 2];
        iVar15 = -1;
        do {
          iVar15 = iVar15 + 1;
          bVar8 = (byte)iVar15;
        } while (*(int *)(param_1 + 0x610) << (bVar8 & 0x1f) < *(int *)(param_1 + 0xbd4));
        iVar13 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        iVar26 = *(int *)(param_1 + 0x40);
        uVar11 = *(uint *)(param_1 + 0x44);
        bVar32 = 0x20U - (char)iVar26 & 0x1f;
        if ((iVar26 == 0) || (uVar11 << bVar32 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar11 = *puVar5;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar11;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar17 = 0x20;
          iVar25 = iVar26;
          uVar14 = uVar11;
        }
        else {
          iVar25 = 0;
          uVar14 = uVar11 << bVar32;
          iVar17 = iVar26;
        }
        uVar20 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar20 == 0; uVar20 = uVar20 - 1) {
          }
        }
        iVar17 = (uVar20 ^ 0xffffffe0) + iVar17;
        *(int *)(param_1 + 0x40) = iVar17;
        iVar25 = (uVar20 ^ 0x1f) + iVar25;
        if (iVar25 < 0x16 - iVar13) {
          iVar13 = iVar17 - iVar15;
          *(int *)(param_1 + 0x40) = iVar13;
          if (iVar13 < 0) {
            uVar14 = uVar11 << (-(byte)iVar13 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar13 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar13;
            uVar14 = uVar11 >> ((byte)iVar13 & 0x1f) | uVar14;
          }
          else {
            uVar14 = uVar11 >> ((byte)iVar13 & 0x1f);
          }
          uVar14 = ~(-1 << (bVar8 & 0x1f)) & uVar14 | iVar25 << (bVar8 & 0x1f);
        }
        else {
          iVar13 = iVar17 + -8;
          *(int *)(param_1 + 0x40) = iVar13;
          if (iVar13 < 0) {
            uVar14 = uVar11 << (8U - (char)iVar17 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar13 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar13;
            uVar14 = uVar11 >> ((byte)iVar13 & 0x1f) | uVar14;
          }
          else {
            uVar14 = uVar11 >> ((byte)iVar13 & 0x1f);
          }
          uVar14 = (uVar14 & 0xff) + 1;
        }
        uVar20 = uVar14 & 1;
        iVar26 = (int)(uVar20 + uVar14) / 2;
        if (((uVar20 == 0 && iVar15 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar20 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar25 = -iVar26;
        }
        else {
          iVar25 = -iVar26;
          if (uVar20 == 0) {
            iVar25 = iVar26;
          }
          if (iVar15 == 0) {
            iVar25 = iVar26;
          }
        }
        iVar15 = 1;
        if ((int)(uint)bVar6 < (int)uVar27) {
          iVar15 = -1;
        }
        iVar15 = iVar15 * iVar25 + (uint)bVar6;
        if (iVar15 < 0) {
          uVar20 = iVar15 + 0x100;
LAB_10045c868:
          uVar27 = uVar20;
          if ((int)uVar27 < 0) {
            uVar27 = 0;
          }
        }
        else {
          uVar20 = iVar15 + (uint)(0xff < iVar15) * -0x100;
          uVar27 = 0xff;
          if ((int)uVar20 < 0x100) goto LAB_10045c868;
        }
        if (iVar25 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar26 = ((int)((uVar14 + 1) - ((int)(uVar14 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar26;
        iVar15 = *(int *)(param_1 + 0x610);
        if (iVar15 == *(int *)(param_1 + 0x24)) {
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0xbd4) = iVar26;
          iVar15 = iVar15 / 2;
          *(int *)(param_1 + 0x610) = iVar15;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar15 + 1;
        iVar25 = -1;
        do {
          iVar25 = iVar25 + 1;
          bVar6 = (byte)iVar25;
        } while (iVar15 + 1 << (bVar6 & 0x1f) < iVar26);
        iVar15 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        bVar8 = 0x20U - (char)iVar13 & 0x1f;
        if ((iVar13 == 0) || (uVar11 << bVar8 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar11 = *puVar5;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar11;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar17 = 0x20;
          iVar26 = iVar13;
          uVar14 = uVar11;
        }
        else {
          iVar26 = 0;
          uVar14 = uVar11 << bVar8;
          iVar17 = iVar13;
        }
        uVar20 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar20 == 0; uVar20 = uVar20 - 1) {
          }
        }
        iVar17 = (uVar20 ^ 0xffffffe0) + iVar17;
        *(int *)(param_1 + 0x40) = iVar17;
        iVar26 = (uVar20 ^ 0x1f) + iVar26;
        if (iVar26 < 0x16 - iVar15) {
          iVar15 = iVar17 - iVar25;
          *(int *)(param_1 + 0x40) = iVar15;
          if (iVar15 < 0) {
            uVar14 = uVar11 << (-(byte)iVar15 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar14 = uVar11 >> ((byte)iVar15 & 0x1f) | uVar14;
          }
          else {
            uVar14 = uVar11 >> ((byte)iVar15 & 0x1f);
          }
          uVar14 = ~(-1 << (bVar6 & 0x1f)) & uVar14 | iVar26 << (bVar6 & 0x1f);
        }
        else {
          iVar15 = iVar17 + -8;
          *(int *)(param_1 + 0x40) = iVar15;
          if (iVar15 < 0) {
            uVar14 = uVar11 << (8U - (char)iVar17 & 0x1f);
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar14 = uVar11 >> ((byte)iVar15 & 0x1f) | uVar14;
          }
          else {
            uVar14 = uVar11 >> ((byte)iVar15 & 0x1f);
          }
          uVar14 = (uVar14 & 0xff) + 1;
        }
        uVar20 = uVar14 & 1;
        iVar13 = (int)(uVar20 + uVar14) / 2;
        if (((uVar20 == 0 && iVar25 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar20 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar26 = -iVar13;
        }
        else {
          iVar26 = -iVar13;
          if (uVar20 == 0) {
            iVar26 = iVar13;
          }
          if (iVar25 == 0) {
            iVar26 = iVar13;
          }
        }
        iVar13 = 1;
        if ((int)(uint)bVar12 < (int)uVar33) {
          iVar13 = -1;
        }
        iVar13 = iVar13 * iVar26 + (uint)bVar12;
        if (iVar13 < 0) {
          uVar20 = iVar13 + 0x100;
LAB_10045cac9:
          uVar33 = uVar20;
          if ((int)uVar33 < 0) {
            uVar33 = 0;
          }
        }
        else {
          uVar20 = iVar13 + (uint)(0xff < iVar13) * -0x100;
          uVar33 = 0xff;
          if ((int)uVar20 < 0x100) goto LAB_10045cac9;
        }
        if (iVar26 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar26 = ((int)((uVar14 + 1) - ((int)(uVar14 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar26;
        iVar13 = *(int *)(param_1 + 0x610);
        if (iVar13 == *(int *)(param_1 + 0x24)) {
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0xbd4) = iVar26;
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0x610) = iVar13;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar13 + 1;
        iVar25 = -1;
        do {
          iVar25 = iVar25 + 1;
          bVar6 = (byte)iVar25;
        } while (iVar13 + 1 << (bVar6 & 0x1f) < iVar26);
        iVar13 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        bVar12 = 0x20U - (char)iVar15 & 0x1f;
        if ((iVar15 == 0) || (uVar11 << bVar12 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar11 = *puVar5;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar11;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar17 = 0x20;
          iVar26 = iVar15;
          uVar14 = uVar11;
        }
        else {
          iVar26 = 0;
          uVar14 = uVar11 << bVar12;
          iVar17 = iVar15;
        }
        uVar20 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar20 == 0; uVar20 = uVar20 - 1) {
          }
        }
        iVar17 = (uVar20 ^ 0xffffffe0) + iVar17;
        *(int *)(param_1 + 0x40) = iVar17;
        iVar26 = (uVar20 ^ 0x1f) + iVar26;
        if (iVar26 < 0x16 - iVar13) {
          iVar17 = iVar17 - iVar25;
          *(int *)(param_1 + 0x40) = iVar17;
          if (iVar17 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar14 = *puVar5;
            uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar14;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar11 = uVar11 << (-(byte)iVar17 & 0x1f) | uVar14 >> ((byte)iVar15 & 0x1f);
          }
          else {
            uVar11 = uVar11 >> ((byte)iVar17 & 0x1f);
          }
          uVar11 = ~(-1 << (bVar6 & 0x1f)) & uVar11 | iVar26 << (bVar6 & 0x1f);
        }
        else {
          iVar15 = iVar17 + -8;
          *(int *)(param_1 + 0x40) = iVar15;
          if (iVar15 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar14 = *puVar5;
            uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar14;
            iVar15 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar15;
            uVar11 = uVar11 << (8U - (char)iVar17 & 0x1f) | uVar14 >> ((byte)iVar15 & 0x1f);
          }
          else {
            uVar11 = uVar11 >> ((byte)iVar15 & 0x1f);
          }
          uVar11 = (uVar11 & 0xff) + 1;
        }
        uVar14 = uVar11 & 1;
        iVar15 = (int)(uVar14 + uVar11) / 2;
        if (((uVar14 == 0 && iVar25 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar14 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar13 = -iVar15;
        }
        else {
          iVar13 = -iVar15;
          if (uVar14 == 0) {
            iVar13 = iVar15;
          }
          if (iVar25 == 0) {
            iVar13 = iVar15;
          }
        }
        iVar15 = 1;
        if ((int)(uint)bVar29 < (int)uVar31) {
          iVar15 = -1;
        }
        iVar15 = iVar15 * iVar13 + (uint)bVar29;
        if (iVar15 < 0) {
          uVar14 = iVar15 + 0x100;
LAB_10045cd04:
          uVar31 = uVar14;
          if ((int)uVar31 < 0) {
            uVar31 = 0;
          }
        }
        else {
          uVar14 = iVar15 + (uint)(0xff < iVar15) * -0x100;
          uVar31 = 0xff;
          if ((int)uVar14 < 0x100) goto LAB_10045cd04;
        }
        if (iVar13 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar13 = ((int)((uVar11 + 1) - ((int)(uVar11 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar13;
        iVar15 = *(int *)(param_1 + 0x610);
        if (iVar15 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0xbd4) = iVar13 / 2;
          iVar15 = iVar15 / 2;
          *(int *)(param_1 + 0x610) = iVar15;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar15 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        uVar16 = (uint)bVar8;
        uVar18 = uVar27;
        if ((int)uVar27 < (int)uVar16) {
          uVar18 = uVar16;
        }
        uVar21 = uVar16;
        if ((int)uVar27 <= (int)uVar16) {
          uVar21 = uVar27;
        }
        uVar22 = (uint)bVar6;
        if (((int)uVar22 < (int)uVar18) &&
           (bVar7 = (int)uVar21 < (int)uVar22, uVar21 = uVar18, bVar7)) {
          uVar21 = (uVar16 - uVar22) + uVar27;
        }
        lVar28 = (long)iVar25;
        iVar25 = *(int *)(param_1 + 0x1190 + lVar28 * 4) * uVar11 + uVar21;
        iVar26 = 0xff;
        if ((iVar25 < 0x100) && (iVar26 = iVar25, iVar25 < 0)) {
          iVar26 = 0;
        }
        iVar25 = -1;
        do {
          iVar25 = iVar25 + 1;
          bVar6 = (byte)iVar25;
        } while (*(int *)(param_1 + 0x5c + lVar28 * 4) << (bVar6 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar28 * 4));
        iVar17 = *(int *)(param_1 + 0x40);
        uVar27 = *(uint *)(param_1 + 0x44);
        bVar8 = 0x20U - (char)iVar17 & 0x1f;
        if ((iVar17 == 0) || (uVar27 << bVar8 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar27 = *puVar5;
          uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                   uVar27 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar27;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar19 = 0x20;
          iVar24 = iVar17;
          uVar18 = uVar27;
        }
        else {
          iVar24 = 0;
          uVar18 = uVar27 << bVar8;
          iVar19 = iVar17;
        }
        uVar16 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        iVar19 = (uVar16 ^ 0xffffffe0) + iVar19;
        *(int *)(param_1 + 0x40) = iVar19;
        iVar24 = (uVar16 ^ 0x1f) + iVar24;
        if (iVar24 < 0x17) {
          iVar19 = iVar19 - iVar25;
          *(int *)(param_1 + 0x40) = iVar19;
          if (iVar19 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar18 = *puVar5;
            uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar18;
            iVar17 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar17;
            uVar27 = uVar27 << (-(byte)iVar19 & 0x1f) | uVar18 >> ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = uVar27 >> ((byte)iVar19 & 0x1f);
          }
          uVar27 = ~(-1 << (bVar6 & 0x1f)) & uVar27 | iVar24 << (bVar6 & 0x1f);
        }
        else {
          iVar17 = iVar19 + -8;
          *(int *)(param_1 + 0x40) = iVar17;
          if (iVar17 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar18 = *puVar5;
            uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar18;
            iVar17 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar17;
            uVar27 = uVar27 << (8U - (char)iVar19 & 0x1f) | uVar18 >> ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = uVar27 >> ((byte)iVar17 & 0x1f);
          }
          uVar27 = (uVar27 & 0xff) + 1;
        }
        uVar18 = (uint)bVar32;
        if (iVar25 == 0) {
          bVar7 = *(int *)(param_1 + 0xbdc + lVar28 * 4) * 2 <=
                  -*(int *)(param_1 + 0x5c + lVar28 * 4);
        }
        else {
          bVar7 = false;
        }
        uVar16 = (int)uVar27 / 2;
        if ((bVar7 + uVar27 & 1) != 0) {
          uVar16 = ~uVar16;
        }
        iVar26 = uVar11 * uVar16 + iVar26;
        if (iVar26 < 0) {
          uVar11 = iVar26 + 0x100;
LAB_10045bec7:
          uVar27 = uVar11;
          if ((int)uVar11 < 0) {
            uVar27 = 0;
          }
        }
        else {
          uVar11 = iVar26 + (uint)(0xff < iVar26) * -0x100;
          uVar27 = 0xff;
          if ((int)uVar11 < 0x100) goto LAB_10045bec7;
        }
        uVar11 = -uVar16;
        if (0 < (int)uVar16) {
          uVar11 = uVar16;
        }
        iVar26 = uVar11 + *(int *)(param_1 + 0x620 + lVar28 * 4);
        *(int *)(param_1 + 0x620 + lVar28 * 4) = iVar26;
        iVar25 = uVar16 + *(int *)(param_1 + 0xbdc + lVar28 * 4);
        *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar25;
        uVar11 = *(uint *)(param_1 + 0x5c + lVar28 * 4);
        if (uVar11 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar28 * 4) = iVar26 / 2;
          iVar25 = iVar25 / 2;
          *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar25;
          uVar11 = (int)uVar11 / 2;
          *(uint *)(param_1 + 0x5c + lVar28 * 4) = uVar11;
        }
        iVar26 = uVar11 + 1;
        *(int *)(param_1 + 0x5c + lVar28 * 4) = iVar26;
        if ((int)~uVar11 < iVar25) {
          if (0 < iVar25) {
            iVar17 = iVar25 - iVar26;
            if (iVar17 != 0 && iVar26 <= iVar25) {
              iVar17 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar17;
            iVar26 = *(int *)(param_1 + 0x1190 + lVar28 * 4);
            if (iVar26 < 0x7f) {
              iVar26 = iVar26 + 1;
              goto LAB_10045bfa0;
            }
          }
        }
        else {
          iVar17 = -uVar11;
          if ((int)~uVar11 < iVar26 + iVar25) {
            iVar17 = iVar26 + iVar25;
          }
          *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar17;
          iVar26 = *(int *)(param_1 + 0x1190 + lVar28 * 4);
          if (-0x80 < iVar26) {
            iVar26 = iVar26 + -1;
LAB_10045bfa0:
            *(int *)(param_1 + 0x1190 + lVar28 * 4) = iVar26;
          }
        }
        uVar11 = uVar33;
        if ((int)uVar33 < (int)uVar18) {
          uVar11 = uVar18;
        }
        uVar16 = uVar18;
        if ((int)uVar33 <= (int)uVar18) {
          uVar16 = uVar33;
        }
        uVar21 = (uint)bVar12;
        if (((int)uVar21 < (int)uVar11) &&
           (bVar7 = (int)uVar16 < (int)uVar21, uVar16 = uVar11, bVar7)) {
          uVar16 = (uVar18 - uVar21) + uVar33;
        }
        lVar28 = (long)iVar13;
        iVar26 = *(int *)(param_1 + 0x1190 + lVar28 * 4) * uVar14 + uVar16;
        iVar13 = 0xff;
        if ((iVar26 < 0x100) && (iVar13 = iVar26, iVar26 < 0)) {
          iVar13 = 0;
        }
        iVar26 = -1;
        do {
          iVar26 = iVar26 + 1;
          bVar6 = (byte)iVar26;
        } while (*(int *)(param_1 + 0x5c + lVar28 * 4) << (bVar6 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar28 * 4));
        iVar25 = *(int *)(param_1 + 0x40);
        uVar33 = *(uint *)(param_1 + 0x44);
        bVar12 = 0x20U - (char)iVar25 & 0x1f;
        if ((iVar25 == 0) || (uVar33 << bVar12 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar33 = *puVar5;
          uVar33 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar33;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar24 = 0x20;
          iVar17 = iVar25;
          uVar11 = uVar33;
        }
        else {
          iVar17 = 0;
          uVar11 = uVar33 << bVar12;
          iVar24 = iVar25;
        }
        uVar18 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> uVar18 == 0; uVar18 = uVar18 - 1) {
          }
        }
        iVar24 = (uVar18 ^ 0xffffffe0) + iVar24;
        *(int *)(param_1 + 0x40) = iVar24;
        iVar17 = (uVar18 ^ 0x1f) + iVar17;
        if (iVar17 < 0x17) {
          iVar24 = iVar24 - iVar26;
          *(int *)(param_1 + 0x40) = iVar24;
          if (iVar24 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar25 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar25;
            uVar33 = uVar33 << (-(byte)iVar24 & 0x1f) | uVar11 >> ((byte)iVar25 & 0x1f);
          }
          else {
            uVar33 = uVar33 >> ((byte)iVar24 & 0x1f);
          }
          uVar33 = ~(-1 << (bVar6 & 0x1f)) & uVar33 | iVar17 << (bVar6 & 0x1f);
        }
        else {
          iVar25 = iVar24 + -8;
          *(int *)(param_1 + 0x40) = iVar25;
          if (iVar25 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar25 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar25;
            uVar33 = uVar33 << (8U - (char)iVar24 & 0x1f) | uVar11 >> ((byte)iVar25 & 0x1f);
          }
          else {
            uVar33 = uVar33 >> ((byte)iVar25 & 0x1f);
          }
          uVar33 = (uVar33 & 0xff) + 1;
        }
        uVar11 = (uint)bVar29;
        if (iVar26 == 0) {
          bVar7 = *(int *)(param_1 + 0xbdc + lVar28 * 4) * 2 <=
                  -*(int *)(param_1 + 0x5c + lVar28 * 4);
        }
        else {
          bVar7 = false;
        }
        uVar18 = (int)uVar33 / 2;
        if ((bVar7 + uVar33 & 1) != 0) {
          uVar18 = ~uVar18;
        }
        iVar13 = uVar14 * uVar18 + iVar13;
        if (iVar13 < 0) {
          uVar14 = iVar13 + 0x100;
LAB_10045c1b6:
          uVar33 = uVar14;
          if ((int)uVar33 < 0) {
            uVar33 = 0;
          }
        }
        else {
          uVar14 = iVar13 + (uint)(0xff < iVar13) * -0x100;
          uVar33 = 0xff;
          if ((int)uVar14 < 0x100) goto LAB_10045c1b6;
        }
        uVar14 = -uVar18;
        if (0 < (int)uVar18) {
          uVar14 = uVar18;
        }
        iVar13 = uVar14 + *(int *)(param_1 + 0x620 + lVar28 * 4);
        *(int *)(param_1 + 0x620 + lVar28 * 4) = iVar13;
        iVar26 = uVar18 + *(int *)(param_1 + 0xbdc + lVar28 * 4);
        *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar26;
        uVar14 = *(uint *)(param_1 + 0x5c + lVar28 * 4);
        if (uVar14 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar28 * 4) = iVar13 / 2;
          iVar26 = iVar26 / 2;
          *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar26;
          uVar14 = (int)uVar14 / 2;
          *(uint *)(param_1 + 0x5c + lVar28 * 4) = uVar14;
        }
        iVar13 = uVar14 + 1;
        *(int *)(param_1 + 0x5c + lVar28 * 4) = iVar13;
        if ((int)~uVar14 < iVar26) {
          if (0 < iVar26) {
            iVar25 = iVar26 - iVar13;
            if (iVar25 != 0 && iVar13 <= iVar26) {
              iVar25 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar25;
            iVar13 = *(int *)(param_1 + 0x1190 + lVar28 * 4);
            if (iVar13 < 0x7f) {
              iVar13 = iVar13 + 1;
              goto LAB_10045c280;
            }
          }
        }
        else {
          iVar25 = -uVar14;
          if ((int)~uVar14 < iVar13 + iVar26) {
            iVar25 = iVar13 + iVar26;
          }
          *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar25;
          iVar13 = *(int *)(param_1 + 0x1190 + lVar28 * 4);
          if (-0x80 < iVar13) {
            iVar13 = iVar13 + -1;
LAB_10045c280:
            *(int *)(param_1 + 0x1190 + lVar28 * 4) = iVar13;
          }
        }
        uVar18 = (uint)bVar30;
        uVar14 = uVar31;
        if ((int)uVar31 < (int)uVar18) {
          uVar14 = uVar18;
        }
        uVar16 = uVar18;
        if ((int)uVar31 <= (int)uVar18) {
          uVar16 = uVar31;
        }
        if (((int)uVar11 < (int)uVar14) &&
           (bVar7 = (int)uVar16 < (int)uVar11, uVar16 = uVar14, bVar7)) {
          uVar16 = (uVar18 - uVar11) + uVar31;
        }
        lVar28 = (long)iVar15;
        iVar13 = *(int *)(param_1 + 0x1190 + lVar28 * 4) * uVar20 + uVar16;
        iVar15 = 0xff;
        if ((iVar13 < 0x100) && (iVar15 = iVar13, iVar13 < 0)) {
          iVar15 = 0;
        }
        iVar13 = -1;
        do {
          iVar13 = iVar13 + 1;
          bVar6 = (byte)iVar13;
        } while (*(int *)(param_1 + 0x5c + lVar28 * 4) << (bVar6 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar28 * 4));
        iVar26 = *(int *)(param_1 + 0x40);
        uVar31 = *(uint *)(param_1 + 0x44);
        bVar12 = 0x20U - (char)iVar26 & 0x1f;
        if ((iVar26 == 0) || (uVar31 << bVar12 == 0)) {
          puVar5 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar5 + 1;
          uVar31 = *puVar5;
          uVar31 = uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 |
                   uVar31 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar31;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar17 = 0x20;
          iVar25 = iVar26;
          uVar11 = uVar31;
        }
        else {
          iVar25 = 0;
          uVar11 = uVar31 << bVar12;
          iVar17 = iVar26;
        }
        uVar14 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> uVar14 == 0; uVar14 = uVar14 - 1) {
          }
        }
        iVar17 = (uVar14 ^ 0xffffffe0) + iVar17;
        *(int *)(param_1 + 0x40) = iVar17;
        iVar25 = (uVar14 ^ 0x1f) + iVar25;
        if (iVar25 < 0x17) {
          iVar17 = iVar17 - iVar13;
          *(int *)(param_1 + 0x40) = iVar17;
          if (iVar17 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar26 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar26;
            uVar31 = uVar31 << (-(byte)iVar17 & 0x1f) | uVar11 >> ((byte)iVar26 & 0x1f);
          }
          else {
            uVar31 = uVar31 >> ((byte)iVar17 & 0x1f);
          }
          uVar31 = ~(-1 << (bVar6 & 0x1f)) & uVar31 | iVar25 << (bVar6 & 0x1f);
        }
        else {
          iVar26 = iVar17 + -8;
          *(int *)(param_1 + 0x40) = iVar26;
          if (iVar26 < 0) {
            puVar5 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar5 + 1;
            uVar11 = *puVar5;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar11;
            iVar26 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar26;
            uVar31 = uVar31 << (8U - (char)iVar17 & 0x1f) | uVar11 >> ((byte)iVar26 & 0x1f);
          }
          else {
            uVar31 = uVar31 >> ((byte)iVar26 & 0x1f);
          }
          uVar31 = (uVar31 & 0xff) + 1;
        }
        if (iVar13 == 0) {
          bVar7 = *(int *)(param_1 + 0xbdc + lVar28 * 4) * 2 <=
                  -*(int *)(param_1 + 0x5c + lVar28 * 4);
        }
        else {
          bVar7 = false;
        }
        uVar11 = (int)uVar31 / 2;
        if ((bVar7 + uVar31 & 1) != 0) {
          uVar11 = ~uVar11;
        }
        iVar15 = uVar20 * uVar11 + iVar15;
        if (iVar15 < 0) {
          uVar14 = iVar15 + 0x100;
LAB_10045c497:
          uVar31 = uVar14;
          if ((int)uVar31 < 0) {
            uVar31 = 0;
          }
        }
        else {
          uVar14 = iVar15 + (uint)(0xff < iVar15) * -0x100;
          uVar31 = 0xff;
          if ((int)uVar14 < 0x100) goto LAB_10045c497;
        }
        uVar14 = -uVar11;
        if (0 < (int)uVar11) {
          uVar14 = uVar11;
        }
        iVar15 = uVar14 + *(int *)(param_1 + 0x620 + lVar28 * 4);
        *(int *)(param_1 + 0x620 + lVar28 * 4) = iVar15;
        iVar13 = uVar11 + *(int *)(param_1 + 0xbdc + lVar28 * 4);
        *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar13;
        uVar11 = *(uint *)(param_1 + 0x5c + lVar28 * 4);
        if (uVar11 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar28 * 4) = iVar15 / 2;
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar13;
          uVar11 = (int)uVar11 / 2;
          *(uint *)(param_1 + 0x5c + lVar28 * 4) = uVar11;
        }
        iVar15 = uVar11 + 1;
        *(int *)(param_1 + 0x5c + lVar28 * 4) = iVar15;
        if ((int)~uVar11 < iVar13) {
          if (0 < iVar13) {
            iVar26 = iVar13 - iVar15;
            if (iVar26 != 0 && iVar15 <= iVar13) {
              iVar26 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar26;
            iVar15 = *(int *)(param_1 + 0x1190 + lVar28 * 4);
            if (iVar15 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar28 * 4) = iVar15 + 1;
            }
          }
        }
        else {
          iVar26 = -uVar11;
          if ((int)~uVar11 < iVar15 + iVar13) {
            iVar26 = iVar15 + iVar13;
          }
          *(int *)(param_1 + 0xbdc + lVar28 * 4) = iVar26;
          iVar15 = *(int *)(param_1 + 0x1190 + lVar28 * 4);
          if (-0x80 < iVar15) {
            *(int *)(param_1 + 0x1190 + lVar28 * 4) = iVar15 + -1;
          }
        }
      }
      bVar6 = param_2[uVar23 * 4];
      bVar12 = param_2[uVar23 * 4 + 1];
      bVar29 = param_2[uVar23 * 4 + 2];
      bVar8 = (byte)uVar27;
      param_2[uVar23 * 4] = bVar8;
      bVar32 = (byte)uVar33;
      param_2[uVar23 * 4 + 1] = bVar32;
      bVar30 = (byte)uVar31;
      param_2[uVar23 * 4 + 2] = bVar30;
      uVar11 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar11;
      if (param_3 < uVar11) break;
      bVar8 = param_2[uVar23 * 4];
      bVar32 = param_2[uVar23 * 4 + 1];
      bVar30 = param_2[uVar23 * 4 + 2];
    } while( true );
  }
  param_2[uVar23 * 4] = bVar8;
  param_2[uVar23 * 4 + 1] = bVar32;
  param_2[uVar23 * 4 + 2] = bVar30;
  return;
}

