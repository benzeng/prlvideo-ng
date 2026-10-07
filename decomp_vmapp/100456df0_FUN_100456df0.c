
void FUN_100456df0(long param_1,byte *param_2,long param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  byte bVar34;
  uint uVar35;
  byte bVar36;
  uint uVar37;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar6 = *(uint *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  bVar11 = *param_2;
  bVar22 = param_2[1];
  bVar34 = param_2[2];
  bVar16 = param_2[4];
  bVar24 = param_2[5];
  bVar36 = param_2[6];
  *param_2 = bVar16;
  param_2[1] = bVar24;
  param_2[2] = bVar36;
  if (param_4 != 0) {
    local_38 = (uint)bVar16;
    local_34 = (uint)bVar24;
    iVar17 = (int)((uVar6 + 1) - ((int)(uVar6 + 1) >> 0x1f)) >> 1;
    iVar18 = 0x20 - iVar7;
    iVar19 = 0x1f - iVar7;
    iVar10 = iVar5 * 2 + 1;
    iVar20 = -iVar5;
    uVar33 = 1;
    local_44 = (uint)bVar36;
    do {
      uVar37 = (uint)uVar33;
      uVar15 = (ulong)(uVar37 + 1);
      local_3c = (uint)*(byte *)(param_3 + -4 + uVar33 * 4);
      uVar28 = (uint)*(byte *)(param_3 + -3 + uVar33 * 4);
      uVar29 = (uint)*(byte *)(param_3 + -2 + uVar33 * 4);
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar16) + (ulong)param_2[uVar15 * 4]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar16 + 0x1844) - (ulong)bVar11));
      iVar12 = (int)*(char *)(param_1 + (((ulong)bVar11 + 0x1844) - (long)(int)local_38));
      iVar25 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar25 = (int)cVar2, cVar2 == '\0')) {
        iVar25 = iVar12;
      }
      uVar26 = iVar25 >> 0x1f | 1;
      cVar3 = *(char *)(param_1 + (0x1844 - (ulong)bVar24) + (ulong)param_2[uVar15 * 4 + 1]);
      cVar4 = *(char *)(param_1 + (((ulong)bVar24 + 0x1844) - (ulong)bVar22));
      iVar13 = (int)*(char *)(param_1 + (((ulong)bVar22 + 0x1844) - (long)(int)local_34));
      iVar25 = (int)cVar3;
      if ((cVar3 == '\0') && (iVar25 = (int)cVar4, cVar4 == '\0')) {
        iVar25 = iVar13;
      }
      iVar23 = (cVar2 * 9 + cVar1 * 0x51 + iVar12) * uVar26;
      uVar30 = iVar25 >> 0x1f | 1;
      iVar13 = (cVar4 * 9 + cVar3 * 0x51 + iVar13) * uVar30;
      cVar1 = *(char *)(param_1 + (0x1844 - (ulong)bVar36) + (ulong)param_2[uVar15 * 4 + 2]);
      cVar2 = *(char *)(param_1 + (((ulong)bVar36 + 0x1844) - (ulong)bVar34));
      iVar12 = (int)*(char *)(param_1 + (((ulong)bVar34 + 0x1844) - (long)(int)local_44));
      iVar25 = (int)cVar1;
      if ((cVar1 == '\0') && (iVar25 = (int)cVar2, cVar2 == '\0')) {
        iVar25 = iVar12;
      }
      uVar35 = iVar25 >> 0x1f | 1;
      iVar25 = (cVar2 * 9 + cVar1 * 0x51 + iVar12) * uVar35;
      if ((iVar13 == 0 && iVar23 == 0) && iVar25 == 0) {
        iVar12 = local_3c - local_38;
        iVar25 = -iVar12;
        if (0 < iVar12) {
          iVar25 = iVar12;
        }
        iVar12 = 0;
        uVar26 = uVar37;
        if (iVar25 <= iVar5) {
          iVar25 = 0;
          do {
            uVar15 = (ulong)(uVar37 + iVar25);
            iVar12 = uVar28 - local_34;
            iVar13 = -iVar12;
            if (0 < iVar12) {
              iVar13 = iVar12;
            }
            uVar26 = uVar37 + iVar25;
            iVar12 = iVar25;
            if (iVar5 < iVar13) break;
            iVar23 = uVar29 - local_44;
            iVar13 = -iVar23;
            if (0 < iVar23) {
              iVar13 = iVar23;
            }
            uVar26 = (uint)uVar33;
            if (iVar5 < iVar13) break;
            iVar12 = iVar25 + 1;
            param_2[uVar15 * 4] = (byte)local_38;
            param_2[uVar15 * 4 + 1] = (byte)local_34;
            param_2[uVar15 * 4 + 2] = (byte)local_44;
            uVar29 = uVar37 + 1 + iVar25;
            if (param_4 < uVar29) {
              FUN_10045aea0(param_1,iVar12,1);
              uVar33 = (ulong)uVar29;
              param_2[uVar33 * 4] = param_2[uVar15 * 4];
              param_2[uVar33 * 4 + 1] = param_2[uVar15 * 4 + 1];
              param_2[uVar33 * 4 + 2] = param_2[uVar15 * 4 + 2];
              return;
            }
            uVar26 = (uint)uVar33 + 1;
            uVar33 = (ulong)uVar26;
            uVar15 = (ulong)uVar29;
            local_3c = (uint)*(byte *)(param_3 + -4 + uVar15 * 4);
            uVar28 = (uint)*(byte *)(param_3 + -3 + uVar15 * 4);
            uVar29 = (uint)*(byte *)(param_3 + -2 + uVar15 * 4);
            iVar25 = local_3c - local_38;
            iVar13 = -iVar25;
            if (0 < iVar25) {
              iVar13 = iVar25;
            }
            iVar25 = iVar12;
          } while (iVar13 <= iVar5);
        }
        uVar33 = (ulong)uVar26;
        FUN_10045aea0(param_1,iVar12,0);
        bVar11 = param_2[uVar33 * 4];
        iVar25 = 1;
        if (local_38 != bVar11 && (int)(uint)bVar11 <= (int)local_38) {
          iVar25 = -1;
        }
        iVar12 = (local_3c - bVar11) * iVar25;
        bVar22 = param_2[uVar33 * 4 + 1];
        uVar37 = (uint)param_2[uVar33 * 4 + 2];
        local_38 = local_3c;
        if (iVar5 != 0) {
          iVar13 = iVar5;
          if (iVar12 < 0) {
            iVar13 = iVar20;
          }
          iVar12 = (iVar13 + iVar12) / iVar10;
          uVar30 = iVar25 * iVar10 * iVar12 + (uint)bVar11;
          local_38 = 0xff;
          if (((int)uVar30 < 0x100) && (local_38 = uVar30, (int)uVar30 < 0)) {
            local_38 = 0;
          }
        }
        iVar12 = (iVar12 >> 0x1f & uVar6) + iVar12;
        iVar25 = *(int *)(param_1 + 0x610);
        iVar13 = -1;
        do {
          iVar13 = iVar13 + 1;
          bVar11 = (byte)iVar13;
        } while (iVar25 << (bVar11 & 0x1f) < *(int *)(param_1 + 0xbd4));
        uVar30 = uVar6;
        if (iVar12 < iVar17) {
          uVar30 = 0;
        }
        iVar23 = iVar12 - uVar30;
        if ((((iVar23 == 0 || iVar12 < (int)uVar30) || (iVar13 != 0)) ||
            (uVar30 = 1, iVar25 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar23 || (uVar30 = 1, *(int *)(param_1 + 0x618) * 2 < iVar25)))) {
          uVar30 = (uint)(iVar13 != 0 && iVar23 < 0);
        }
        iVar25 = -iVar23;
        if (0 < iVar23) {
          iVar25 = iVar23;
        }
        uVar30 = iVar25 * 2 - uVar30;
        uVar35 = (int)uVar30 >> (bVar11 & 0x1f);
        if ((int)uVar35 <
            (iVar19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) + -1) {
          iVar25 = *(int *)(param_1 + 0x30) + ~uVar35;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = 1U >> (-(byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = 1 << ((byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar35;
          uVar32 = ~(-1 << (bVar11 & 0x1f)) & uVar30;
          iVar25 = iVar25 - iVar13;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = (int)uVar32 >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
LAB_100457ea9:
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = uVar32 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = uVar32 << ((byte)iVar25 & 0x1f) | uVar35;
          }
        }
        else {
          iVar25 = *(int *)(param_1 + 0x30) -
                   (iVar19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4));
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = 1U >> (-(byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = 1 << ((byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar35;
          uVar32 = uVar30 - 1;
          iVar25 = iVar25 - iVar7;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = (int)uVar32 >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            goto LAB_100457ea9;
          }
          uVar35 = uVar32 << ((byte)iVar25 & 0x1f) | uVar35;
        }
        *(uint *)(param_1 + 0x44) = uVar35;
        if (iVar23 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar13 = ((int)((uVar30 + 1) - ((int)(uVar30 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar13;
        iVar12 = *(int *)(param_1 + 0x610);
        if (iVar12 == *(int *)(param_1 + 0x24)) {
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0xbd4) = iVar13;
          iVar12 = iVar12 / 2;
          *(int *)(param_1 + 0x610) = iVar12;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        iVar12 = iVar12 + 1;
        iVar23 = 1;
        if (local_34 != bVar22 && (int)(uint)bVar22 <= (int)local_34) {
          iVar23 = -1;
        }
        iVar14 = (uVar28 - bVar22) * iVar23;
        *(int *)(param_1 + 0x610) = iVar12;
        local_34 = uVar28;
        if (iVar5 != 0) {
          iVar21 = iVar5;
          if (iVar14 < 0) {
            iVar21 = iVar20;
          }
          iVar14 = (iVar21 + iVar14) / iVar10;
          local_34 = iVar23 * iVar10 * iVar14 + (uint)bVar22;
          if ((int)local_34 < 0x100) {
            if ((int)local_34 < 0) {
              local_34 = 0;
            }
          }
          else {
            local_34 = 0xff;
          }
        }
        iVar14 = (iVar14 >> 0x1f & uVar6) + iVar14;
        iVar23 = -1;
        do {
          iVar23 = iVar23 + 1;
          bVar11 = (byte)iVar23;
        } while (iVar12 << (bVar11 & 0x1f) < iVar13);
        uVar28 = uVar6;
        if (iVar14 < iVar17) {
          uVar28 = 0;
        }
        iVar13 = iVar14 - uVar28;
        if ((((iVar13 == 0 || iVar14 < (int)uVar28) || (iVar23 != 0)) ||
            (uVar28 = 1, iVar12 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar13 || (uVar28 = 1, *(int *)(param_1 + 0x618) * 2 < iVar12)))) {
          uVar28 = (uint)(iVar23 != 0 && iVar13 < 0);
        }
        iVar12 = -iVar13;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        uVar28 = iVar12 * 2 - uVar28;
        uVar30 = (int)uVar28 >> (bVar11 & 0x1f);
        if ((int)uVar30 <
            (iVar19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) + -1) {
          iVar25 = iVar25 + ~uVar30;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = 1U >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = 1 << ((byte)iVar25 & 0x1f) | uVar35;
          }
          *(uint *)(param_1 + 0x44) = uVar35;
          uVar30 = ~(-1 << (bVar11 & 0x1f)) & uVar28;
          iVar25 = iVar25 - iVar23;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = (int)uVar30 >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
LAB_100458199:
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = uVar30 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = uVar30 << ((byte)iVar25 & 0x1f) | uVar35;
          }
        }
        else {
          iVar25 = iVar25 - (iVar19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4))
          ;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = 1U >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = 1 << ((byte)iVar25 & 0x1f) | uVar35;
          }
          *(uint *)(param_1 + 0x44) = uVar35;
          uVar30 = uVar28 - 1;
          iVar25 = iVar25 - iVar7;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = (int)uVar30 >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            goto LAB_100458199;
          }
          uVar35 = uVar30 << ((byte)iVar25 & 0x1f) | uVar35;
        }
        *(uint *)(param_1 + 0x44) = uVar35;
        if (iVar13 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar13 = ((int)((uVar28 + 1) - ((int)(uVar28 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar13;
        iVar12 = *(int *)(param_1 + 0x610);
        if (iVar12 == *(int *)(param_1 + 0x24)) {
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0xbd4) = iVar13;
          iVar12 = iVar12 / 2;
          *(int *)(param_1 + 0x610) = iVar12;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        iVar12 = iVar12 + 1;
        iVar23 = 1;
        if ((int)uVar37 < (int)local_44) {
          iVar23 = -1;
        }
        iVar14 = (uVar29 - uVar37) * iVar23;
        *(int *)(param_1 + 0x610) = iVar12;
        if (iVar5 != 0) {
          iVar21 = iVar5;
          if (iVar14 < 0) {
            iVar21 = iVar20;
          }
          iVar14 = (iVar21 + iVar14) / iVar10;
          uVar29 = iVar23 * iVar10 * iVar14 + uVar37;
          if ((int)uVar29 < 0x100) {
            if ((int)uVar29 < 0) {
              uVar29 = 0;
            }
          }
          else {
            uVar29 = 0xff;
          }
        }
        iVar14 = (iVar14 >> 0x1f & uVar6) + iVar14;
        iVar23 = -1;
        do {
          iVar23 = iVar23 + 1;
          bVar11 = (byte)iVar23;
        } while (iVar12 << (bVar11 & 0x1f) < iVar13);
        uVar37 = uVar6;
        if (iVar14 < iVar17) {
          uVar37 = 0;
        }
        iVar13 = iVar14 - uVar37;
        if ((((iVar13 == 0 || iVar14 < (int)uVar37) || (iVar23 != 0)) ||
            (uVar37 = 1, iVar12 <= *(int *)(param_1 + 0x618) * 2)) &&
           ((-1 < iVar13 || (uVar37 = 1, *(int *)(param_1 + 0x618) * 2 < iVar12)))) {
          uVar37 = (uint)(iVar23 != 0 && iVar13 < 0);
        }
        iVar12 = -iVar13;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        uVar37 = iVar12 * 2 - uVar37;
        uVar28 = (int)uVar37 >> (bVar11 & 0x1f);
        if ((int)uVar28 <
            (iVar19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4)) + -1) {
          iVar25 = iVar25 + ~uVar28;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = 1U >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = 1 << ((byte)iVar25 & 0x1f) | uVar35;
          }
          *(uint *)(param_1 + 0x44) = uVar35;
          uVar28 = ~(-1 << (bVar11 & 0x1f)) & uVar37;
          iVar25 = iVar25 - iVar23;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = (int)uVar28 >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            *(uint *)(param_1 + 0x44) = uVar28 << ((byte)iVar25 & 0x1f);
          }
          else {
            *(uint *)(param_1 + 0x44) = uVar28 << ((byte)iVar25 & 0x1f) | uVar35;
          }
        }
        else {
          iVar25 = iVar25 - (iVar19 - *(int *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4))
          ;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = 1U >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = 1 << ((byte)iVar25 & 0x1f) | uVar35;
          }
          *(uint *)(param_1 + 0x44) = uVar35;
          iVar12 = uVar37 - 1;
          iVar25 = iVar25 - iVar7;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar35 = iVar12 >> (-(byte)iVar25 & 0x1f) | uVar35;
            *(uint *)(param_1 + 0x44) = uVar35;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar35 = iVar12 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar35 = iVar12 << ((byte)iVar25 & 0x1f) | uVar35;
          }
          *(uint *)(param_1 + 0x44) = uVar35;
        }
        if (iVar13 < 0) {
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
        }
        iVar12 = ((int)((uVar37 + 1) - ((int)(uVar37 + 1) >> 0x1f)) >> 1) +
                 *(int *)(param_1 + 0xbd4);
        *(int *)(param_1 + 0xbd4) = iVar12;
        iVar25 = *(int *)(param_1 + 0x610);
        if (iVar25 == *(int *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0xbd4) = iVar12 / 2;
          iVar25 = iVar25 / 2;
          *(int *)(param_1 + 0x610) = iVar25;
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) / 2;
        }
        *(int *)(param_1 + 0x610) = iVar25 + 1;
        if (0 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
        uVar33 = (ulong)uVar26;
      }
      else {
        uVar37 = (uint)bVar16;
        if ((int)local_38 <= (int)(uint)bVar16) {
          uVar37 = local_38;
        }
        uVar32 = local_38;
        if ((int)local_38 < (int)(uint)bVar16) {
          uVar32 = (uint)bVar16;
        }
        uVar27 = (uint)bVar11;
        if (((int)uVar27 < (int)uVar32) &&
           (bVar9 = (int)uVar37 < (int)uVar27, uVar37 = uVar32, bVar9)) {
          uVar37 = (bVar16 - uVar27) + local_38;
        }
        lVar31 = (long)iVar23;
        iVar23 = *(int *)(param_1 + 0x1190 + lVar31 * 4) * uVar26 + uVar37;
        iVar12 = 0xff;
        if ((iVar23 < 0x100) && (iVar12 = iVar23, iVar23 < 0)) {
          iVar12 = 0;
        }
        iVar23 = (local_3c - iVar12) * uVar26;
        local_38 = local_3c;
        if (iVar5 != 0) {
          iVar14 = iVar5;
          if (iVar23 < 0) {
            iVar14 = iVar20;
          }
          iVar23 = (iVar14 + iVar23) / iVar10;
          local_38 = uVar26 * iVar10 * iVar23 + iVar12;
          if ((int)local_38 < 0x100) {
            if ((int)local_38 < 0) {
              local_38 = 0;
            }
          }
          else {
            local_38 = 0xff;
          }
        }
        iVar23 = (iVar23 >> 0x1f & uVar6) + iVar23;
        iVar12 = *(int *)(param_1 + 0x5c + lVar31 * 4);
        iVar14 = -1;
        do {
          iVar14 = iVar14 + 1;
          bVar11 = (byte)iVar14;
        } while (iVar12 << (bVar11 & 0x1f) < *(int *)(param_1 + 0x620 + lVar31 * 4));
        uVar26 = 0;
        uVar37 = uVar6;
        if (iVar23 < iVar17) {
          uVar37 = uVar26;
        }
        iVar23 = iVar23 - uVar37;
        if (iVar14 == 0 && iVar5 == 0) {
          uVar26 = (uint)(*(int *)(param_1 + 0xbdc + lVar31 * 4) * 2 <= -iVar12);
        }
        if (iVar23 < 0) {
          uVar26 = ~(iVar23 * 2) - uVar26;
        }
        else {
          uVar26 = iVar23 * 2 | uVar26;
        }
        uVar37 = (int)uVar26 >> (bVar11 & 0x1f);
        if ((int)uVar37 < iVar19) {
          iVar12 = *(int *)(param_1 + 0x30) + ~uVar37;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar37 = 1U >> (-(byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar37 = 1 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar37 = 1 << ((byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar37;
          uVar26 = uVar26 & ~(-1 << (bVar11 & 0x1f));
          iVar12 = iVar12 - iVar14;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar37 = (int)uVar26 >> (-(byte)iVar12 & 0x1f) | uVar37;
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar37 = uVar26 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar37 = uVar26 << ((byte)iVar12 & 0x1f) | uVar37;
          }
          *(uint *)(param_1 + 0x44) = uVar37;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x30) - iVar18;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar37 = 1U >> (-(byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar37 = 1 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar37 = 1 << ((byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar37;
          iVar14 = uVar26 - 1;
          iVar12 = iVar12 - iVar7;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar37 = iVar14 >> (-(byte)iVar12 & 0x1f) | uVar37;
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar37 = iVar14 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar37 = iVar14 << ((byte)iVar12 & 0x1f) | uVar37;
          }
          *(uint *)(param_1 + 0x44) = uVar37;
        }
        iVar12 = -iVar23;
        if (0 < iVar23) {
          iVar12 = iVar23;
        }
        iVar12 = iVar12 + *(int *)(param_1 + 0x620 + lVar31 * 4);
        *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar12;
        iVar23 = iVar23 * iVar10 + *(int *)(param_1 + 0xbdc + lVar31 * 4);
        *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
        uVar37 = *(uint *)(param_1 + 0x5c + lVar31 * 4);
        if (uVar37 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar12 / 2;
          iVar23 = iVar23 / 2;
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
          uVar37 = (int)uVar37 / 2;
          *(uint *)(param_1 + 0x5c + lVar31 * 4) = uVar37;
        }
        iVar12 = uVar37 + 1;
        *(int *)(param_1 + 0x5c + lVar31 * 4) = iVar12;
        if ((int)~uVar37 < iVar23) {
          if (0 < iVar23) {
            iVar14 = iVar23 - iVar12;
            if (iVar14 != 0 && iVar12 <= iVar23) {
              iVar14 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar14;
            iVar12 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
            if (iVar12 < 0x7f) {
              iVar12 = iVar12 + 1;
              goto LAB_1004574f0;
            }
          }
        }
        else {
          iVar14 = -uVar37;
          if ((int)~uVar37 < iVar12 + iVar23) {
            iVar14 = iVar12 + iVar23;
          }
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar14;
          iVar12 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
          if (-0x80 < iVar12) {
            iVar12 = iVar12 + -1;
LAB_1004574f0:
            *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar12;
          }
        }
        uVar26 = (uint)bVar24;
        uVar37 = (uint)bVar24;
        if ((int)local_34 <= (int)uVar26) {
          uVar37 = local_34;
        }
        uVar32 = local_34;
        if ((int)local_34 < (int)uVar26) {
          uVar32 = uVar26;
        }
        uVar27 = (uint)bVar22;
        if (((int)uVar27 < (int)uVar32) &&
           (bVar9 = (int)uVar37 < (int)uVar27, uVar37 = uVar32, bVar9)) {
          uVar37 = (uVar26 - uVar27) + local_34;
        }
        lVar31 = (long)iVar13;
        iVar13 = *(int *)(param_1 + 0x1190 + lVar31 * 4) * uVar30 + uVar37;
        iVar12 = 0xff;
        if ((iVar13 < 0x100) && (iVar12 = iVar13, iVar13 < 0)) {
          iVar12 = 0;
        }
        iVar13 = (uVar28 - iVar12) * uVar30;
        local_34 = uVar28;
        if (iVar5 != 0) {
          iVar23 = iVar5;
          if (iVar13 < 0) {
            iVar23 = iVar20;
          }
          iVar13 = (iVar23 + iVar13) / iVar10;
          local_34 = uVar30 * iVar10 * iVar13 + iVar12;
          if ((int)local_34 < 0x100) {
            if ((int)local_34 < 0) {
              local_34 = 0;
            }
          }
          else {
            local_34 = 0xff;
          }
        }
        uVar37 = (uint)bVar34;
        iVar13 = (iVar13 >> 0x1f & uVar6) + iVar13;
        iVar12 = *(int *)(param_1 + 0x5c + lVar31 * 4);
        iVar23 = -1;
        do {
          iVar23 = iVar23 + 1;
          bVar11 = (byte)iVar23;
        } while (iVar12 << (bVar11 & 0x1f) < *(int *)(param_1 + 0x620 + lVar31 * 4));
        uVar26 = 0;
        uVar28 = uVar6;
        if (iVar13 < iVar17) {
          uVar28 = uVar26;
        }
        iVar13 = iVar13 - uVar28;
        if (iVar23 == 0 && iVar5 == 0) {
          uVar26 = (uint)(*(int *)(param_1 + 0xbdc + lVar31 * 4) * 2 <= -iVar12);
        }
        if (iVar13 < 0) {
          uVar26 = ~(iVar13 * 2) - uVar26;
        }
        else {
          uVar26 = iVar13 * 2 | uVar26;
        }
        uVar28 = (int)uVar26 >> (bVar11 & 0x1f);
        if ((int)uVar28 < iVar19) {
          iVar12 = *(int *)(param_1 + 0x30) + ~uVar28;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar28 = 1U >> (-(byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar28;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                      uVar28 << 0x18;
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar28 = 1 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar28 = 1 << ((byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar28;
          uVar26 = uVar26 & ~(-1 << (bVar11 & 0x1f));
          iVar12 = iVar12 - iVar23;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar28 = (int)uVar26 >> (-(byte)iVar12 & 0x1f) | uVar28;
            *(uint *)(param_1 + 0x44) = uVar28;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                      uVar28 << 0x18;
LAB_10045776c:
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar28 = uVar26 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar28 = uVar26 << ((byte)iVar12 & 0x1f) | uVar28;
          }
        }
        else {
          iVar12 = *(int *)(param_1 + 0x30) - iVar18;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar28 = 1U >> (-(byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar28;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                      uVar28 << 0x18;
            iVar12 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar12;
            uVar28 = 1 << ((byte)iVar12 & 0x1f);
          }
          else {
            uVar28 = 1 << ((byte)iVar12 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar28;
          uVar26 = uVar26 - 1;
          iVar12 = iVar12 - iVar7;
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 < 0) {
            uVar28 = (int)uVar26 >> (-(byte)iVar12 & 0x1f) | uVar28;
            *(uint *)(param_1 + 0x44) = uVar28;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                      uVar28 << 0x18;
            goto LAB_10045776c;
          }
          uVar28 = uVar26 << ((byte)iVar12 & 0x1f) | uVar28;
        }
        *(uint *)(param_1 + 0x44) = uVar28;
        iVar12 = -iVar13;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        iVar12 = iVar12 + *(int *)(param_1 + 0x620 + lVar31 * 4);
        *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar12;
        iVar13 = iVar13 * iVar10 + *(int *)(param_1 + 0xbdc + lVar31 * 4);
        *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar13;
        uVar28 = *(uint *)(param_1 + 0x5c + lVar31 * 4);
        if (uVar28 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar12 / 2;
          iVar13 = iVar13 / 2;
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar13;
          uVar28 = (int)uVar28 / 2;
          *(uint *)(param_1 + 0x5c + lVar31 * 4) = uVar28;
        }
        iVar12 = uVar28 + 1;
        *(int *)(param_1 + 0x5c + lVar31 * 4) = iVar12;
        if ((int)~uVar28 < iVar13) {
          if (0 < iVar13) {
            iVar23 = iVar13 - iVar12;
            if (iVar23 != 0 && iVar12 <= iVar13) {
              iVar23 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
            iVar12 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
            if (iVar12 < 0x7f) {
              iVar12 = iVar12 + 1;
              goto LAB_100457850;
            }
          }
        }
        else {
          iVar23 = -uVar28;
          if ((int)~uVar28 < iVar12 + iVar13) {
            iVar23 = iVar12 + iVar13;
          }
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar23;
          iVar12 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
          if (-0x80 < iVar12) {
            iVar12 = iVar12 + -1;
LAB_100457850:
            *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar12;
          }
        }
        uVar26 = (uint)bVar36;
        uVar28 = (uint)bVar36;
        if ((int)local_44 <= (int)uVar26) {
          uVar28 = local_44;
        }
        uVar30 = local_44;
        if ((int)local_44 < (int)uVar26) {
          uVar30 = uVar26;
        }
        if (((int)uVar37 < (int)uVar30) &&
           (bVar9 = (int)uVar28 < (int)uVar37, uVar28 = uVar30, bVar9)) {
          uVar28 = (uVar26 - uVar37) + local_44;
        }
        lVar31 = (long)iVar25;
        iVar12 = *(int *)(param_1 + 0x1190 + lVar31 * 4) * uVar35 + uVar28;
        iVar25 = 0xff;
        if ((iVar12 < 0x100) && (iVar25 = iVar12, iVar12 < 0)) {
          iVar25 = 0;
        }
        iVar12 = (uVar29 - iVar25) * uVar35;
        if (iVar5 != 0) {
          iVar13 = iVar5;
          if (iVar12 < 0) {
            iVar13 = iVar20;
          }
          iVar12 = (iVar13 + iVar12) / iVar10;
          uVar37 = uVar35 * iVar10 * iVar12 + iVar25;
          uVar29 = 0xff;
          if (((int)uVar37 < 0x100) && (uVar29 = uVar37, (int)uVar37 < 0)) {
            uVar29 = 0;
          }
        }
        iVar12 = (iVar12 >> 0x1f & uVar6) + iVar12;
        iVar25 = *(int *)(param_1 + 0x5c + lVar31 * 4);
        iVar13 = -1;
        do {
          iVar13 = iVar13 + 1;
          bVar11 = (byte)iVar13;
        } while (iVar25 << (bVar11 & 0x1f) < *(int *)(param_1 + 0x620 + lVar31 * 4));
        uVar28 = 0;
        uVar37 = uVar6;
        if (iVar12 < iVar17) {
          uVar37 = uVar28;
        }
        iVar12 = iVar12 - uVar37;
        if (iVar13 == 0 && iVar5 == 0) {
          uVar28 = (uint)(*(int *)(param_1 + 0xbdc + lVar31 * 4) * 2 <= -iVar25);
        }
        if (iVar12 < 0) {
          uVar28 = ~(iVar12 * 2) - uVar28;
        }
        else {
          uVar28 = iVar12 * 2 | uVar28;
        }
        uVar37 = (int)uVar28 >> (bVar11 & 0x1f);
        if ((int)uVar37 < iVar19) {
          iVar25 = *(int *)(param_1 + 0x30) + ~uVar37;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar37 = 1U >> (-(byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar37 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar37 = 1 << ((byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar37;
          uVar28 = uVar28 & ~(-1 << (bVar11 & 0x1f));
          iVar25 = iVar25 - iVar13;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar37 = (int)uVar28 >> (-(byte)iVar25 & 0x1f) | uVar37;
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar37 = uVar28 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar37 = uVar28 << ((byte)iVar25 & 0x1f) | uVar37;
          }
          *(uint *)(param_1 + 0x44) = uVar37;
        }
        else {
          iVar25 = *(int *)(param_1 + 0x30) - iVar18;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar37 = 1U >> (-(byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar37 = 1 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar37 = 1 << ((byte)iVar25 & 0x1f) | *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar37;
          iVar13 = uVar28 - 1;
          iVar25 = iVar25 - iVar7;
          *(int *)(param_1 + 0x30) = iVar25;
          if (iVar25 < 0) {
            uVar37 = iVar13 >> (-(byte)iVar25 & 0x1f) | uVar37;
            *(uint *)(param_1 + 0x44) = uVar37;
            puVar8 = *(uint **)(param_1 + 0x28);
            *(uint **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                      uVar37 << 0x18;
            iVar25 = *(int *)(param_1 + 0x30) + 0x20;
            *(int *)(param_1 + 0x30) = iVar25;
            uVar37 = iVar13 << ((byte)iVar25 & 0x1f);
          }
          else {
            uVar37 = iVar13 << ((byte)iVar25 & 0x1f) | uVar37;
          }
          *(uint *)(param_1 + 0x44) = uVar37;
        }
        iVar25 = -iVar12;
        if (0 < iVar12) {
          iVar25 = iVar12;
        }
        iVar25 = iVar25 + *(int *)(param_1 + 0x620 + lVar31 * 4);
        *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar25;
        iVar12 = iVar12 * iVar10 + *(int *)(param_1 + 0xbdc + lVar31 * 4);
        *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar12;
        uVar37 = *(uint *)(param_1 + 0x5c + lVar31 * 4);
        if (uVar37 == *(uint *)(param_1 + 0x24)) {
          *(int *)(param_1 + 0x620 + lVar31 * 4) = iVar25 / 2;
          iVar12 = iVar12 / 2;
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar12;
          uVar37 = (int)uVar37 / 2;
          *(uint *)(param_1 + 0x5c + lVar31 * 4) = uVar37;
        }
        iVar25 = uVar37 + 1;
        *(int *)(param_1 + 0x5c + lVar31 * 4) = iVar25;
        if ((int)~uVar37 < iVar12) {
          if (0 < iVar12) {
            iVar13 = iVar12 - iVar25;
            if (iVar13 != 0 && iVar25 <= iVar12) {
              iVar13 = 0;
            }
            *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar13;
            iVar25 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
            if (iVar25 < 0x7f) {
              iVar25 = iVar25 + 1;
              goto LAB_100457bc8;
            }
          }
        }
        else {
          iVar13 = -uVar37;
          if ((int)~uVar37 < iVar25 + iVar12) {
            iVar13 = iVar25 + iVar12;
          }
          *(int *)(param_1 + 0xbdc + lVar31 * 4) = iVar13;
          iVar25 = *(int *)(param_1 + 0x1190 + lVar31 * 4);
          if (-0x80 < iVar25) {
            iVar25 = iVar25 + -1;
LAB_100457bc8:
            *(int *)(param_1 + 0x1190 + lVar31 * 4) = iVar25;
          }
        }
      }
      bVar11 = param_2[uVar33 * 4];
      bVar22 = param_2[uVar33 * 4 + 1];
      bVar34 = param_2[uVar33 * 4 + 2];
      bVar16 = (byte)local_38;
      param_2[uVar33 * 4] = bVar16;
      bVar24 = (byte)local_34;
      param_2[uVar33 * 4 + 1] = bVar24;
      bVar36 = (byte)uVar29;
      param_2[uVar33 * 4 + 2] = bVar36;
      uVar37 = (int)uVar33 + 1;
      uVar33 = (ulong)uVar37;
      if (param_4 < uVar37) goto LAB_100458565;
      bVar16 = param_2[uVar33 * 4];
      bVar24 = param_2[uVar33 * 4 + 1];
      bVar36 = param_2[uVar33 * 4 + 2];
      local_44 = uVar29;
    } while( true );
  }
  uVar33 = 1;
LAB_100458565:
  param_2[uVar33 * 4] = bVar16;
  param_2[uVar33 * 4 + 1] = bVar24;
  param_2[uVar33 * 4 + 2] = bVar36;
  return;
}

