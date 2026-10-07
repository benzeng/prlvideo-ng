
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fb2e0(long param_1,uint param_2,long param_3,int *param_4,int *param_5,int param_6)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  void *pvVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint *puVar34;
  long lVar35;
  uint *puVar36;
  ulong uVar37;
  int iVar38;
  uint *puVar39;
  int iVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  ulong uVar44;
  int iVar45;
  uint *puVar46;
  int iVar47;
  uint *puVar48;
  uint uVar49;
  size_t sVar50;
  int iVar51;
  int iVar52;
  uint *puVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  ulong uVar28;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    iVar20 = *param_4;
    iVar32 = param_4[1];
    uVar4 = param_4[2];
    uVar21 = param_4[3];
    lVar35 = (ulong)param_2 * 0x8f0;
    iVar5 = *(int *)(param_1 + 0x980 + lVar35);
    iVar33 = iVar20;
    if (iVar20 <= iVar5) {
      iVar33 = iVar5;
    }
    iVar6 = *(int *)(param_1 + 0x984 + lVar35);
    iVar47 = iVar32;
    if (iVar32 < iVar6) {
      iVar47 = iVar6;
    }
    uVar24 = *(int *)(param_1 + 0x938 + lVar35) + iVar5;
    uVar3 = uVar4;
    if ((int)uVar24 < (int)uVar4) {
      uVar3 = uVar24;
    }
    uVar31 = *(int *)(param_1 + 0x93c + lVar35) + iVar6;
    uVar25 = uVar21;
    if ((int)uVar31 < (int)uVar21) {
      uVar25 = uVar31;
    }
    if ((iVar33 < (int)uVar3) && (iVar47 < (int)uVar25)) {
      lVar30 = *(long *)(param_3 + 8);
      piVar1 = (int *)(param_1 + 0x938 + lVar35);
      uVar18 = FUN_1003040c0(lVar30,0x88eb,1);
      (*DAT_1011c5738)(0x8ca8,*(undefined4 *)(param_3 + 0x18));
      if (*(ushort *)(lVar30 + 0xa62c) < 300) {
        (*(code *)DAT_1011c4a88[0xd2])(*DAT_1011c4a88,1);
      }
      uVar49 = iVar33 - iVar5;
      iVar47 = iVar47 - iVar6;
      uVar3 = uVar3 - iVar5;
      iVar19 = uVar25 - iVar6;
      (*(code *)DAT_1011c4a88[0xed])(*DAT_1011c4a88,*(undefined4 *)(param_3 + 0x2c));
      (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x88eb,0);
      (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd00,0);
      (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd05,4);
      (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd04,0);
      (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd03,0);
      plVar2 = (long *)(param_1 + 0x988 + lVar35);
      iVar33 = *piVar1;
      if (*(long *)(param_1 + 0x988 + lVar35) == 0) {
        pvVar23 = operator_new__((ulong)((iVar33 + 7U & 0xfffffff8) *
                                        *(int *)(param_1 + 0x93c + lVar35)) << 2);
        *plVar2 = (long)pvVar23;
      }
      (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd02,iVar33 + 7U & 0xfffffff8);
      (*(code *)DAT_1011c4a88[0xee])
                (*DAT_1011c4a88,(iVar5 - iVar20) + uVar49,(uVar21 - iVar6) - iVar19,uVar3 - uVar49,
                 iVar19 - iVar47,0x80e1,0x8367,
                 *plVar2 + ((long)(int)uVar49 + (ulong)((*piVar1 + 7U & 0xfffffff8) * iVar47)) * 4);
      if (*(ushort *)(lVar30 + 0xa62c) < 300) {
        (*(code *)DAT_1011c4a88[0xcd])();
      }
      else {
        (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x88eb,uVar18);
      }
      FUN_100301c10(*(undefined8 *)(param_3 + 8));
      if (0 < param_6) {
        uVar25 = ~uVar24;
        if ((int)~uVar24 <= (int)~uVar4) {
          uVar25 = ~uVar4;
        }
        if (iVar20 < iVar5) {
          iVar20 = iVar5;
        }
        uVar24 = iVar20 - iVar5;
        uVar4 = ~uVar31;
        if ((int)~uVar31 <= (int)~uVar21) {
          uVar4 = ~uVar21;
        }
        iVar20 = iVar32;
        if (iVar32 < iVar6) {
          iVar20 = iVar6;
        }
        uVar21 = iVar6 + uVar4;
        if (iVar32 <= iVar6) {
          iVar32 = iVar6;
        }
        uVar31 = _DAT_100b39620;
        uVar74 = _UNK_100b39624;
        uVar75 = _UNK_100b39628;
        uVar76 = _UNK_100b3962c;
        uVar85 = _DAT_100b39650;
        uVar86 = _UNK_100b39654;
        uVar87 = _UNK_100b39658;
        uVar88 = _UNK_100b3965c;
        uVar89 = _DAT_100b39660;
        uVar90 = _UNK_100b39664;
        uVar91 = _UNK_100b39668;
        uVar92 = _UNK_100b3966c;
        uVar77 = _DAT_100b39630;
        uVar78 = _UNK_100b39634;
        uVar79 = _UNK_100b39638;
        uVar80 = _UNK_100b3963c;
        uVar81 = _DAT_100b39640;
        uVar82 = _UNK_100b39644;
        uVar83 = _UNK_100b39648;
        uVar84 = _UNK_100b3964c;
        uVar66 = _DAT_100b39600;
        uVar67 = _UNK_100b39604;
        uVar68 = _UNK_100b39608;
        uVar69 = _UNK_100b3960c;
        uVar70 = _DAT_100b39610;
        uVar71 = _UNK_100b39614;
        uVar72 = _UNK_100b39618;
        uVar73 = _UNK_100b3961c;
        uVar54 = _DAT_100b395d0;
        uVar55 = _UNK_100b395d4;
        uVar56 = _UNK_100b395d8;
        uVar57 = _UNK_100b395dc;
        uVar58 = _DAT_100b395e0;
        uVar59 = _UNK_100b395e4;
        uVar60 = _UNK_100b395e8;
        uVar61 = _UNK_100b395ec;
        uVar62 = _DAT_100b395f0;
        uVar63 = _UNK_100b395f4;
        uVar64 = _UNK_100b395f8;
        uVar65 = _UNK_100b395fc;
        do {
          iVar33 = *(int *)(param_1 + 0x980 + lVar35);
          uVar42 = *param_5 - iVar33;
          iVar52 = *(int *)(param_1 + 0x984 + lVar35);
          iVar38 = param_5[1] - iVar52;
          uVar26 = param_5[2] - iVar33;
          iVar40 = param_5[3] - iVar52;
          uVar17 = uVar42;
          if ((int)uVar42 < (int)uVar49) {
            uVar17 = uVar49;
          }
          iVar22 = iVar38;
          if (iVar38 < iVar47) {
            iVar22 = iVar47;
          }
          if ((int)uVar3 < (int)uVar26) {
            uVar26 = uVar3;
          }
          if (iVar19 < iVar40) {
            iVar40 = iVar19;
          }
          iVar51 = uVar26 - uVar17;
          if ((iVar51 != 0 && (int)uVar17 <= (int)uVar26) && (iVar22 < iVar40)) {
            uVar27 = *piVar1 + 7U & 0xfffffff8;
            uVar28 = (ulong)uVar27;
            iVar45 = *(int *)(param_1 + 0x934 + lVar35);
            iVar7 = *(int *)(param_1 + 0x940 + lVar35);
            puVar48 = (uint *)(*plVar2 +
                              ((long)(int)uVar17 + (ulong)(((iVar19 + iVar47) - iVar40) * uVar27)) *
                              4);
            puVar29 = (uint *)((ulong)((iVar7 + 7U >> 3) * uVar17) +
                               (ulong)(uint)((iVar40 + -1) * iVar45) +
                               (ulong)*(uint *)(param_1 + 0x930 + lVar35) +
                              *(long *)(param_1 + 0x920));
            iVar45 = -iVar45;
            if (iVar7 < 0x18) {
              if (iVar7 == 0xf) {
                do {
                  puVar34 = puVar29;
                  puVar36 = puVar48;
                  iVar33 = uVar26 - uVar17;
                  if ((uVar17 & 1) != 0) {
                    puVar36 = puVar48 + 1;
                    uVar42 = *puVar48;
                    *(ushort *)puVar29 =
                         (ushort)(uVar42 >> 3) & 0x1f |
                         (ushort)(uVar42 >> 6) & 0x3e0 | (ushort)(uVar42 >> 9) & 0x7c00;
                    puVar34 = (uint *)((long)puVar29 + 2);
                    iVar33 = (uVar26 - uVar17) + -1;
                  }
                  uVar42 = iVar33 - 2;
                  if (-1 < (int)uVar42) {
                    uVar37 = (ulong)(uVar42 >> 1);
                    uVar41 = uVar37 + 1 & 0xfffffffc;
                    puVar46 = puVar36;
                    puVar53 = puVar34;
                    if (uVar41 == 0) {
LAB_1002fbb28:
                      uVar41 = 0;
                    }
                    else if (puVar34 + uVar37 < puVar36 || puVar36 + uVar37 * 2 < puVar34) {
                      if (puVar34 <= puVar36 + (uVar37 * 2 | 1) && puVar36 + 1 <= puVar34 + uVar37)
                      goto LAB_1002fbb28;
                      uVar42 = uVar42 + (int)uVar41 * -2;
                      puVar46 = puVar36 + uVar41 * 2;
                      puVar53 = puVar34 + uVar41;
                      puVar39 = puVar36 + 7;
                      uVar44 = (ulong)(iVar33 - 2U >> 1) + 1 & 0xfffffffffffffffc;
                      puVar43 = puVar34;
                      do {
                        uVar27 = puVar39[-1];
                        uVar8 = puVar39[-5];
                        uVar9 = puVar39[-3];
                        uVar10 = puVar39[-7];
                        uVar11 = *puVar39;
                        uVar12 = puVar39[-4];
                        uVar13 = puVar39[-2];
                        uVar14 = puVar39[-6];
                        *puVar43 = uVar10 >> 6 & uVar58 | uVar10 >> 9 & uVar54 |
                                   uVar10 >> 3 & uVar62 | uVar14 << 10 & uVar70 |
                                   uVar14 << 7 & uVar66 | uVar14 << 0xd & uVar31;
                        puVar43[1] = uVar8 >> 6 & uVar59 | uVar8 >> 9 & uVar55 | uVar8 >> 3 & uVar63
                                     | uVar12 << 10 & uVar71 | uVar12 << 7 & uVar67 |
                                     uVar12 << 0xd & uVar74;
                        puVar43[2] = uVar9 >> 6 & uVar60 | uVar9 >> 9 & uVar56 | uVar9 >> 3 & uVar64
                                     | uVar13 << 10 & uVar72 | uVar13 << 7 & uVar68 |
                                     uVar13 << 0xd & uVar75;
                        puVar43[3] = uVar27 >> 6 & uVar61 | uVar27 >> 9 & uVar57 |
                                     uVar27 >> 3 & uVar65 | uVar11 << 10 & uVar73 |
                                     uVar11 << 7 & uVar69 | uVar11 << 0xd & uVar76;
                        puVar43 = puVar43 + 4;
                        puVar39 = puVar39 + 8;
                        uVar44 = uVar44 - 4;
                      } while (uVar44 != 0);
                    }
                    else {
                      uVar41 = 0;
                    }
                    puVar34 = puVar34 + uVar37 + 1;
                    if (uVar37 + 1 != uVar41) {
                      do {
                        uVar27 = *puVar46;
                        uVar8 = puVar46[1];
                        *puVar53 = uVar27 >> 6 & 0x3e0 | uVar27 >> 9 & 0x7c00 | uVar27 >> 3 & 0x1f |
                                   (uVar8 & 0xf800) << 10 | (uVar8 & 0xf80000) << 7 |
                                   (uVar8 & 0xf8) << 0xd;
                        puVar53 = puVar53 + 1;
                        puVar46 = puVar46 + 2;
                        uVar42 = uVar42 - 2;
                      } while (-1 < (int)uVar42);
                    }
                    uVar42 = iVar33 - 4;
                    puVar36 = puVar36 + uVar37 * 2 + 2;
                  }
                  if ((uVar42 & 1) != 0) {
                    uVar42 = *puVar36;
                    *(ushort *)puVar34 =
                         (ushort)(uVar42 >> 3) & 0x1f |
                         (ushort)(uVar42 >> 6) & 0x3e0 | (ushort)(uVar42 >> 9) & 0x7c00;
                  }
                  puVar29 = (uint *)((long)puVar29 + (long)iVar45);
                  puVar48 = puVar48 + uVar28;
                  iVar40 = iVar40 + -1;
                } while (iVar22 < iVar40);
              }
              else if (iVar7 == 0x10) {
                do {
                  puVar36 = puVar48;
                  puVar34 = puVar29;
                  iVar33 = uVar26 - uVar17;
                  if ((uVar17 & 1) != 0) {
                    puVar36 = puVar48 + 1;
                    uVar42 = *puVar48;
                    *(ushort *)puVar29 =
                         (ushort)(uVar42 >> 3) & 0x1f |
                         (ushort)(uVar42 >> 5) & 0x7e0 | (ushort)(uVar42 >> 8) & 0xf800;
                    puVar34 = (uint *)((long)puVar29 + 2);
                    iVar33 = (uVar26 - uVar17) + -1;
                  }
                  uVar42 = iVar33 - 2;
                  if (-1 < (int)uVar42) {
                    uVar27 = uVar42 >> 1;
                    uVar41 = (ulong)uVar27;
                    uVar37 = uVar41 + 1 & 0xfffffffc;
                    puVar46 = puVar36;
                    puVar53 = puVar34;
                    if (uVar37 == 0) {
                      uVar37 = 0;
                    }
                    else if ((puVar34 + uVar41 < puVar36 || puVar36 + uVar41 * 2 < puVar34) &&
                            (puVar36 + (uVar41 * 2 | 1) < puVar34 || puVar34 + uVar41 < puVar36 + 1)
                            ) {
                      uVar42 = uVar42 + (int)uVar37 * -2;
                      puVar46 = puVar36 + uVar37 * 2;
                      puVar53 = puVar34 + uVar37;
                      puVar39 = puVar36 + 7;
                      uVar44 = (ulong)(iVar33 - 2U >> 1) + 1 & 0xfffffffffffffffc;
                      puVar43 = puVar34;
                      do {
                        uVar8 = puVar39[-1];
                        uVar9 = puVar39[-5];
                        uVar10 = puVar39[-3];
                        uVar11 = puVar39[-7];
                        uVar12 = *puVar39;
                        uVar13 = puVar39[-4];
                        uVar14 = puVar39[-2];
                        uVar15 = puVar39[-6];
                        *puVar43 = uVar11 >> 5 & uVar81 | uVar11 >> 8 & uVar77 |
                                   uVar11 >> 3 & uVar62 | uVar15 << 0xb & uVar89 |
                                   uVar15 << 8 & uVar85 | uVar15 << 0xd & uVar31;
                        puVar43[1] = uVar9 >> 5 & uVar82 | uVar9 >> 8 & uVar78 | uVar9 >> 3 & uVar63
                                     | uVar13 << 0xb & uVar90 | uVar13 << 8 & uVar86 |
                                     uVar13 << 0xd & uVar74;
                        puVar43[2] = uVar10 >> 5 & uVar83 | uVar10 >> 8 & uVar79 |
                                     uVar10 >> 3 & uVar64 | uVar14 << 0xb & uVar91 |
                                     uVar14 << 8 & uVar87 | uVar14 << 0xd & uVar75;
                        puVar43[3] = uVar8 >> 5 & uVar84 | uVar8 >> 8 & uVar80 | uVar8 >> 3 & uVar65
                                     | uVar12 << 0xb & uVar92 | uVar12 << 8 & uVar88 |
                                     uVar12 << 0xd & uVar76;
                        puVar43 = puVar43 + 4;
                        puVar39 = puVar39 + 8;
                        uVar44 = uVar44 - 4;
                      } while (uVar44 != 0);
                    }
                    else {
                      uVar37 = 0;
                    }
                    puVar34 = puVar34 + (ulong)uVar27 + 1;
                    if (uVar41 + 1 != uVar37) {
                      do {
                        uVar8 = *puVar46;
                        uVar9 = puVar46[1];
                        *puVar53 = uVar8 >> 5 & 0x7e0 | uVar8 >> 8 & 0xf800 | uVar8 >> 3 & 0x1f |
                                   (uVar9 & 0xfc00) << 0xb | (uVar9 & 0xf80000) << 8 |
                                   (uVar9 & 0xf8) << 0xd;
                        puVar53 = puVar53 + 1;
                        puVar46 = puVar46 + 2;
                        uVar42 = uVar42 - 2;
                      } while (-1 < (int)uVar42);
                    }
                    uVar42 = iVar33 - 4;
                    puVar36 = puVar36 + (ulong)uVar27 * 2 + 2;
                  }
                  if ((uVar42 & 1) != 0) {
                    uVar42 = *puVar36;
                    *(ushort *)puVar34 =
                         (ushort)(uVar42 >> 3) & 0x1f |
                         (ushort)(uVar42 >> 5) & 0x7e0 | (ushort)(uVar42 >> 8) & 0xf800;
                  }
                  puVar29 = (uint *)((long)puVar29 + (long)iVar45);
                  puVar48 = puVar48 + uVar28;
                  iVar40 = iVar40 + -1;
                } while (iVar22 < iVar40);
              }
            }
            else if (iVar7 == 0x18) {
              uVar27 = (iVar33 + -1) - param_5[2];
              if ((int)uVar27 < (int)(uVar25 + iVar5)) {
                uVar27 = uVar25 + iVar5;
              }
              if ((int)uVar42 < (int)uVar24) {
                uVar42 = uVar24;
              }
              do {
                if (uVar26 != uVar17) {
                  puVar34 = puVar29;
                  puVar36 = puVar48;
                  iVar33 = iVar51;
                  if ((~uVar27 - uVar42 & 1) != 0) {
                    iVar33 = iVar51 + -1;
                    puVar36 = puVar48 + 1;
                    uVar8 = *puVar48;
                    *(char *)puVar29 = (char)uVar8;
                    *(char *)((long)puVar29 + 1) = (char)(uVar8 >> 8);
                    puVar34 = (uint *)((long)puVar29 + 3);
                    *(char *)((long)puVar29 + 2) = (char)(uVar8 >> 0x10);
                  }
                  if (-uVar27 - 2 != uVar42) {
                    do {
                      uVar8 = *puVar36;
                      *(char *)puVar34 = (char)uVar8;
                      *(char *)((long)puVar34 + 1) = (char)(uVar8 >> 8);
                      *(char *)((long)puVar34 + 2) = (char)(uVar8 >> 0x10);
                      uVar8 = puVar36[1];
                      *(char *)((long)puVar34 + 3) = (char)uVar8;
                      *(char *)(puVar34 + 1) = (char)(uVar8 >> 8);
                      puVar36 = puVar36 + 2;
                      iVar33 = iVar33 + -2;
                      *(char *)((long)puVar34 + 5) = (char)(uVar8 >> 0x10);
                      puVar34 = (uint *)((long)puVar34 + 6);
                    } while (iVar33 != 0);
                  }
                }
                puVar29 = (uint *)((long)puVar29 + (long)iVar45);
                puVar48 = puVar48 + uVar28;
                iVar40 = iVar40 + -1;
              } while (iVar22 < iVar40);
            }
            else if (iVar7 == 0x20) {
              sVar50 = (long)iVar51 << 2;
              lVar30 = (long)iVar45;
              uVar31 = (iVar52 + -1) - param_5[3];
              uVar17 = uVar21;
              if ((int)uVar21 <= (int)uVar31) {
                uVar17 = uVar31;
              }
              iVar33 = iVar20 - iVar6;
              if (iVar20 - iVar6 <= iVar38) {
                iVar33 = iVar38;
              }
              if ((~uVar17 - iVar33 & 3) != 0) {
                if ((int)uVar42 < (int)uVar24) {
                  uVar42 = uVar24;
                }
                if ((int)uVar31 < (int)uVar21) {
                  uVar31 = uVar21;
                }
                puVar48 = (uint *)(*plVar2 +
                                  ((ulong)(((iVar20 - uVar4) + iVar6 * -2 + uVar31) * uVar27) +
                                  (long)(int)uVar42) * 4);
                if (iVar38 < iVar32 - iVar6) {
                  iVar38 = iVar32 - iVar6;
                }
                iVar52 = -(~uVar31 - iVar38 & 3);
                do {
                  _memcpy(puVar29,puVar48,sVar50);
                  puVar29 = (uint *)((long)puVar29 + lVar30);
                  iVar40 = iVar40 + -1;
                  puVar48 = puVar48 + uVar28;
                  iVar52 = iVar52 + 1;
                } while (iVar52 != 0);
              }
              uVar85 = _DAT_100b39650;
              uVar86 = _UNK_100b39654;
              uVar87 = _UNK_100b39658;
              uVar88 = _UNK_100b3965c;
              uVar89 = _DAT_100b39660;
              uVar90 = _UNK_100b39664;
              uVar91 = _UNK_100b39668;
              uVar92 = _UNK_100b3966c;
              uVar77 = _DAT_100b39630;
              uVar78 = _UNK_100b39634;
              uVar79 = _UNK_100b39638;
              uVar80 = _UNK_100b3963c;
              uVar81 = _DAT_100b39640;
              uVar82 = _UNK_100b39644;
              uVar83 = _UNK_100b39648;
              uVar84 = _UNK_100b3964c;
              uVar31 = _DAT_100b39620;
              uVar74 = _UNK_100b39624;
              uVar75 = _UNK_100b39628;
              uVar76 = _UNK_100b3962c;
              uVar66 = _DAT_100b39600;
              uVar67 = _UNK_100b39604;
              uVar68 = _UNK_100b39608;
              uVar69 = _UNK_100b3960c;
              uVar70 = _DAT_100b39610;
              uVar71 = _UNK_100b39614;
              uVar72 = _UNK_100b39618;
              uVar73 = _UNK_100b3961c;
              uVar54 = _DAT_100b395d0;
              uVar55 = _UNK_100b395d4;
              uVar56 = _UNK_100b395d8;
              uVar57 = _UNK_100b395dc;
              uVar58 = _DAT_100b395e0;
              uVar59 = _UNK_100b395e4;
              uVar60 = _UNK_100b395e8;
              uVar61 = _UNK_100b395ec;
              uVar62 = _DAT_100b395f0;
              uVar63 = _UNK_100b395f4;
              uVar64 = _UNK_100b395f8;
              uVar65 = _UNK_100b395fc;
              if (2 < (-2 - uVar17) - iVar33) {
                do {
                  _memcpy(puVar29,puVar48,sVar50);
                  _memcpy((void *)((long)puVar29 + lVar30),puVar48 + uVar28,sVar50);
                  pvVar23 = (void *)((long)puVar29 + lVar30 + lVar30);
                  _memcpy(pvVar23,puVar48 + uVar28 * 2,sVar50);
                  pvVar23 = (void *)((long)pvVar23 + lVar30);
                  _memcpy(pvVar23,puVar48 + uVar28 * 3,sVar50);
                  iVar40 = iVar40 + -4;
                  puVar48 = puVar48 + uVar28 * 4;
                  puVar29 = (uint *)((long)pvVar23 + lVar30);
                  uVar85 = _DAT_100b39650;
                  uVar86 = _UNK_100b39654;
                  uVar87 = _UNK_100b39658;
                  uVar88 = _UNK_100b3965c;
                  uVar89 = _DAT_100b39660;
                  uVar90 = _UNK_100b39664;
                  uVar91 = _UNK_100b39668;
                  uVar92 = _UNK_100b3966c;
                  uVar77 = _DAT_100b39630;
                  uVar78 = _UNK_100b39634;
                  uVar79 = _UNK_100b39638;
                  uVar80 = _UNK_100b3963c;
                  uVar81 = _DAT_100b39640;
                  uVar82 = _UNK_100b39644;
                  uVar83 = _UNK_100b39648;
                  uVar84 = _UNK_100b3964c;
                  uVar31 = _DAT_100b39620;
                  uVar74 = _UNK_100b39624;
                  uVar75 = _UNK_100b39628;
                  uVar76 = _UNK_100b3962c;
                  uVar66 = _DAT_100b39600;
                  uVar67 = _UNK_100b39604;
                  uVar68 = _UNK_100b39608;
                  uVar69 = _UNK_100b3960c;
                  uVar70 = _DAT_100b39610;
                  uVar71 = _UNK_100b39614;
                  uVar72 = _UNK_100b39618;
                  uVar73 = _UNK_100b3961c;
                  uVar54 = _DAT_100b395d0;
                  uVar55 = _UNK_100b395d4;
                  uVar56 = _UNK_100b395d8;
                  uVar57 = _UNK_100b395dc;
                  uVar58 = _DAT_100b395e0;
                  uVar59 = _UNK_100b395e4;
                  uVar60 = _UNK_100b395e8;
                  uVar61 = _UNK_100b395ec;
                  uVar62 = _DAT_100b395f0;
                  uVar63 = _UNK_100b395f4;
                  uVar64 = _UNK_100b395f8;
                  uVar65 = _UNK_100b395fc;
                } while (iVar22 < iVar40);
              }
            }
          }
          param_5 = param_5 + 4;
          bVar16 = 1 < param_6;
          param_6 = param_6 + -1;
        } while (bVar16);
      }
      FUN_1002ac6b0(param_1,param_2,uVar49,iVar47,uVar3);
      return;
    }
  }
  return;
}

