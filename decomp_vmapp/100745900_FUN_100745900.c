
int FUN_100745900(long param_1,ulong *param_2,ulong *param_3,uint param_4,uint param_5,uint param_6)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  char *pcVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  
  ___bzero(param_1,0x4020);
  uVar20 = 1;
  if (0 < (int)param_6) {
    uVar20 = param_6;
  }
  iVar11 = 0;
  if (param_4 < 0x7e000001) {
    iVar11 = param_4 + 0x10 + (int)param_4 / 0xff;
  }
  lVar3 = (long)(int)param_4;
  puVar17 = (ulong *)((long)param_2 + lVar3 + -0xc);
  puVar8 = (ulong *)((long)param_2 + lVar3 + -5);
  iVar23 = (int)param_2;
  sVar2 = (short)param_2;
  iVar24 = (int)param_3;
  if (iVar11 <= (int)param_5) {
    if (0x1000a < (int)param_4) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      *(undefined4 *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = 0;
      puVar18 = (ulong *)((long)param_2 + 2);
      puVar16 = param_2;
LAB_10074607d:
      uVar14 = *(ulong *)((long)puVar16 + 1);
      puVar12 = (ulong *)((long)puVar16 + 1);
      uVar21 = uVar20 & 0x3ffffff;
      uVar15 = uVar20 << 6 | 1;
      while( true ) {
        puVar5 = puVar18;
        uVar6 = uVar14 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
        uVar7 = *(uint *)(param_1 + uVar6);
        uVar14 = *puVar5;
        *(int *)(param_1 + uVar6) = (int)puVar12 - iVar23;
        if ((puVar12 <= (ulong *)((long)param_2 + (ulong)uVar7 + 0xffff)) &&
           (puVar18 = (ulong *)((long)param_2 + (ulong)uVar7), (int)*puVar18 == (int)*puVar12))
        break;
        uVar6 = (ulong)uVar21;
        uVar21 = uVar15 >> 6;
        puVar18 = (ulong *)(uVar6 + (long)puVar5);
        puVar12 = puVar5;
        uVar15 = uVar15 + 1;
        if (puVar17 < (ulong *)(uVar6 + (long)puVar5)) goto LAB_1007464f3;
      }
      if ((puVar16 < puVar12) && (uVar7 != 0)) {
        do {
          puVar4 = (ulong *)((long)puVar12 - 1);
          puVar5 = (ulong *)((long)puVar18 + -1);
          if (((char)*puVar4 != *(char *)puVar5) ||
             (puVar18 = puVar5, puVar12 = puVar4, puVar4 <= puVar16)) break;
        } while (param_2 < puVar5);
      }
      puVar5 = (ulong *)((long)param_3 + 1);
      uVar21 = (uint)((long)puVar12 - (long)puVar16);
      if (uVar21 < 0xf) {
        *(char *)param_3 = (char)(uVar21 << 4);
        puVar4 = puVar5;
        puVar5 = param_3;
      }
      else {
        uVar15 = uVar21 - 0xf;
        *(char *)param_3 = -0x10;
        if (0xfe < (int)uVar15) {
          uVar7 = ((int)puVar12 - (int)puVar16) - 0x10e;
          puVar4 = param_3;
          if ((uVar7 / 0xff + 1 & 7) != 0) {
            iVar11 = -((((int)puVar12 - (int)puVar16) - 0x10eU) / 0xff + 1 & 7);
            puVar9 = param_3;
            do {
              puVar4 = puVar5;
              puVar5 = (ulong *)((long)puVar9 + 2);
              *(char *)puVar4 = -1;
              uVar15 = uVar15 - 0xff;
              iVar11 = iVar11 + 1;
              puVar9 = puVar4;
            } while (iVar11 != 0);
          }
          if (6 < uVar7 / 0xff) {
            do {
              *(char *)puVar5 = -1;
              *(char *)((long)puVar4 + 2) = -1;
              *(char *)((long)puVar5 + 2) = -1;
              *(char *)((long)puVar4 + 4) = -1;
              *(char *)((long)puVar5 + 4) = -1;
              *(char *)((long)puVar4 + 6) = -1;
              *(char *)((long)puVar5 + 6) = -1;
              puVar5 = puVar5 + 1;
              *(char *)(puVar4 + 1) = -1;
              uVar15 = uVar15 - 0x7f8;
              puVar4 = puVar4 + 1;
            } while (0xfe < (int)uVar15);
          }
          uVar15 = (uVar21 - 0x10e) % 0xff;
        }
        *(char *)puVar5 = (char)uVar15;
        puVar4 = (ulong *)((long)puVar5 + 1);
      }
      puVar5 = (ulong *)(((long)puVar12 - (long)puVar16 & 0xffffffffU) + 1 + (long)puVar5);
      do {
        *puVar4 = *puVar16;
        puVar4 = puVar4 + 1;
        puVar16 = puVar16 + 1;
      } while (puVar4 < puVar5);
      do {
        *(short *)puVar5 = (short)puVar12 - (short)puVar18;
        puVar4 = (ulong *)((long)puVar12 + 4);
        puVar18 = (ulong *)((long)puVar18 + 4);
        puVar9 = puVar4;
        if (puVar4 < puVar17) {
LAB_1007462c0:
          if (*puVar18 == *puVar9) goto code_r0x0001007462cb;
          uVar6 = *puVar9 ^ *puVar18;
          uVar14 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
            }
          }
          puVar9 = (ulong *)((long)puVar9 + (uVar14 >> 3));
          goto LAB_10074632d;
        }
LAB_1007462d8:
        if ((puVar9 < (ulong *)(lVar3 + -8 + (long)param_2)) && ((int)*puVar18 == (int)*puVar9)) {
          puVar9 = (ulong *)((long)puVar9 + 4);
          puVar18 = (ulong *)((long)puVar18 + 4);
        }
        if ((puVar9 < (ulong *)(lVar3 + -6 + (long)param_2)) && ((short)*puVar18 == (short)*puVar9))
        {
          puVar9 = (ulong *)((long)puVar9 + 2);
          puVar18 = (ulong *)((long)puVar18 + 2);
        }
        if ((puVar9 < puVar8) && ((char)*puVar18 == (char)*puVar9)) {
          puVar9 = (ulong *)((long)puVar9 + 1);
        }
LAB_10074632d:
        puVar18 = (ulong *)((long)puVar5 + 2);
        uVar21 = (uint)((long)puVar9 - (long)puVar4);
        uVar14 = (ulong)(uVar21 + 4);
        puVar16 = (ulong *)((long)puVar12 + uVar14);
        if (uVar21 < 0xf) {
          *(char *)param_3 = (char)*param_3 + (char)((long)puVar9 - (long)puVar4);
          param_3 = puVar18;
        }
        else {
          *(char *)param_3 = (char)*param_3 + '\x0f';
          uVar15 = uVar21 - 0xf;
          if (0x1fd < uVar15) {
            if (((uVar21 - 0x20d) / 0x1fe + 1 & 7) != 0) {
              iVar11 = -((uVar21 - 0x20d) / 0x1fe + 1 & 7);
              puVar4 = puVar5;
              do {
                puVar5 = puVar18;
                *(undefined2 *)puVar5 = 0xffff;
                puVar18 = (ulong *)((long)puVar4 + 4);
                uVar15 = uVar15 - 0x1fe;
                iVar11 = iVar11 + 1;
                puVar4 = puVar5;
              } while (iVar11 != 0);
            }
            if (6 < (uVar21 - 0x20d) / 0x1fe) {
              pcVar22 = (char *)((long)puVar5 + 0x11);
              do {
                *(char *)puVar18 = -1;
                *(char *)((long)puVar18 + 1) = -1;
                pcVar22[-0xd] = -1;
                pcVar22[-0xc] = -1;
                *(char *)((long)puVar18 + 4) = -1;
                *(char *)((long)puVar18 + 5) = -1;
                pcVar22[-9] = -1;
                pcVar22[-8] = -1;
                *(char *)(puVar18 + 1) = -1;
                *(char *)((long)puVar18 + 9) = -1;
                pcVar22[-5] = -1;
                pcVar22[-4] = -1;
                *(char *)((long)puVar18 + 0xc) = -1;
                *(char *)((long)puVar18 + 0xd) = -1;
                pcVar22[-1] = -1;
                pcVar22[0] = -1;
                puVar18 = puVar18 + 2;
                uVar15 = uVar15 - 0xff0;
                pcVar22 = pcVar22 + 0x10;
              } while (0x1fd < uVar15);
            }
            uVar15 = (uVar21 - 0x20d) % 0x1fe;
          }
          if (0xfe < uVar15) {
            uVar15 = uVar15 - 0xff;
            *(char *)puVar18 = -1;
            puVar18 = (ulong *)((long)puVar18 + 1);
          }
          *(char *)puVar18 = (char)uVar15;
          param_3 = (ulong *)((long)puVar18 + 1);
        }
        if (puVar17 < puVar16) goto LAB_1007464f3;
        *(uint *)(param_1 +
                 ((ulong)(*(long *)((long)puVar12 + (uVar14 - 2)) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc))
             = ((int)puVar12 + -2 + uVar21 + 4) - iVar23;
        uVar6 = (ulong)(*(long *)((long)puVar12 + uVar14) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc;
        uVar13 = (ulong)*(uint *)(param_1 + uVar6);
        *(int *)(param_1 + uVar6) = (int)puVar16 - iVar23;
        if (((ulong *)((long)param_2 + uVar13 + 0xffff) < puVar16) ||
           (puVar18 = (ulong *)(uVar13 + (long)param_2), (int)*puVar18 != (int)*puVar16))
        goto LAB_1007464de;
        puVar5 = (ulong *)((long)param_3 + 1);
        *(char *)param_3 = '\0';
        puVar12 = puVar16;
      } while( true );
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    puVar18 = param_2;
    if (((int)param_4 < 0xd) ||
       (*(undefined2 *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffe)) = 0, lVar3 + -0xc < 2)
       ) {
LAB_100747117:
      uVar14 = (long)param_2 + (lVar3 - (long)puVar18);
      if (uVar14 < 0xf) {
        *(char *)param_3 = (char)uVar14 * '\x10';
      }
      else {
        uVar6 = uVar14 - 0xf;
        *(char *)param_3 = -0x10;
        puVar17 = (ulong *)((long)param_3 + 1);
        if (0xfe < uVar6) {
          do {
            puVar8 = puVar17;
            *(char *)puVar8 = -1;
            uVar6 = uVar6 - 0xff;
            puVar17 = (ulong *)((long)param_3 + 2);
            param_3 = puVar8;
          } while (0xfe < uVar6);
          uVar6 = (ulong)((long)param_2 + ((lVar3 + -0x10e) - (long)puVar18)) % 0xff;
        }
        *(char *)puVar17 = (char)uVar6;
        param_3 = puVar17;
      }
      _memcpy((char *)((long)param_3 + 1),puVar18,uVar14);
      return ((int)uVar14 + 1 + (int)param_3) - iVar24;
    }
    puVar16 = (ulong *)((long)param_2 + 2);
LAB_100746b5a:
    uVar14 = *(ulong *)((long)puVar18 + 1);
    puVar12 = (ulong *)((long)puVar18 + 1);
    uVar21 = uVar20 & 0x3ffffff;
    uVar15 = uVar20 << 6 | 1;
    while( true ) {
      puVar5 = puVar16;
      uVar6 = uVar14 * 0xcf1bbcdcbb >> 0x1a & 0x3ffe;
      uVar1 = *(ushort *)(param_1 + uVar6);
      uVar14 = *puVar5;
      *(short *)(param_1 + uVar6) = (short)puVar12 - sVar2;
      if (*(int *)((long)param_2 + (ulong)uVar1) == (int)*puVar12) break;
      uVar6 = (ulong)uVar21;
      uVar21 = uVar15 >> 6;
      puVar16 = (ulong *)(uVar6 + (long)puVar5);
      puVar12 = puVar5;
      uVar15 = uVar15 + 1;
      if (puVar17 < (ulong *)(uVar6 + (long)puVar5)) goto LAB_100747117;
    }
    puVar16 = (ulong *)((long)param_2 + (ulong)uVar1);
    if ((puVar18 < puVar12) && (uVar1 != 0)) {
      while( true ) {
        puVar4 = (ulong *)((long)puVar12 - 1);
        puVar5 = (ulong *)((long)puVar16 + -1);
        if ((char)*puVar4 != *(char *)puVar5) break;
        puVar16 = puVar5;
        puVar12 = puVar4;
        if ((puVar4 <= puVar18) || (puVar5 <= param_2)) break;
      }
    }
    puVar5 = (ulong *)((long)param_3 + 1);
    uVar21 = (uint)((long)puVar12 - (long)puVar18);
    if (uVar21 < 0xf) {
      *(char *)param_3 = (char)(uVar21 << 4);
      puVar4 = puVar5;
      puVar5 = param_3;
    }
    else {
      uVar15 = uVar21 - 0xf;
      *(char *)param_3 = -0x10;
      if (0xfe < (int)uVar15) {
        uVar7 = ((int)puVar12 - (int)puVar18) - 0x10e;
        puVar4 = param_3;
        if ((uVar7 / 0xff + 1 & 7) != 0) {
          iVar11 = -((((int)puVar12 - (int)puVar18) - 0x10eU) / 0xff + 1 & 7);
          puVar9 = param_3;
          do {
            puVar4 = puVar5;
            puVar5 = (ulong *)((long)puVar9 + 2);
            *(char *)puVar4 = -1;
            uVar15 = uVar15 - 0xff;
            iVar11 = iVar11 + 1;
            puVar9 = puVar4;
          } while (iVar11 != 0);
        }
        if (6 < uVar7 / 0xff) {
          do {
            *(char *)puVar5 = -1;
            *(char *)((long)puVar4 + 2) = -1;
            *(char *)((long)puVar5 + 2) = -1;
            *(char *)((long)puVar4 + 4) = -1;
            *(char *)((long)puVar5 + 4) = -1;
            *(char *)((long)puVar4 + 6) = -1;
            *(char *)((long)puVar5 + 6) = -1;
            puVar5 = puVar5 + 1;
            *(char *)(puVar4 + 1) = -1;
            uVar15 = uVar15 - 0x7f8;
            puVar4 = puVar4 + 1;
          } while (0xfe < (int)uVar15);
        }
        uVar15 = (uVar21 - 0x10e) % 0xff;
      }
      *(char *)puVar5 = (char)uVar15;
      puVar4 = (ulong *)((long)puVar5 + 1);
    }
    puVar5 = (ulong *)(((long)puVar12 - (long)puVar18 & 0xffffffffU) + 1 + (long)puVar5);
    do {
      *puVar4 = *puVar18;
      puVar4 = puVar4 + 1;
      puVar18 = puVar18 + 1;
    } while (puVar4 < puVar5);
    do {
      *(short *)puVar5 = (short)puVar12 - (short)puVar16;
      puVar4 = (ulong *)((long)puVar12 + 4);
      puVar16 = (ulong *)((long)puVar16 + 4);
      puVar9 = puVar4;
      if (puVar4 < puVar17) {
LAB_100746d90:
        if (*puVar16 == *puVar9) goto code_r0x000100746d9b;
        uVar6 = *puVar9 ^ *puVar16;
        uVar14 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        puVar9 = (ulong *)((long)puVar9 + (uVar14 >> 3));
        goto LAB_100746dfa;
      }
LAB_100746da8:
      if ((puVar9 < (ulong *)(lVar3 + -8 + (long)param_2)) && ((int)*puVar16 == (int)*puVar9)) {
        puVar9 = (ulong *)((long)puVar9 + 4);
        puVar16 = (ulong *)((long)puVar16 + 4);
      }
      if ((puVar9 < (ulong *)(lVar3 + -6 + (long)param_2)) && ((short)*puVar16 == (short)*puVar9)) {
        puVar9 = (ulong *)((long)puVar9 + 2);
        puVar16 = (ulong *)((long)puVar16 + 2);
      }
      if ((puVar9 < puVar8) && ((char)*puVar16 == (char)*puVar9)) {
        puVar9 = (ulong *)((long)puVar9 + 1);
      }
LAB_100746dfa:
      puVar16 = (ulong *)((long)puVar5 + 2);
      uVar21 = (uint)((long)puVar9 - (long)puVar4);
      uVar14 = (ulong)(uVar21 + 4);
      puVar18 = (ulong *)((long)puVar12 + uVar14);
      if (uVar21 < 0xf) {
        *(char *)param_3 = (char)*param_3 + (char)((long)puVar9 - (long)puVar4);
        param_3 = puVar16;
      }
      else {
        *(char *)param_3 = (char)*param_3 + '\x0f';
        uVar15 = uVar21 - 0xf;
        if (0x1fd < uVar15) {
          if (((uVar21 - 0x20d) / 0x1fe + 1 & 7) != 0) {
            iVar11 = -((uVar21 - 0x20d) / 0x1fe + 1 & 7);
            puVar4 = puVar5;
            do {
              puVar5 = puVar16;
              *(undefined2 *)puVar5 = 0xffff;
              puVar16 = (ulong *)((long)puVar4 + 4);
              uVar15 = uVar15 - 0x1fe;
              iVar11 = iVar11 + 1;
              puVar4 = puVar5;
            } while (iVar11 != 0);
          }
          if (6 < (uVar21 - 0x20d) / 0x1fe) {
            pcVar22 = (char *)((long)puVar5 + 0x11);
            do {
              *(char *)puVar16 = -1;
              *(char *)((long)puVar16 + 1) = -1;
              pcVar22[-0xd] = -1;
              pcVar22[-0xc] = -1;
              *(char *)((long)puVar16 + 4) = -1;
              *(char *)((long)puVar16 + 5) = -1;
              pcVar22[-9] = -1;
              pcVar22[-8] = -1;
              *(char *)(puVar16 + 1) = -1;
              *(char *)((long)puVar16 + 9) = -1;
              pcVar22[-5] = -1;
              pcVar22[-4] = -1;
              *(char *)((long)puVar16 + 0xc) = -1;
              *(char *)((long)puVar16 + 0xd) = -1;
              pcVar22[-1] = -1;
              pcVar22[0] = -1;
              puVar16 = puVar16 + 2;
              uVar15 = uVar15 - 0xff0;
              pcVar22 = pcVar22 + 0x10;
            } while (0x1fd < uVar15);
          }
          uVar15 = (uVar21 - 0x20d) % 0x1fe;
        }
        if (0xfe < uVar15) {
          uVar15 = uVar15 - 0xff;
          *(char *)puVar16 = -1;
          puVar16 = (ulong *)((long)puVar16 + 1);
        }
        *(char *)puVar16 = (char)uVar15;
        param_3 = (ulong *)((long)puVar16 + 1);
      }
      if (puVar17 < puVar18) goto LAB_100747117;
      *(short *)(param_1 +
                ((ulong)(*(long *)((long)puVar12 + (uVar14 - 2)) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffe))
           = ((short)puVar12 + -2 + (short)(uVar21 + 4)) - sVar2;
      uVar6 = (ulong)(*(long *)((long)puVar12 + uVar14) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffe;
      uVar13 = (ulong)*(ushort *)(param_1 + uVar6);
      *(short *)(param_1 + uVar6) = (short)puVar18 - sVar2;
      if (((ulong *)((long)param_2 + uVar13 + 0xffff) < puVar18) ||
         (puVar16 = (ulong *)(uVar13 + (long)param_2), (int)*puVar16 != (int)*puVar18))
      goto LAB_100746fae;
      puVar5 = (ulong *)((long)param_3 + 1);
      *(char *)param_3 = '\0';
      puVar12 = puVar18;
    } while( true );
  }
  pcVar22 = (char *)((long)(int)param_5 + (long)param_3);
  if (0x1000a < (int)param_4) {
    if (0x7e000000 < param_4) {
      return 0;
    }
    *(undefined4 *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = 0;
    puVar18 = (ulong *)((long)param_2 + 2);
    puVar16 = param_2;
    puVar12 = param_3;
LAB_100745a72:
    uVar14 = *(ulong *)((long)puVar16 + 1);
    puVar5 = (ulong *)((long)puVar16 + 1);
    uVar15 = uVar20 << 6 | 1;
    uVar21 = uVar20 & 0x3ffffff;
    while( true ) {
      puVar4 = puVar18;
      uVar13 = (ulong)uVar21;
      uVar6 = uVar14 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
      uVar21 = *(uint *)(param_1 + uVar6);
      uVar14 = *puVar4;
      *(int *)(param_1 + uVar6) = (int)puVar5 - iVar23;
      if ((puVar5 <= (ulong *)((long)param_2 + (ulong)uVar21 + 0xffff)) &&
         (puVar18 = (ulong *)((long)param_2 + (ulong)uVar21), (int)*puVar18 == (int)*puVar5)) break;
      uVar21 = uVar15 >> 6;
      puVar18 = (ulong *)(uVar13 + (long)puVar4);
      puVar5 = puVar4;
      uVar15 = uVar15 + 1;
      if (puVar17 < (ulong *)(uVar13 + (long)puVar4)) goto LAB_100745f5e;
    }
    if ((puVar16 < puVar5) && (uVar21 != 0)) {
      do {
        puVar9 = (ulong *)((long)puVar5 - 1);
        puVar4 = (ulong *)((long)puVar18 + -1);
        if (((char)*puVar9 != *(char *)puVar4) ||
           (puVar18 = puVar4, puVar5 = puVar9, puVar9 <= puVar16)) break;
      } while (param_2 < puVar4);
    }
    uVar14 = (long)puVar5 - (long)puVar16;
    uVar21 = (uint)uVar14;
    if (pcVar22 < (char *)((long)puVar12 + (uVar14 & 0xffffffff) / 0xff + (uVar14 & 0xffffffff) + 9)
       ) {
      return 0;
    }
    puVar4 = (ulong *)((long)puVar12 + 1);
    if (uVar21 < 0xf) {
      *(char *)puVar12 = (char)(uVar21 << 4);
      puVar9 = puVar12;
    }
    else {
      uVar15 = uVar21 - 0xf;
      *(char *)puVar12 = -0x10;
      if (0xfe < (int)uVar15) {
        uVar7 = ((int)puVar5 - (int)puVar16) - 0x10e;
        puVar9 = puVar12;
        if ((uVar7 / 0xff + 1 & 7) != 0) {
          iVar11 = -((((int)puVar5 - (int)puVar16) - 0x10eU) / 0xff + 1 & 7);
          puVar19 = puVar12;
          do {
            puVar9 = puVar4;
            puVar4 = (ulong *)((long)puVar19 + 2);
            *(char *)puVar9 = -1;
            uVar15 = uVar15 - 0xff;
            iVar11 = iVar11 + 1;
            puVar19 = puVar9;
          } while (iVar11 != 0);
        }
        if (6 < uVar7 / 0xff) {
          do {
            *(char *)puVar4 = -1;
            *(char *)((long)puVar9 + 2) = -1;
            *(char *)((long)puVar4 + 2) = -1;
            *(char *)((long)puVar9 + 4) = -1;
            *(char *)((long)puVar4 + 4) = -1;
            *(char *)((long)puVar9 + 6) = -1;
            *(char *)((long)puVar4 + 6) = -1;
            puVar4 = puVar4 + 1;
            *(char *)(puVar9 + 1) = -1;
            uVar15 = uVar15 - 0x7f8;
            puVar9 = puVar9 + 1;
          } while (0xfe < (int)uVar15);
        }
        uVar15 = (uVar21 - 0x10e) % 0xff;
      }
      *(char *)puVar4 = (char)uVar15;
      puVar9 = puVar4;
      puVar4 = (ulong *)((long)puVar4 + 1);
    }
    puVar9 = (ulong *)((uVar14 & 0xffffffff) + 1 + (long)puVar9);
    do {
      *puVar4 = *puVar16;
      puVar4 = puVar4 + 1;
      puVar16 = puVar16 + 1;
    } while (puVar4 < puVar9);
    do {
      *(short *)puVar9 = (short)puVar5 - (short)puVar18;
      puVar16 = (ulong *)((long)puVar5 + 4);
      puVar18 = (ulong *)((long)puVar18 + 4);
      puVar4 = puVar16;
      if (puVar16 < puVar17) {
LAB_100745d10:
        if (*puVar18 == *puVar4) goto code_r0x000100745d1b;
        uVar6 = *puVar4 ^ *puVar18;
        uVar14 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        puVar4 = (ulong *)((long)puVar4 + (uVar14 >> 3));
        goto LAB_100745d7a;
      }
LAB_100745d28:
      if ((puVar4 < (ulong *)(lVar3 + -8 + (long)param_2)) && ((int)*puVar18 == (int)*puVar4)) {
        puVar4 = (ulong *)((long)puVar4 + 4);
        puVar18 = (ulong *)((long)puVar18 + 4);
      }
      if ((puVar4 < (ulong *)(lVar3 + -6 + (long)param_2)) && ((short)*puVar18 == (short)*puVar4)) {
        puVar4 = (ulong *)((long)puVar4 + 2);
        puVar18 = (ulong *)((long)puVar18 + 2);
      }
      if ((puVar4 < puVar8) && ((char)*puVar18 == (char)*puVar4)) {
        puVar4 = (ulong *)((long)puVar4 + 1);
      }
LAB_100745d7a:
      uVar14 = (long)puVar4 - (long)puVar16;
      uVar21 = (uint)uVar14;
      if (pcVar22 < (char *)((uVar14 >> 8 & 0xffffff) + 8 + (long)puVar9)) {
        return 0;
      }
      puVar18 = (ulong *)((long)puVar9 + 2);
      uVar6 = (ulong)(uVar21 + 4);
      puVar16 = (ulong *)((long)puVar5 + uVar6);
      if (uVar21 < 0xf) {
        *(char *)puVar12 = (char)*puVar12 + (char)uVar14;
        puVar12 = puVar18;
      }
      else {
        *(char *)puVar12 = (char)*puVar12 + '\x0f';
        uVar15 = uVar21 - 0xf;
        if (0x1fd < uVar15) {
          if (((uVar21 - 0x20d) / 0x1fe + 1 & 7) != 0) {
            iVar11 = -((uVar21 - 0x20d) / 0x1fe + 1 & 7);
            puVar12 = puVar9;
            do {
              puVar9 = puVar18;
              *(undefined2 *)puVar9 = 0xffff;
              puVar18 = (ulong *)((long)puVar12 + 4);
              uVar15 = uVar15 - 0x1fe;
              iVar11 = iVar11 + 1;
              puVar12 = puVar9;
            } while (iVar11 != 0);
          }
          if (6 < (uVar21 - 0x20d) / 0x1fe) {
            pcVar10 = (char *)((long)puVar9 + 0x11);
            do {
              *(char *)puVar18 = -1;
              *(char *)((long)puVar18 + 1) = -1;
              pcVar10[-0xd] = -1;
              pcVar10[-0xc] = -1;
              *(char *)((long)puVar18 + 4) = -1;
              *(char *)((long)puVar18 + 5) = -1;
              pcVar10[-9] = -1;
              pcVar10[-8] = -1;
              *(char *)(puVar18 + 1) = -1;
              *(char *)((long)puVar18 + 9) = -1;
              pcVar10[-5] = -1;
              pcVar10[-4] = -1;
              *(char *)((long)puVar18 + 0xc) = -1;
              *(char *)((long)puVar18 + 0xd) = -1;
              pcVar10[-1] = -1;
              pcVar10[0] = -1;
              puVar18 = puVar18 + 2;
              uVar15 = uVar15 - 0xff0;
              pcVar10 = pcVar10 + 0x10;
            } while (0x1fd < uVar15);
          }
          uVar15 = (uVar21 - 0x20d) % 0x1fe;
        }
        if (0xfe < uVar15) {
          uVar15 = uVar15 - 0xff;
          *(char *)puVar18 = -1;
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        *(char *)puVar18 = (char)uVar15;
        puVar12 = (ulong *)((long)puVar18 + 1);
      }
      if (puVar17 < puVar16) goto LAB_100745f5e;
      *(uint *)(param_1 +
               ((ulong)(*(long *)((long)puVar5 + (uVar6 - 2)) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc)) =
           ((int)puVar5 + -2 + uVar21 + 4) - iVar23;
      uVar14 = (ulong)(*(long *)((long)puVar5 + uVar6) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc;
      uVar13 = (ulong)*(uint *)(param_1 + uVar14);
      *(int *)(param_1 + uVar14) = (int)puVar16 - iVar23;
      if (((ulong *)((long)param_2 + uVar13 + 0xffff) < puVar16) ||
         (puVar18 = (ulong *)(uVar13 + (long)param_2), (int)*puVar18 != (int)*puVar16))
      goto LAB_100745f4a;
      puVar9 = (ulong *)((long)puVar12 + 1);
      *(char *)puVar12 = '\0';
      puVar5 = puVar16;
    } while( true );
  }
  if (0x7e000000 < param_4) {
    return 0;
  }
  puVar18 = param_2;
  puVar16 = param_3;
  if ((0xc < (int)param_4) &&
     (*(undefined2 *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffe)) = 0, 1 < lVar3 + -0xc))
  {
    puVar12 = (ulong *)((long)param_2 + 2);
LAB_1007465e5:
    uVar14 = *(ulong *)((long)puVar18 + 1);
    puVar5 = (ulong *)((long)puVar18 + 1);
    uVar21 = uVar20 << 6 | 1;
    uVar15 = uVar20 & 0x3ffffff;
    while( true ) {
      puVar4 = puVar12;
      uVar13 = (ulong)uVar15;
      uVar6 = uVar14 * 0xcf1bbcdcbb >> 0x1a & 0x3ffe;
      uVar1 = *(ushort *)(param_1 + uVar6);
      uVar14 = *puVar4;
      *(short *)(param_1 + uVar6) = (short)puVar5 - sVar2;
      if (*(int *)((long)param_2 + (ulong)uVar1) == (int)*puVar5) break;
      uVar15 = uVar21 >> 6;
      puVar12 = (ulong *)(uVar13 + (long)puVar4);
      puVar5 = puVar4;
      uVar21 = uVar21 + 1;
      if (puVar17 < (ulong *)(uVar13 + (long)puVar4)) goto LAB_100746fe6;
    }
    puVar12 = (ulong *)((long)param_2 + (ulong)uVar1);
    if ((puVar18 < puVar5) && (uVar1 != 0)) {
      while( true ) {
        puVar9 = (ulong *)((long)puVar5 - 1);
        puVar4 = (ulong *)((long)puVar12 + -1);
        if ((char)*puVar9 != *(char *)puVar4) break;
        puVar12 = puVar4;
        puVar5 = puVar9;
        if ((puVar9 <= puVar18) || (puVar4 <= param_2)) break;
      }
    }
    uVar14 = (long)puVar5 - (long)puVar18;
    uVar21 = (uint)uVar14;
    if (pcVar22 < (char *)((long)puVar16 + (uVar14 & 0xffffffff) / 0xff + (uVar14 & 0xffffffff) + 9)
       ) {
      return 0;
    }
    puVar4 = (ulong *)((long)puVar16 + 1);
    if (uVar21 < 0xf) {
      *(char *)puVar16 = (char)(uVar21 << 4);
      puVar9 = puVar16;
    }
    else {
      uVar15 = uVar21 - 0xf;
      *(char *)puVar16 = -0x10;
      if (0xfe < (int)uVar15) {
        uVar7 = ((int)puVar5 - (int)puVar18) - 0x10e;
        puVar9 = puVar16;
        if ((uVar7 / 0xff + 1 & 7) != 0) {
          iVar11 = -((((int)puVar5 - (int)puVar18) - 0x10eU) / 0xff + 1 & 7);
          puVar19 = puVar16;
          do {
            puVar9 = puVar4;
            puVar4 = (ulong *)((long)puVar19 + 2);
            *(char *)puVar9 = -1;
            uVar15 = uVar15 - 0xff;
            iVar11 = iVar11 + 1;
            puVar19 = puVar9;
          } while (iVar11 != 0);
        }
        if (6 < uVar7 / 0xff) {
          do {
            *(char *)puVar4 = -1;
            *(char *)((long)puVar9 + 2) = -1;
            *(char *)((long)puVar4 + 2) = -1;
            *(char *)((long)puVar9 + 4) = -1;
            *(char *)((long)puVar4 + 4) = -1;
            *(char *)((long)puVar9 + 6) = -1;
            *(char *)((long)puVar4 + 6) = -1;
            puVar4 = puVar4 + 1;
            *(char *)(puVar9 + 1) = -1;
            uVar15 = uVar15 - 0x7f8;
            puVar9 = puVar9 + 1;
          } while (0xfe < (int)uVar15);
        }
        uVar15 = (uVar21 - 0x10e) % 0xff;
      }
      *(char *)puVar4 = (char)uVar15;
      puVar9 = puVar4;
      puVar4 = (ulong *)((long)puVar4 + 1);
    }
    puVar9 = (ulong *)((uVar14 & 0xffffffff) + 1 + (long)puVar9);
    do {
      *puVar4 = *puVar18;
      puVar4 = puVar4 + 1;
      puVar18 = puVar18 + 1;
    } while (puVar4 < puVar9);
    do {
      *(short *)puVar9 = (short)puVar5 - (short)puVar12;
      puVar18 = (ulong *)((long)puVar5 + 4);
      puVar12 = (ulong *)((long)puVar12 + 4);
      puVar4 = puVar18;
      if (puVar18 < puVar17) {
LAB_100746870:
        if (*puVar12 == *puVar4) goto code_r0x00010074687b;
        uVar6 = *puVar4 ^ *puVar12;
        uVar14 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        uVar14 = (long)puVar4 + ((uVar14 >> 3) - (long)puVar18);
        goto LAB_1007468e6;
      }
LAB_100746888:
      if ((puVar4 < (ulong *)(lVar3 + -8 + (long)param_2)) && ((int)*puVar12 == (int)*puVar4)) {
        puVar4 = (ulong *)((long)puVar4 + 4);
        puVar12 = (ulong *)((long)puVar12 + 4);
      }
      if ((puVar4 < (ulong *)(lVar3 + -6 + (long)param_2)) && ((short)*puVar12 == (short)*puVar4)) {
        puVar4 = (ulong *)((long)puVar4 + 2);
        puVar12 = (ulong *)((long)puVar12 + 2);
      }
      if ((puVar4 < puVar8) && ((char)*puVar12 == (char)*puVar4)) {
        puVar4 = (ulong *)((long)puVar4 + 1);
      }
      uVar14 = (long)puVar4 - (long)puVar18;
LAB_1007468e6:
      uVar21 = (uint)uVar14;
      if (pcVar22 < (char *)((uVar14 >> 8 & 0xffffff) + 8 + (long)puVar9)) {
        return 0;
      }
      puVar12 = (ulong *)((long)puVar9 + 2);
      uVar6 = (ulong)(uVar21 + 4);
      puVar18 = (ulong *)((long)puVar5 + uVar6);
      if (uVar21 < 0xf) {
        *(char *)puVar16 = (char)*puVar16 + (char)uVar14;
        puVar16 = puVar12;
      }
      else {
        *(char *)puVar16 = (char)*puVar16 + '\x0f';
        uVar15 = uVar21 - 0xf;
        if (0x1fd < uVar15) {
          if (((uVar21 - 0x20d) / 0x1fe + 1 & 7) != 0) {
            iVar11 = -((uVar21 - 0x20d) / 0x1fe + 1 & 7);
            puVar16 = puVar9;
            do {
              puVar9 = puVar12;
              *(undefined2 *)puVar9 = 0xffff;
              puVar12 = (ulong *)((long)puVar16 + 4);
              uVar15 = uVar15 - 0x1fe;
              iVar11 = iVar11 + 1;
              puVar16 = puVar9;
            } while (iVar11 != 0);
          }
          if (6 < (uVar21 - 0x20d) / 0x1fe) {
            pcVar10 = (char *)((long)puVar9 + 0x11);
            do {
              *(char *)puVar12 = -1;
              *(char *)((long)puVar12 + 1) = -1;
              pcVar10[-0xd] = -1;
              pcVar10[-0xc] = -1;
              *(char *)((long)puVar12 + 4) = -1;
              *(char *)((long)puVar12 + 5) = -1;
              pcVar10[-9] = -1;
              pcVar10[-8] = -1;
              *(char *)(puVar12 + 1) = -1;
              *(char *)((long)puVar12 + 9) = -1;
              pcVar10[-5] = -1;
              pcVar10[-4] = -1;
              *(char *)((long)puVar12 + 0xc) = -1;
              *(char *)((long)puVar12 + 0xd) = -1;
              pcVar10[-1] = -1;
              pcVar10[0] = -1;
              puVar12 = puVar12 + 2;
              uVar15 = uVar15 - 0xff0;
              pcVar10 = pcVar10 + 0x10;
            } while (0x1fd < uVar15);
          }
          uVar15 = (uVar21 - 0x20d) % 0x1fe;
        }
        if (0xfe < uVar15) {
          uVar15 = uVar15 - 0xff;
          *(char *)puVar12 = -1;
          puVar12 = (ulong *)((long)puVar12 + 1);
        }
        *(char *)puVar12 = (char)uVar15;
        puVar16 = (ulong *)((long)puVar12 + 1);
      }
      if (puVar17 < puVar18) break;
      *(short *)(param_1 +
                ((ulong)(*(long *)((long)puVar5 + (uVar6 - 2)) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffe)) =
           ((short)puVar5 + -2 + (short)(uVar21 + 4)) - sVar2;
      uVar14 = (ulong)(*(long *)((long)puVar5 + uVar6) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffe;
      uVar13 = (ulong)*(ushort *)(param_1 + uVar14);
      *(short *)(param_1 + uVar14) = (short)puVar18 - sVar2;
      if (((ulong *)((long)param_2 + uVar13 + 0xffff) < puVar18) ||
         (puVar12 = (ulong *)(uVar13 + (long)param_2), (int)*puVar12 != (int)*puVar18))
      goto LAB_100746ad4;
      puVar9 = (ulong *)((long)puVar16 + 1);
      *(char *)puVar16 = '\0';
      puVar5 = puVar18;
    } while( true );
  }
LAB_100746fe6:
  uVar14 = (long)param_2 + (lVar3 - (long)puVar18);
  if ((char *)(ulong)param_5 <
      (char *)((long)puVar16 + uVar14 + (uVar14 + 0xf0) / 0xff + (1 - (long)param_3))) {
    return 0;
  }
  if (uVar14 < 0xf) {
    *(char *)puVar16 = (char)uVar14 * '\x10';
  }
  else {
    uVar6 = uVar14 - 0xf;
    *(char *)puVar16 = -0x10;
    puVar17 = (ulong *)((long)puVar16 + 1);
    if (0xfe < uVar6) {
      do {
        puVar8 = puVar17;
        *(char *)puVar8 = -1;
        uVar6 = uVar6 - 0xff;
        puVar17 = (ulong *)((long)puVar16 + 2);
        puVar16 = puVar8;
      } while (0xfe < uVar6);
      uVar6 = (ulong)((long)param_2 + ((lVar3 + -0x10e) - (long)puVar18)) % 0xff;
    }
    *(char *)puVar17 = (char)uVar6;
    puVar16 = puVar17;
  }
  _memcpy((char *)((long)puVar16 + 1),puVar18,uVar14);
  iVar11 = (int)uVar14 + 1 + (int)puVar16;
LAB_1007470fa:
  return iVar11 - iVar24;
code_r0x0001007462cb:
  puVar9 = puVar9 + 1;
  puVar18 = puVar18 + 1;
  if (puVar17 <= puVar9) goto LAB_1007462d8;
  goto LAB_1007462c0;
LAB_1007464de:
  puVar18 = (ulong *)(uVar14 + 2 + (long)puVar12);
  if (puVar17 < puVar18) {
LAB_1007464f3:
    uVar14 = (long)param_2 + (lVar3 - (long)puVar16);
    if (uVar14 < 0xf) {
      *(char *)param_3 = (char)uVar14 * '\x10';
    }
    else {
      uVar6 = uVar14 - 0xf;
      *(char *)param_3 = -0x10;
      puVar17 = (ulong *)((long)param_3 + 1);
      if (0xfe < uVar6) {
        do {
          puVar8 = puVar17;
          *(char *)puVar8 = -1;
          uVar6 = uVar6 - 0xff;
          puVar17 = (ulong *)((long)param_3 + 2);
          param_3 = puVar8;
        } while (0xfe < uVar6);
        uVar6 = (ulong)((long)param_2 + ((lVar3 + -0x10e) - (long)puVar16)) % 0xff;
      }
      *(char *)puVar17 = (char)uVar6;
      param_3 = puVar17;
    }
    _memcpy((char *)((long)param_3 + 1),puVar16,uVar14);
    return ((int)uVar14 + 1 + (int)param_3) - iVar24;
  }
  goto LAB_10074607d;
code_r0x000100746d9b:
  puVar9 = puVar9 + 1;
  puVar16 = puVar16 + 1;
  if (puVar17 <= puVar9) goto LAB_100746da8;
  goto LAB_100746d90;
LAB_100746fae:
  puVar16 = (ulong *)(uVar14 + 2 + (long)puVar12);
  if (puVar17 < puVar16) goto LAB_100747117;
  goto LAB_100746b5a;
code_r0x000100745d1b:
  puVar4 = puVar4 + 1;
  puVar18 = puVar18 + 1;
  if (puVar17 <= puVar4) goto LAB_100745d28;
  goto LAB_100745d10;
LAB_100745f4a:
  puVar18 = (ulong *)(uVar6 + 2 + (long)puVar5);
  if (puVar17 < puVar18) goto LAB_100745f5e;
  goto LAB_100745a72;
LAB_100745f5e:
  uVar14 = (long)param_2 + (lVar3 - (long)puVar16);
  if ((char *)(ulong)param_5 <
      (char *)((long)puVar12 + uVar14 + (uVar14 + 0xf0) / 0xff + (1 - (long)param_3))) {
    return 0;
  }
  if (uVar14 < 0xf) {
    *(char *)puVar12 = (char)uVar14 * '\x10';
  }
  else {
    uVar6 = uVar14 - 0xf;
    *(char *)puVar12 = -0x10;
    puVar17 = (ulong *)((long)puVar12 + 1);
    if (0xfe < uVar6) {
      do {
        puVar8 = puVar17;
        *(char *)puVar8 = -1;
        uVar6 = uVar6 - 0xff;
        puVar17 = (ulong *)((long)puVar12 + 2);
        puVar12 = puVar8;
      } while (0xfe < uVar6);
      uVar6 = (ulong)((long)param_2 + ((lVar3 + -0x10e) - (long)puVar16)) % 0xff;
    }
    *(char *)puVar17 = (char)uVar6;
    puVar12 = puVar17;
  }
  _memcpy((char *)((long)puVar12 + 1),puVar16,uVar14);
  iVar11 = (int)uVar14 + 1 + (int)puVar12;
  goto LAB_1007470fa;
code_r0x00010074687b:
  puVar4 = puVar4 + 1;
  puVar12 = puVar12 + 1;
  if (puVar17 <= puVar4) goto LAB_100746888;
  goto LAB_100746870;
LAB_100746ad4:
  puVar12 = (ulong *)(uVar6 + 2 + (long)puVar5);
  if (puVar17 < puVar12) goto LAB_100746fe6;
  goto LAB_1007465e5;
}

