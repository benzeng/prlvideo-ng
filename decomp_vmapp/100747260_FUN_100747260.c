
int FUN_100747260(ulong *param_1,ulong *param_2,uint param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  char *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong *puVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  int iVar21;
  uint uVar22;
  uint local_4058 [4105];
  short local_32;
  
  ___bzero(local_4058,0x4020);
  lVar7 = (long)(int)param_3;
  puVar18 = (ulong *)((long)param_1 + lVar7 + -0xc);
  puVar17 = (ulong *)((long)param_1 + lVar7 + -5);
  pcVar10 = (char *)((long)(int)param_4 + (long)param_2);
  iVar16 = 0;
  iVar21 = (int)param_1;
  if ((int)param_3 < 0x1000b) {
    iVar16 = 0;
    if (param_3 < 0x7e000001) {
      puVar20 = param_1;
      puVar15 = param_2;
      if ((0xc < (int)param_3) &&
         (*(undefined2 *)((long)local_4058 + (*param_1 * 0xcf1bbcdcbb >> 0x1a & 0x3ffe)) = 0,
         1 < lVar7 + -0xc)) {
        puVar8 = (ulong *)((long)param_1 + 2);
LAB_100747976:
        uVar14 = *(ulong *)((long)puVar20 + 1);
        puVar19 = (ulong *)((long)puVar20 + 1);
        uVar6 = param_5 << 6 | 1;
        uVar22 = param_5 & 0x3ffffff;
        while( true ) {
          puVar4 = puVar8;
          uVar9 = (ulong)uVar22;
          uVar5 = uVar14 * 0xcf1bbcdcbb >> 0x1a & 0x3ffe;
          uVar1 = *(ushort *)((long)local_4058 + uVar5);
          uVar14 = *puVar4;
          sVar2 = (short)param_1;
          *(short *)((long)local_4058 + uVar5) = (short)puVar19 - sVar2;
          if (*(int *)((long)param_1 + (ulong)uVar1) == (int)*puVar19) break;
          uVar22 = uVar6 >> 6;
          puVar8 = (ulong *)(uVar9 + (long)puVar4);
          puVar19 = puVar4;
          uVar6 = uVar6 + 1;
          if (puVar18 < (ulong *)(uVar9 + (long)puVar4)) goto LAB_100747ebb;
        }
        puVar8 = (ulong *)((long)param_1 + (ulong)uVar1);
        if ((puVar20 < puVar19) && (uVar1 != 0)) {
          while( true ) {
            puVar11 = (ulong *)((long)puVar19 - 1);
            puVar4 = (ulong *)((long)puVar8 + -1);
            if ((char)*puVar11 != *(char *)puVar4) break;
            puVar8 = puVar4;
            puVar19 = puVar11;
            if ((puVar11 <= puVar20) || (puVar4 <= param_1)) break;
          }
        }
        uVar14 = (long)puVar19 - (long)puVar20;
        uVar6 = (uint)uVar14;
        if (pcVar10 < (char *)((long)puVar15 +
                              (uVar14 & 0xffffffff) / 0xff + (uVar14 & 0xffffffff) + 9)) {
          return 0;
        }
        puVar4 = (ulong *)((long)puVar15 + 1);
        if (uVar6 < 0xf) {
          *(char *)puVar15 = (char)(uVar6 << 4);
          puVar11 = puVar15;
        }
        else {
          uVar22 = uVar6 - 0xf;
          *(char *)puVar15 = -0x10;
          if (0xfe < (int)uVar22) {
            uVar3 = ((int)puVar19 - (int)puVar20) - 0x10e;
            puVar11 = puVar15;
            if ((uVar3 / 0xff + 1 & 7) != 0) {
              iVar16 = -((((int)puVar19 - (int)puVar20) - 0x10eU) / 0xff + 1 & 7);
              puVar12 = puVar15;
              do {
                puVar11 = puVar4;
                puVar4 = (ulong *)((long)puVar12 + 2);
                *(char *)puVar11 = -1;
                uVar22 = uVar22 - 0xff;
                iVar16 = iVar16 + 1;
                puVar12 = puVar11;
              } while (iVar16 != 0);
            }
            if (6 < uVar3 / 0xff) {
              do {
                *(char *)puVar4 = -1;
                *(char *)((long)puVar11 + 2) = -1;
                *(char *)((long)puVar4 + 2) = -1;
                *(char *)((long)puVar11 + 4) = -1;
                *(char *)((long)puVar4 + 4) = -1;
                *(char *)((long)puVar11 + 6) = -1;
                *(char *)((long)puVar4 + 6) = -1;
                puVar4 = puVar4 + 1;
                *(char *)(puVar11 + 1) = -1;
                uVar22 = uVar22 - 0x7f8;
                puVar11 = puVar11 + 1;
              } while (0xfe < (int)uVar22);
            }
            uVar22 = (uVar6 - 0x10e) % 0xff;
          }
          *(char *)puVar4 = (char)uVar22;
          puVar11 = puVar4;
          puVar4 = (ulong *)((long)puVar4 + 1);
        }
        puVar11 = (ulong *)((uVar14 & 0xffffffff) + 1 + (long)puVar11);
        do {
          *puVar4 = *puVar20;
          puVar4 = puVar4 + 1;
          puVar20 = puVar20 + 1;
        } while (puVar4 < puVar11);
        do {
          local_32 = (short)puVar19 - (short)puVar8;
          *(short *)puVar11 = local_32;
          puVar20 = (ulong *)((long)puVar19 + 4);
          puVar8 = (ulong *)((long)puVar8 + 4);
          puVar4 = puVar20;
          if (puVar20 < puVar18) {
LAB_100747c20:
            if (*puVar8 == *puVar4) goto code_r0x000100747c2b;
            uVar5 = *puVar4 ^ *puVar8;
            uVar14 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            puVar4 = (ulong *)((long)puVar4 + (uVar14 >> 3));
            goto LAB_100747ca3;
          }
LAB_100747c38:
          if ((puVar4 < (ulong *)(lVar7 + -8 + (long)param_1)) && ((int)*puVar8 == (int)*puVar4)) {
            puVar4 = (ulong *)((long)puVar4 + 4);
            puVar8 = (ulong *)((long)puVar8 + 4);
          }
          if ((puVar4 < (ulong *)(lVar7 + -6 + (long)param_1)) && ((short)*puVar8 == (short)*puVar4)
             ) {
            puVar4 = (ulong *)((long)puVar4 + 2);
            puVar8 = (ulong *)((long)puVar8 + 2);
          }
          if ((puVar4 < puVar17) && ((char)*puVar8 == (char)*puVar4)) {
            puVar4 = (ulong *)((long)puVar4 + 1);
          }
LAB_100747ca3:
          uVar14 = (long)puVar4 - (long)puVar20;
          uVar6 = (uint)uVar14;
          if (pcVar10 < (char *)((uVar14 >> 8 & 0xffffff) + 8 + (long)puVar11)) {
            return 0;
          }
          puVar8 = (ulong *)((long)puVar11 + 2);
          uVar5 = (ulong)(uVar6 + 4);
          puVar20 = (ulong *)((long)puVar19 + uVar5);
          if (uVar6 < 0xf) {
            *(char *)puVar15 = (char)*puVar15 + (char)uVar14;
            puVar15 = puVar8;
          }
          else {
            *(char *)puVar15 = (char)*puVar15 + '\x0f';
            uVar22 = uVar6 - 0xf;
            if (0x1fd < uVar22) {
              if (((uVar6 - 0x20d) / 0x1fe + 1 & 7) != 0) {
                iVar16 = -((uVar6 - 0x20d) / 0x1fe + 1 & 7);
                puVar15 = puVar11;
                do {
                  puVar11 = puVar8;
                  *(undefined2 *)puVar11 = 0xffff;
                  puVar8 = (ulong *)((long)puVar15 + 4);
                  uVar22 = uVar22 - 0x1fe;
                  iVar16 = iVar16 + 1;
                  puVar15 = puVar11;
                } while (iVar16 != 0);
              }
              if (6 < (uVar6 - 0x20d) / 0x1fe) {
                pcVar13 = (char *)((long)puVar11 + 0x11);
                do {
                  *(char *)puVar8 = -1;
                  *(char *)((long)puVar8 + 1) = -1;
                  pcVar13[-0xd] = -1;
                  pcVar13[-0xc] = -1;
                  *(char *)((long)puVar8 + 4) = -1;
                  *(char *)((long)puVar8 + 5) = -1;
                  pcVar13[-9] = -1;
                  pcVar13[-8] = -1;
                  *(char *)(puVar8 + 1) = -1;
                  *(char *)((long)puVar8 + 9) = -1;
                  pcVar13[-5] = -1;
                  pcVar13[-4] = -1;
                  *(char *)((long)puVar8 + 0xc) = -1;
                  *(char *)((long)puVar8 + 0xd) = -1;
                  pcVar13[-1] = -1;
                  pcVar13[0] = -1;
                  puVar8 = puVar8 + 2;
                  uVar22 = uVar22 - 0xff0;
                  pcVar13 = pcVar13 + 0x10;
                } while (0x1fd < uVar22);
              }
              uVar22 = (uVar6 - 0x20d) % 0x1fe;
            }
            if (0xfe < uVar22) {
              uVar22 = uVar22 - 0xff;
              *(char *)puVar8 = -1;
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            *(char *)puVar8 = (char)uVar22;
            puVar15 = (ulong *)((long)puVar8 + 1);
          }
          if (puVar18 < puVar20) break;
          *(short *)((long)local_4058 +
                    ((ulong)(*(long *)((long)puVar19 + (uVar5 - 2)) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffe
                    )) = ((short)puVar19 + -2 + (short)(uVar6 + 4)) - sVar2;
          uVar14 = (ulong)(*(long *)((long)puVar19 + uVar5) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffe;
          uVar9 = (ulong)*(ushort *)((long)local_4058 + uVar14);
          *(short *)((long)local_4058 + uVar14) = (short)puVar20 - sVar2;
          if (((ulong *)((long)param_1 + uVar9 + 0xffff) < puVar20) ||
             (puVar8 = (ulong *)(uVar9 + (long)param_1), (int)*puVar8 != (int)*puVar20))
          goto LAB_100747e81;
          puVar11 = (ulong *)((long)puVar15 + 1);
          *(char *)puVar15 = '\0';
          puVar19 = puVar20;
        } while( true );
      }
LAB_100747ebb:
      iVar16 = 0;
      uVar14 = (long)param_1 + (lVar7 - (long)puVar20);
      if ((char *)((long)puVar15 + uVar14 + (uVar14 + 0xf0) / 0xff + (1 - (long)param_2)) <=
          (char *)(ulong)param_4) {
        if (uVar14 < 0xf) {
          *(char *)puVar15 = (char)uVar14 * '\x10';
        }
        else {
          uVar5 = uVar14 - 0xf;
          *(char *)puVar15 = -0x10;
          puVar18 = (ulong *)((long)puVar15 + 1);
          if (0xfe < uVar5) {
            do {
              puVar17 = puVar18;
              *(char *)puVar17 = -1;
              uVar5 = uVar5 - 0xff;
              puVar18 = (ulong *)((long)puVar15 + 2);
              puVar15 = puVar17;
            } while (0xfe < uVar5);
            uVar5 = (ulong)((long)param_1 + ((lVar7 + -0x10e) - (long)puVar20)) % 0xff;
          }
          *(char *)puVar18 = (char)uVar5;
          puVar15 = puVar18;
        }
        _memcpy((char *)((long)puVar15 + 1),puVar20,uVar14);
        iVar16 = ((int)uVar14 + 1 + (int)puVar15) - (int)param_2;
      }
    }
  }
  else if (param_3 < 0x7e000001) {
    *(undefined4 *)((long)local_4058 + (*param_1 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = 0;
    puVar20 = (ulong *)((long)param_1 + 2);
    puVar15 = param_1;
    puVar8 = param_2;
LAB_100747370:
    uVar14 = *(ulong *)((long)puVar15 + 1);
    puVar19 = (ulong *)((long)puVar15 + 1);
    uVar22 = param_5 << 6 | 1;
    uVar6 = param_5 & 0x3ffffff;
    while( true ) {
      puVar4 = puVar20;
      uVar9 = (ulong)uVar6;
      uVar5 = uVar14 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
      uVar6 = *(uint *)((long)local_4058 + uVar5);
      uVar14 = *puVar4;
      *(int *)((long)local_4058 + uVar5) = (int)puVar19 - iVar21;
      if ((puVar19 <= (ulong *)((long)param_1 + (ulong)uVar6 + 0xffff)) &&
         (puVar20 = (ulong *)((long)param_1 + (ulong)uVar6), (int)*puVar20 == (int)*puVar19)) break;
      uVar6 = uVar22 >> 6;
      puVar20 = (ulong *)(uVar9 + (long)puVar4);
      puVar19 = puVar4;
      uVar22 = uVar22 + 1;
      if (puVar18 < (ulong *)(uVar9 + (long)puVar4)) goto LAB_10074783b;
    }
    if ((puVar15 < puVar19) && (uVar6 != 0)) {
      do {
        puVar11 = (ulong *)((long)puVar19 - 1);
        puVar4 = (ulong *)((long)puVar20 + -1);
        if (((char)*puVar11 != *(char *)puVar4) ||
           (puVar19 = puVar11, puVar20 = puVar4, puVar11 <= puVar15)) break;
      } while (param_1 < puVar4);
    }
    uVar14 = (long)puVar19 - (long)puVar15;
    uVar6 = (uint)uVar14;
    if ((char *)((long)puVar8 + (uVar14 & 0xffffffff) / 0xff + (uVar14 & 0xffffffff) + 9) <= pcVar10
       ) {
      puVar4 = (ulong *)((long)puVar8 + 1);
      if (uVar6 < 0xf) {
        *(char *)puVar8 = (char)(uVar6 << 4);
        puVar11 = puVar8;
      }
      else {
        uVar22 = uVar6 - 0xf;
        *(char *)puVar8 = -0x10;
        if (0xfe < (int)uVar22) {
          uVar3 = ((int)puVar19 - (int)puVar15) - 0x10e;
          puVar11 = puVar8;
          if ((uVar3 / 0xff + 1 & 7) != 0) {
            iVar16 = -((((int)puVar19 - (int)puVar15) - 0x10eU) / 0xff + 1 & 7);
            puVar12 = puVar8;
            do {
              puVar11 = puVar4;
              puVar4 = (ulong *)((long)puVar12 + 2);
              *(char *)puVar11 = -1;
              uVar22 = uVar22 - 0xff;
              iVar16 = iVar16 + 1;
              puVar12 = puVar11;
            } while (iVar16 != 0);
          }
          if (6 < uVar3 / 0xff) {
            do {
              *(char *)puVar4 = -1;
              *(char *)((long)puVar11 + 2) = -1;
              *(char *)((long)puVar4 + 2) = -1;
              *(char *)((long)puVar11 + 4) = -1;
              *(char *)((long)puVar4 + 4) = -1;
              *(char *)((long)puVar11 + 6) = -1;
              *(char *)((long)puVar4 + 6) = -1;
              puVar4 = puVar4 + 1;
              *(char *)(puVar11 + 1) = -1;
              uVar22 = uVar22 - 0x7f8;
              puVar11 = puVar11 + 1;
            } while (0xfe < (int)uVar22);
          }
          uVar22 = (uVar6 - 0x10e) % 0xff;
        }
        *(char *)puVar4 = (char)uVar22;
        puVar11 = puVar4;
        puVar4 = (ulong *)((long)puVar4 + 1);
      }
      puVar11 = (ulong *)((uVar14 & 0xffffffff) + 1 + (long)puVar11);
      do {
        *puVar4 = *puVar15;
        puVar4 = puVar4 + 1;
        puVar15 = puVar15 + 1;
      } while (puVar4 < puVar11);
      do {
        local_32 = (short)puVar19 - (short)puVar20;
        *(short *)puVar11 = local_32;
        puVar15 = (ulong *)((long)puVar19 + 4);
        puVar20 = (ulong *)((long)puVar20 + 4);
        puVar4 = puVar15;
        if (puVar15 < puVar18) {
LAB_1007475d0:
          if (*puVar20 == *puVar4) goto code_r0x0001007475dc;
          uVar5 = *puVar4 ^ *puVar20;
          uVar14 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
            }
          }
          puVar4 = (ulong *)((long)puVar4 + (uVar14 >> 3));
          goto LAB_100747647;
        }
LAB_1007475e9:
        if ((puVar4 < (ulong *)(lVar7 + -8 + (long)param_1)) && ((int)*puVar20 == (int)*puVar4)) {
          puVar4 = (ulong *)((long)puVar4 + 4);
          puVar20 = (ulong *)((long)puVar20 + 4);
        }
        if ((puVar4 < (ulong *)(lVar7 + -6 + (long)param_1)) && ((short)*puVar20 == (short)*puVar4))
        {
          puVar4 = (ulong *)((long)puVar4 + 2);
          puVar20 = (ulong *)((long)puVar20 + 2);
        }
        if ((puVar4 < puVar17) && ((char)*puVar20 == (char)*puVar4)) {
          puVar4 = (ulong *)((long)puVar4 + 1);
        }
LAB_100747647:
        uVar14 = (long)puVar4 - (long)puVar15;
        uVar6 = (uint)uVar14;
        if (pcVar10 < (char *)((uVar14 >> 8 & 0xffffff) + 8 + (long)puVar11)) {
          return 0;
        }
        puVar20 = (ulong *)((long)puVar11 + 2);
        uVar5 = (ulong)(uVar6 + 4);
        puVar15 = (ulong *)((long)puVar19 + uVar5);
        if (uVar6 < 0xf) {
          *(char *)puVar8 = (char)*puVar8 + (char)uVar14;
          puVar8 = puVar20;
        }
        else {
          *(char *)puVar8 = (char)*puVar8 + '\x0f';
          uVar22 = uVar6 - 0xf;
          if (0x1fd < uVar22) {
            if (((uVar6 - 0x20d) / 0x1fe + 1 & 7) != 0) {
              iVar16 = -((uVar6 - 0x20d) / 0x1fe + 1 & 7);
              puVar8 = puVar11;
              do {
                puVar11 = puVar20;
                *(undefined2 *)puVar11 = 0xffff;
                puVar20 = (ulong *)((long)puVar8 + 4);
                uVar22 = uVar22 - 0x1fe;
                iVar16 = iVar16 + 1;
                puVar8 = puVar11;
              } while (iVar16 != 0);
            }
            if (6 < (uVar6 - 0x20d) / 0x1fe) {
              pcVar13 = (char *)((long)puVar11 + 0x11);
              do {
                *(char *)puVar20 = -1;
                *(char *)((long)puVar20 + 1) = -1;
                pcVar13[-0xd] = -1;
                pcVar13[-0xc] = -1;
                *(char *)((long)puVar20 + 4) = -1;
                *(char *)((long)puVar20 + 5) = -1;
                pcVar13[-9] = -1;
                pcVar13[-8] = -1;
                *(char *)(puVar20 + 1) = -1;
                *(char *)((long)puVar20 + 9) = -1;
                pcVar13[-5] = -1;
                pcVar13[-4] = -1;
                *(char *)((long)puVar20 + 0xc) = -1;
                *(char *)((long)puVar20 + 0xd) = -1;
                pcVar13[-1] = -1;
                pcVar13[0] = -1;
                puVar20 = puVar20 + 2;
                uVar22 = uVar22 - 0xff0;
                pcVar13 = pcVar13 + 0x10;
              } while (0x1fd < uVar22);
            }
            uVar22 = (uVar6 - 0x20d) % 0x1fe;
          }
          if (0xfe < uVar22) {
            uVar22 = uVar22 - 0xff;
            *(char *)puVar20 = -1;
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          *(char *)puVar20 = (char)uVar22;
          puVar8 = (ulong *)((long)puVar20 + 1);
        }
        if (puVar18 < puVar15) goto LAB_10074783b;
        *(uint *)((long)local_4058 +
                 ((ulong)(*(long *)((long)puVar19 + (uVar5 - 2)) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc))
             = ((int)puVar19 + -2 + uVar6 + 4) - iVar21;
        uVar14 = (ulong)(*(long *)((long)puVar19 + uVar5) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc;
        uVar9 = (ulong)*(uint *)((long)local_4058 + uVar14);
        *(int *)((long)local_4058 + uVar14) = (int)puVar15 - iVar21;
        if (((ulong *)((long)param_1 + uVar9 + 0xffff) < puVar15) ||
           (puVar20 = (ulong *)(uVar9 + (long)param_1), (int)*puVar20 != (int)*puVar15))
        goto LAB_100747827;
        puVar11 = (ulong *)((long)puVar8 + 1);
        *(char *)puVar8 = '\0';
        puVar19 = puVar15;
      } while( true );
    }
    iVar16 = 0;
  }
  return iVar16;
code_r0x0001007475dc:
  puVar4 = puVar4 + 1;
  puVar20 = puVar20 + 1;
  if (puVar18 <= puVar4) goto LAB_1007475e9;
  goto LAB_1007475d0;
LAB_100747827:
  puVar20 = (ulong *)(uVar5 + 2 + (long)puVar19);
  if (puVar18 < puVar20) {
LAB_10074783b:
    uVar14 = (long)param_1 + (lVar7 - (long)puVar15);
    if ((char *)(ulong)param_4 <
        (char *)((long)puVar8 + uVar14 + (uVar14 + 0xf0) / 0xff + (1 - (long)param_2))) {
      return 0;
    }
    if (uVar14 < 0xf) {
      *(char *)puVar8 = (char)uVar14 * '\x10';
    }
    else {
      uVar5 = uVar14 - 0xf;
      *(char *)puVar8 = -0x10;
      puVar18 = (ulong *)((long)puVar8 + 1);
      if (0xfe < uVar5) {
        do {
          puVar17 = puVar18;
          *(char *)puVar17 = -1;
          uVar5 = uVar5 - 0xff;
          puVar18 = (ulong *)((long)puVar8 + 2);
          puVar8 = puVar17;
        } while (0xfe < uVar5);
        uVar5 = (ulong)((long)param_1 + ((lVar7 + -0x10e) - (long)puVar15)) % 0xff;
      }
      *(char *)puVar18 = (char)uVar5;
      puVar8 = puVar18;
    }
    _memcpy((char *)((long)puVar8 + 1),puVar15,uVar14);
    return ((int)uVar14 + 1 + (int)puVar8) - (int)param_2;
  }
  goto LAB_100747370;
code_r0x000100747c2b:
  puVar4 = puVar4 + 1;
  puVar8 = puVar8 + 1;
  if (puVar18 <= puVar4) goto LAB_100747c38;
  goto LAB_100747c20;
LAB_100747e81:
  puVar8 = (ulong *)(uVar5 + 2 + (long)puVar19);
  if (puVar18 < puVar8) goto LAB_100747ebb;
  goto LAB_100747976;
}

