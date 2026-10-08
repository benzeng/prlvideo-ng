
byte FUN_100baeb50(long *param_1,long *param_2,undefined8 param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  code *pcVar20;
  ulong *puVar21;
  uint uVar22;
  long lVar23;
  ulong *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  byte bVar29;
  ulong uVar30;
  bool bVar31;
  
  bVar29 = 0;
  puVar19 = (undefined8 *)0x0;
  if (param_5 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar19 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar19 + 7) = 0;
    puVar19[6] = 0;
    puVar19[5] = 0;
    puVar19[4] = 0;
    puVar19[3] = 0;
    puVar19[2] = 0;
    puVar19[1] = 0;
    *puVar19 = 0;
    param_5 = puVar19;
  }
  FUN_100bb4190(param_5);
  plVar9 = (long *)FUN_100bb4250(param_5);
  plVar10 = (long *)FUN_100bb4250(param_5);
  lVar11 = FUN_100bb4250(param_5);
  puVar12 = (undefined8 *)FUN_100bb4250(param_5);
  if (puVar12 == (undefined8 *)0x0) goto LAB_100baf118;
  plVar1 = param_1 + 0xd;
  iVar4 = FUN_100bb54a0(0,lVar11,param_3,plVar1,param_5);
  if (iVar4 == 0) {
    bVar29 = 0;
    goto LAB_100baf118;
  }
  if (*(int *)(lVar11 + 0x10) != 0) {
    if ((int)param_1[0xf] == 0) {
      pcVar20 = FUN_100bb66e0;
    }
    else {
      pcVar20 = FUN_100bb6450;
    }
    iVar4 = (*pcVar20)(lVar11,lVar11,plVar1);
    if (iVar4 == 0) {
      bVar29 = 0;
      goto LAB_100baf118;
    }
  }
  if (*(long *)(*param_1 + 0x120) == 0) {
    iVar4 = (**(code **)(*param_1 + 0x108))(param_1,plVar10,param_3,param_5);
    if (iVar4 == 0) {
      bVar29 = 0;
      goto LAB_100baf118;
    }
    iVar4 = (**(code **)(*param_1 + 0x100))(param_1,plVar9,plVar10,param_3);
    if (iVar4 == 0) {
      bVar29 = 0;
      goto LAB_100baf118;
    }
  }
  else {
    iVar4 = FUN_100bb8d30(plVar10,param_3,param_5);
    if (iVar4 == 0) {
      bVar29 = 0;
      goto LAB_100baf118;
    }
    bVar29 = 0;
    iVar4 = FUN_100bb54a0(0,plVar10,plVar10,plVar1,param_5);
    if ((iVar4 == 0) || (iVar4 = FUN_100bba3e0(plVar9,plVar10,param_3,plVar1), iVar4 == 0))
    goto LAB_100baf118;
  }
  if ((int)param_1[0x19] == 0) {
    pcVar20 = *(code **)(*param_1 + 0x120);
    if (pcVar20 == (code *)0x0) {
      iVar4 = (**(code **)(*param_1 + 0x100))(param_1,plVar10,param_1 + 0x13,lVar11,param_5);
    }
    else {
      iVar4 = (*pcVar20)();
      if (iVar4 == 0) {
        bVar29 = 0;
        goto LAB_100baf118;
      }
      iVar4 = FUN_100bba3e0(plVar10,plVar10,lVar11,plVar1,param_5);
    }
    if ((iVar4 == 0) || (iVar4 = FUN_100bb5b30(plVar9,plVar9,plVar10), iVar4 == 0))
    goto LAB_100baf111;
    iVar4 = (int)plVar9[1];
    lVar23 = (long)iVar4;
    if (iVar4 == (int)param_1[0xe]) {
      lVar26 = (long)(iVar4 + -1) * 8;
      puVar24 = (ulong *)(*plVar1 + lVar26);
      puVar21 = (ulong *)(lVar26 + *plVar9);
      do {
        if (lVar23 < 1) goto LAB_100baef8c;
        uVar30 = *puVar24;
        lVar23 = lVar23 + -1;
        puVar24 = puVar24 + -1;
        uVar2 = *puVar21;
        puVar21 = puVar21 + -1;
      } while (uVar2 == uVar30);
      if (uVar30 <= uVar2) goto LAB_100baef8c;
    }
    else if ((int)param_1[0xe] <= iVar4) {
LAB_100baef8c:
      iVar4 = FUN_100bb61f0(plVar9,plVar9,plVar1);
LAB_100baef9a:
      if (iVar4 == 0) goto LAB_100baf111;
    }
LAB_100baefa5:
    if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
      iVar4 = FUN_100bb5b30(plVar9,plVar9,param_1 + 0x16);
      if (iVar4 != 0) {
        iVar4 = (int)plVar9[1];
        lVar23 = (long)iVar4;
        iVar7 = (int)param_1[0xe];
        if (iVar4 != iVar7) goto LAB_100baf0a4;
        lVar26 = (long)(iVar4 + -1) * 8;
        puVar24 = (ulong *)(*plVar1 + lVar26);
        puVar21 = (ulong *)(lVar26 + *plVar9);
        do {
          if (lVar23 < 1) goto LAB_100baf0a8;
          uVar30 = *puVar24;
          lVar23 = lVar23 + -1;
          puVar24 = puVar24 + -1;
          uVar2 = *puVar21;
          puVar21 = puVar21 + -1;
        } while (uVar2 == uVar30);
        if (uVar30 <= uVar2) goto LAB_100baf0a8;
LAB_100baf0bb:
        plVar10 = param_1 + 0xe;
        iVar4 = (int)*plVar10;
        if (0 < iVar4) {
          uVar30 = *(ulong *)*plVar1;
          if (((uVar30 & 1) != 0) && ((iVar4 != 1 || (uVar30 != 1)))) {
            if ((int)plVar9[1] == 0) {
              uVar30 = 0;
LAB_100baf226:
              if (*(int *)((long)puVar12 + 0xc) < 1) {
                lVar23 = FUN_100bac510(puVar12,1);
                bVar29 = 0;
                if (lVar23 == 0) goto LAB_100baf118;
              }
              *(undefined4 *)(puVar12 + 2) = 0;
              *(ulong *)*puVar12 = uVar30;
              *(int *)(puVar12 + 1) = (int)uVar30;
            }
            else {
              if ((((int)plVar9[1] == 1) && (*(long *)*plVar9 == 1)) && ((int)plVar9[2] == 0)) {
                if (*(long *)*plVar9 == 1) {
                  bVar31 = (int)plVar9[2] == 0;
                }
                else {
                  bVar31 = false;
                }
                uVar30 = (ulong)bVar31;
                goto LAB_100baf226;
              }
              FUN_100bb4190(param_5);
              plVar13 = (long *)FUN_100bb4250(param_5);
              puVar14 = (undefined8 *)FUN_100bb4250(param_5);
              lVar23 = FUN_100bb4250(param_5);
              plVar15 = (long *)FUN_100bb4250(param_5);
              plVar16 = (long *)FUN_100bb4250(param_5);
              plVar17 = (long *)FUN_100bb4250(param_5);
              puVar28 = (undefined8 *)0x0;
              if (plVar17 != (long *)0x0) {
                iVar4 = FUN_100bb54a0(0,plVar13,plVar9,plVar1);
                if (iVar4 == 0) goto LAB_100bafc25;
                if ((int)plVar13[2] != 0) {
                  if ((int)param_1[0xf] == 0) {
                    pcVar20 = FUN_100bb66e0;
                  }
                  else {
                    pcVar20 = FUN_100bb6450;
                  }
                  iVar4 = (*pcVar20)(plVar13,plVar13,plVar1);
                  if (iVar4 == 0) goto LAB_100bafc25;
                }
                uVar30 = 1;
                while( true ) {
                  iVar7 = (int)uVar30;
                  iVar4 = (int)(((uint)(iVar7 >> 0x1f) >> 0x1a) + iVar7) >> 6;
                  if ((iVar4 < (int)*plVar10) &&
                     ((*(ulong *)(*plVar1 + (long)iVar4 * 8) >> (uVar30 & 0x3f) & 1) != 0)) break;
                  uVar30 = (ulong)(iVar7 + 1);
                }
                puVar28 = puVar12;
                if (iVar7 == 2) {
                  iVar4 = FUN_100bb6570(plVar15,plVar13);
                  if (iVar4 == 0) goto LAB_100bafc25;
                  if (plVar15 == (long *)0x0) {
LAB_100baf513:
                    iVar4 = FUN_100bb6450(plVar15,plVar15,plVar1);
                    if (iVar4 == 0) goto LAB_100bafc25;
                  }
                  else {
                    iVar4 = (int)plVar15[2];
                    uVar5 = ~-(uint)(iVar4 == 0) | 1;
                    uVar6 = uVar5;
                    if (iVar4 == (int)param_1[0xf]) {
                      iVar7 = (int)plVar15[1];
                      lVar26 = (long)iVar7;
                      if ((iVar7 <= (int)*plVar10) &&
                         (uVar18 = -(uint)(iVar4 == 0) | 1, uVar6 = uVar18, (int)*plVar10 <= iVar7))
                      {
                        lVar27 = (long)(iVar7 + -1) << 3;
                        do {
                          if (lVar26 < 1) goto LAB_100baf513;
                          puVar21 = (ulong *)(*plVar15 + lVar27);
                          puVar24 = (ulong *)(*plVar1 + lVar27);
                          uVar6 = uVar5;
                          if (*puVar24 < *puVar21) break;
                          lVar26 = lVar26 + -1;
                          lVar27 = lVar27 + -8;
                          uVar6 = uVar18;
                        } while (*puVar24 <= *puVar21);
                      }
                    }
                    if (-1 < (int)uVar6) goto LAB_100baf513;
                  }
                  iVar4 = FUN_100bb5e40(lVar23,plVar1,3);
                  if (iVar4 != 0) {
                    *(undefined4 *)(lVar23 + 0x10) = 0;
                    iVar4 = FUN_100bba980(puVar14,plVar15,lVar23,plVar1,param_5);
                    if ((((iVar4 != 0) &&
                         (iVar4 = FUN_100bb8d30(plVar17,puVar14,param_5), iVar4 != 0)) &&
                        (iVar4 = FUN_100bb54a0(0,plVar17,plVar17,plVar1,param_5), iVar4 != 0)) &&
                       (((iVar4 = FUN_100bba3e0(plVar15,plVar15,plVar17,plVar1,param_5), iVar4 != 0
                         && (iVar4 = FUN_100bb53b0(plVar15,1), iVar4 != 0)) &&
                        ((iVar4 = FUN_100bba3e0(plVar16,plVar13,puVar14,plVar1,param_5), iVar4 != 0
                         && (iVar4 = FUN_100bba3e0(plVar16,plVar16,plVar15,plVar1,param_5),
                            iVar4 != 0)))))) {
LAB_100bafb68:
                      lVar23 = FUN_100bac3a0(puVar12,plVar16);
                      if (lVar23 != 0) {
LAB_100bafb81:
                        iVar4 = FUN_100bb8d30(plVar16,puVar12,param_5);
                        if ((iVar4 != 0) &&
                           (iVar4 = FUN_100bb54a0(0,plVar16,plVar16,plVar1,param_5), iVar4 != 0)) {
                          if ((plVar13 == (long *)0x0) || (plVar16 == (long *)0x0)) {
                            if (plVar13 == (long *)0x0 && plVar16 == (long *)0x0)
                            goto LAB_100bafc28;
                          }
                          else if ((int)plVar16[2] == (int)plVar13[2]) {
                            iVar4 = (int)plVar16[1];
                            lVar23 = (long)iVar4;
                            if (iVar4 == (int)plVar13[1]) {
                              lVar26 = (long)(iVar4 + -1) << 3;
                              do {
                                if (lVar23 < 1) goto LAB_100bafc28;
                                puVar21 = (ulong *)(*plVar16 + lVar26);
                                puVar24 = (ulong *)(*plVar13 + lVar26);
                                if (*puVar24 < *puVar21) break;
                                lVar23 = lVar23 + -1;
                                lVar26 = lVar26 + -8;
                              } while (*puVar24 <= *puVar21);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else if (iVar7 == 1) {
                  iVar4 = FUN_100bb5e40(lVar23,plVar1,2);
                  if (iVar4 != 0) {
                    *(undefined4 *)(lVar23 + 0x10) = 0;
                    iVar4 = FUN_100bb8c20(lVar23,1);
                    if ((iVar4 != 0) &&
                       (iVar4 = FUN_100bba980(puVar12,plVar13,lVar23,plVar1,param_5), iVar4 != 0))
                    goto LAB_100bafb81;
                  }
                }
                else {
                  lVar26 = FUN_100bac3a0(lVar23,plVar1);
                  if (lVar26 != 0) {
                    *(undefined4 *)(lVar23 + 0x10) = 0;
                    lVar26 = 2;
                    do {
                      if (lVar26 < 0x16) {
LAB_100baf77f:
                        if ((*(int *)((long)plVar17 + 0xc) < 1) &&
                           (lVar27 = FUN_100bac510(plVar17,1), lVar27 == 0)) break;
                        *(undefined4 *)(plVar17 + 2) = 0;
                        *(long *)*plVar17 = lVar26;
                        *(undefined4 *)(plVar17 + 1) = 1;
                      }
                      else {
                        iVar4 = (int)*plVar10;
                        iVar7 = 0;
                        if ((long)iVar4 != 0) {
                          iVar7 = FUN_100bac6c0(*(undefined8 *)(*plVar1 + -8 + (long)iVar4 * 8));
                          iVar7 = iVar7 + (iVar4 + -1) * 0x40;
                        }
                        iVar4 = FUN_100bbd1b0(1,plVar17,iVar7,0,0);
                        if (iVar4 == 0) break;
                        iVar4 = (int)plVar17[1];
                        if (iVar4 == (int)*plVar10) {
                          lVar27 = (long)iVar4;
                          lVar25 = (long)(iVar4 + -1) * 8;
                          puVar24 = (ulong *)(*plVar1 + lVar25);
                          puVar21 = (ulong *)(lVar25 + *plVar17);
                          do {
                            if (lVar27 < 1) goto LAB_100baf747;
                            uVar2 = *puVar24;
                            lVar27 = lVar27 + -1;
                            puVar24 = puVar24 + -1;
                            uVar3 = *puVar21;
                            puVar21 = puVar21 + -1;
                          } while (uVar3 == uVar2);
                          if (uVar2 <= uVar3) {
LAB_100baf747:
                            pcVar20 = FUN_100bb66e0;
                            if ((int)param_1[0xf] == 0) {
                              pcVar20 = FUN_100bb6450;
                            }
                            iVar4 = (*pcVar20)(plVar17,plVar17,plVar1);
                            if (iVar4 == 0) break;
                            iVar4 = (int)plVar17[1];
                          }
                        }
                        else if ((int)*plVar10 <= iVar4) goto LAB_100baf747;
                        if (iVar4 == 0) goto LAB_100baf77f;
                      }
                      iVar4 = FUN_100bba580(plVar17,lVar23,param_5);
                      if ((iVar4 < -1) || (iVar4 == 0)) break;
                      if (iVar4 == -1) {
                        iVar4 = FUN_100bb5e40(lVar23,lVar23,uVar30);
                        if ((((iVar4 == 0) ||
                             (iVar4 = FUN_100bba980(plVar17,plVar17,lVar23,plVar1,param_5),
                             iVar4 == 0)) ||
                            (((int)plVar17[1] == 1 &&
                             ((*(long *)*plVar17 == 1 && ((int)plVar17[2] == 0)))))) ||
                           (iVar4 = FUN_100bb5d50(plVar15,lVar23), iVar4 == 0)) break;
                        if ((int)plVar15[1] == 0) {
                          iVar4 = FUN_100bb54a0(0,plVar15,plVar13,plVar1,param_5);
                          if (iVar4 == 0) break;
                          if ((int)plVar15[2] != 0) {
                            if ((int)param_1[0xf] == 0) {
                              pcVar20 = FUN_100bb66e0;
                            }
                            else {
                              pcVar20 = FUN_100bb6450;
                            }
                            iVar4 = (*pcVar20)(plVar15,plVar15,plVar1);
                            if (iVar4 == 0) break;
                          }
                          if ((int)plVar15[1] != 0) {
                            if ((0 < *(int *)((long)plVar16 + 0xc)) ||
                               (lVar23 = FUN_100bac510(plVar16,1), lVar23 != 0)) {
                              *(undefined4 *)(plVar16 + 2) = 0;
                              *(undefined8 *)*plVar16 = 1;
                              *(undefined4 *)(plVar16 + 1) = 1;
                              goto LAB_100baf966;
                            }
                            break;
                          }
                        }
                        else {
                          iVar4 = FUN_100bba980(plVar16,plVar13,plVar15,plVar1,param_5);
                          if (iVar4 == 0) break;
                          if ((int)plVar16[1] != 0) {
LAB_100baf966:
                            iVar4 = FUN_100bb8d30(puVar14,plVar16,param_5);
                            if ((((iVar4 != 0) &&
                                 (iVar4 = FUN_100bb54a0(0,puVar14,puVar14,plVar1,param_5),
                                 iVar4 != 0)) &&
                                (iVar4 = FUN_100bba3e0(puVar14,puVar14,plVar13,plVar1,param_5),
                                iVar4 != 0)) &&
                               (iVar4 = FUN_100bba3e0(plVar16,plVar16,plVar13,plVar1,param_5),
                               iVar4 != 0)) goto LAB_100baf9eb;
                            break;
                          }
                        }
                        *(undefined4 *)(puVar12 + 1) = 0;
                        *(undefined4 *)(puVar12 + 2) = 0;
                        goto LAB_100bafc28;
                      }
                      if ((iVar4 != 1) || (lVar26 = lVar26 + 1, 0x51 < lVar26)) break;
                    } while( true );
                  }
                }
LAB_100bafc25:
                puVar28 = (undefined8 *)0x0;
              }
LAB_100bafc28:
              if (*(int *)((long)param_5 + 0x34) == 0) {
                iVar4 = *(int *)(param_5 + 5);
                *(uint *)(param_5 + 5) = iVar4 - 1U;
                uVar6 = *(uint *)(param_5[4] + (ulong)(iVar4 - 1U) * 4);
                uVar5 = *(uint *)(param_5 + 6);
                if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
                  iVar4 = *(int *)(param_5 + 3);
                  uVar18 = uVar5 - uVar6;
                  *(uint *)(param_5 + 3) = iVar4 - (uVar5 - uVar6);
                  if (uVar18 != 0) {
                    uVar22 = iVar4 + 0xfU & 0xf;
                    if ((uVar18 & 1) != 0) {
                      if (uVar22 == 0) {
                        param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                        uVar22 = 0xf;
                      }
                      else {
                        uVar22 = uVar22 - 1;
                      }
                      uVar18 = uVar18 - 1;
                    }
                    if (uVar5 - 1 != uVar6) {
                      do {
                        if (uVar22 == 0) {
                          param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                          iVar4 = 0xf;
                        }
                        else {
                          iVar4 = uVar22 - 1;
                        }
                        uVar18 = uVar18 - 2;
                        if (iVar4 == 0) {
                          param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                          uVar22 = 0xf;
                        }
                        else {
                          uVar22 = iVar4 - 1;
                        }
                      } while (uVar18 != 0);
                    }
                  }
                }
                *(uint *)(param_5 + 6) = uVar6;
                *(undefined4 *)(param_5 + 7) = 0;
              }
              else {
                *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
              }
              bVar29 = 0;
              if (puVar28 == (undefined8 *)0x0) goto LAB_100baf118;
              uVar30 = (ulong)*(uint *)(puVar12 + 1);
            }
            if ((int)uVar30 < 1) {
              if (param_4 != 0) {
                if ((int)uVar30 == 0) {
                  FUN_100bba580(lVar11,plVar1,param_5);
                  bVar29 = 0;
                  goto LAB_100baf118;
                }
                goto LAB_100baf29a;
              }
            }
            else {
              if ((bool)(*(byte *)*puVar12 & 1) == (param_4 != 0)) {
LAB_100baf2c2:
                bVar31 = (bool)(*(byte *)*puVar12 & 1) == (param_4 != 0);
              }
              else {
LAB_100baf29a:
                iVar4 = FUN_100bb61f0(puVar12,plVar1,puVar12);
                if (iVar4 == 0) {
                  bVar29 = 0;
                  goto LAB_100baf118;
                }
                if (0 < *(int *)(puVar12 + 1)) goto LAB_100baf2c2;
                bVar31 = param_4 == 0;
              }
              bVar29 = 0;
              if (!bVar31) goto LAB_100baf118;
            }
            pcVar20 = *(code **)(*param_1 + 0x80);
            bVar31 = true;
            if ((pcVar20 != (code *)0x0) && (*param_1 == *param_2)) {
              iVar4 = (*pcVar20)(param_1,param_2,lVar11,puVar12,param_5);
              bVar31 = iVar4 == 0;
            }
            bVar29 = bVar31 ^ 1;
            goto LAB_100baf118;
          }
          if ((iVar4 == 1) && (uVar30 == 2)) {
            uVar30 = 0;
            if (0 < (int)plVar9[1]) {
              uVar30 = *(ulong *)*plVar9 & 1;
            }
            goto LAB_100baf226;
          }
        }
      }
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x120))(param_1,plVar10,param_1 + 0x16,param_5);
      if ((iVar4 != 0) && (iVar4 = FUN_100bb5b30(plVar9,plVar9,plVar10), iVar4 != 0)) {
        iVar4 = (int)plVar9[1];
        lVar23 = (long)iVar4;
        iVar7 = (int)param_1[0xe];
        if (iVar4 == iVar7) {
          lVar26 = (long)(iVar4 + -1) * 8;
          puVar24 = (ulong *)(*plVar1 + lVar26);
          puVar21 = (ulong *)(lVar26 + *plVar9);
          do {
            if (lVar23 < 1) goto LAB_100baf0a8;
            uVar30 = *puVar24;
            lVar23 = lVar23 + -1;
            puVar24 = puVar24 + -1;
            uVar2 = *puVar21;
            puVar21 = puVar21 + -1;
          } while (uVar2 == uVar30);
          if (uVar2 < uVar30) goto LAB_100baf0bb;
        }
        else {
LAB_100baf0a4:
          if (iVar4 < iVar7) goto LAB_100baf0bb;
        }
LAB_100baf0a8:
        iVar4 = FUN_100bb61f0(plVar9,plVar9,plVar1);
        if (iVar4 != 0) goto LAB_100baf0bb;
      }
    }
  }
  else {
    iVar4 = FUN_100bb6570(plVar10,lVar11);
    if (iVar4 != 0) {
      if (plVar10 == (long *)0x0) {
LAB_100baedd6:
        iVar4 = FUN_100bb6450(plVar10,plVar10,plVar1);
        if (iVar4 == 0) goto LAB_100baf111;
      }
      else {
        iVar4 = (int)plVar10[2];
        uVar5 = ~-(uint)(iVar4 == 0) | 1;
        uVar6 = uVar5;
        if (iVar4 == (int)param_1[0xf]) {
          iVar7 = (int)plVar10[1];
          lVar23 = (long)iVar7;
          if ((iVar7 <= (int)param_1[0xe]) &&
             (uVar18 = -(uint)(iVar4 == 0) | 1, uVar6 = uVar18, (int)param_1[0xe] <= iVar7)) {
            lVar26 = (long)(iVar7 + -1) << 3;
            do {
              if (lVar23 < 1) goto LAB_100baedd6;
              puVar21 = (ulong *)(*plVar10 + lVar26);
              puVar24 = (ulong *)(*plVar1 + lVar26);
              uVar6 = uVar5;
              if (*puVar24 < *puVar21) break;
              lVar23 = lVar23 + -1;
              lVar26 = lVar26 + -8;
              uVar6 = uVar18;
            } while (*puVar24 <= *puVar21);
          }
        }
        if (-1 < (int)uVar6) goto LAB_100baedd6;
      }
      iVar4 = FUN_100bb5b30(plVar10,plVar10,lVar11);
      if (iVar4 != 0) {
        iVar4 = (int)plVar10[1];
        lVar23 = (long)iVar4;
        if (iVar4 == (int)param_1[0xe]) {
          lVar26 = (long)(iVar4 + -1) * 8;
          puVar24 = (ulong *)(*plVar1 + lVar26);
          puVar21 = (ulong *)(lVar26 + *plVar10);
          do {
            if (lVar23 < 1) goto LAB_100baef3c;
            uVar30 = *puVar24;
            lVar23 = lVar23 + -1;
            puVar24 = puVar24 + -1;
            uVar2 = *puVar21;
            puVar21 = puVar21 + -1;
          } while (uVar2 == uVar30);
          if (uVar30 <= uVar2) {
LAB_100baef3c:
            iVar4 = FUN_100bb61f0(plVar10,plVar10,plVar1);
            if (iVar4 == 0) goto LAB_100baf111;
          }
        }
        else if ((int)param_1[0xe] <= iVar4) goto LAB_100baef3c;
        iVar4 = FUN_100bb6450(plVar9,plVar9,plVar10);
        if (iVar4 != 0) {
          if ((int)plVar9[2] != 0) {
            iVar4 = FUN_100bb66e0(plVar9,plVar9,plVar1);
            goto LAB_100baef9a;
          }
          goto LAB_100baefa5;
        }
      }
    }
  }
LAB_100baf111:
  bVar29 = 0;
LAB_100baf118:
  if (*(int *)((long)param_5 + 0x34) == 0) {
    iVar4 = *(int *)(param_5 + 5);
    *(uint *)(param_5 + 5) = iVar4 - 1U;
    uVar6 = *(uint *)(param_5[4] + (ulong)(iVar4 - 1U) * 4);
    uVar5 = *(uint *)(param_5 + 6);
    if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
      iVar4 = *(int *)(param_5 + 3);
      uVar18 = uVar5 - uVar6;
      *(uint *)(param_5 + 3) = iVar4 - (uVar5 - uVar6);
      if (uVar18 != 0) {
        uVar22 = iVar4 + 0xfU & 0xf;
        if ((uVar18 & 1) != 0) {
          if (uVar22 == 0) {
            param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
            uVar22 = 0xf;
          }
          else {
            uVar22 = uVar22 - 1;
          }
          uVar18 = uVar18 - 1;
        }
        if (uVar5 - 1 != uVar6) {
          do {
            if (uVar22 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              iVar4 = 0xf;
            }
            else {
              iVar4 = uVar22 - 1;
            }
            uVar18 = uVar18 - 2;
            if (iVar4 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              uVar22 = 0xf;
            }
            else {
              uVar22 = iVar4 - 1;
            }
          } while (uVar18 != 0);
        }
      }
    }
    *(uint *)(param_5 + 6) = uVar6;
    *(undefined4 *)(param_5 + 7) = 0;
  }
  else {
    *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
  }
  if (puVar19 != (undefined8 *)0x0) {
    FUN_100ba8db0();
  }
  return bVar29;
LAB_100baf9eb:
  if (((*(int *)(puVar14 + 1) == 1) && (*(long *)*puVar14 == 1)) && (*(int *)(puVar14 + 2) == 0))
  goto LAB_100bafb68;
  iVar4 = FUN_100bb8d30(plVar15,puVar14,param_5);
  if (iVar4 == 0) goto LAB_100bafc25;
  iVar4 = FUN_100bb54a0(0,plVar15,plVar15,plVar1,param_5);
  iVar7 = 2;
  while( true ) {
    if (iVar4 == 0) goto LAB_100bafc25;
    if ((((int)plVar15[1] == 1) && (*(long *)*plVar15 == 1)) && ((int)plVar15[2] == 0)) break;
    if ((int)uVar30 == iVar7) goto LAB_100bafc25;
    iVar4 = FUN_100bba3e0(plVar15,plVar15,plVar15,plVar1,param_5);
    iVar7 = iVar7 + 1;
  }
  lVar23 = FUN_100bac3a0(plVar15,plVar17);
  if (lVar23 == 0) goto LAB_100bafc25;
  iVar4 = ((int)uVar30 + 1) - (iVar7 - 1U);
  while (iVar4 = iVar4 + -1, 1 < iVar4) {
    iVar8 = FUN_100bb8d30(plVar15,plVar15,param_5);
    if ((iVar8 == 0) || (iVar8 = FUN_100bb54a0(0,plVar15,plVar15,plVar1,param_5), iVar8 == 0))
    goto LAB_100bafc25;
  }
  iVar4 = FUN_100bba3e0(plVar17,plVar15,plVar15,plVar1,param_5);
  if ((iVar4 == 0) || (iVar4 = FUN_100bba3e0(plVar16,plVar16,plVar15,plVar1,param_5), iVar4 == 0))
  goto LAB_100bafc25;
  iVar4 = FUN_100bba3e0(puVar14,puVar14,plVar17,plVar1,param_5);
  uVar30 = (ulong)(iVar7 - 1U);
  if (iVar4 == 0) goto LAB_100bafc25;
  goto LAB_100baf9eb;
}

