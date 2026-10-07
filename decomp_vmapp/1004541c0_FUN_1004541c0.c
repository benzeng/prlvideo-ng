
void FUN_1004541c0(long param_1,byte *param_2,long param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  byte bVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  byte bVar31;
  uint uVar32;
  uint local_3c;
  uint local_34;
  
  bVar8 = *param_2;
  bVar12 = param_2[1];
  bVar24 = param_2[2];
  bVar31 = param_2[4];
  bVar22 = param_2[5];
  bVar26 = param_2[6];
  *param_2 = bVar31;
  param_2[1] = bVar22;
  param_2[2] = bVar26;
  if (param_4 != 0) {
    uVar15 = 1;
    uVar13 = (uint)bVar31;
    local_3c = (uint)bVar26;
    local_34 = (uint)bVar22;
    do {
      uVar23 = (uint)uVar15;
      uVar9 = (ulong)(uVar23 + 1);
      uVar29 = (uint)*(byte *)(param_3 + -4 + uVar15 * 4);
      uVar19 = (uint)*(byte *)(param_3 + -3 + uVar15 * 4);
      uVar28 = (uint)*(byte *)(param_3 + -2 + uVar15 * 4);
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar31) + (ulong)param_2[uVar9 * 4]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar31 + 0x1844) - (ulong)bVar8));
      iVar16 = (int)*(char *)(param_1 + (((ulong)bVar8 + 0x1844) - (long)(int)uVar13));
      iVar10 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar10 = (int)cVar2, cVar2 == '\0')) {
        iVar10 = iVar16;
      }
      uVar27 = iVar10 >> 0x1f | 1;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar22) + (ulong)param_2[uVar9 * 4 + 1]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar22 + 0x1844) - (ulong)bVar12));
      iVar17 = (int)*(char *)(param_1 + (((ulong)bVar12 + 0x1844) - (long)(int)local_34));
      iVar10 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar10 = (int)cVar4, cVar4 == '\0')) {
        iVar10 = iVar17;
      }
      iVar16 = (cVar2 * 9 + cVar1 * 0x51 + iVar16) * uVar27;
      uVar32 = iVar10 >> 0x1f | 1;
      iVar20 = (cVar4 * 9 + cVar3 * 0x51 + iVar17) * uVar32;
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar26) + (ulong)param_2[uVar9 * 4 + 2]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar26 + 0x1844) - (ulong)bVar24));
      iVar17 = (int)*(char *)(param_1 + (((ulong)bVar24 + 0x1844) - (long)(int)local_3c));
      iVar10 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar10 = (int)cVar2, cVar2 == '\0')) {
        iVar10 = iVar17;
      }
      uVar25 = iVar10 >> 0x1f | 1;
      iVar10 = (cVar2 * 9 + cVar1 * 0x51 + iVar17) * uVar25;
      if ((iVar20 == 0 && iVar16 == 0) && iVar10 == 0) {
        iVar16 = uVar29 - uVar13;
        iVar10 = -iVar16;
        if (0 < iVar16) {
          iVar10 = iVar16;
        }
        iVar16 = 0;
        if (iVar10 < 1) {
          uVar9 = uVar15;
          iVar10 = 0;
          do {
            uVar11 = (ulong)(uVar23 + iVar10);
            iVar16 = uVar19 - local_34;
            iVar17 = -iVar16;
            if (0 < iVar16) {
              iVar17 = iVar16;
            }
            uVar15 = uVar11;
            iVar16 = iVar10;
            if (0 < iVar17) break;
            iVar20 = uVar28 - local_3c;
            iVar17 = -iVar20;
            if (0 < iVar20) {
              iVar17 = iVar20;
            }
            uVar15 = uVar9;
            if (0 < iVar17) break;
            iVar16 = iVar10 + 1;
            param_2[uVar11 * 4] = (byte)uVar13;
            param_2[uVar11 * 4 + 1] = (byte)local_34;
            param_2[uVar11 * 4 + 2] = (byte)local_3c;
            uVar28 = uVar23 + 1 + iVar10;
            if (param_4 < uVar28) {
              FUN_10045aea0(param_1,iVar16,1);
              uVar15 = (ulong)uVar28;
              param_2[uVar15 * 4] = param_2[uVar11 * 4];
              param_2[uVar15 * 4 + 1] = param_2[uVar11 * 4 + 1];
              param_2[uVar15 * 4 + 2] = param_2[uVar11 * 4 + 2];
              return;
            }
            uVar15 = (ulong)((int)uVar9 + 1);
            uVar9 = (ulong)uVar28;
            uVar29 = (uint)*(byte *)(param_3 + -4 + uVar9 * 4);
            uVar19 = (uint)*(byte *)(param_3 + -3 + uVar9 * 4);
            uVar28 = (uint)*(byte *)(param_3 + -2 + uVar9 * 4);
            iVar10 = uVar29 - uVar13;
            iVar17 = -iVar10;
            if (0 < iVar10) {
              iVar17 = iVar10;
            }
            uVar9 = uVar15;
            iVar10 = iVar16;
          } while (iVar17 < 1);
        }
        FUN_10045aea0(param_1,iVar16,0);
        uVar23 = (uint)uVar15;
        bVar8 = param_2[uVar15 * 4];
        bVar12 = param_2[uVar15 * 4 + 1];
        bVar24 = param_2[uVar15 * 4 + 2];
        iVar16 = -1;
        iVar10 = 1;
        if (uVar13 != bVar8 && bVar8 <= uVar13) {
          iVar10 = -1;
        }
        uVar13 = iVar10 * (uVar29 - bVar8);
        iVar17 = (uVar13 >> 0x17 & 0x100) + uVar13;
        iVar10 = *(int *)(param_1 + 0x610);
        do {
          iVar16 = iVar16 + 1;
          bVar8 = (byte)iVar16;
        } while (iVar10 << (bVar8 & 0x1f) < *(int *)(param_1 + 0xbd4));
        iVar20 = iVar17 + (uint)(0x7f < iVar17) * -0x100;
        if ((((iVar20 == 0 || iVar17 < (int)((uint)(0x7f < iVar17) * 0x100)) || (iVar16 != 0)) ||
            (uVar13 = 1, iVar10 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar20 || (uVar13 = 1, *(int *)(param_1 + 0x618) * 2 < iVar10)))) {
          uVar13 = (uint)(iVar16 != 0 && iVar20 < 0);
        }
        iVar10 = -iVar20;
        if (0 < iVar20) {
          iVar10 = iVar20;
        }
        uVar13 = iVar10 * 2 - uVar13;
        uVar27 = (int)uVar13 >> (bVar8 & 0x1f);
        if ((int)uVar27 < 0x16 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar17 = *(int *)(param_1 + 0x30) + ~uVar27;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = 1U >> (-(byte)iVar17 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar27 = 1 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar17 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar32 = ~(-1 << (bVar8 & 0x1f)) & uVar13;
          iVar17 = iVar17 - iVar16;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = (int)uVar32 >> (-(byte)iVar17 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
LAB_1004550da:
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar27 = uVar32 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = uVar32 << ((byte)iVar17 & 0x1f) | uVar27;
          }
        }
        else {
          iVar10 = *(int *)(param_1 + 0x30) -
                   (0x17 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar27 = 1U >> (-(byte)iVar10 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar10 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar10;
            uVar27 = 1 << ((byte)iVar10 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar10 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar32 = uVar13 - 1;
          iVar17 = iVar10 + -8;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = (int)uVar32 >> (8U - (char)iVar10 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            goto LAB_1004550da;
          }
          uVar27 = uVar32 << ((byte)iVar17 & 0x1f) | uVar27;
        }
        *(uint *)(param_1 + 0x44) = uVar27;
        if (iVar20 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar16 = ((int)((uVar13 + 1) - ((int)(uVar13 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar16;
        iVar10 = *(int *)(param_1 + 0x610);
        if (iVar10 == *(int *)(param_1 + 0x24)) {
          iVar16 = iVar16 / 2;
          *(int *)(param_1 + 0xbd4) = iVar16;
          iVar10 = iVar10 / 2;
          *(int *)(param_1 + 0x610) = iVar10;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x610) = iVar10;
        iVar18 = -1;
        iVar20 = 1;
        if (local_34 != bVar12 && bVar12 <= local_34) {
          iVar20 = -1;
        }
        uVar13 = iVar20 * (uVar19 - bVar12);
        iVar20 = (uVar13 >> 0x17 & 0x100) + uVar13;
        do {
          iVar18 = iVar18 + 1;
          bVar8 = (byte)iVar18;
        } while (iVar10 << (bVar8 & 0x1f) < iVar16);
        iVar16 = iVar20 + (uint)(0x7f < iVar20) * -0x100;
        if ((((iVar16 == 0 || iVar20 < (int)((uint)(0x7f < iVar20) * 0x100)) || (iVar18 != 0)) ||
            (uVar13 = 1, iVar10 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar16 || (uVar13 = 1, *(int *)(param_1 + 0x618) * 2 < iVar10)))) {
          uVar13 = (uint)(iVar18 != 0 && iVar16 < 0);
        }
        iVar10 = -iVar16;
        if (0 < iVar16) {
          iVar10 = iVar16;
        }
        uVar13 = iVar10 * 2 - uVar13;
        uVar32 = (int)uVar13 >> (bVar8 & 0x1f);
        if ((int)uVar32 < 0x16 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar17 = iVar17 + ~uVar32;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = 1U >> (-(byte)iVar17 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar27 = 1 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar17 & 0x1f) | uVar27;
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar32 = ~(-1 << (bVar8 & 0x1f)) & uVar13;
          iVar17 = iVar17 - iVar18;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = (int)uVar32 >> (-(char)iVar17 & 0x1fU) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                     uVar27 << 0x18;
            goto LAB_100455349;
          }
LAB_100455329:
          uVar32 = uVar32 << ((byte)iVar17 & 0x1f) | uVar27;
        }
        else {
          iVar10 = iVar17 - (0x17 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar27 = 1U >> (-(byte)iVar10 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar10 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar10;
            uVar27 = 1 << ((byte)iVar10 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar10 & 0x1f) | uVar27;
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar32 = uVar13 - 1;
          iVar17 = iVar10 + -8;
          *(int *)(param_1 + 0x30) = iVar17;
          if (-1 < iVar17) goto LAB_100455329;
          uVar27 = (int)uVar32 >> (8U - (char)iVar10 & 0x1f) | uVar27;
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                   uVar27 << 0x18;
LAB_100455349:
          puVar5 = *(uint **)(param_1 + 0x28);
          *(uint **)(param_1 + 0x28) = puVar5 + 1;
          *puVar5 = uVar27;
          iVar17 = *(int *)(param_1 + 0x30) + 0x20;
          *(int *)(param_1 + 0x30) = iVar17;
          uVar32 = uVar32 << ((byte)iVar17 & 0x1f);
        }
        *(uint *)(param_1 + 0x44) = uVar32;
        if (iVar16 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar16 = ((int)((uVar13 + 1) - ((int)(uVar13 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar16;
        iVar10 = *(int *)(param_1 + 0x610);
        if (iVar10 == *(int *)(param_1 + 0x24)) {
          iVar16 = iVar16 / 2;
          *(int *)(param_1 + 0xbd4) = iVar16;
          iVar10 = iVar10 / 2;
          *(int *)(param_1 + 0x610) = iVar10;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x610) = iVar10;
        iVar18 = -1;
        iVar20 = 1;
        if (local_3c != bVar24 && bVar24 <= local_3c) {
          iVar20 = -1;
        }
        uVar13 = iVar20 * (uVar28 - bVar24);
        iVar20 = (uVar13 >> 0x17 & 0x100) + uVar13;
        do {
          iVar18 = iVar18 + 1;
          bVar8 = (byte)iVar18;
        } while (iVar10 << (bVar8 & 0x1f) < iVar16);
        iVar16 = iVar20 + (uint)(0x7f < iVar20) * -0x100;
        if ((((iVar16 == 0 || iVar20 < (int)((uint)(0x7f < iVar20) * 0x100)) || (iVar18 != 0)) ||
            (uVar13 = 1, iVar10 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar16 || (uVar13 = 1, *(int *)(param_1 + 0x618) * 2 < iVar10)))) {
          uVar13 = (uint)(iVar18 != 0 && iVar16 < 0);
        }
        iVar10 = -iVar16;
        if (0 < iVar16) {
          iVar10 = iVar16;
        }
        uVar13 = iVar10 * 2 - uVar13;
        uVar27 = (int)uVar13 >> (bVar8 & 0x1f);
        if ((int)uVar27 < 0x16 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) {
          iVar17 = iVar17 + ~uVar27;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar32 = 1U >> (-(byte)iVar17 & 0x1f) | uVar32;
            *(uint *)(param_1 + 0x44) = uVar32;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                      uVar32 << 0x18;
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar32 = 1 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar32 = 1 << ((byte)iVar17 & 0x1f) | uVar32;
          }
          *(uint *)(param_1 + 0x44) = uVar32;
          uVar27 = ~(-1 << (bVar8 & 0x1f)) & uVar13;
          iVar17 = iVar17 - iVar18;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar32 = (int)uVar27 >> (-(byte)iVar17 & 0x1f) | uVar32;
            *(uint *)(param_1 + 0x44) = uVar32;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                      uVar32 << 0x18;
LAB_1004555da:
            iVar10 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar10;
            uVar32 = uVar27 << ((byte)iVar10 & 0x1f);
          }
          else {
            uVar32 = uVar27 << ((byte)iVar17 & 0x1f) | uVar32;
          }
        }
        else {
          iVar17 = iVar17 - (0x17 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar32 = 1U >> (-(byte)iVar17 & 0x1f) | uVar32;
            *(uint *)(param_1 + 0x44) = uVar32;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                      uVar32 << 0x18;
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar32 = 1 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar32 = 1 << ((byte)iVar17 & 0x1f) | uVar32;
          }
          *(uint *)(param_1 + 0x44) = uVar32;
          uVar27 = uVar13 - 1;
          iVar10 = iVar17 + -8;
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar32 = (int)uVar27 >> (8U - (char)iVar17 & 0x1f) | uVar32;
            *(uint *)(param_1 + 0x44) = uVar32;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                      uVar32 << 0x18;
            goto LAB_1004555da;
          }
          uVar32 = uVar27 << ((byte)iVar10 & 0x1f) | uVar32;
        }
        *(uint *)(param_1 + 0x44) = uVar32;
        if (iVar16 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar16 = ((int)((uVar13 + 1) - ((int)(uVar13 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar16;
        iVar10 = *(int *)(param_1 + 0x610);
        if (iVar10 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0xbd4) = iVar16 / 2;
          iVar10 = iVar10 / 2;
          *(int *)(param_1 + 0x610) = iVar10;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar10 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
      }
      else {
        uVar30 = (uint)bVar31;
        if (uVar13 <= bVar31) {
          uVar30 = uVar13;
        }
        uVar7 = uVar13;
        if (uVar13 < bVar31) {
          uVar7 = (uint)bVar31;
        }
        if ((bVar8 < uVar7) && (bVar6 = uVar30 < bVar8, uVar30 = uVar7, bVar6)) {
          uVar30 = ((uint)bVar31 - (uint)bVar8) + uVar13;
        }
        lVar21 = (long)iVar16;
        iVar17 = *(int *)(param_1 + 0x1190 + lVar21 * 4) * uVar27 + uVar30;
        iVar16 = 0xff;
        if ((iVar17 < 0x100) && (iVar16 = iVar17, iVar17 < 0)) {
          iVar16 = 0;
        }
        uVar27 = (uVar29 - iVar16) * uVar27;
        iVar18 = (uVar27 >> 0x17 & 0x100) + uVar27;
        iVar16 = *(int *)(param_1 + 0x5c + lVar21 * 4);
        iVar17 = -1;
        do {
          iVar17 = iVar17 + 1;
          bVar8 = (byte)iVar17;
        } while (iVar16 << (bVar8 & 0x1f) < *(int *)(param_1 + 0x620 + lVar21 * 4));
        iVar18 = iVar18 + (uint)(0x7f < iVar18) * -0x100;
        if (iVar17 == 0) {
          uVar13 = (uint)(*(int *)(param_1 + 0xbdc + lVar21 * 4) * 2 <= -iVar16);
        }
        else {
          uVar13 = 0;
        }
        if (iVar18 < 0) {
          uVar13 = ~(iVar18 * 2) - uVar13;
        }
        else {
          uVar13 = iVar18 * 2 | uVar13;
        }
        uVar27 = (int)uVar13 >> (bVar8 & 0x1f);
        iVar16 = *(int *)(param_1 + 0x30);
        if ((int)uVar27 < 0x17) {
          iVar16 = iVar16 + ~uVar27;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = 1U >> (-(byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = 1 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar13 = uVar13 & ~(-1 << (bVar8 & 0x1f));
          iVar16 = iVar16 - iVar17;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = (int)uVar13 >> (-(byte)iVar16 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = uVar13 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = uVar13 << ((byte)iVar16 & 0x1f) | uVar27;
          }
          *(uint *)(param_1 + 0x44) = uVar27;
        }
        else {
          iVar17 = iVar16 + -0x18;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = 1U >> (0x18U - (char)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar27 = 1 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar17 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          iVar14 = uVar13 - 1;
          iVar16 = iVar17 + -8;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = iVar14 >> (8U - (char)iVar17 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = iVar14 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = iVar14 << ((byte)iVar16 & 0x1f) | uVar27;
          }
          *(uint *)(param_1 + 0x44) = uVar27;
        }
        uVar27 = (uint)bVar12;
        uVar13 = (uint)bVar22;
        iVar16 = -iVar18;
        if (0 < iVar18) {
          iVar16 = iVar18;
        }
        iVar16 = iVar16 + *(int *)(param_1 + 0x620 + lVar21 * 4);
        *(int *)(param_1 + 0x620 + lVar21 * 4) = iVar16;
        iVar18 = iVar18 + *(int *)(param_1 + 0xbdc + lVar21 * 4);
        *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar18;
        uVar30 = *(uint *)(param_1 + 0x5c + lVar21 * 4);
        if (uVar30 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar21 * 4) = iVar16 / 2;
          iVar18 = iVar18 / 2;
          *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar18;
          uVar30 = (int)uVar30 / 2;
          *(uint *)(param_1 + 0x5c + lVar21 * 4) = uVar30;
        }
        iVar16 = uVar30 + 1;
        *(int *)(param_1 + 0x5c + lVar21 * 4) = iVar16;
        if ((int)~uVar30 < iVar18) {
          if (0 < iVar18) {
            iVar17 = iVar18 - iVar16;
            if (iVar17 != 0 && iVar16 <= iVar18) {
              iVar17 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar17;
            iVar16 = *(int *)(param_1 + 0x1190 + lVar21 * 4);
            if (iVar16 < 0x7f) {
              iVar16 = iVar16 + 1;
              goto LAB_100454980;
            }
          }
        }
        else {
          iVar17 = -uVar30;
          if ((int)~uVar30 < iVar16 + iVar18) {
            iVar17 = iVar16 + iVar18;
          }
          *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar17;
          iVar16 = *(int *)(param_1 + 0x1190 + lVar21 * 4);
          if (-0x80 < iVar16) {
            iVar16 = iVar16 + -1;
LAB_100454980:
            *(int *)(param_1 + 0x1190 + lVar21 * 4) = iVar16;
          }
        }
        uVar30 = uVar13;
        if (local_34 <= uVar13) {
          uVar30 = local_34;
        }
        uVar7 = local_34;
        if (local_34 < uVar13) {
          uVar7 = uVar13;
        }
        if ((uVar27 < uVar7) && (bVar6 = uVar30 < uVar27, uVar30 = uVar7, bVar6)) {
          uVar30 = (uVar13 - uVar27) + local_34;
        }
        lVar21 = (long)iVar20;
        iVar17 = *(int *)(param_1 + 0x1190 + lVar21 * 4) * uVar32 + uVar30;
        iVar16 = 0xff;
        if ((iVar17 < 0x100) && (iVar16 = iVar17, iVar17 < 0)) {
          iVar16 = 0;
        }
        uVar32 = (uVar19 - iVar16) * uVar32;
        iVar20 = (uVar32 >> 0x17 & 0x100) + uVar32;
        iVar16 = *(int *)(param_1 + 0x5c + lVar21 * 4);
        iVar17 = -1;
        do {
          iVar17 = iVar17 + 1;
          bVar8 = (byte)iVar17;
        } while (iVar16 << (bVar8 & 0x1f) < *(int *)(param_1 + 0x620 + lVar21 * 4));
        iVar20 = iVar20 + (uint)(0x7f < iVar20) * -0x100;
        if (iVar17 == 0) {
          uVar13 = (uint)(*(int *)(param_1 + 0xbdc + lVar21 * 4) * 2 <= -iVar16);
        }
        else {
          uVar13 = 0;
        }
        if (iVar20 < 0) {
          uVar13 = ~(iVar20 * 2) - uVar13;
        }
        else {
          uVar13 = iVar20 * 2 | uVar13;
        }
        uVar27 = (int)uVar13 >> (bVar8 & 0x1f);
        iVar16 = *(int *)(param_1 + 0x30);
        if ((int)uVar27 < 0x17) {
          iVar16 = iVar16 + ~uVar27;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = 1U >> (-(byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = 1 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar13 = uVar13 & ~(-1 << (bVar8 & 0x1f));
          iVar16 = iVar16 - iVar17;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = (int)uVar13 >> (-(byte)iVar16 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = uVar13 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = uVar13 << ((byte)iVar16 & 0x1f) | uVar27;
          }
          *(uint *)(param_1 + 0x44) = uVar27;
        }
        else {
          iVar17 = iVar16 + -0x18;
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 < 0) {
            uVar27 = 1U >> (0x18U - (char)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar17 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar17;
            uVar27 = 1 << ((byte)iVar17 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar17 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          iVar18 = uVar13 - 1;
          iVar16 = iVar17 + -8;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = iVar18 >> (8U - (char)iVar17 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = iVar18 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = iVar18 << ((byte)iVar16 & 0x1f) | uVar27;
          }
          *(uint *)(param_1 + 0x44) = uVar27;
        }
        uVar13 = (uint)bVar24;
        iVar16 = -iVar20;
        if (0 < iVar20) {
          iVar16 = iVar20;
        }
        iVar16 = iVar16 + *(int *)(param_1 + 0x620 + lVar21 * 4);
        *(int *)(param_1 + 0x620 + lVar21 * 4) = iVar16;
        iVar20 = iVar20 + *(int *)(param_1 + 0xbdc + lVar21 * 4);
        *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar20;
        uVar27 = *(uint *)(param_1 + 0x5c + lVar21 * 4);
        if (uVar27 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar21 * 4) = iVar16 / 2;
          iVar20 = iVar20 / 2;
          *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar20;
          uVar27 = (int)uVar27 / 2;
          *(uint *)(param_1 + 0x5c + lVar21 * 4) = uVar27;
        }
        iVar16 = uVar27 + 1;
        *(int *)(param_1 + 0x5c + lVar21 * 4) = iVar16;
        if ((int)~uVar27 < iVar20) {
          if (0 < iVar20) {
            iVar17 = iVar20 - iVar16;
            if (iVar17 != 0 && iVar16 <= iVar20) {
              iVar17 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar17;
            iVar16 = *(int *)(param_1 + 0x1190 + lVar21 * 4);
            if (iVar16 < 0x7f) {
              iVar16 = iVar16 + 1;
              goto LAB_100454ca4;
            }
          }
        }
        else {
          iVar17 = -uVar27;
          if ((int)~uVar27 < iVar16 + iVar20) {
            iVar17 = iVar16 + iVar20;
          }
          *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar17;
          iVar16 = *(int *)(param_1 + 0x1190 + lVar21 * 4);
          if (-0x80 < iVar16) {
            iVar16 = iVar16 + -1;
LAB_100454ca4:
            *(int *)(param_1 + 0x1190 + lVar21 * 4) = iVar16;
          }
        }
        uVar32 = (uint)bVar26;
        uVar27 = uVar32;
        if (local_3c <= uVar32) {
          uVar27 = local_3c;
        }
        uVar30 = local_3c;
        if (local_3c < uVar32) {
          uVar30 = uVar32;
        }
        if ((uVar13 < uVar30) && (bVar6 = uVar27 < uVar13, uVar27 = uVar30, bVar6)) {
          uVar27 = (uVar32 - uVar13) + local_3c;
        }
        lVar21 = (long)iVar10;
        iVar16 = *(int *)(param_1 + 0x1190 + lVar21 * 4) * uVar25 + uVar27;
        iVar10 = 0xff;
        if ((iVar16 < 0x100) && (iVar10 = iVar16, iVar16 < 0)) {
          iVar10 = 0;
        }
        uVar25 = (uVar28 - iVar10) * uVar25;
        iVar17 = (uVar25 >> 0x17 & 0x100) + uVar25;
        iVar10 = *(int *)(param_1 + 0x5c + lVar21 * 4);
        iVar16 = -1;
        do {
          iVar16 = iVar16 + 1;
          bVar8 = (byte)iVar16;
        } while (iVar10 << (bVar8 & 0x1f) < *(int *)(param_1 + 0x620 + lVar21 * 4));
        iVar17 = iVar17 + (uint)(0x7f < iVar17) * -0x100;
        if (iVar16 == 0) {
          uVar13 = (uint)(*(int *)(param_1 + 0xbdc + lVar21 * 4) * 2 <= -iVar10);
        }
        else {
          uVar13 = 0;
        }
        if (iVar17 < 0) {
          uVar13 = ~(iVar17 * 2) - uVar13;
        }
        else {
          uVar13 = iVar17 * 2 | uVar13;
        }
        uVar27 = (int)uVar13 >> (bVar8 & 0x1f);
        iVar10 = *(int *)(param_1 + 0x30);
        if ((int)uVar27 < 0x17) {
          iVar10 = iVar10 + ~uVar27;
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar27 = 1U >> (-(byte)iVar10 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar10 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar10;
            uVar27 = 1 << ((byte)iVar10 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar10 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar13 = uVar13 & ~(-1 << (bVar8 & 0x1f));
          iVar10 = iVar10 - iVar16;
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar27 = (int)uVar13 >> (-(byte)iVar10 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
LAB_100454ece:
            iVar10 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar10;
            uVar27 = uVar13 << ((byte)iVar10 & 0x1f);
          }
          else {
            uVar27 = uVar13 << ((byte)iVar10 & 0x1f) | uVar27;
          }
        }
        else {
          iVar16 = iVar10 + -0x18;
          *(int *)(param_1 + 0x30) = iVar16;
          if (iVar16 < 0) {
            uVar27 = 1U >> (0x18U - (char)iVar10 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            iVar16 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar16;
            uVar27 = 1 << ((byte)iVar16 & 0x1f);
          }
          else {
            uVar27 = 1 << ((byte)iVar16 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar27;
          uVar13 = uVar13 - 1;
          iVar10 = iVar16 + -8;
          *(int *)(param_1 + 0x30) = iVar10;
          if (iVar10 < 0) {
            uVar27 = (int)uVar13 >> (8U - (char)iVar16 & 0x1f) | uVar27;
            *(uint *)(param_1 + 0x44) = uVar27;
            puVar5 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar5 + 1;
            *puVar5 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18;
            goto LAB_100454ece;
          }
          uVar27 = uVar13 << ((byte)iVar10 & 0x1f) | uVar27;
        }
        *(uint *)(param_1 + 0x44) = uVar27;
        iVar10 = -iVar17;
        if (0 < iVar17) {
          iVar10 = iVar17;
        }
        iVar10 = iVar10 + *(int *)(param_1 + 0x620 + lVar21 * 4);
        *(int *)(param_1 + 0x620 + lVar21 * 4) = iVar10;
        iVar17 = iVar17 + *(int *)(param_1 + 0xbdc + lVar21 * 4);
        *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar17;
        uVar13 = *(uint *)(param_1 + 0x5c + lVar21 * 4);
        if (uVar13 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar21 * 4) = iVar10 / 2;
          iVar17 = iVar17 / 2;
          *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar17;
          uVar13 = (int)uVar13 / 2;
          *(uint *)(param_1 + 0x5c + lVar21 * 4) = uVar13;
        }
        iVar10 = uVar13 + 1;
        *(int *)(param_1 + 0x5c + lVar21 * 4) = iVar10;
        if ((int)~uVar13 < iVar17) {
          if (0 < iVar17) {
            iVar16 = iVar17 - iVar10;
            if (iVar16 != 0 && iVar10 <= iVar17) {
              iVar16 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar16;
            iVar10 = *(int *)(param_1 + 0x1190 + lVar21 * 4);
            if (iVar10 < 0x7f) {
              iVar10 = iVar10 + 1;
              goto LAB_100454fa0;
            }
          }
        }
        else {
          iVar16 = -uVar13;
          if ((int)~uVar13 < iVar10 + iVar17) {
            iVar16 = iVar10 + iVar17;
          }
          *(int *)(param_1 + 0xbdc + lVar21 * 4) = iVar16;
          iVar10 = *(int *)(param_1 + 0x1190 + lVar21 * 4);
          if (-0x80 < iVar10) {
            iVar10 = iVar10 + -1;
LAB_100454fa0:
            *(int *)(param_1 + 0x1190 + lVar21 * 4) = iVar10;
          }
        }
      }
      uVar15 = (ulong)uVar23;
      bVar8 = param_2[uVar15 * 4];
      bVar12 = param_2[uVar15 * 4 + 1];
      bVar24 = param_2[uVar15 * 4 + 2];
      bVar31 = (byte)uVar29;
      param_2[uVar15 * 4] = bVar31;
      bVar22 = (byte)uVar19;
      param_2[uVar15 * 4 + 1] = bVar22;
      bVar26 = (byte)uVar28;
      param_2[uVar15 * 4 + 2] = bVar26;
      uVar15 = (ulong)(uVar23 + 1);
      if (param_4 < uVar23 + 1) goto LAB_1004556f8;
      bVar31 = param_2[uVar15 * 4];
      bVar22 = param_2[uVar15 * 4 + 1];
      bVar26 = param_2[uVar15 * 4 + 2];
      uVar13 = uVar29;
      local_3c = uVar28;
      local_34 = uVar19;
    } while( true );
  }
  uVar15 = 1;
LAB_1004556f8:
  param_2[uVar15 * 4] = bVar31;
  param_2[uVar15 * 4 + 1] = bVar22;
  param_2[uVar15 * 4 + 2] = bVar26;
  return;
}

