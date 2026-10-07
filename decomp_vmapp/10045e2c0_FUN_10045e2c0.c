
void FUN_10045e2c0(long param_1,byte *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  byte bVar34;
  long lVar35;
  byte bVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  byte bVar41;
  uint uVar42;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar38 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x14);
  bVar9 = *param_2;
  bVar23 = param_2[1];
  bVar34 = param_2[2];
  bVar11 = param_2[4];
  bVar36 = param_2[5];
  bVar41 = param_2[6];
  *param_2 = bVar11;
  param_2[1] = bVar36;
  param_2[2] = bVar41;
  if (param_3 != 0) {
    uVar33 = (uint)bVar11;
    uVar37 = (uint)bVar36;
    uVar42 = (uint)bVar41;
    iVar31 = 0x1f - iVar6;
    iVar8 = iVar5 * 2 + 1;
    iVar15 = -iVar5;
    iVar38 = iVar38 * iVar8;
    iVar16 = iVar5 + 0xff;
    uVar17 = ~(-1 << ((byte)iVar6 & 0x1f));
    uVar18 = param_3 + 1;
    iVar19 = 0x1e - iVar6;
    uVar40 = 1;
    do {
      uVar13 = (ulong)((int)uVar40 + 1);
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar11) + (ulong)param_2[uVar13 * 4]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar11 + 0x1844) - (ulong)bVar9));
      iVar29 = (int)*(char *)(param_1 + (((ulong)bVar9 + 0x1844) - (long)(int)uVar33));
      iVar24 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar24 = (int)cVar2, cVar2 == '\0')) {
        iVar24 = iVar29;
      }
      uVar39 = iVar24 >> 0x1f | 1;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar36) + (ulong)param_2[uVar13 * 4 + 1]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar36 + 0x1844) - (ulong)bVar23));
      iVar14 = (int)*(char *)(param_1 + (((ulong)bVar23 + 0x1844) - (long)(int)uVar37));
      iVar24 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar24 = (int)cVar4, cVar4 == '\0')) {
        iVar24 = iVar14;
      }
      iVar32 = (cVar2 * 9 + cVar1 * 0x51 + iVar29) * uVar39;
      uVar20 = iVar24 >> 0x1f | 1;
      iVar29 = (cVar4 * 9 + cVar3 * 0x51 + iVar14) * uVar20;
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar41) + (ulong)param_2[uVar13 * 4 + 2]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar41 + 0x1844) - (ulong)bVar34));
      iVar14 = (int)*(char *)(param_1 + (((ulong)bVar34 + 0x1844) - (long)(int)uVar42));
      iVar24 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar24 = (int)cVar2, cVar2 == '\0')) {
        iVar24 = iVar14;
      }
      uVar21 = iVar24 >> 0x1f | 1;
      iVar24 = (cVar2 * 9 + cVar1 * 0x51 + iVar14) * uVar21;
      if ((iVar29 == 0 && iVar32 == 0) && iVar24 == 0) {
        while( true ) {
          iVar24 = *(int *)(param_1 + 0x40);
          iVar29 = iVar24 + -1;
          *(int *)(param_1 + 0x40) = iVar29;
          uVar39 = *(uint *)(param_1 + 0x44);
          if (iVar29 < 0) {
            uVar20 = uVar39 << (1U - (char)iVar24 & 0x1f);
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar29 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar29;
            uVar20 = uVar39 >> ((byte)iVar29 & 0x1f) | uVar20;
          }
          else {
            uVar20 = uVar39 >> ((byte)iVar29 & 0x1f);
          }
          iVar24 = *(int *)(param_1 + 0x48);
          bVar23 = (byte)uVar33;
          bVar34 = (byte)uVar37;
          bVar11 = (byte)uVar42;
          bVar9 = (byte)*(int *)(&DAT_100b42f40 + (long)iVar24 * 4);
          uVar21 = (uint)uVar40;
          if ((uVar20 & 1) == 0) break;
          uVar20 = 1 << (bVar9 & 0x1f);
          uVar39 = uVar18 - uVar21;
          if (uVar39 < uVar20) {
            uVar20 = uVar18;
            if (uVar18 != uVar21) goto LAB_10045e672;
          }
          else {
            uVar39 = uVar20;
            if (iVar24 < 0x1f) {
              *(int *)(param_1 + 0x48) = iVar24 + 1;
            }
LAB_10045e672:
            uVar20 = uVar39 - 1;
            uVar22 = uVar39;
            if ((uVar39 & 1) != 0) {
              param_2[uVar40 * 4] = bVar23;
              param_2[uVar40 * 4 + 1] = bVar34;
              param_2[uVar40 * 4 + 2] = bVar11;
              uVar40 = (ulong)(uVar21 + 1);
              uVar22 = uVar20;
            }
            while (uVar20 != 0) {
              param_2[uVar40 * 4] = bVar23;
              param_2[uVar40 * 4 + 1] = bVar34;
              param_2[uVar40 * 4 + 2] = bVar11;
              uVar13 = (ulong)((int)uVar40 + 1);
              param_2[uVar13 * 4] = bVar23;
              param_2[uVar13 * 4 + 1] = bVar34;
              param_2[uVar13 * 4 + 2] = bVar11;
              uVar40 = (ulong)((int)uVar40 + 2);
              uVar20 = uVar22 - 2;
              uVar22 = uVar20;
            }
            uVar20 = uVar39 + uVar21;
          }
          uVar40 = (ulong)uVar20;
          if (param_3 < uVar20) {
            uVar40 = (ulong)(uVar20 - 1);
            uVar13 = (ulong)uVar20;
            param_2[uVar13 * 4] = param_2[uVar40 * 4];
            param_2[uVar13 * 4 + 1] = param_2[uVar40 * 4 + 1];
            param_2[uVar13 * 4 + 2] = param_2[uVar40 * 4 + 2];
            return;
          }
        }
        iVar29 = iVar29 - *(int *)(&DAT_100b42f40 + (long)iVar24 * 4);
        *(int *)(param_1 + 0x40) = iVar29;
        if (iVar29 < 0) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar20 = *puVar7;
          uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar20;
          iVar24 = *(int *)(param_1 + 0x40) + 0x20;
          *(int *)(param_1 + 0x40) = iVar24;
          uVar39 = uVar39 << (-(byte)iVar29 & 0x1f) | uVar20 >> ((byte)iVar24 & 0x1f);
        }
        else {
          uVar39 = uVar39 >> ((byte)iVar29 & 0x1f);
        }
        uVar22 = -1 << (bVar9 & 0x1f);
        uVar26 = ~uVar22 & uVar39;
        uVar20 = uVar18 - uVar21;
        if (uVar26 <= uVar18 - uVar21) {
          uVar20 = uVar26;
        }
        if (uVar20 != 0) {
          uVar28 = uVar21 + (-2 - param_3);
          uVar12 = ~uVar26;
          if (~uVar26 < uVar28) {
            uVar12 = uVar28;
          }
          uVar26 = uVar21;
          if ((~uVar12 & 1) != 0) {
            param_2[uVar40 * 4] = bVar23;
            param_2[uVar40 * 4 + 1] = bVar34;
            param_2[uVar40 * 4 + 2] = bVar11;
            uVar20 = uVar20 - 1;
            uVar26 = uVar21 + 1;
          }
          uVar22 = uVar22 | ~uVar39;
          if (uVar12 != 0xfffffffe) {
            do {
              uVar40 = (ulong)uVar26;
              param_2[uVar40 * 4] = bVar23;
              param_2[uVar40 * 4 + 1] = bVar34;
              param_2[uVar40 * 4 + 2] = bVar11;
              uVar40 = (ulong)(uVar26 + 1);
              param_2[uVar40 * 4] = bVar23;
              param_2[uVar40 * 4 + 1] = bVar34;
              param_2[uVar40 * 4 + 2] = bVar11;
              uVar26 = uVar26 + 2;
              uVar20 = uVar20 - 2;
            } while (uVar20 != 0);
          }
          if (uVar22 < uVar28) {
            uVar22 = uVar28;
          }
          uVar40 = (ulong)((uVar21 - 1) - uVar22);
        }
        if (param_3 < (uint)uVar40) {
          uVar13 = (ulong)((uint)uVar40 - 1);
          param_2[uVar40 * 4] = param_2[uVar13 * 4];
          param_2[uVar40 * 4 + 1] = param_2[uVar13 * 4 + 1];
          param_2[uVar40 * 4 + 2] = param_2[uVar13 * 4 + 2];
          return;
        }
        bVar9 = param_2[uVar40 * 4];
        bVar23 = param_2[uVar40 * 4 + 1];
        bVar34 = param_2[uVar40 * 4 + 2];
        iVar24 = -1;
        do {
          iVar24 = iVar24 + 1;
          bVar11 = (byte)iVar24;
        } while (*(int *)(param_1 + 0x610) << (bVar11 & 0x1f) < *(int *)(param_1 + 0xbd4));
        iVar29 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        iVar14 = *(int *)(param_1 + 0x40);
        uVar39 = *(uint *)(param_1 + 0x44);
        bVar36 = 0x20U - (char)iVar14 & 0x1f;
        if ((iVar14 == 0) || (uVar39 << bVar36 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar39 = *puVar7;
          uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                   uVar39 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar39;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar27 = 0x20;
          iVar32 = iVar14;
          uVar20 = uVar39;
        }
        else {
          iVar32 = 0;
          uVar20 = uVar39 << bVar36;
          iVar27 = iVar14;
        }
        uVar21 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> uVar21 == 0; uVar21 = uVar21 - 1) {
          }
        }
        iVar27 = (uVar21 ^ 0xffffffe0) + iVar27;
        *(int *)(param_1 + 0x40) = iVar27;
        iVar32 = (uVar21 ^ 0x1f) + iVar32;
        if (iVar32 < iVar19 - iVar29) {
          iVar27 = iVar27 - iVar24;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            uVar20 = uVar39 << (-(byte)iVar27 & 0x1f);
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar27 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar27;
            uVar20 = uVar39 >> ((byte)iVar27 & 0x1f) | uVar20;
          }
          else {
            uVar20 = uVar39 >> ((byte)iVar27 & 0x1f);
          }
          uVar20 = ~(-1 << (bVar11 & 0x1f)) & uVar20 | iVar32 << (bVar11 & 0x1f);
        }
        else {
          iVar27 = iVar27 - iVar6;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            uVar20 = uVar39 << (-(byte)iVar27 & 0x1f);
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar27 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar27;
            uVar20 = uVar39 >> ((byte)iVar27 & 0x1f) | uVar20;
          }
          else {
            uVar20 = uVar39 >> ((byte)iVar27 & 0x1f);
          }
          uVar20 = (uVar20 & uVar17) + 1;
        }
        uVar21 = uVar20 & 1;
        iVar29 = (int)(uVar21 + uVar20) / 2;
        if (((uVar21 == 0 && iVar24 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar21 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar14 = -iVar29;
        }
        else {
          iVar14 = -iVar29;
          if (uVar21 == 0) {
            iVar14 = iVar29;
          }
          if (iVar24 == 0) {
            iVar14 = iVar29;
          }
        }
        iVar24 = 1;
        if ((int)(uint)bVar9 < (int)uVar33) {
          iVar24 = -1;
        }
        iVar29 = iVar24 * iVar8 * iVar14 + (uint)bVar9;
        iVar24 = iVar38;
        if (iVar15 <= iVar29) {
          iVar24 = 0;
          if (iVar16 < iVar29) {
            iVar24 = iVar38;
          }
          iVar24 = -iVar24;
        }
        uVar21 = iVar29 + iVar24;
        uVar33 = 0xff;
        if (((int)uVar21 < 0x100) && (uVar33 = uVar21, (int)uVar21 < 0)) {
          uVar33 = 0;
        }
        if (iVar14 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar29 = ((int)((uVar20 + 1) - ((int)(uVar20 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar29;
        iVar24 = *(int *)(param_1 + 0x610);
        if (iVar24 == *(int *)(param_1 + 0x24)) {
          iVar29 = iVar29 / 2;
          *(int *)(param_1 + 0xbd4) = iVar29;
          iVar24 = iVar24 / 2;
          *(int *)(param_1 + 0x610) = iVar24;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar24 + 1;
        iVar14 = -1;
        do {
          iVar14 = iVar14 + 1;
          bVar9 = (byte)iVar14;
        } while (iVar24 + 1 << (bVar9 & 0x1f) < iVar29);
        iVar24 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        bVar11 = 0x20U - (char)iVar27 & 0x1f;
        if ((iVar27 == 0) || (uVar39 << bVar11 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar39 = *puVar7;
          uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                   uVar39 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar39;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar32 = 0x20;
          iVar29 = iVar27;
          uVar20 = uVar39;
        }
        else {
          iVar29 = 0;
          uVar20 = uVar39 << bVar11;
          iVar32 = iVar27;
        }
        uVar21 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> uVar21 == 0; uVar21 = uVar21 - 1) {
          }
        }
        iVar32 = (uVar21 ^ 0xffffffe0) + iVar32;
        *(int *)(param_1 + 0x40) = iVar32;
        iVar29 = (uVar21 ^ 0x1f) + iVar29;
        if (iVar29 < iVar19 - iVar24) {
          iVar32 = iVar32 - iVar14;
          *(int *)(param_1 + 0x40) = iVar32;
          if (iVar32 < 0) {
            uVar20 = uVar39 << (-(byte)iVar32 & 0x1f);
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar32 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar32;
            uVar20 = uVar39 >> ((byte)iVar32 & 0x1f) | uVar20;
          }
          else {
            uVar20 = uVar39 >> ((byte)iVar32 & 0x1f);
          }
          uVar20 = ~(-1 << (bVar9 & 0x1f)) & uVar20 | iVar29 << (bVar9 & 0x1f);
        }
        else {
          iVar32 = iVar32 - iVar6;
          *(int *)(param_1 + 0x40) = iVar32;
          if (iVar32 < 0) {
            uVar20 = uVar39 << (-(byte)iVar32 & 0x1f);
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar32 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar32;
            uVar20 = uVar39 >> ((byte)iVar32 & 0x1f) | uVar20;
          }
          else {
            uVar20 = uVar39 >> ((byte)iVar32 & 0x1f);
          }
          uVar20 = (uVar20 & uVar17) + 1;
        }
        uVar21 = uVar20 & 1;
        iVar24 = (int)(uVar21 + uVar20) / 2;
        if (((uVar21 == 0 && iVar14 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar21 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar29 = -iVar24;
        }
        else {
          iVar29 = -iVar24;
          if (uVar21 == 0) {
            iVar29 = iVar24;
          }
          if (iVar14 == 0) {
            iVar29 = iVar24;
          }
        }
        iVar24 = 1;
        if ((int)(uint)bVar23 < (int)uVar37) {
          iVar24 = -1;
        }
        iVar14 = iVar24 * iVar8 * iVar29 + (uint)bVar23;
        iVar24 = iVar38;
        if (iVar15 <= iVar14) {
          iVar24 = 0;
          if (iVar16 < iVar14) {
            iVar24 = iVar38;
          }
          iVar24 = -iVar24;
        }
        uVar21 = iVar14 + iVar24;
        uVar37 = 0xff;
        if (((int)uVar21 < 0x100) && (uVar37 = uVar21, (int)uVar21 < 0)) {
          uVar37 = 0;
        }
        if (iVar29 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar29 = ((int)((uVar20 + 1) - ((int)(uVar20 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar29;
        iVar24 = *(int *)(param_1 + 0x610);
        if (iVar24 == *(int *)(param_1 + 0x24)) {
          iVar29 = iVar29 / 2;
          *(int *)(param_1 + 0xbd4) = iVar29;
          iVar24 = iVar24 / 2;
          *(int *)(param_1 + 0x610) = iVar24;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar24 + 1;
        iVar14 = -1;
        do {
          iVar14 = iVar14 + 1;
          bVar9 = (byte)iVar14;
        } while (iVar24 + 1 << (bVar9 & 0x1f) < iVar29);
        iVar24 = *(int *)(&DAT_100b42f40 + (long)*(int *)(param_1 + 0x48) * 4);
        bVar23 = 0x20U - (char)iVar32 & 0x1f;
        if ((iVar32 == 0) || (uVar39 << bVar23 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar39 = *puVar7;
          uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                   uVar39 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar39;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar27 = 0x20;
          iVar29 = iVar32;
          uVar20 = uVar39;
        }
        else {
          iVar29 = 0;
          uVar20 = uVar39 << bVar23;
          iVar27 = iVar32;
        }
        uVar21 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> uVar21 == 0; uVar21 = uVar21 - 1) {
          }
        }
        iVar27 = (uVar21 ^ 0xffffffe0) + iVar27;
        *(int *)(param_1 + 0x40) = iVar27;
        iVar29 = (uVar21 ^ 0x1f) + iVar29;
        if (iVar29 < iVar19 - iVar24) {
          iVar27 = iVar27 - iVar14;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar20 = *puVar7;
            uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar20;
            iVar24 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar24;
            uVar39 = uVar39 << (-(byte)iVar27 & 0x1f) | uVar20 >> ((byte)iVar24 & 0x1f);
          }
          else {
            uVar39 = uVar39 >> ((byte)iVar27 & 0x1f);
          }
          uVar39 = ~(-1 << (bVar9 & 0x1f)) & uVar39 | iVar29 << (bVar9 & 0x1f);
        }
        else {
          iVar27 = iVar27 - iVar6;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar20 = *puVar7;
            uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar20;
            iVar24 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar24;
            uVar39 = uVar20 >> ((byte)iVar24 & 0x1f) | uVar39 << (-(byte)iVar27 & 0x1f);
          }
          else {
            uVar39 = uVar39 >> ((byte)iVar27 & 0x1f);
          }
          uVar39 = (uVar39 & uVar17) + 1;
        }
        uVar20 = uVar39 & 1;
        iVar24 = (int)(uVar20 + uVar39) / 2;
        if (((uVar20 == 0 && iVar14 == 0) &&
            (*(int *)(param_1 + 0x618) * 2 < *(int *)(param_1 + 0x610))) ||
           ((uVar20 != 0 && (*(int *)(param_1 + 0x610) <= *(int *)(param_1 + 0x618) * 2)))) {
          iVar29 = -iVar24;
        }
        else {
          iVar29 = -iVar24;
          if (uVar20 == 0) {
            iVar29 = iVar24;
          }
          if (iVar14 == 0) {
            iVar29 = iVar24;
          }
        }
        iVar24 = 1;
        if ((int)(uint)bVar34 < (int)uVar42) {
          iVar24 = -1;
        }
        iVar14 = iVar24 * iVar8 * iVar29 + (uint)bVar34;
        iVar24 = iVar38;
        if (iVar15 <= iVar14) {
          iVar24 = 0;
          if (iVar16 < iVar14) {
            iVar24 = iVar38;
          }
          iVar24 = -iVar24;
        }
        uVar20 = iVar14 + iVar24;
        uVar42 = 0xff;
        if (((int)uVar20 < 0x100) && (uVar42 = uVar20, (int)uVar20 < 0)) {
          uVar42 = 0;
        }
        if (iVar29 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar29 = ((int)((uVar39 + 1) - ((int)(uVar39 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar29;
        iVar24 = *(int *)(param_1 + 0x610);
        if (iVar24 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0xbd4) = iVar29 / 2;
          iVar24 = iVar24 / 2;
          *(int *)(param_1 + 0x610) = iVar24;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar24 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        uVar26 = (uint)bVar11;
        uVar22 = uVar33;
        if ((int)uVar33 < (int)uVar26) {
          uVar22 = uVar26;
        }
        uVar12 = uVar26;
        if ((int)uVar33 <= (int)uVar26) {
          uVar12 = uVar33;
        }
        uVar28 = (uint)bVar9;
        if (((int)uVar28 < (int)uVar22) &&
           (bVar10 = (int)uVar12 < (int)uVar28, uVar12 = uVar22, bVar10)) {
          uVar12 = (uVar26 - uVar28) + uVar33;
        }
        lVar35 = (long)iVar32;
        iVar32 = *(int *)(param_1 + 0x1190 + lVar35 * 4) * uVar39 + uVar12;
        iVar14 = 0xff;
        if ((iVar32 < 0x100) && (iVar14 = iVar32, iVar32 < 0)) {
          iVar14 = 0;
        }
        iVar32 = -1;
        do {
          iVar32 = iVar32 + 1;
          bVar9 = (byte)iVar32;
        } while (*(int *)(param_1 + 0x5c + lVar35 * 4) << (bVar9 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar35 * 4));
        iVar27 = *(int *)(param_1 + 0x40);
        uVar33 = *(uint *)(param_1 + 0x44);
        bVar11 = 0x20U - (char)iVar27 & 0x1f;
        if ((iVar27 == 0) || (uVar33 << bVar11 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar33 = *puVar7;
          uVar33 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar33;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar30 = 0x20;
          iVar25 = iVar27;
          uVar22 = uVar33;
        }
        else {
          iVar25 = 0;
          uVar22 = uVar33 << bVar11;
          iVar30 = iVar27;
        }
        uVar26 = 0x1f;
        if (uVar22 != 0) {
          for (; uVar22 >> uVar26 == 0; uVar26 = uVar26 - 1) {
          }
        }
        iVar30 = (uVar26 ^ 0xffffffe0) + iVar30;
        *(int *)(param_1 + 0x40) = iVar30;
        iVar25 = (uVar26 ^ 0x1f) + iVar25;
        if (iVar25 < iVar31) {
          iVar30 = iVar30 - iVar32;
          *(int *)(param_1 + 0x40) = iVar30;
          if (iVar30 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar22 = *puVar7;
            uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar22;
            iVar27 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar27;
            uVar33 = uVar33 << (-(byte)iVar30 & 0x1f) | uVar22 >> ((byte)iVar27 & 0x1f);
          }
          else {
            uVar33 = uVar33 >> ((byte)iVar30 & 0x1f);
          }
          uVar33 = ~(-1 << (bVar9 & 0x1f)) & uVar33 | iVar25 << (bVar9 & 0x1f);
        }
        else {
          iVar30 = iVar30 - iVar6;
          *(int *)(param_1 + 0x40) = iVar30;
          if (iVar30 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar22 = *puVar7;
            uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar22;
            iVar27 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar27;
            uVar33 = uVar22 >> ((byte)iVar27 & 0x1f) | uVar33 << (-(byte)iVar30 & 0x1f);
          }
          else {
            uVar33 = uVar33 >> ((byte)iVar30 & 0x1f);
          }
          uVar33 = (uVar33 & uVar17) + 1;
        }
        uVar22 = (uint)bVar36;
        if (iVar32 == 0 && iVar5 == 0) {
          bVar10 = *(int *)(param_1 + 0xbdc + lVar35 * 4) * 2 <=
                   -*(int *)(param_1 + 0x5c + lVar35 * 4);
        }
        else {
          bVar10 = false;
        }
        uVar26 = (int)uVar33 / 2;
        if ((bVar10 + uVar33 & 1) != 0) {
          uVar26 = ~uVar26;
        }
        iVar14 = uVar39 * iVar8 * uVar26 + iVar14;
        iVar32 = iVar38;
        if (iVar15 <= iVar14) {
          iVar32 = 0;
          if (iVar16 < iVar14) {
            iVar32 = iVar38;
          }
          iVar32 = -iVar32;
        }
        uVar39 = iVar14 + iVar32;
        uVar33 = 0xff;
        if (((int)uVar39 < 0x100) && (uVar33 = uVar39, (int)uVar39 < 0)) {
          uVar33 = 0;
        }
        uVar39 = -uVar26;
        if (0 < (int)uVar26) {
          uVar39 = uVar26;
        }
        iVar14 = uVar39 + *(int *)(param_1 + 0x620 + lVar35 * 4);
        *(int *)(param_1 + 0x620 + lVar35 * 4) = iVar14;
        iVar32 = uVar26 * iVar8 + *(int *)(param_1 + 0xbdc + lVar35 * 4);
        *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar32;
        uVar39 = *(uint *)(param_1 + 0x5c + lVar35 * 4);
        if (uVar39 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar35 * 4) = iVar14 / 2;
          iVar32 = iVar32 / 2;
          *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar32;
          uVar39 = (int)uVar39 / 2;
          *(uint *)(param_1 + 0x5c + lVar35 * 4) = uVar39;
        }
        iVar14 = uVar39 + 1;
        *(int *)(param_1 + 0x5c + lVar35 * 4) = iVar14;
        if ((int)~uVar39 < iVar32) {
          if (0 < iVar32) {
            iVar27 = iVar32 - iVar14;
            if (iVar27 != 0 && iVar14 <= iVar32) {
              iVar27 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar27;
            iVar14 = *(int *)(param_1 + 0x1190 + lVar35 * 4);
            if (iVar14 < 0x7f) {
              iVar14 = iVar14 + 1;
              goto LAB_10045e9d0;
            }
          }
        }
        else {
          iVar27 = -uVar39;
          if ((int)~uVar39 < iVar14 + iVar32) {
            iVar27 = iVar14 + iVar32;
          }
          *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar27;
          iVar14 = *(int *)(param_1 + 0x1190 + lVar35 * 4);
          if (-0x80 < iVar14) {
            iVar14 = iVar14 + -1;
LAB_10045e9d0:
            *(int *)(param_1 + 0x1190 + lVar35 * 4) = iVar14;
          }
        }
        uVar39 = uVar37;
        if ((int)uVar37 < (int)uVar22) {
          uVar39 = uVar22;
        }
        uVar26 = uVar22;
        if ((int)uVar37 <= (int)uVar22) {
          uVar26 = uVar37;
        }
        uVar12 = (uint)bVar23;
        if (((int)uVar12 < (int)uVar39) &&
           (bVar10 = (int)uVar26 < (int)uVar12, uVar26 = uVar39, bVar10)) {
          uVar26 = (uVar22 - uVar12) + uVar37;
        }
        lVar35 = (long)iVar29;
        iVar14 = *(int *)(param_1 + 0x1190 + lVar35 * 4) * uVar20 + uVar26;
        iVar29 = 0xff;
        if ((iVar14 < 0x100) && (iVar29 = iVar14, iVar14 < 0)) {
          iVar29 = 0;
        }
        iVar14 = -1;
        do {
          iVar14 = iVar14 + 1;
          bVar9 = (byte)iVar14;
        } while (*(int *)(param_1 + 0x5c + lVar35 * 4) << (bVar9 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar35 * 4));
        iVar32 = *(int *)(param_1 + 0x40);
        uVar37 = *(uint *)(param_1 + 0x44);
        bVar23 = 0x20U - (char)iVar32 & 0x1f;
        if ((iVar32 == 0) || (uVar37 << bVar23 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar37 = *puVar7;
          uVar37 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                   uVar37 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar37;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar25 = 0x20;
          iVar27 = iVar32;
          uVar39 = uVar37;
        }
        else {
          iVar27 = 0;
          uVar39 = uVar37 << bVar23;
          iVar25 = iVar32;
        }
        uVar22 = 0x1f;
        if (uVar39 != 0) {
          for (; uVar39 >> uVar22 == 0; uVar22 = uVar22 - 1) {
          }
        }
        iVar25 = (uVar22 ^ 0xffffffe0) + iVar25;
        *(int *)(param_1 + 0x40) = iVar25;
        iVar27 = (uVar22 ^ 0x1f) + iVar27;
        if (iVar27 < iVar31) {
          iVar25 = iVar25 - iVar14;
          *(int *)(param_1 + 0x40) = iVar25;
          if (iVar25 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar32 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar32;
            uVar37 = uVar37 << (-(byte)iVar25 & 0x1f) | uVar39 >> ((byte)iVar32 & 0x1f);
          }
          else {
            uVar37 = uVar37 >> ((byte)iVar25 & 0x1f);
          }
          uVar37 = ~(-1 << (bVar9 & 0x1f)) & uVar37 | iVar27 << (bVar9 & 0x1f);
        }
        else {
          iVar25 = iVar25 - iVar6;
          *(int *)(param_1 + 0x40) = iVar25;
          if (iVar25 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar32 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar32;
            uVar37 = uVar39 >> ((byte)iVar32 & 0x1f) | uVar37 << (-(byte)iVar25 & 0x1f);
          }
          else {
            uVar37 = uVar37 >> ((byte)iVar25 & 0x1f);
          }
          uVar37 = (uVar37 & uVar17) + 1;
        }
        if (iVar14 == 0 && iVar5 == 0) {
          bVar10 = *(int *)(param_1 + 0xbdc + lVar35 * 4) * 2 <=
                   -*(int *)(param_1 + 0x5c + lVar35 * 4);
        }
        else {
          bVar10 = false;
        }
        uVar39 = (int)uVar37 / 2;
        if ((bVar10 + uVar37 & 1) != 0) {
          uVar39 = ~uVar39;
        }
        iVar29 = uVar20 * iVar8 * uVar39 + iVar29;
        iVar14 = iVar38;
        if (iVar15 <= iVar29) {
          iVar14 = 0;
          if (iVar16 < iVar29) {
            iVar14 = iVar38;
          }
          iVar14 = -iVar14;
        }
        uVar20 = iVar29 + iVar14;
        uVar37 = 0xff;
        if (((int)uVar20 < 0x100) && (uVar37 = uVar20, (int)uVar20 < 0)) {
          uVar37 = 0;
        }
        uVar20 = -uVar39;
        if (0 < (int)uVar39) {
          uVar20 = uVar39;
        }
        iVar29 = uVar20 + *(int *)(param_1 + 0x620 + lVar35 * 4);
        *(int *)(param_1 + 0x620 + lVar35 * 4) = iVar29;
        iVar14 = uVar39 * iVar8 + *(int *)(param_1 + 0xbdc + lVar35 * 4);
        *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar14;
        uVar39 = *(uint *)(param_1 + 0x5c + lVar35 * 4);
        if (uVar39 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar35 * 4) = iVar29 / 2;
          iVar14 = iVar14 / 2;
          *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar14;
          uVar39 = (int)uVar39 / 2;
          *(uint *)(param_1 + 0x5c + lVar35 * 4) = uVar39;
        }
        iVar29 = uVar39 + 1;
        *(int *)(param_1 + 0x5c + lVar35 * 4) = iVar29;
        if ((int)~uVar39 < iVar14) {
          if (0 < iVar14) {
            iVar32 = iVar14 - iVar29;
            if (iVar32 != 0 && iVar29 <= iVar14) {
              iVar32 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar32;
            iVar29 = *(int *)(param_1 + 0x1190 + lVar35 * 4);
            if (iVar29 < 0x7f) {
              iVar29 = iVar29 + 1;
              goto LAB_10045ed00;
            }
          }
        }
        else {
          iVar32 = -uVar39;
          if ((int)~uVar39 < iVar29 + iVar14) {
            iVar32 = iVar29 + iVar14;
          }
          *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar32;
          iVar29 = *(int *)(param_1 + 0x1190 + lVar35 * 4);
          if (-0x80 < iVar29) {
            iVar29 = iVar29 + -1;
LAB_10045ed00:
            *(int *)(param_1 + 0x1190 + lVar35 * 4) = iVar29;
          }
        }
        uVar20 = (uint)bVar41;
        uVar39 = uVar42;
        if ((int)uVar42 < (int)uVar20) {
          uVar39 = uVar20;
        }
        uVar22 = uVar20;
        if ((int)uVar42 <= (int)uVar20) {
          uVar22 = uVar42;
        }
        uVar26 = (uint)bVar34;
        if (((int)uVar26 < (int)uVar39) &&
           (bVar10 = (int)uVar22 < (int)uVar26, uVar22 = uVar39, bVar10)) {
          uVar22 = (uVar20 - uVar26) + uVar42;
        }
        lVar35 = (long)iVar24;
        iVar29 = *(int *)(param_1 + 0x1190 + lVar35 * 4) * uVar21 + uVar22;
        iVar24 = 0xff;
        if ((iVar29 < 0x100) && (iVar24 = iVar29, iVar29 < 0)) {
          iVar24 = 0;
        }
        iVar29 = -1;
        do {
          iVar29 = iVar29 + 1;
          bVar9 = (byte)iVar29;
        } while (*(int *)(param_1 + 0x5c + lVar35 * 4) << (bVar9 & 0x1f) <
                 *(int *)(param_1 + 0x620 + lVar35 * 4));
        iVar14 = *(int *)(param_1 + 0x40);
        uVar42 = *(uint *)(param_1 + 0x44);
        bVar23 = 0x20U - (char)iVar14 & 0x1f;
        if ((iVar14 == 0) || (uVar42 << bVar23 == 0)) {
          puVar7 = *(uint **)(param_1 + 0x38);
          *(uint **)(param_1 + 0x38) = puVar7 + 1;
          uVar42 = *puVar7;
          uVar42 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                   uVar42 << 0x18;
          *(uint *)(param_1 + 0x44) = uVar42;
          *(undefined4 *)(param_1 + 0x40) = 0x20;
          iVar27 = 0x20;
          iVar32 = iVar14;
          uVar39 = uVar42;
        }
        else {
          iVar32 = 0;
          uVar39 = uVar42 << bVar23;
          iVar27 = iVar14;
        }
        uVar20 = 0x1f;
        if (uVar39 != 0) {
          for (; uVar39 >> uVar20 == 0; uVar20 = uVar20 - 1) {
          }
        }
        iVar27 = (uVar20 ^ 0xffffffe0) + iVar27;
        *(int *)(param_1 + 0x40) = iVar27;
        iVar32 = (uVar20 ^ 0x1f) + iVar32;
        if (iVar32 < iVar31) {
          iVar27 = iVar27 - iVar29;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar14 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar14;
            uVar42 = uVar42 << (-(byte)iVar27 & 0x1f) | uVar39 >> ((byte)iVar14 & 0x1f);
          }
          else {
            uVar42 = uVar42 >> ((byte)iVar27 & 0x1f);
          }
          uVar42 = ~(-1 << (bVar9 & 0x1f)) & uVar42 | iVar32 << (bVar9 & 0x1f);
        }
        else {
          iVar27 = iVar27 - iVar6;
          *(int *)(param_1 + 0x40) = iVar27;
          if (iVar27 < 0) {
            puVar7 = *(uint **)(param_1 + 0x38);
            *(uint **)(param_1 + 0x38) = puVar7 + 1;
            uVar39 = *puVar7;
            uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 |
                     uVar39 << 0x18;
            *(uint *)(param_1 + 0x44) = uVar39;
            iVar14 = *(int *)(param_1 + 0x40) + 0x20;
            *(int *)(param_1 + 0x40) = iVar14;
            uVar42 = uVar39 >> ((byte)iVar14 & 0x1f) | uVar42 << (-(byte)iVar27 & 0x1f);
          }
          else {
            uVar42 = uVar42 >> ((byte)iVar27 & 0x1f);
          }
          uVar42 = (uVar42 & uVar17) + 1;
        }
        if (iVar29 == 0 && iVar5 == 0) {
          bVar10 = *(int *)(param_1 + 0xbdc + lVar35 * 4) * 2 <=
                   -*(int *)(param_1 + 0x5c + lVar35 * 4);
        }
        else {
          bVar10 = false;
        }
        uVar39 = (int)uVar42 / 2;
        if ((bVar10 + uVar42 & 1) != 0) {
          uVar39 = ~uVar39;
        }
        iVar24 = uVar21 * iVar8 * uVar39 + iVar24;
        iVar29 = iVar38;
        if (iVar15 <= iVar24) {
          iVar29 = 0;
          if (iVar16 < iVar24) {
            iVar29 = iVar38;
          }
          iVar29 = -iVar29;
        }
        uVar20 = iVar24 + iVar29;
        uVar42 = 0xff;
        if (((int)uVar20 < 0x100) && (uVar42 = uVar20, (int)uVar20 < 0)) {
          uVar42 = 0;
        }
        uVar20 = -uVar39;
        if (0 < (int)uVar39) {
          uVar20 = uVar39;
        }
        iVar24 = uVar20 + *(int *)(param_1 + 0x620 + lVar35 * 4);
        *(int *)(param_1 + 0x620 + lVar35 * 4) = iVar24;
        iVar29 = uVar39 * iVar8 + *(int *)(param_1 + 0xbdc + lVar35 * 4);
        *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar29;
        uVar39 = *(uint *)(param_1 + 0x5c + lVar35 * 4);
        if (uVar39 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar35 * 4) = iVar24 / 2;
          iVar29 = iVar29 / 2;
          *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar29;
          uVar39 = (int)uVar39 / 2;
          *(uint *)(param_1 + 0x5c + lVar35 * 4) = uVar39;
        }
        iVar24 = uVar39 + 1;
        *(int *)(param_1 + 0x5c + lVar35 * 4) = iVar24;
        if ((int)~uVar39 < iVar29) {
          if (0 < iVar29) {
            iVar14 = iVar29 - iVar24;
            if (iVar14 != 0 && iVar24 <= iVar29) {
              iVar14 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar14;
            iVar24 = *(int *)(param_1 + 0x1190 + lVar35 * 4);
            if (iVar24 < 0x7f) {
              *(int *)(param_1 + 0x1190 + lVar35 * 4) = iVar24 + 1;
            }
          }
        }
        else {
          iVar14 = -uVar39;
          if ((int)~uVar39 < iVar24 + iVar29) {
            iVar14 = iVar24 + iVar29;
          }
          *(int *)(param_1 + 0xbdc + lVar35 * 4) = iVar14;
          iVar24 = *(int *)(param_1 + 0x1190 + lVar35 * 4);
          if (-0x80 < iVar24) {
            *(int *)(param_1 + 0x1190 + lVar35 * 4) = iVar24 + -1;
          }
        }
      }
      bVar9 = param_2[uVar40 * 4];
      bVar23 = param_2[uVar40 * 4 + 1];
      bVar34 = param_2[uVar40 * 4 + 2];
      bVar11 = (byte)uVar33;
      param_2[uVar40 * 4] = bVar11;
      bVar36 = (byte)uVar37;
      param_2[uVar40 * 4 + 1] = bVar36;
      bVar41 = (byte)uVar42;
      param_2[uVar40 * 4 + 2] = bVar41;
      uVar39 = (int)uVar40 + 1;
      uVar40 = (ulong)uVar39;
      if (param_3 < uVar39) goto LAB_10045f8db;
      bVar11 = param_2[uVar40 * 4];
      bVar36 = param_2[uVar40 * 4 + 1];
      bVar41 = param_2[uVar40 * 4 + 2];
    } while( true );
  }
  uVar40 = 1;
LAB_10045f8db:
  param_2[uVar40 * 4] = bVar11;
  param_2[uVar40 * 4 + 1] = bVar36;
  param_2[uVar40 * 4 + 2] = bVar41;
  return;
}

