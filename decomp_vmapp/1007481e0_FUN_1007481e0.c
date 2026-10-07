
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1007481e0(long param_1,ulong *param_2,ulong *param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  int *piVar21;
  ulong *puVar22;
  char *pcVar23;
  int iVar24;
  ulong *puVar25;
  char *pcVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  ulong *puVar39;
  long lVar40;
  ulong *puVar41;
  ulong *puVar42;
  int *piVar43;
  size_t sVar44;
  int iVar45;
  ulong *puVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  
  uVar11 = _UNK_100b3f6cc;
  uVar14 = _UNK_100b3f6c8;
  uVar38 = _UNK_100b3f6c4;
  uVar37 = DAT_100b3f6c0;
  uVar13 = *(uint *)(param_1 + 0x4018);
  uVar20 = (ulong)uVar13;
  if (*(int *)(param_1 + 0x4004) != 0) {
    return 0;
  }
  puVar31 = *(ulong **)(param_1 + 0x4008);
  puVar46 = (ulong *)((long)puVar31 + uVar20);
  uVar12 = *(uint *)(param_1 + 0x4000);
  if ((ulong *)(ulong)uVar12 < (ulong *)0x80000001) {
    puVar15 = param_2;
    if (puVar46 < param_2) {
      puVar15 = puVar46;
    }
    if (uVar13 == 0) {
      puVar15 = param_2;
    }
    puVar28 = puVar31;
    if (puVar15 < (ulong *)(ulong)uVar12) goto LAB_100748250;
  }
  else {
LAB_100748250:
    uVar12 = uVar12 - 0x10000;
    lVar16 = 0;
    uVar13 = uVar12 ^ DAT_100b3f6c0;
    uVar47 = uVar12 ^ _UNK_100b3f6c4;
    uVar48 = uVar12 ^ _UNK_100b3f6c8;
    uVar49 = uVar12 ^ _UNK_100b3f6cc;
    do {
      puVar1 = (uint *)(param_1 + lVar16 * 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (uint *)(param_1 + 0x10 + lVar16 * 4);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (uint *)(param_1 + lVar16 * 4);
      *puVar2 = ~-(uint)((int)(*puVar1 ^ uVar37) < (int)uVar13) & *puVar1 - uVar12;
      puVar2[1] = ~-(uint)((int)(uVar3 ^ uVar38) < (int)uVar47) & uVar3 - uVar12;
      puVar2[2] = ~-(uint)((int)(uVar4 ^ uVar14) < (int)uVar48) & uVar4 - uVar12;
      puVar2[3] = ~-(uint)((int)(uVar5 ^ uVar11) < (int)uVar49) & uVar5 - uVar12;
      puVar1 = (uint *)(param_1 + 0x10 + lVar16 * 4);
      *puVar1 = ~-(uint)((int)(uVar6 ^ uVar37) < (int)uVar13) & uVar6 - uVar12;
      puVar1[1] = ~-(uint)((int)(uVar7 ^ uVar38) < (int)uVar47) & uVar7 - uVar12;
      puVar1[2] = ~-(uint)((int)(uVar8 ^ uVar14) < (int)uVar48) & uVar8 - uVar12;
      puVar1[3] = ~-(uint)((int)(uVar9 ^ uVar11) < (int)uVar49) & uVar9 - uVar12;
      lVar16 = lVar16 + 8;
    } while (lVar16 != 0x1000);
    *(undefined4 *)(param_1 + 0x4000) = 0x10000;
    uVar13 = *(uint *)(param_1 + 0x4018);
    if (0x10000 < uVar13) {
      *(undefined4 *)(param_1 + 0x4018) = 0x10000;
      uVar13 = 0x10000;
    }
    puVar28 = (ulong *)((uVar20 - uVar13) + (long)puVar31);
    *(ulong **)(param_1 + 0x4008) = puVar28;
    uVar12 = 0x10000;
  }
  uVar37 = 1;
  if (0 < (int)param_6) {
    uVar37 = param_6;
  }
  lVar16 = (long)(int)param_4;
  puVar15 = (ulong *)((long)param_2 + lVar16);
  if ((puVar15 < puVar46) && (puVar28 < puVar15)) {
    uVar13 = (int)puVar46 - (int)puVar15;
    uVar38 = 0x10000;
    if (uVar13 < 0x10001) {
      uVar38 = uVar13;
    }
    uVar13 = 0;
    if (3 < uVar38) {
      uVar13 = uVar38;
    }
    *(uint *)(param_1 + 0x4018) = uVar13;
    puVar28 = (ulong *)((long)puVar31 + (uVar20 - uVar13));
    *(ulong **)(param_1 + 0x4008) = puVar28;
  }
  uVar20 = (ulong)uVar13;
  iVar45 = (int)param_3;
  iVar24 = (int)param_2;
  if (puVar46 == param_2) {
    lVar40 = -uVar20;
    puVar46 = (ulong *)((long)param_2 + lVar16 + -0xc);
    puVar31 = (ulong *)(lVar16 + -5 + (long)param_2);
    pcVar26 = (char *)((long)(int)param_5 + (long)param_3);
    iVar32 = 0;
    if (uVar12 <= uVar13 || 0xffff < uVar13) {
      if (param_4 < 0x7e000001) {
        puVar28 = param_2;
        puVar29 = param_3;
        if ((0xc < (int)param_4) &&
           (*(uint *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = uVar12,
           1 < lVar16 + -0xc)) {
          iVar24 = iVar24 - uVar12;
          puVar27 = (ulong *)((long)param_2 + 2);
LAB_100749b9d:
          uVar17 = *(ulong *)((long)puVar28 + 1);
          puVar39 = (ulong *)((long)puVar28 + 1);
          uVar38 = uVar37 << 6 | 1;
          uVar13 = uVar37 & 0x3ffffff;
          while( true ) {
            puVar22 = puVar27;
            uVar33 = (ulong)uVar13;
            uVar34 = uVar17 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
            lVar36 = (ulong)*(uint *)(param_1 + uVar34) - (ulong)uVar12;
            uVar17 = *puVar22;
            *(int *)(param_1 + uVar34) = (int)puVar39 - iVar24;
            if ((puVar39 <= (ulong *)((long)param_2 + lVar36 + 0xffff)) &&
               (piVar43 = (int *)((long)param_2 + lVar36), *piVar43 == (int)*puVar39)) break;
            uVar13 = uVar38 >> 6;
            puVar27 = (ulong *)(uVar33 + (long)puVar22);
            puVar39 = puVar22;
            uVar38 = uVar38 + 1;
            if (puVar46 < (ulong *)(uVar33 + (long)puVar22)) goto LAB_10074a192;
          }
          if ((puVar28 < puVar39) && (lVar40 < lVar36)) {
            do {
              puVar27 = (ulong *)((long)puVar39 - 1);
              piVar21 = (int *)((long)piVar43 + -1);
              if (((char)*puVar27 != *(char *)piVar21) ||
                 (piVar43 = piVar21, puVar39 = puVar27, puVar27 <= puVar28)) break;
            } while ((int *)((long)param_2 - uVar20) < piVar21);
          }
          uVar17 = (long)puVar39 - (long)puVar28;
          uVar13 = (uint)uVar17;
          iVar32 = 0;
          if ((char *)((long)puVar29 + (uVar17 & 0xffffffff) / 0xff + (uVar17 & 0xffffffff) + 9) <=
              pcVar26) {
            puVar27 = (ulong *)((long)puVar29 + 1);
            if (uVar13 < 0xf) {
              *(char *)puVar29 = (char)(uVar13 << 4);
              puVar22 = puVar29;
            }
            else {
              uVar38 = uVar13 - 0xf;
              *(char *)puVar29 = -0x10;
              if (0xfe < (int)uVar38) {
                uVar14 = ((int)puVar39 - (int)puVar28) - 0x10e;
                puVar22 = puVar29;
                if ((uVar14 / 0xff + 1 & 7) != 0) {
                  iVar32 = -((((int)puVar39 - (int)puVar28) - 0x10eU) / 0xff + 1 & 7);
                  puVar42 = puVar29;
                  do {
                    puVar22 = puVar27;
                    puVar27 = (ulong *)((long)puVar42 + 2);
                    *(char *)puVar22 = -1;
                    uVar38 = uVar38 - 0xff;
                    iVar32 = iVar32 + 1;
                    puVar42 = puVar22;
                  } while (iVar32 != 0);
                }
                if (6 < uVar14 / 0xff) {
                  do {
                    *(char *)puVar27 = -1;
                    *(char *)((long)puVar22 + 2) = -1;
                    *(char *)((long)puVar27 + 2) = -1;
                    *(char *)((long)puVar22 + 4) = -1;
                    *(char *)((long)puVar27 + 4) = -1;
                    *(char *)((long)puVar22 + 6) = -1;
                    *(char *)((long)puVar27 + 6) = -1;
                    puVar27 = puVar27 + 1;
                    *(char *)(puVar22 + 1) = -1;
                    uVar38 = uVar38 - 0x7f8;
                    puVar22 = puVar22 + 1;
                  } while (0xfe < (int)uVar38);
                }
                uVar38 = (uVar13 - 0x10e) % 0xff;
              }
              *(char *)puVar27 = (char)uVar38;
              puVar22 = puVar27;
              puVar27 = (ulong *)((long)puVar27 + 1);
            }
            puVar22 = (ulong *)((uVar17 & 0xffffffff) + 1 + (long)puVar22);
            do {
              *puVar27 = *puVar28;
              puVar27 = puVar27 + 1;
              puVar28 = puVar28 + 1;
            } while (puVar27 < puVar22);
            do {
              iVar32 = 0;
              *(short *)puVar22 = (short)puVar39 - (short)piVar43;
              puVar28 = (ulong *)((long)puVar39 + 4);
              puVar42 = (ulong *)(piVar43 + 1);
              puVar27 = puVar28;
              if (puVar28 < puVar46) {
LAB_100749e30:
                if (*puVar42 == *puVar27) goto code_r0x000100749e3b;
                uVar34 = *puVar27 ^ *puVar42;
                uVar17 = 0;
                if (uVar34 != 0) {
                  for (; (uVar34 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                  }
                }
                uVar17 = (long)puVar27 + ((uVar17 >> 3) - (long)puVar28);
                goto LAB_100749eae;
              }
LAB_100749e48:
              if ((puVar27 < (ulong *)(lVar16 + -8 + (long)param_2)) &&
                 ((int)*puVar42 == (int)*puVar27)) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar42 = (ulong *)((long)puVar42 + 4);
              }
              if ((puVar27 < (ulong *)(lVar16 + -6 + (long)param_2)) &&
                 ((short)*puVar42 == (short)*puVar27)) {
                puVar27 = (ulong *)((long)puVar27 + 2);
                puVar42 = (ulong *)((long)puVar42 + 2);
              }
              if ((puVar27 < puVar31) && ((char)*puVar42 == (char)*puVar27)) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
              uVar17 = (long)puVar27 - (long)puVar28;
LAB_100749eae:
              uVar13 = (uint)uVar17;
              if (pcVar26 < (char *)((uVar17 >> 8 & 0xffffff) + 8 + (long)puVar22))
              goto LAB_10074a27d;
              puVar27 = (ulong *)((long)puVar22 + 2);
              uVar34 = (ulong)(uVar13 + 4);
              puVar28 = (ulong *)((long)puVar39 + uVar34);
              if (uVar13 < 0xf) {
                *(char *)puVar29 = (char)*puVar29 + (char)uVar17;
                puVar29 = puVar27;
              }
              else {
                *(char *)puVar29 = (char)*puVar29 + '\x0f';
                uVar38 = uVar13 - 0xf;
                if (0x1fd < uVar38) {
                  if (((uVar13 - 0x20d) / 0x1fe + 1 & 7) != 0) {
                    iVar32 = -((uVar13 - 0x20d) / 0x1fe + 1 & 7);
                    puVar29 = puVar22;
                    do {
                      puVar22 = puVar27;
                      *(undefined2 *)puVar22 = 0xffff;
                      puVar27 = (ulong *)((long)puVar29 + 4);
                      uVar38 = uVar38 - 0x1fe;
                      iVar32 = iVar32 + 1;
                      puVar29 = puVar22;
                    } while (iVar32 != 0);
                  }
                  if (6 < (uVar13 - 0x20d) / 0x1fe) {
                    pcVar23 = (char *)((long)puVar22 + 0x11);
                    do {
                      *(char *)puVar27 = -1;
                      *(char *)((long)puVar27 + 1) = -1;
                      pcVar23[-0xd] = -1;
                      pcVar23[-0xc] = -1;
                      *(char *)((long)puVar27 + 4) = -1;
                      *(char *)((long)puVar27 + 5) = -1;
                      pcVar23[-9] = -1;
                      pcVar23[-8] = -1;
                      *(char *)(puVar27 + 1) = -1;
                      *(char *)((long)puVar27 + 9) = -1;
                      pcVar23[-5] = -1;
                      pcVar23[-4] = -1;
                      *(char *)((long)puVar27 + 0xc) = -1;
                      *(char *)((long)puVar27 + 0xd) = -1;
                      pcVar23[-1] = -1;
                      pcVar23[0] = -1;
                      puVar27 = puVar27 + 2;
                      uVar38 = uVar38 - 0xff0;
                      pcVar23 = pcVar23 + 0x10;
                    } while (0x1fd < uVar38);
                  }
                  uVar38 = (uVar13 - 0x20d) % 0x1fe;
                }
                if (0xfe < uVar38) {
                  uVar38 = uVar38 - 0xff;
                  *(char *)puVar27 = -1;
                  puVar27 = (ulong *)((long)puVar27 + 1);
                }
                *(char *)puVar27 = (char)uVar38;
                puVar29 = (ulong *)((long)puVar27 + 1);
              }
              if (puVar46 < puVar28) goto LAB_10074a192;
              *(uint *)(param_1 +
                       ((ulong)(*(long *)((long)puVar39 + (uVar34 - 2)) * 0xcf1bbcdcbb) >> 0x1a &
                       0x3ffc)) = ((int)puVar39 + -2 + uVar13 + 4) - iVar24;
              uVar17 = (ulong)(*(long *)((long)puVar39 + uVar34) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc;
              lVar36 = (ulong)*(uint *)(param_1 + uVar17) - (ulong)uVar12;
              *(int *)(param_1 + uVar17) = (int)puVar28 - iVar24;
              if (((ulong *)((long)param_2 + lVar36 + 0xffff) < puVar28) ||
                 (piVar43 = (int *)(lVar36 + (long)param_2), *piVar43 != (int)*puVar28))
              goto LAB_10074a091;
              puVar22 = (ulong *)((long)puVar29 + 1);
              *(char *)puVar29 = '\0';
              puVar39 = puVar28;
            } while( true );
          }
          *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
          goto LAB_10074a285;
        }
LAB_10074a192:
        iVar32 = 0;
        uVar20 = (long)puVar15 - (long)puVar28;
        if ((char *)((long)puVar29 + uVar20 + (uVar20 + 0xf0) / 0xff + (1 - (long)param_3)) <=
            (char *)(ulong)param_5) {
          if (uVar20 < 0xf) {
            *(char *)puVar29 = (char)uVar20 * '\x10';
          }
          else {
            uVar17 = uVar20 - 0xf;
            *(char *)puVar29 = -0x10;
            puVar46 = (ulong *)((long)puVar29 + 1);
            if (0xfe < uVar17) {
              do {
                puVar31 = puVar46;
                *(char *)puVar31 = -1;
                uVar17 = uVar17 - 0xff;
                puVar46 = (ulong *)((long)puVar29 + 2);
                puVar29 = puVar31;
              } while (0xfe < uVar17);
              uVar17 = (ulong)((long)puVar15 + (-0x10e - (long)puVar28)) % 0xff;
            }
            *(char *)puVar46 = (char)uVar17;
            puVar29 = puVar46;
          }
          _memcpy((char *)((long)puVar29 + 1),puVar28,uVar20);
          iVar32 = ((int)uVar20 + 1 + (int)puVar29) - iVar45;
        }
      }
    }
    else if (param_4 < 0x7e000001) {
      puVar28 = param_2;
      puVar29 = param_3;
      if ((0xc < (int)param_4) &&
         (*(uint *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = uVar12,
         1 < lVar16 + -0xc)) {
        iVar24 = iVar24 - uVar12;
        puVar27 = (ulong *)((long)param_2 + 2);
LAB_1007495db:
        uVar17 = *(ulong *)((long)puVar28 + 1);
        puVar39 = (ulong *)((long)puVar28 + 1);
        uVar13 = uVar37 << 6 | 1;
        uVar38 = uVar37 & 0x3ffffff;
        while( true ) {
          puVar22 = puVar27;
          uVar33 = (ulong)uVar38;
          uVar34 = uVar17 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
          lVar36 = (ulong)*(uint *)(param_1 + uVar34) - (ulong)uVar12;
          uVar17 = *puVar22;
          *(int *)(param_1 + uVar34) = (int)puVar39 - iVar24;
          if (((lVar40 <= lVar36) && (puVar39 <= (ulong *)((long)param_2 + lVar36 + 0xffff))) &&
             (piVar43 = (int *)((long)param_2 + lVar36), *piVar43 == (int)*puVar39)) break;
          uVar38 = uVar13 >> 6;
          puVar27 = (ulong *)(uVar33 + (long)puVar22);
          puVar39 = puVar22;
          uVar13 = uVar13 + 1;
          if (puVar46 < (ulong *)(uVar33 + (long)puVar22)) goto LAB_10074a0cd;
        }
        if ((puVar28 < puVar39) && (lVar40 < lVar36)) {
          while( true ) {
            puVar27 = (ulong *)((long)puVar39 - 1);
            piVar21 = (int *)((long)piVar43 + -1);
            if ((char)*puVar27 != *(char *)piVar21) break;
            puVar39 = puVar27;
            piVar43 = piVar21;
            if ((puVar27 <= puVar28) || (piVar21 <= (int *)((long)param_2 - uVar20))) break;
          }
        }
        uVar17 = (long)puVar39 - (long)puVar28;
        uVar13 = (uint)uVar17;
        iVar32 = 0;
        if ((char *)((long)puVar29 + (uVar17 & 0xffffffff) / 0xff + (uVar17 & 0xffffffff) + 9) <=
            pcVar26) {
          puVar27 = (ulong *)((long)puVar29 + 1);
          if (uVar13 < 0xf) {
            *(char *)puVar29 = (char)(uVar13 << 4);
            puVar22 = puVar29;
          }
          else {
            uVar38 = uVar13 - 0xf;
            *(char *)puVar29 = -0x10;
            if (0xfe < (int)uVar38) {
              uVar14 = ((int)puVar39 - (int)puVar28) - 0x10e;
              puVar22 = puVar29;
              if ((uVar14 / 0xff + 1 & 7) != 0) {
                iVar32 = -((((int)puVar39 - (int)puVar28) - 0x10eU) / 0xff + 1 & 7);
                puVar42 = puVar29;
                do {
                  puVar22 = puVar27;
                  puVar27 = (ulong *)((long)puVar42 + 2);
                  *(char *)puVar22 = -1;
                  uVar38 = uVar38 - 0xff;
                  iVar32 = iVar32 + 1;
                  puVar42 = puVar22;
                } while (iVar32 != 0);
              }
              if (6 < uVar14 / 0xff) {
                do {
                  *(char *)puVar27 = -1;
                  *(char *)((long)puVar22 + 2) = -1;
                  *(char *)((long)puVar27 + 2) = -1;
                  *(char *)((long)puVar22 + 4) = -1;
                  *(char *)((long)puVar27 + 4) = -1;
                  *(char *)((long)puVar22 + 6) = -1;
                  *(char *)((long)puVar27 + 6) = -1;
                  puVar27 = puVar27 + 1;
                  *(char *)(puVar22 + 1) = -1;
                  uVar38 = uVar38 - 0x7f8;
                  puVar22 = puVar22 + 1;
                } while (0xfe < (int)uVar38);
              }
              uVar38 = (uVar13 - 0x10e) % 0xff;
            }
            *(char *)puVar27 = (char)uVar38;
            puVar22 = puVar27;
            puVar27 = (ulong *)((long)puVar27 + 1);
          }
          puVar22 = (ulong *)((uVar17 & 0xffffffff) + 1 + (long)puVar22);
          do {
            *puVar27 = *puVar28;
            puVar27 = puVar27 + 1;
            puVar28 = puVar28 + 1;
          } while (puVar27 < puVar22);
          do {
            *(short *)puVar22 = (short)puVar39 - (short)piVar43;
            puVar28 = (ulong *)((long)puVar39 + 4);
            puVar42 = (ulong *)(piVar43 + 1);
            puVar27 = puVar28;
            if (puVar28 < puVar46) {
LAB_100749870:
              if (*puVar42 == *puVar27) goto code_r0x00010074987b;
              uVar34 = *puVar27 ^ *puVar42;
              uVar17 = 0;
              if (uVar34 != 0) {
                for (; (uVar34 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                }
              }
              uVar17 = (long)puVar27 + ((uVar17 >> 3) - (long)puVar28);
              goto LAB_1007498f2;
            }
LAB_100749888:
            if ((puVar27 < (ulong *)(lVar16 + -8 + (long)param_2)) &&
               ((int)*puVar42 == (int)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 4);
              puVar42 = (ulong *)((long)puVar42 + 4);
            }
            if ((puVar27 < (ulong *)(lVar16 + -6 + (long)param_2)) &&
               ((short)*puVar42 == (short)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 2);
              puVar42 = (ulong *)((long)puVar42 + 2);
            }
            if ((puVar27 < puVar31) && ((char)*puVar42 == (char)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 1);
            }
            uVar17 = (long)puVar27 - (long)puVar28;
LAB_1007498f2:
            iVar32 = 0;
            uVar13 = (uint)uVar17;
            if (pcVar26 < (char *)((uVar17 >> 8 & 0xffffff) + 8 + (long)puVar22))
            goto LAB_10074a27d;
            puVar27 = (ulong *)((long)puVar22 + 2);
            uVar34 = (ulong)(uVar13 + 4);
            puVar28 = (ulong *)((long)puVar39 + uVar34);
            if (uVar13 < 0xf) {
              *(char *)puVar29 = (char)*puVar29 + (char)uVar17;
              puVar29 = puVar27;
            }
            else {
              *(char *)puVar29 = (char)*puVar29 + '\x0f';
              uVar38 = uVar13 - 0xf;
              if (0x1fd < uVar38) {
                if (((uVar13 - 0x20d) / 0x1fe + 1 & 7) != 0) {
                  iVar32 = -((uVar13 - 0x20d) / 0x1fe + 1 & 7);
                  puVar29 = puVar22;
                  do {
                    puVar22 = puVar27;
                    *(undefined2 *)puVar22 = 0xffff;
                    puVar27 = (ulong *)((long)puVar29 + 4);
                    uVar38 = uVar38 - 0x1fe;
                    iVar32 = iVar32 + 1;
                    puVar29 = puVar22;
                  } while (iVar32 != 0);
                }
                if (6 < (uVar13 - 0x20d) / 0x1fe) {
                  pcVar23 = (char *)((long)puVar22 + 0x11);
                  do {
                    *(char *)puVar27 = -1;
                    *(char *)((long)puVar27 + 1) = -1;
                    pcVar23[-0xd] = -1;
                    pcVar23[-0xc] = -1;
                    *(char *)((long)puVar27 + 4) = -1;
                    *(char *)((long)puVar27 + 5) = -1;
                    pcVar23[-9] = -1;
                    pcVar23[-8] = -1;
                    *(char *)(puVar27 + 1) = -1;
                    *(char *)((long)puVar27 + 9) = -1;
                    pcVar23[-5] = -1;
                    pcVar23[-4] = -1;
                    *(char *)((long)puVar27 + 0xc) = -1;
                    *(char *)((long)puVar27 + 0xd) = -1;
                    pcVar23[-1] = -1;
                    pcVar23[0] = -1;
                    puVar27 = puVar27 + 2;
                    uVar38 = uVar38 - 0xff0;
                    pcVar23 = pcVar23 + 0x10;
                  } while (0x1fd < uVar38);
                }
                uVar38 = (uVar13 - 0x20d) % 0x1fe;
              }
              if (0xfe < uVar38) {
                uVar38 = uVar38 - 0xff;
                *(char *)puVar27 = -1;
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
              *(char *)puVar27 = (char)uVar38;
              puVar29 = (ulong *)((long)puVar27 + 1);
            }
            if (puVar46 < puVar28) goto LAB_10074a0cd;
            *(uint *)(param_1 +
                     ((ulong)(*(long *)((long)puVar39 + (uVar34 - 2)) * 0xcf1bbcdcbb) >> 0x1a &
                     0x3ffc)) = ((int)puVar39 + -2 + uVar13 + 4) - iVar24;
            uVar17 = (ulong)(*(long *)((long)puVar39 + uVar34) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc;
            lVar36 = (ulong)*(uint *)(param_1 + uVar17) - (ulong)uVar12;
            *(int *)(param_1 + uVar17) = (int)puVar28 - iVar24;
            if (((lVar36 < lVar40) || ((ulong *)((long)param_2 + lVar36 + 0xffff) < puVar28)) ||
               (piVar43 = (int *)(lVar36 + (long)param_2), *piVar43 != (int)*puVar28))
            goto LAB_100749ad9;
            puVar22 = (ulong *)((long)puVar29 + 1);
            *(char *)puVar29 = '\0';
            puVar39 = puVar28;
          } while( true );
        }
        *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
        goto LAB_10074a285;
      }
LAB_10074a0cd:
      uVar20 = (long)puVar15 - (long)puVar28;
      iVar32 = 0;
      if ((char *)((long)puVar29 + uVar20 + (uVar20 + 0xf0) / 0xff + (1 - (long)param_3)) <=
          (char *)(ulong)param_5) {
        if (uVar20 < 0xf) {
          *(char *)puVar29 = (char)uVar20 * '\x10';
        }
        else {
          uVar17 = uVar20 - 0xf;
          *(char *)puVar29 = -0x10;
          puVar46 = (ulong *)((long)puVar29 + 1);
          if (0xfe < uVar17) {
            do {
              puVar31 = puVar46;
              *(char *)puVar31 = -1;
              uVar17 = uVar17 - 0xff;
              puVar46 = (ulong *)((long)puVar29 + 2);
              puVar29 = puVar31;
            } while (0xfe < uVar17);
            uVar17 = (ulong)((long)puVar15 + (-0x10e - (long)puVar28)) % 0xff;
          }
          *(char *)puVar46 = (char)uVar17;
          puVar29 = puVar46;
        }
        _memcpy((char *)((long)puVar29 + 1),puVar28,uVar20);
        iVar32 = ((int)uVar20 + 1 + (int)puVar29) - iVar45;
      }
    }
LAB_10074a27d:
    *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
    goto LAB_10074a285;
  }
  iVar32 = 0;
  puVar31 = param_2;
  puVar46 = param_3;
  if (uVar12 <= uVar13 || 0xffff < uVar13) {
    if (param_4 < 0x7e000001) {
      if ((0xc < (int)param_4) &&
         (*(uint *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = uVar12,
         1 < lVar16 + -0xc)) {
        uVar17 = (long)puVar28 + (uVar20 - (long)param_2);
        puVar27 = (ulong *)((long)param_2 + lVar16 + -0xc);
        puVar39 = (ulong *)(lVar16 + -5 + (long)param_2);
        iVar24 = iVar24 - uVar12;
        puVar29 = (ulong *)((long)param_2 + 2);
        puVar22 = (ulong *)(lVar16 + -8 + (long)param_2);
        puVar42 = (ulong *)(lVar16 + -6 + (long)param_2);
LAB_100748c9e:
        uVar34 = *(ulong *)((long)puVar31 + 1);
        puVar41 = (ulong *)((long)puVar31 + 1);
        uVar13 = uVar37 << 6 | 1;
        uVar38 = uVar37 & 0x3ffffff;
        do {
          puVar25 = puVar29;
          uVar35 = (ulong)uVar38;
          uVar33 = uVar34 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
          lVar16 = (ulong)*(uint *)(param_1 + uVar33) - (ulong)uVar12;
          uVar34 = *puVar25;
          *(int *)(param_1 + uVar33) = (int)puVar41 - iVar24;
          if (puVar41 <= (ulong *)((long)param_2 + lVar16 + 0xffff)) {
            uVar33 = lVar16 >> 0x3f & uVar17;
            if (*(int *)((long)param_2 + uVar33 + lVar16) == (int)*puVar41) goto LAB_100748d38;
          }
          uVar38 = uVar13 >> 6;
          puVar29 = (ulong *)(uVar35 + (long)puVar25);
          puVar41 = puVar25;
          uVar13 = uVar13 + 1;
          if (puVar27 < (ulong *)(uVar35 + (long)puVar25)) break;
        } while( true );
      }
LAB_100749462:
      sVar44 = (long)puVar15 - (long)puVar31;
      iVar32 = 0;
      if ((char *)((long)puVar46 + sVar44 + (sVar44 + 0xf0) / 0xff + (1 - (long)param_3)) <=
          (char *)(ulong)param_5) {
        if (0xe < sVar44) {
          uVar20 = sVar44 - 0xf;
          *(char *)puVar46 = -0x10;
          puVar28 = (ulong *)((long)puVar46 + 1);
          if (0xfe < uVar20) {
            do {
              puVar29 = puVar28;
              *(char *)puVar29 = -1;
              uVar20 = uVar20 - 0xff;
              puVar28 = (ulong *)((long)puVar46 + 2);
              puVar46 = puVar29;
            } while (0xfe < uVar20);
            goto LAB_1007494ee;
          }
          goto LAB_100749505;
        }
LAB_100749512:
        *(char *)puVar46 = (char)(sVar44 << 4);
        goto LAB_100749522;
      }
    }
  }
  else {
    iVar32 = 0;
    if (param_4 < 0x7e000001) {
      if ((0xc < (int)param_4) &&
         (*(uint *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = uVar12,
         1 < lVar16 + -0xc)) {
        uVar17 = (long)puVar28 + (uVar20 - (long)param_2);
        puVar27 = (ulong *)((long)param_2 + lVar16 + -0xc);
        puVar39 = (ulong *)(lVar16 + -5 + (long)param_2);
        iVar24 = iVar24 - uVar12;
        puVar29 = (ulong *)((long)param_2 + 2);
        puVar22 = (ulong *)(lVar16 + -8 + (long)param_2);
        puVar42 = (ulong *)(lVar16 + -6 + (long)param_2);
LAB_10074848a:
        uVar34 = *(ulong *)((long)puVar31 + 1);
        puVar41 = (ulong *)((long)puVar31 + 1);
        uVar38 = uVar37 << 6 | 1;
        uVar13 = uVar37 & 0x3ffffff;
        do {
          puVar25 = puVar29;
          uVar35 = (ulong)uVar13;
          uVar33 = uVar34 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
          lVar16 = (ulong)*(uint *)(param_1 + uVar33) - (ulong)uVar12;
          uVar34 = *puVar25;
          *(int *)(param_1 + uVar33) = (int)puVar41 - iVar24;
          if (((long)-uVar20 <= lVar16) && (puVar41 <= (ulong *)((long)param_2 + lVar16 + 0xffff)))
          {
            uVar33 = lVar16 >> 0x3f & uVar17;
            if (*(int *)((long)param_2 + uVar33 + lVar16) == (int)*puVar41) goto LAB_100748532;
          }
          uVar13 = uVar38 >> 6;
          puVar29 = (ulong *)(uVar35 + (long)puVar25);
          puVar41 = puVar25;
          uVar38 = uVar38 + 1;
          if (puVar27 < (ulong *)(uVar35 + (long)puVar25)) break;
        } while( true );
      }
LAB_1007493b7:
      sVar44 = (long)puVar15 - (long)puVar31;
      iVar32 = 0;
      if ((char *)((long)puVar46 + sVar44 + (sVar44 + 0xf0) / 0xff + (1 - (long)param_3)) <=
          (char *)(ulong)param_5) {
        if (sVar44 < 0xf) goto LAB_100749512;
        uVar20 = sVar44 - 0xf;
        *(char *)puVar46 = -0x10;
        puVar28 = (ulong *)((long)puVar46 + 1);
        if (0xfe < uVar20) {
          do {
            puVar29 = puVar28;
            *(char *)puVar29 = -1;
            uVar20 = uVar20 - 0xff;
            puVar28 = (ulong *)((long)puVar46 + 2);
            puVar46 = puVar29;
          } while (0xfe < uVar20);
LAB_1007494ee:
          uVar20 = (ulong)((long)puVar15 + (-0x10e - (long)puVar31)) % 0xff;
        }
LAB_100749505:
        *(char *)puVar28 = (char)uVar20;
        puVar46 = puVar28;
LAB_100749522:
        _memcpy((char *)((long)puVar46 + 1),puVar31,sVar44);
        iVar32 = ((int)sVar44 + 1 + (int)puVar46) - iVar45;
      }
    }
  }
LAB_10074953f:
  *(ulong **)(param_1 + 0x4008) = param_2;
  *(uint *)(param_1 + 0x4018) = param_4;
LAB_10074a285:
  *(int *)(param_1 + 0x4000) = *(int *)(param_1 + 0x4000) + param_4;
  return iVar32;
code_r0x000100749e3b:
  puVar27 = puVar27 + 1;
  puVar42 = puVar42 + 1;
  if (puVar46 <= puVar27) goto LAB_100749e48;
  goto LAB_100749e30;
LAB_10074a091:
  puVar27 = (ulong *)(uVar34 + 2 + (long)puVar39);
  if (puVar46 < puVar27) goto LAB_10074a192;
  goto LAB_100749b9d;
code_r0x00010074987b:
  puVar27 = puVar27 + 1;
  puVar42 = puVar42 + 1;
  if (puVar46 <= puVar27) goto LAB_100749888;
  goto LAB_100749870;
LAB_100749ad9:
  puVar27 = (ulong *)(uVar34 + 2 + (long)puVar39);
  if (puVar46 < puVar27) goto LAB_10074a0cd;
  goto LAB_1007495db;
LAB_100748d38:
  lVar40 = (long)param_2 + lVar16;
  puVar29 = param_2;
  if (lVar16 < 0) {
    puVar29 = puVar28;
  }
  if ((puVar31 < puVar41) && (puVar29 < (ulong *)(uVar33 + lVar16 + (long)param_2))) {
    lVar40 = 0;
    do {
      lVar36 = lVar40;
      if ((*(char *)((long)puVar41 + lVar40 + -1) !=
           *(char *)((long)param_2 + uVar33 + lVar40 + lVar16 + -1)) ||
         (lVar36 = lVar40 + -1, (ulong *)((long)puVar41 + lVar40 + -1) <= puVar31)) break;
      lVar10 = lVar40 + uVar33 + lVar16 + -1;
      lVar40 = lVar36;
    } while (puVar29 < (ulong *)((long)param_2 + lVar10));
    lVar40 = (long)param_2 + lVar36 + lVar16;
    puVar41 = (ulong *)((long)puVar41 + lVar36);
  }
  uVar34 = (long)puVar41 - (long)puVar31;
  uVar13 = (uint)uVar34;
  if ((char *)((long)puVar46 + (uVar34 & 0xffffffff) / 0xff + (uVar34 & 0xffffffff) + 9) <=
      (char *)((long)(int)param_5 + (long)param_3)) {
    puVar25 = (ulong *)((long)puVar46 + 1);
    if (uVar13 < 0xf) {
      *(char *)puVar46 = (char)(uVar13 << 4);
      puVar19 = puVar46;
    }
    else {
      uVar38 = uVar13 - 0xf;
      *(char *)puVar46 = -0x10;
      if (0xfe < (int)uVar38) {
        uVar14 = ((int)puVar41 - (int)puVar31) - 0x10e;
        puVar19 = puVar46;
        if ((uVar14 / 0xff + 1 & 7) != 0) {
          iVar32 = -((((int)puVar41 - (int)puVar31) - 0x10eU) / 0xff + 1 & 7);
          puVar30 = puVar46;
          do {
            puVar19 = puVar25;
            puVar25 = (ulong *)((long)puVar30 + 2);
            *(char *)puVar19 = -1;
            uVar38 = uVar38 - 0xff;
            iVar32 = iVar32 + 1;
            puVar30 = puVar19;
          } while (iVar32 != 0);
        }
        if (6 < uVar14 / 0xff) {
          do {
            *(char *)puVar25 = -1;
            *(char *)((long)puVar19 + 2) = -1;
            *(char *)((long)puVar25 + 2) = -1;
            *(char *)((long)puVar19 + 4) = -1;
            *(char *)((long)puVar25 + 4) = -1;
            *(char *)((long)puVar19 + 6) = -1;
            *(char *)((long)puVar25 + 6) = -1;
            puVar25 = puVar25 + 1;
            *(char *)(puVar19 + 1) = -1;
            uVar38 = uVar38 - 0x7f8;
            puVar19 = puVar19 + 1;
          } while (0xfe < (int)uVar38);
        }
        uVar38 = (uVar13 - 0x10e) % 0xff;
      }
      *(char *)puVar25 = (char)uVar38;
      puVar19 = puVar25;
      puVar25 = (ulong *)((long)puVar25 + 1);
    }
    puVar19 = (ulong *)((uVar34 & 0xffffffff) + 1 + (long)puVar19);
    do {
      *puVar25 = *puVar31;
      puVar25 = puVar25 + 1;
      puVar31 = puVar31 + 1;
      puVar30 = puVar46;
    } while (puVar25 < puVar19);
    do {
      *(short *)puVar19 = (short)puVar41 - (short)lVar40;
      if (puVar29 == puVar28) {
        puVar46 = (ulong *)((long)puVar28 + (uVar20 - (lVar40 + uVar33)) + (long)puVar41);
        if (puVar39 < puVar46) {
          puVar46 = puVar39;
        }
        puVar31 = (ulong *)((long)puVar41 + 4);
        puVar29 = (ulong *)(lVar40 + 4 + uVar33);
        puVar25 = puVar31;
        if (puVar31 < (ulong *)((long)puVar46 - 7U)) {
LAB_100749035:
          if (*puVar29 == *puVar25) goto code_r0x000100749040;
          uVar33 = *puVar25 ^ *puVar29;
          uVar34 = 0;
          if (uVar33 != 0) {
            for (; (uVar33 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = (long)puVar25 + ((uVar34 >> 3) - (long)puVar31);
          goto LAB_1007490dd;
        }
LAB_10074904d:
        if ((puVar25 < (ulong *)((long)puVar46 - 3U)) && ((int)*puVar29 == (int)*puVar25)) {
          puVar25 = (ulong *)((long)puVar25 + 4);
          puVar29 = (ulong *)((long)puVar29 + 4);
        }
        if ((puVar25 < (ulong *)((long)puVar46 - 1U)) && ((short)*puVar29 == (short)*puVar25)) {
          puVar25 = (ulong *)((long)puVar25 + 2);
          puVar29 = (ulong *)((long)puVar29 + 2);
        }
        if ((puVar25 < puVar46) && ((char)*puVar29 == (char)*puVar25)) {
          puVar25 = (ulong *)((long)puVar25 + 1);
        }
        uVar34 = (long)puVar25 - (long)puVar31;
LAB_1007490dd:
        uVar33 = (ulong)((int)uVar34 + 4);
        puVar31 = (ulong *)((long)puVar41 + uVar33);
        if (puVar31 == puVar46) {
          puVar31 = param_2;
          puVar29 = puVar46;
          if (puVar46 < puVar27) {
LAB_100749109:
            if (*puVar31 == *puVar29) goto code_r0x000100749114;
            uVar18 = *puVar29 ^ *puVar31;
            uVar35 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            uVar35 = (long)puVar29 + ((uVar35 >> 3) - (long)puVar46);
            goto LAB_100749186;
          }
LAB_100749122:
          if ((puVar29 < puVar22) && ((int)*puVar31 == (int)*puVar29)) {
            puVar29 = (ulong *)((long)puVar29 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar29 < puVar42) && ((short)*puVar31 == (short)*puVar29)) {
            puVar29 = (ulong *)((long)puVar29 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if ((puVar29 < puVar39) && ((char)*puVar31 == (char)*puVar29)) {
            puVar29 = (ulong *)((long)puVar29 + 1);
          }
          uVar35 = (long)puVar29 - (long)puVar46;
LAB_100749186:
          uVar34 = (ulong)(uint)((int)uVar34 + (int)uVar35);
          puVar31 = (ulong *)((long)puVar41 + (uVar35 & 0xffffffff) + uVar33);
        }
      }
      else {
        puVar46 = (ulong *)((long)puVar41 + 4);
        puVar29 = (ulong *)(lVar40 + 4);
        puVar31 = puVar46;
        if (puVar46 < puVar27) {
LAB_100748f90:
          if (*puVar29 == *puVar31) goto code_r0x000100748f9f;
          uVar33 = *puVar31 ^ *puVar29;
          uVar34 = 0;
          if (uVar33 != 0) {
            for (; (uVar33 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = (long)puVar31 + ((uVar34 >> 3) - (long)puVar46);
          goto LAB_10074907e;
        }
LAB_100748fad:
        if ((puVar31 < puVar22) && ((int)*puVar29 == (int)*puVar31)) {
          puVar31 = (ulong *)((long)puVar31 + 4);
          puVar29 = (ulong *)((long)puVar29 + 4);
        }
        if ((puVar31 < puVar42) && ((short)*puVar29 == (short)*puVar31)) {
          puVar31 = (ulong *)((long)puVar31 + 2);
          puVar29 = (ulong *)((long)puVar29 + 2);
        }
        if ((puVar31 < puVar39) && ((char)*puVar29 == (char)*puVar31)) {
          puVar31 = (ulong *)((long)puVar31 + 1);
        }
        uVar34 = (long)puVar31 - (long)puVar46;
LAB_10074907e:
        puVar31 = (ulong *)((long)puVar41 + (ulong)((int)uVar34 + 4));
      }
      uVar13 = (uint)uVar34;
      if ((char *)((long)(int)param_5 + (long)param_3) <
          (char *)((uVar34 >> 8 & 0xffffff) + 8 + (long)puVar19)) {
        iVar32 = 0;
        goto LAB_10074953f;
      }
      puVar46 = (ulong *)((long)puVar19 + 2);
      if (uVar13 < 0xf) {
        *(char *)puVar30 = (char)*puVar30 + (char)uVar34;
      }
      else {
        *(char *)puVar30 = (char)*puVar30 + '\x0f';
        uVar38 = uVar13 - 0xf;
        if (0x1fd < uVar38) {
          uVar13 = uVar13 - 0x20d;
          if ((uVar13 / 0x1fe + 1 & 7) != 0) {
            iVar32 = -(uVar13 / 0x1fe + 1 & 7);
            puVar29 = puVar19;
            do {
              puVar19 = puVar46;
              *(undefined2 *)puVar19 = 0xffff;
              puVar46 = (ulong *)((long)puVar29 + 4);
              uVar38 = uVar38 - 0x1fe;
              iVar32 = iVar32 + 1;
              puVar29 = puVar19;
            } while (iVar32 != 0);
          }
          if (6 < uVar13 / 0x1fe) {
            pcVar26 = (char *)((long)puVar19 + 0x11);
            do {
              *(char *)puVar46 = -1;
              *(char *)((long)puVar46 + 1) = -1;
              pcVar26[-0xd] = -1;
              pcVar26[-0xc] = -1;
              *(char *)((long)puVar46 + 4) = -1;
              *(char *)((long)puVar46 + 5) = -1;
              pcVar26[-9] = -1;
              pcVar26[-8] = -1;
              *(char *)(puVar46 + 1) = -1;
              *(char *)((long)puVar46 + 9) = -1;
              pcVar26[-5] = -1;
              pcVar26[-4] = -1;
              *(char *)((long)puVar46 + 0xc) = -1;
              *(char *)((long)puVar46 + 0xd) = -1;
              pcVar26[-1] = -1;
              pcVar26[0] = -1;
              puVar46 = puVar46 + 2;
              uVar38 = uVar38 - 0xff0;
              pcVar26 = pcVar26 + 0x10;
            } while (0x1fd < uVar38);
          }
          uVar38 = uVar13 % 0x1fe;
        }
        if (0xfe < uVar38) {
          uVar38 = uVar38 - 0xff;
          *(char *)puVar46 = -1;
          puVar46 = (ulong *)((long)puVar46 + 1);
        }
        *(char *)puVar46 = (char)uVar38;
        puVar46 = (ulong *)((long)puVar46 + 1);
      }
      if (puVar27 < puVar31) goto LAB_100749462;
      *(int *)(param_1 + ((ulong)(*(long *)((long)puVar31 + -2) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc)) =
           ((int)puVar31 + -2) - iVar24;
      uVar34 = *puVar31 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
      lVar40 = (ulong)*(uint *)(param_1 + uVar34) - (ulong)uVar12;
      puVar29 = param_2;
      if (lVar40 < 0) {
        puVar29 = puVar28;
      }
      *(int *)(param_1 + uVar34) = (int)puVar31 - iVar24;
      if (((ulong *)((long)param_2 + lVar40 + 0xffff) < puVar31) ||
         (uVar33 = lVar40 >> 0x3f & uVar17,
         *(int *)((long)param_2 + uVar33 + lVar40) != (int)*puVar31)) goto LAB_100749355;
      lVar40 = lVar40 + (long)param_2;
      puVar19 = (ulong *)((long)puVar46 + 1);
      *(char *)puVar46 = '\0';
      puVar41 = puVar31;
      puVar30 = puVar46;
    } while( true );
  }
  goto LAB_10074a2d3;
code_r0x000100749040:
  puVar25 = puVar25 + 1;
  puVar29 = puVar29 + 1;
  if ((ulong *)((long)puVar46 - 7U) <= puVar25) goto LAB_10074904d;
  goto LAB_100749035;
code_r0x000100749114:
  puVar29 = puVar29 + 1;
  puVar31 = puVar31 + 1;
  if (puVar27 <= puVar29) goto LAB_100749122;
  goto LAB_100749109;
code_r0x000100748f9f:
  puVar31 = puVar31 + 1;
  puVar29 = puVar29 + 1;
  if (puVar27 <= puVar31) goto LAB_100748fad;
  goto LAB_100748f90;
LAB_100749355:
  puVar29 = (ulong *)((long)puVar31 + 2);
  if (puVar27 < puVar29) goto LAB_100749462;
  goto LAB_100748c9e;
LAB_100748532:
  lVar40 = (long)param_2 + lVar16;
  puVar29 = param_2;
  if (lVar16 < 0) {
    puVar29 = puVar28;
  }
  if ((puVar31 < puVar41) && (puVar29 < (ulong *)(uVar33 + lVar16 + (long)param_2))) {
    lVar40 = 0;
    do {
      lVar36 = lVar40;
      if ((*(char *)((long)puVar41 + lVar40 + -1) !=
           *(char *)((long)param_2 + uVar33 + lVar40 + lVar16 + -1)) ||
         (lVar36 = lVar40 + -1, (ulong *)((long)puVar41 + lVar40 + -1) <= puVar31)) break;
      lVar10 = lVar40 + uVar33 + lVar16 + -1;
      lVar40 = lVar36;
    } while (puVar29 < (ulong *)((long)param_2 + lVar10));
    puVar41 = (ulong *)((long)puVar41 + lVar36);
    lVar40 = (long)param_2 + lVar36 + lVar16;
  }
  uVar34 = (long)puVar41 - (long)puVar31;
  uVar13 = (uint)uVar34;
  if ((char *)((long)puVar46 + (uVar34 & 0xffffffff) / 0xff + (uVar34 & 0xffffffff) + 9) <=
      (char *)((long)(int)param_5 + (long)param_3)) {
    puVar25 = (ulong *)((long)puVar46 + 1);
    if (uVar13 < 0xf) {
      *(char *)puVar46 = (char)(uVar13 << 4);
      puVar19 = puVar46;
    }
    else {
      uVar38 = uVar13 - 0xf;
      *(char *)puVar46 = -0x10;
      if (0xfe < (int)uVar38) {
        uVar14 = ((int)puVar41 - (int)puVar31) - 0x10e;
        puVar19 = puVar46;
        if ((uVar14 / 0xff + 1 & 7) != 0) {
          iVar32 = -((((int)puVar41 - (int)puVar31) - 0x10eU) / 0xff + 1 & 7);
          puVar30 = puVar46;
          do {
            puVar19 = puVar25;
            puVar25 = (ulong *)((long)puVar30 + 2);
            *(char *)puVar19 = -1;
            uVar38 = uVar38 - 0xff;
            iVar32 = iVar32 + 1;
            puVar30 = puVar19;
          } while (iVar32 != 0);
        }
        if (6 < uVar14 / 0xff) {
          do {
            *(char *)puVar25 = -1;
            *(char *)((long)puVar19 + 2) = -1;
            *(char *)((long)puVar25 + 2) = -1;
            *(char *)((long)puVar19 + 4) = -1;
            *(char *)((long)puVar25 + 4) = -1;
            *(char *)((long)puVar19 + 6) = -1;
            *(char *)((long)puVar25 + 6) = -1;
            puVar25 = puVar25 + 1;
            *(char *)(puVar19 + 1) = -1;
            uVar38 = uVar38 - 0x7f8;
            puVar19 = puVar19 + 1;
          } while (0xfe < (int)uVar38);
        }
        uVar38 = (uVar13 - 0x10e) % 0xff;
      }
      *(char *)puVar25 = (char)uVar38;
      puVar19 = puVar25;
      puVar25 = (ulong *)((long)puVar25 + 1);
    }
    puVar19 = (ulong *)((uVar34 & 0xffffffff) + 1 + (long)puVar19);
    do {
      *puVar25 = *puVar31;
      puVar25 = puVar25 + 1;
      puVar31 = puVar31 + 1;
    } while (puVar25 < puVar19);
    do {
      *(short *)puVar19 = (short)puVar41 - (short)lVar40;
      if (puVar29 == puVar28) {
        puVar29 = (ulong *)((long)puVar28 + (uVar20 - (lVar40 + uVar33)) + (long)puVar41);
        if (puVar39 < puVar29) {
          puVar29 = puVar39;
        }
        puVar31 = (ulong *)((long)puVar41 + 4);
        puVar25 = (ulong *)(lVar40 + 4 + uVar33);
        puVar30 = puVar31;
        if (puVar31 < (ulong *)((long)puVar29 - 7U)) {
LAB_100748835:
          if (*puVar25 == *puVar30) goto code_r0x000100748840;
          uVar33 = *puVar30 ^ *puVar25;
          uVar34 = 0;
          if (uVar33 != 0) {
            for (; (uVar33 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          puVar30 = (ulong *)((long)puVar30 + (uVar34 >> 3));
          goto LAB_1007488c9;
        }
LAB_10074884d:
        if ((puVar30 < (ulong *)((long)puVar29 - 3U)) && ((int)*puVar25 == (int)*puVar30)) {
          puVar30 = (ulong *)((long)puVar30 + 4);
          puVar25 = (ulong *)((long)puVar25 + 4);
        }
        if ((puVar30 < (ulong *)((long)puVar29 - 1U)) && ((short)*puVar25 == (short)*puVar30)) {
          puVar30 = (ulong *)((long)puVar30 + 2);
          puVar25 = (ulong *)((long)puVar25 + 2);
        }
        if ((puVar30 < puVar29) && ((char)*puVar25 == (char)*puVar30)) {
          puVar30 = (ulong *)((long)puVar30 + 1);
        }
LAB_1007488c9:
        uVar34 = (long)puVar30 - (long)puVar31;
        uVar33 = (ulong)((int)uVar34 + 4);
        puVar31 = (ulong *)((long)puVar41 + uVar33);
        if (puVar31 == puVar29) {
          puVar31 = param_2;
          puVar25 = puVar29;
          if (puVar29 < puVar27) {
LAB_1007488f9:
            if (*puVar31 == *puVar25) goto code_r0x000100748904;
            uVar18 = *puVar25 ^ *puVar31;
            uVar35 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            puVar25 = (ulong *)((long)puVar25 + (uVar35 >> 3));
            goto LAB_10074896a;
          }
LAB_100748912:
          if ((puVar25 < puVar22) && ((int)*puVar31 == (int)*puVar25)) {
            puVar25 = (ulong *)((long)puVar25 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar25 < puVar42) && ((short)*puVar31 == (short)*puVar25)) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if ((puVar25 < puVar39) && ((char)*puVar31 == (char)*puVar25)) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
LAB_10074896a:
          uVar34 = (ulong)(uint)((int)uVar34 + (int)((long)puVar25 - (long)puVar29));
          puVar31 = (ulong *)((long)puVar41 + ((long)puVar25 - (long)puVar29 & 0xffffffffU) + uVar33
                             );
        }
      }
      else {
        puVar31 = (ulong *)((long)puVar41 + 4);
        puVar25 = (ulong *)(lVar40 + 4);
        puVar29 = puVar31;
        if (puVar31 < puVar27) {
LAB_100748780:
          if (*puVar25 == *puVar29) goto code_r0x00010074878f;
          uVar33 = *puVar29 ^ *puVar25;
          uVar34 = 0;
          if (uVar33 != 0) {
            for (; (uVar33 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = (long)puVar29 + ((uVar34 >> 3) - (long)puVar31);
          goto LAB_1007488a8;
        }
LAB_10074879d:
        if ((puVar29 < puVar22) && ((int)*puVar25 == (int)*puVar29)) {
          puVar29 = (ulong *)((long)puVar29 + 4);
          puVar25 = (ulong *)((long)puVar25 + 4);
        }
        if ((puVar29 < puVar42) && ((short)*puVar25 == (short)*puVar29)) {
          puVar29 = (ulong *)((long)puVar29 + 2);
          puVar25 = (ulong *)((long)puVar25 + 2);
        }
        if ((puVar29 < puVar39) && ((char)*puVar25 == (char)*puVar29)) {
          puVar29 = (ulong *)((long)puVar29 + 1);
        }
        uVar34 = (long)puVar29 - (long)puVar31;
LAB_1007488a8:
        puVar31 = (ulong *)((long)puVar41 + (ulong)((int)uVar34 + 4));
      }
      uVar13 = (uint)uVar34;
      if ((char *)((long)(int)param_5 + (long)param_3) <
          (char *)((uVar34 >> 8 & 0xffffff) + 8 + (long)puVar19)) {
        iVar32 = 0;
        goto LAB_10074953f;
      }
      puVar29 = (ulong *)((long)puVar19 + 2);
      if (uVar13 < 0xf) {
        *(char *)puVar46 = (char)*puVar46 + (char)uVar34;
        puVar46 = puVar29;
      }
      else {
        *(char *)puVar46 = (char)*puVar46 + '\x0f';
        uVar38 = uVar13 - 0xf;
        if (0x1fd < uVar38) {
          uVar13 = uVar13 - 0x20d;
          if ((uVar13 / 0x1fe + 1 & 7) != 0) {
            iVar32 = -(uVar13 / 0x1fe + 1 & 7);
            puVar46 = puVar19;
            do {
              puVar19 = puVar29;
              *(undefined2 *)puVar19 = 0xffff;
              puVar29 = (ulong *)((long)puVar46 + 4);
              uVar38 = uVar38 - 0x1fe;
              iVar32 = iVar32 + 1;
              puVar46 = puVar19;
            } while (iVar32 != 0);
          }
          if (6 < uVar13 / 0x1fe) {
            pcVar26 = (char *)((long)puVar19 + 0x11);
            do {
              *(char *)puVar29 = -1;
              *(char *)((long)puVar29 + 1) = -1;
              pcVar26[-0xd] = -1;
              pcVar26[-0xc] = -1;
              *(char *)((long)puVar29 + 4) = -1;
              *(char *)((long)puVar29 + 5) = -1;
              pcVar26[-9] = -1;
              pcVar26[-8] = -1;
              *(char *)(puVar29 + 1) = -1;
              *(char *)((long)puVar29 + 9) = -1;
              pcVar26[-5] = -1;
              pcVar26[-4] = -1;
              *(char *)((long)puVar29 + 0xc) = -1;
              *(char *)((long)puVar29 + 0xd) = -1;
              pcVar26[-1] = -1;
              pcVar26[0] = -1;
              puVar29 = puVar29 + 2;
              uVar38 = uVar38 - 0xff0;
              pcVar26 = pcVar26 + 0x10;
            } while (0x1fd < uVar38);
          }
          uVar38 = uVar13 % 0x1fe;
        }
        if (0xfe < uVar38) {
          uVar38 = uVar38 - 0xff;
          *(char *)puVar29 = -1;
          puVar29 = (ulong *)((long)puVar29 + 1);
        }
        *(char *)puVar29 = (char)uVar38;
        puVar46 = (ulong *)((long)puVar29 + 1);
      }
      if (puVar27 < puVar31) goto LAB_1007493b7;
      *(int *)(param_1 + ((ulong)(*(long *)((long)puVar31 + -2) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc)) =
           ((int)puVar31 + -2) - iVar24;
      uVar34 = *puVar31 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
      lVar40 = (ulong)*(uint *)(param_1 + uVar34) - (ulong)uVar12;
      puVar29 = param_2;
      if (lVar40 < 0) {
        puVar29 = puVar28;
      }
      *(int *)(param_1 + uVar34) = (int)puVar31 - iVar24;
      if (((lVar40 < (long)-uVar20) || ((ulong *)((long)param_2 + lVar40 + 0xffff) < puVar31)) ||
         (uVar33 = lVar40 >> 0x3f & uVar17,
         *(int *)((long)param_2 + uVar33 + lVar40) != (int)*puVar31)) goto LAB_100748b3d;
      lVar40 = lVar40 + (long)param_2;
      puVar19 = (ulong *)((long)puVar46 + 1);
      *(char *)puVar46 = '\0';
      puVar41 = puVar31;
    } while( true );
  }
LAB_10074a2d3:
  iVar32 = 0;
  goto LAB_10074953f;
code_r0x000100748840:
  puVar30 = puVar30 + 1;
  puVar25 = puVar25 + 1;
  if ((ulong *)((long)puVar29 - 7U) <= puVar30) goto LAB_10074884d;
  goto LAB_100748835;
code_r0x000100748904:
  puVar25 = puVar25 + 1;
  puVar31 = puVar31 + 1;
  if (puVar27 <= puVar25) goto LAB_100748912;
  goto LAB_1007488f9;
code_r0x00010074878f:
  puVar29 = puVar29 + 1;
  puVar25 = puVar25 + 1;
  if (puVar27 <= puVar29) goto LAB_10074879d;
  goto LAB_100748780;
LAB_100748b3d:
  puVar29 = (ulong *)((long)puVar31 + 2);
  if (puVar27 < puVar29) goto LAB_1007493b7;
  goto LAB_10074848a;
}

