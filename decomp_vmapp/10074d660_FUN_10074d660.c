
int FUN_10074d660(byte *param_1,undefined8 *param_2,int param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  size_t sVar19;
  uint uVar20;
  size_t sVar21;
  undefined8 *puVar22;
  void *pvVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  
  iVar10 = (int)param_1;
  if (param_5 != 0) {
    if ((undefined8 *)(param_4 + param_5) != param_2) {
      if (param_3 == 0) {
        if (*param_1 == 0) {
          return 1;
        }
        return -1;
      }
      lVar11 = (long)param_3;
      puVar1 = (undefined8 *)(lVar11 + -8 + (long)param_2);
      puVar29 = (undefined8 *)(lVar11 + -5 + (long)param_2);
      puVar25 = param_2;
LAB_10074d6d3:
      do {
        puVar22 = puVar25;
        bVar3 = *param_1;
        uVar20 = (uint)(bVar3 >> 4);
        sVar21 = (size_t)uVar20;
        pbVar12 = param_1 + 1;
        if (uVar20 == 0xf) {
          sVar21 = 0xf;
          pbVar14 = param_1 + 1;
          do {
            pbVar12 = param_1 + 2;
            bVar4 = *pbVar14;
            sVar21 = sVar21 + bVar4;
            param_1 = pbVar14;
            pbVar14 = pbVar12;
          } while ((ulong)bVar4 == 0xff);
        }
        param_1 = pbVar12;
        puVar13 = (undefined8 *)((long)puVar22 + sVar21);
        pbVar12 = param_1;
        puVar25 = puVar22;
        if (puVar1 < puVar13) {
          if (puVar13 == (undefined8 *)((long)param_2 + lVar11)) {
            _memcpy(puVar22,param_1,sVar21);
            return ((int)param_1 + (int)sVar21) - iVar10;
          }
LAB_10074dec8:
          return (iVar10 - (int)param_1) + -1;
        }
        do {
          *puVar25 = *(undefined8 *)pbVar12;
          puVar25 = puVar25 + 1;
          pbVar12 = pbVar12 + 8;
        } while (puVar25 < puVar13);
        lVar27 = sVar21 - *(ushort *)(param_1 + sVar21);
        puVar17 = (undefined8 *)((long)puVar22 + lVar27);
        param_1 = param_1 + sVar21 + 2;
        uVar20 = bVar3 & 0xf;
        uVar18 = (ulong)uVar20;
        if (uVar20 == 0xf) {
          do {
            bVar3 = *param_1;
            param_1 = param_1 + 1;
            uVar18 = uVar18 + bVar3;
          } while ((ulong)bVar3 == 0xff);
        }
        lVar15 = uVar18 + 4 + sVar21;
        puVar16 = (undefined8 *)((long)puVar22 + lVar15);
        puVar25 = puVar16;
        if (param_2 <= puVar17) {
          lVar15 = (long)puVar13 - (long)puVar17;
          if (lVar15 < 8) {
            *(undefined1 *)((long)puVar22 + sVar21) = *(undefined1 *)((long)puVar22 + lVar27);
            *(undefined1 *)((long)puVar22 + sVar21 + 1) =
                 *(undefined1 *)((long)puVar22 + lVar27 + 1);
            *(undefined1 *)((long)puVar22 + sVar21 + 2) =
                 *(undefined1 *)((long)puVar22 + lVar27 + 2);
            *(undefined1 *)((long)puVar22 + sVar21 + 3) =
                 *(undefined1 *)((long)puVar22 + lVar27 + 3);
            lVar6 = *(long *)(&DAT_100b4ac60 + lVar15 * 8);
            *(undefined4 *)((long)puVar22 + sVar21 + 4) =
                 *(undefined4 *)((long)puVar22 + lVar27 + lVar6);
            puVar28 = (undefined1 *)((lVar27 + lVar6) - *(long *)(&DAT_100b4aca0 + lVar15 * 8));
          }
          else {
            *puVar13 = *puVar17;
            puVar28 = (undefined1 *)(lVar27 + 8);
          }
          puVar13 = (undefined8 *)((long)puVar22 + (long)puVar28);
          puVar17 = (undefined8 *)(sVar21 + 8 + (long)puVar22);
          if ((undefined8 *)(lVar11 + -0xc + (long)param_2) < puVar16) {
            if (puVar29 < puVar16) goto LAB_10074dec8;
            puVar24 = puVar17;
            if (puVar17 < puVar1) {
              do {
                *puVar24 = *puVar13;
                puVar24 = puVar24 + 1;
                puVar13 = puVar13 + 1;
              } while (puVar24 < puVar1);
              puVar28 = (undefined1 *)((long)puVar1 + ((long)puVar28 - (long)puVar17));
              puVar13 = (undefined8 *)((long)puVar22 + (long)puVar28);
              puVar17 = puVar1;
            }
            if (puVar17 < puVar16) {
              lVar27 = uVar18 + sVar21;
              lVar15 = lVar27 - (long)puVar17;
              puVar16 = puVar17;
              if ((undefined1 *)(lVar15 + (long)puVar22) != (undefined1 *)0xfffffffffffffffc) {
                puVar2 = (undefined1 *)(lVar15 + 4 + (long)puVar22);
                puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
                if (puVar26 == (undefined1 *)0x0) {
                  puVar26 = (undefined1 *)0x0;
                }
                else if (((undefined1 *)((long)puVar22 + 3) + (long)(lVar15 + (long)puVar13) <
                          puVar17) || ((undefined8 *)(lVar27 + 3 + (long)puVar22) < puVar13)) {
                  puVar13 = (undefined8 *)(puVar26 + (long)puVar28 + (long)puVar22);
                  puVar16 = (undefined8 *)((long)puVar17 + (long)puVar26);
                  puVar17 = puVar17 + 2;
                  puVar24 = (undefined8 *)((long)puVar22 + (long)(puVar28 + 0x10));
                  uVar18 = (ulong)puVar2 & 0xffffffffffffffe0;
                  do {
                    uVar7 = puVar24[-1];
                    uVar8 = *puVar24;
                    uVar9 = puVar24[1];
                    puVar17[-2] = puVar24[-2];
                    puVar17[-1] = uVar7;
                    *puVar17 = uVar8;
                    puVar17[1] = uVar9;
                    puVar17 = puVar17 + 4;
                    puVar24 = puVar24 + 4;
                    uVar18 = uVar18 - 0x20;
                  } while (uVar18 != 0);
                }
                else {
                  puVar26 = (undefined1 *)0x0;
                }
                if (puVar2 == puVar26) goto LAB_10074d6d3;
              }
              puVar28 = (undefined1 *)((long)puVar16 + -4);
              do {
                uVar5 = *(undefined1 *)puVar13;
                puVar13 = (undefined8 *)((long)puVar13 + 1);
                puVar28[4] = uVar5;
                puVar28 = puVar28 + 1;
              } while ((undefined1 *)((long)puVar22 + lVar27) != puVar28);
            }
          }
          else {
            do {
              *puVar17 = *puVar13;
              puVar17 = puVar17 + 1;
              puVar13 = puVar13 + 1;
            } while (puVar17 < puVar16);
          }
          goto LAB_10074d6d3;
        }
        if (puVar29 < puVar16) goto LAB_10074dec8;
        sVar19 = uVar18 + 4;
        uVar30 = (long)param_2 - (long)puVar17;
        pvVar23 = (void *)(((long)param_5 - uVar30) + param_4);
        uVar18 = sVar19 - uVar30;
        if (sVar19 < uVar30 || uVar18 == 0) {
          _memmove(puVar13,pvVar23,sVar19);
        }
        else {
          _memcpy(puVar13,pvVar23,uVar30);
          puVar25 = (undefined8 *)((long)puVar22 + sVar21 + uVar30);
          if ((ulong)((long)puVar25 - (long)param_2) < uVar18) {
            puVar22 = param_2;
            if ((long)(sVar21 + uVar30) < lVar15) {
              do {
                *(undefined1 *)puVar25 = *(undefined1 *)puVar22;
                puVar25 = (undefined8 *)((long)puVar25 + 1);
                puVar22 = (undefined8 *)((long)puVar22 + 1);
              } while (puVar25 < puVar16);
            }
          }
          else {
            _memcpy(puVar25,param_2,uVar18);
            puVar25 = puVar16;
          }
        }
      } while( true );
    }
    lVar11 = (long)param_3;
    if (param_5 < 0xffff) {
      if (param_3 == 0) {
        if (*param_1 == 0) {
          return 1;
        }
        return -1;
      }
      puVar1 = (undefined8 *)(lVar11 + -8 + (long)param_2);
      puVar29 = param_2;
LAB_10074e0d0:
      do {
        while( true ) {
          puVar25 = puVar29;
          bVar3 = *param_1;
          uVar20 = (uint)(bVar3 >> 4);
          uVar18 = (ulong)uVar20;
          pbVar12 = param_1 + 1;
          if (uVar20 == 0xf) {
            uVar18 = 0xf;
            do {
              pbVar14 = pbVar12;
              pbVar12 = param_1 + 2;
              uVar30 = (ulong)*pbVar14;
              uVar18 = uVar18 + uVar30;
              param_1 = pbVar14;
            } while (uVar30 == 0xff);
          }
          puVar22 = (undefined8 *)((long)puVar25 + uVar18);
          pbVar14 = pbVar12;
          puVar29 = puVar25;
          if (puVar1 < puVar22) goto LAB_10074e11e;
          do {
            *puVar29 = *(undefined8 *)pbVar14;
            puVar29 = puVar29 + 1;
            pbVar14 = pbVar14 + 8;
          } while (puVar29 < puVar22);
          lVar27 = uVar18 - *(ushort *)(pbVar12 + uVar18);
          pbVar12 = pbVar12 + uVar18 + 2;
          uVar20 = bVar3 & 0xf;
          uVar30 = (ulong)uVar20;
          if (uVar20 == 0xf) {
            uVar30 = 0xf;
            do {
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              uVar30 = uVar30 + bVar3;
            } while ((ulong)bVar3 == 0xff);
          }
          puVar29 = (undefined8 *)(uVar30 + 4 + uVar18 + (long)puVar25);
          lVar15 = (long)puVar22 - ((long)puVar25 + lVar27);
          if (lVar15 < 8) {
            *(undefined1 *)((long)puVar25 + uVar18) = *(undefined1 *)((long)puVar25 + lVar27);
            *(undefined1 *)((long)puVar25 + uVar18 + 1) =
                 *(undefined1 *)((long)puVar25 + lVar27 + 1);
            *(undefined1 *)((long)puVar25 + uVar18 + 2) =
                 *(undefined1 *)((long)puVar25 + lVar27 + 2);
            *(undefined1 *)((long)puVar25 + uVar18 + 3) =
                 *(undefined1 *)((long)puVar25 + lVar27 + 3);
            lVar6 = *(long *)(&DAT_100b4ac60 + lVar15 * 8);
            *(undefined4 *)((long)puVar25 + uVar18 + 4) =
                 *(undefined4 *)((long)puVar25 + lVar27 + lVar6);
            puVar28 = (undefined1 *)((lVar27 + lVar6) - *(long *)(&DAT_100b4aca0 + lVar15 * 8));
          }
          else {
            *puVar22 = *(undefined8 *)((long)puVar25 + lVar27);
            puVar28 = (undefined1 *)(lVar27 + 8);
          }
          puVar22 = (undefined8 *)((long)puVar25 + (long)puVar28);
          puVar13 = (undefined8 *)(uVar18 + 8 + (long)puVar25);
          param_1 = pbVar12;
          if ((undefined8 *)(lVar11 + -0xc + (long)param_2) < puVar29) break;
          do {
            *puVar13 = *puVar22;
            puVar13 = puVar13 + 1;
            puVar22 = puVar22 + 1;
          } while (puVar13 < puVar29);
        }
        if ((undefined8 *)(lVar11 + -5 + (long)param_2) < puVar29) goto LAB_10074e127;
        puVar17 = puVar13;
        if (puVar13 < puVar1) {
          do {
            *puVar17 = *puVar22;
            puVar17 = puVar17 + 1;
            puVar22 = puVar22 + 1;
          } while (puVar17 < puVar1);
          puVar28 = (undefined1 *)((long)puVar1 + ((long)puVar28 - (long)puVar13));
          puVar22 = (undefined8 *)((long)puVar25 + (long)puVar28);
          puVar13 = puVar1;
        }
        if (puVar13 < puVar29) {
          lVar15 = uVar30 + uVar18;
          lVar27 = lVar15 - (long)puVar13;
          puVar17 = puVar13;
          if ((undefined1 *)(lVar27 + (long)puVar25) != (undefined1 *)0xfffffffffffffffc) {
            puVar2 = (undefined1 *)(lVar27 + 4 + (long)puVar25);
            puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
            if (puVar26 == (undefined1 *)0x0) {
              puVar26 = (undefined1 *)0x0;
            }
            else if (((undefined1 *)((long)puVar25 + 3) + (long)(lVar27 + (long)puVar22) < puVar13)
                    || ((undefined8 *)(lVar15 + 3 + (long)puVar25) < puVar22)) {
              puVar22 = (undefined8 *)(puVar26 + (long)puVar28 + (long)puVar25);
              puVar17 = (undefined8 *)((long)puVar13 + (long)puVar26);
              puVar13 = puVar13 + 2;
              puVar16 = (undefined8 *)((long)puVar25 + (long)(puVar28 + 0x10));
              uVar18 = (ulong)puVar2 & 0xffffffffffffffe0;
              do {
                uVar7 = puVar16[-1];
                uVar8 = *puVar16;
                uVar9 = puVar16[1];
                puVar13[-2] = puVar16[-2];
                puVar13[-1] = uVar7;
                *puVar13 = uVar8;
                puVar13[1] = uVar9;
                puVar13 = puVar13 + 4;
                puVar16 = puVar16 + 4;
                uVar18 = uVar18 - 0x20;
              } while (uVar18 != 0);
            }
            else {
              puVar26 = (undefined1 *)0x0;
            }
            if (puVar2 == puVar26) goto LAB_10074e0d0;
          }
          puVar28 = (undefined1 *)((long)puVar17 + -4);
          do {
            uVar5 = *(undefined1 *)puVar22;
            puVar22 = (undefined8 *)((long)puVar22 + 1);
            puVar28[4] = uVar5;
            puVar28 = puVar28 + 1;
          } while ((undefined1 *)((long)puVar25 + lVar15) != puVar28);
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (*param_1 == 0) {
        return 1;
      }
      return -1;
    }
    puVar1 = (undefined8 *)(lVar11 + -8 + (long)param_2);
    puVar29 = param_2;
LAB_10074de40:
    do {
      while( true ) {
        puVar25 = puVar29;
        bVar3 = *param_1;
        uVar20 = (uint)(bVar3 >> 4);
        uVar18 = (ulong)uVar20;
        pbVar12 = param_1 + 1;
        if (uVar20 == 0xf) {
          uVar18 = 0xf;
          do {
            pbVar14 = pbVar12;
            pbVar12 = param_1 + 2;
            uVar30 = (ulong)*pbVar14;
            uVar18 = uVar18 + uVar30;
            param_1 = pbVar14;
          } while (uVar30 == 0xff);
        }
        puVar22 = (undefined8 *)((long)puVar25 + uVar18);
        pbVar14 = pbVar12;
        puVar29 = puVar25;
        if (puVar1 < puVar22) goto LAB_10074e11e;
        do {
          *puVar29 = *(undefined8 *)pbVar14;
          puVar29 = puVar29 + 1;
          pbVar14 = pbVar14 + 8;
        } while (puVar29 < puVar22);
        lVar27 = uVar18 - *(ushort *)(pbVar12 + uVar18);
        pbVar12 = pbVar12 + uVar18 + 2;
        uVar20 = bVar3 & 0xf;
        uVar30 = (ulong)uVar20;
        if (uVar20 == 0xf) {
          uVar30 = 0xf;
          do {
            bVar3 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            uVar30 = uVar30 + bVar3;
          } while ((ulong)bVar3 == 0xff);
        }
        puVar29 = (undefined8 *)(uVar30 + 4 + uVar18 + (long)puVar25);
        lVar15 = (long)puVar22 - ((long)puVar25 + lVar27);
        if (lVar15 < 8) {
          *(undefined1 *)((long)puVar25 + uVar18) = *(undefined1 *)((long)puVar25 + lVar27);
          *(undefined1 *)((long)puVar25 + uVar18 + 1) = *(undefined1 *)((long)puVar25 + lVar27 + 1);
          *(undefined1 *)((long)puVar25 + uVar18 + 2) = *(undefined1 *)((long)puVar25 + lVar27 + 2);
          *(undefined1 *)((long)puVar25 + uVar18 + 3) = *(undefined1 *)((long)puVar25 + lVar27 + 3);
          lVar6 = *(long *)(&DAT_100b4ac60 + lVar15 * 8);
          *(undefined4 *)((long)puVar25 + uVar18 + 4) =
               *(undefined4 *)((long)puVar25 + lVar27 + lVar6);
          puVar28 = (undefined1 *)((lVar27 + lVar6) - *(long *)(&DAT_100b4aca0 + lVar15 * 8));
        }
        else {
          *puVar22 = *(undefined8 *)((long)puVar25 + lVar27);
          puVar28 = (undefined1 *)(lVar27 + 8);
        }
        puVar22 = (undefined8 *)((long)puVar25 + (long)puVar28);
        puVar13 = (undefined8 *)(uVar18 + 8 + (long)puVar25);
        param_1 = pbVar12;
        if ((undefined8 *)(lVar11 + -0xc + (long)param_2) < puVar29) break;
        do {
          *puVar13 = *puVar22;
          puVar13 = puVar13 + 1;
          puVar22 = puVar22 + 1;
        } while (puVar13 < puVar29);
      }
      if ((undefined8 *)(lVar11 + -5 + (long)param_2) < puVar29) goto LAB_10074e127;
      puVar17 = puVar13;
      if (puVar13 < puVar1) {
        do {
          *puVar17 = *puVar22;
          puVar17 = puVar17 + 1;
          puVar22 = puVar22 + 1;
        } while (puVar17 < puVar1);
        puVar28 = (undefined1 *)((long)puVar1 + ((long)puVar28 - (long)puVar13));
        puVar22 = (undefined8 *)((long)puVar25 + (long)puVar28);
        puVar13 = puVar1;
      }
      if (puVar13 < puVar29) {
        lVar15 = uVar30 + uVar18;
        lVar27 = lVar15 - (long)puVar13;
        puVar17 = puVar13;
        if ((undefined1 *)(lVar27 + (long)puVar25) != (undefined1 *)0xfffffffffffffffc) {
          puVar2 = (undefined1 *)(lVar27 + 4 + (long)puVar25);
          puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = (undefined1 *)0x0;
          }
          else if (((undefined1 *)((long)puVar25 + 3) + (long)(lVar27 + (long)puVar22) < puVar13) ||
                  ((undefined8 *)(lVar15 + 3 + (long)puVar25) < puVar22)) {
            puVar22 = (undefined8 *)(puVar26 + (long)puVar28 + (long)puVar25);
            puVar17 = (undefined8 *)((long)puVar13 + (long)puVar26);
            puVar13 = puVar13 + 2;
            puVar16 = (undefined8 *)((long)puVar25 + (long)(puVar28 + 0x10));
            uVar18 = (ulong)puVar2 & 0xffffffffffffffe0;
            do {
              uVar7 = puVar16[-1];
              uVar8 = *puVar16;
              uVar9 = puVar16[1];
              puVar13[-2] = puVar16[-2];
              puVar13[-1] = uVar7;
              *puVar13 = uVar8;
              puVar13[1] = uVar9;
              puVar13 = puVar13 + 4;
              puVar16 = puVar16 + 4;
              uVar18 = uVar18 - 0x20;
            } while (uVar18 != 0);
          }
          else {
            puVar26 = (undefined1 *)0x0;
          }
          if (puVar2 == puVar26) goto LAB_10074de40;
        }
        puVar28 = (undefined1 *)((long)puVar17 + -4);
        do {
          uVar5 = *(undefined1 *)puVar22;
          puVar22 = (undefined8 *)((long)puVar22 + 1);
          puVar28[4] = uVar5;
          puVar28 = puVar28 + 1;
        } while ((undefined1 *)((long)puVar25 + lVar15) != puVar28);
      }
    } while( true );
  }
  if (param_3 == 0) {
    if (*param_1 == 0) {
      return 1;
    }
    return -1;
  }
  lVar11 = (long)param_3;
  puVar1 = (undefined8 *)(lVar11 + -8 + (long)param_2);
  puVar29 = param_2;
LAB_10074dbd0:
  puVar25 = puVar29;
  bVar3 = *param_1;
  uVar20 = (uint)(bVar3 >> 4);
  uVar18 = (ulong)uVar20;
  pbVar12 = param_1 + 1;
  if (uVar20 == 0xf) {
    uVar18 = 0xf;
    do {
      pbVar14 = pbVar12;
      pbVar12 = param_1 + 2;
      uVar30 = (ulong)*pbVar14;
      uVar18 = uVar18 + uVar30;
      param_1 = pbVar14;
    } while (uVar30 == 0xff);
  }
  puVar22 = (undefined8 *)((long)puVar25 + uVar18);
  pbVar14 = pbVar12;
  puVar29 = puVar25;
  if (puVar22 <= puVar1) {
    do {
      *puVar29 = *(undefined8 *)pbVar14;
      puVar29 = puVar29 + 1;
      pbVar14 = pbVar14 + 8;
    } while (puVar29 < puVar22);
    lVar27 = uVar18 - *(ushort *)(pbVar12 + uVar18);
    pbVar12 = pbVar12 + uVar18 + 2;
    uVar20 = bVar3 & 0xf;
    uVar30 = (ulong)uVar20;
    if (uVar20 == 0xf) {
      uVar30 = 0xf;
      do {
        bVar3 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        uVar30 = uVar30 + bVar3;
      } while ((ulong)bVar3 == 0xff);
    }
    puVar29 = (undefined8 *)(uVar30 + 4 + uVar18 + (long)puVar25);
    lVar15 = (long)puVar22 - ((long)puVar25 + lVar27);
    if (lVar15 < 8) {
      *(undefined1 *)((long)puVar25 + uVar18) = *(undefined1 *)((long)puVar25 + lVar27);
      *(undefined1 *)((long)puVar25 + uVar18 + 1) = *(undefined1 *)((long)puVar25 + lVar27 + 1);
      *(undefined1 *)((long)puVar25 + uVar18 + 2) = *(undefined1 *)((long)puVar25 + lVar27 + 2);
      *(undefined1 *)((long)puVar25 + uVar18 + 3) = *(undefined1 *)((long)puVar25 + lVar27 + 3);
      lVar6 = *(long *)(&DAT_100b4ac60 + lVar15 * 8);
      *(undefined4 *)((long)puVar25 + uVar18 + 4) = *(undefined4 *)((long)puVar25 + lVar27 + lVar6);
      puVar28 = (undefined1 *)((lVar27 + lVar6) - *(long *)(&DAT_100b4aca0 + lVar15 * 8));
    }
    else {
      *puVar22 = *(undefined8 *)((long)puVar25 + lVar27);
      puVar28 = (undefined1 *)(lVar27 + 8);
    }
    puVar22 = (undefined8 *)((long)puVar25 + (long)puVar28);
    puVar13 = (undefined8 *)(uVar18 + 8 + (long)puVar25);
    param_1 = pbVar12;
    if ((undefined8 *)(lVar11 + -0xc + (long)param_2) < puVar29) {
      if ((undefined8 *)(lVar11 + -5 + (long)param_2) < puVar29) goto LAB_10074e127;
      puVar17 = puVar13;
      if (puVar13 < puVar1) {
        do {
          *puVar17 = *puVar22;
          puVar17 = puVar17 + 1;
          puVar22 = puVar22 + 1;
        } while (puVar17 < puVar1);
        puVar28 = (undefined1 *)((long)puVar1 + ((long)puVar28 - (long)puVar13));
        puVar22 = (undefined8 *)((long)puVar25 + (long)puVar28);
        puVar13 = puVar1;
      }
      if (puVar13 < puVar29) {
        lVar15 = uVar30 + uVar18;
        lVar27 = lVar15 - (long)puVar13;
        puVar17 = puVar13;
        if ((undefined1 *)(lVar27 + (long)puVar25) != (undefined1 *)0xfffffffffffffffc) {
          puVar2 = (undefined1 *)(lVar27 + 4 + (long)puVar25);
          puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = (undefined1 *)0x0;
          }
          else if (((undefined1 *)((long)puVar25 + 3) + (long)(lVar27 + (long)puVar22) < puVar13) ||
                  ((undefined8 *)(lVar15 + 3 + (long)puVar25) < puVar22)) {
            puVar22 = (undefined8 *)(puVar26 + (long)puVar28 + (long)puVar25);
            puVar17 = (undefined8 *)((long)puVar13 + (long)puVar26);
            puVar13 = puVar13 + 2;
            puVar16 = (undefined8 *)((long)puVar25 + (long)(puVar28 + 0x10));
            uVar18 = (ulong)puVar2 & 0xffffffffffffffe0;
            do {
              uVar7 = puVar16[-1];
              uVar8 = *puVar16;
              uVar9 = puVar16[1];
              puVar13[-2] = puVar16[-2];
              puVar13[-1] = uVar7;
              *puVar13 = uVar8;
              puVar13[1] = uVar9;
              puVar13 = puVar13 + 4;
              puVar16 = puVar16 + 4;
              uVar18 = uVar18 - 0x20;
            } while (uVar18 != 0);
          }
          else {
            puVar26 = (undefined1 *)0x0;
          }
          if (puVar2 == puVar26) goto LAB_10074dbd0;
        }
        puVar28 = (undefined1 *)((long)puVar17 + -4);
        do {
          uVar5 = *(undefined1 *)puVar22;
          puVar22 = (undefined8 *)((long)puVar22 + 1);
          puVar28[4] = uVar5;
          puVar28 = puVar28 + 1;
        } while ((undefined1 *)((long)puVar25 + lVar15) != puVar28);
      }
    }
    else {
      do {
        *puVar13 = *puVar22;
        puVar13 = puVar13 + 1;
        puVar22 = puVar22 + 1;
      } while (puVar13 < puVar29);
    }
    goto LAB_10074dbd0;
  }
  if (puVar22 == (undefined8 *)((long)param_2 + lVar11)) goto LAB_10074e132;
LAB_10074e127:
  return (iVar10 - (int)pbVar12) + -1;
LAB_10074e11e:
  if (puVar22 == (undefined8 *)((long)param_2 + lVar11)) {
LAB_10074e132:
    _memcpy(puVar25,pbVar12,uVar18);
    return ((int)pbVar12 + (int)uVar18) - iVar10;
  }
  goto LAB_10074e127;
}

