
ulong FUN_100bb0940(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  code *UNRECOVERED_JUMPTABLE;
  long lVar19;
  ulong *puVar20;
  uint uVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  
  lVar15 = *param_1;
  if (param_3 == param_4) {
    if (*(code **)(lVar15 + 0xb0) == (code *)0x0) {
      return 0;
    }
    if (lVar15 != *param_2) {
      return 0;
    }
    if (lVar15 != *param_3) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bb09fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(lVar15 + 0xb0))(param_1,param_2,param_3,param_5);
    return uVar9;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0xc0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (lVar15 == *param_3) {
      iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
      if (iVar6 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x60);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return 0;
        }
        if (*param_2 != *param_4) {
          return 0;
        }
        param_3 = param_4;
        if (param_2 == param_4) {
          return 1;
        }
        goto LAB_100bb0a51;
      }
      lVar15 = *param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0xc0);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_100bb0a67;
    }
    if (lVar15 == *param_4) {
      iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,param_4);
      if (iVar6 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x60);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return 0;
        }
        if (*param_2 != *param_3) {
          return 0;
        }
        if (param_2 == param_3) {
          return 1;
        }
LAB_100bb0a51:
                    /* WARNING: Could not recover jumptable at 0x000100bb0a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
        return uVar9;
      }
      lVar15 = *param_1;
    }
  }
LAB_100bb0a67:
  UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x100);
  pcVar4 = *(code **)(lVar15 + 0x108);
  puVar23 = (undefined8 *)0x0;
  if (param_5 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar23 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar23 + 7) = 0;
    puVar23[6] = 0;
    puVar23[5] = 0;
    puVar23[4] = 0;
    puVar23[3] = 0;
    puVar23[2] = 0;
    puVar23[1] = 0;
    *puVar23 = 0;
    param_5 = puVar23;
  }
  uVar9 = 0;
  FUN_100bb4190(param_5);
  plVar10 = (long *)FUN_100bb4250(param_5);
  plVar11 = (long *)FUN_100bb4250(param_5);
  plVar12 = (long *)FUN_100bb4250(param_5);
  uVar13 = FUN_100bb4250(param_5);
  uVar14 = FUN_100bb4250(param_5);
  lVar15 = FUN_100bb4250(param_5);
  lVar16 = FUN_100bb4250(param_5);
  if (lVar16 != 0) {
    if ((int)param_4[10] == 0) {
      iVar6 = (*pcVar4)(param_1,plVar10,param_4 + 7,param_5);
      if ((((iVar6 != 0) &&
           (iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,plVar11,param_3 + 1,plVar10,param_5),
           iVar6 != 0)) &&
          (iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,plVar10,plVar10,param_4 + 7,param_5), iVar6 != 0
          )) && (iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,plVar12,param_3 + 4,plVar10,param_5),
                iVar6 != 0)) goto LAB_100bb0c61;
    }
    else {
      lVar17 = FUN_100bac3a0(plVar11,param_3 + 1);
      if ((lVar17 != 0) && (lVar17 = FUN_100bac3a0(plVar12,param_3 + 4), lVar17 != 0)) {
LAB_100bb0c61:
        if ((int)param_3[10] == 0) {
          iVar6 = (*pcVar4)(param_1,plVar10,param_3 + 7,param_5);
          if (((iVar6 != 0) &&
              (iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar13,param_4 + 1,plVar10,param_5),
              iVar6 != 0)) &&
             ((iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,plVar10,plVar10,param_3 + 7,param_5),
              iVar6 != 0 &&
              (iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar14,param_4 + 4,plVar10,param_5),
              iVar6 != 0)))) goto LAB_100bb0d69;
        }
        else {
          lVar17 = FUN_100bac3a0(uVar13,param_4 + 1);
          if ((lVar17 != 0) && (lVar17 = FUN_100bac3a0(uVar14,param_4 + 4), lVar17 != 0)) {
LAB_100bb0d69:
            iVar6 = FUN_100bb6450(lVar15,plVar11,uVar13);
            if (((iVar6 != 0) &&
                (((plVar1 = param_1 + 0xd, *(int *)(lVar15 + 0x10) == 0 ||
                  (iVar6 = FUN_100bb66e0(lVar15,lVar15,plVar1), iVar6 != 0)) &&
                 (iVar6 = FUN_100bb6450(lVar16,plVar12,uVar14), iVar6 != 0)))) &&
               ((*(int *)(lVar16 + 0x10) == 0 ||
                (iVar6 = FUN_100bb66e0(lVar16,lVar16,plVar1), iVar6 != 0)))) {
              if (*(int *)(lVar15 + 8) == 0) {
                if (*(int *)(lVar16 + 8) == 0) {
                  if (*(int *)((long)param_5 + 0x34) == 0) {
                    iVar6 = *(int *)(param_5 + 5);
                    *(uint *)(param_5 + 5) = iVar6 - 1U;
                    uVar8 = *(uint *)(param_5[4] + (ulong)(iVar6 - 1U) * 4);
                    uVar7 = *(uint *)(param_5 + 6);
                    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
                      iVar6 = *(int *)(param_5 + 3);
                      uVar18 = uVar7 - uVar8;
                      *(uint *)(param_5 + 3) = iVar6 - (uVar7 - uVar8);
                      if (uVar18 != 0) {
                        uVar21 = iVar6 + 0xfU & 0xf;
                        if ((uVar18 & 1) != 0) {
                          if (uVar21 == 0) {
                            param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                            uVar21 = 0xf;
                          }
                          else {
                            uVar21 = uVar21 - 1;
                          }
                          uVar18 = uVar18 - 1;
                        }
                        if (uVar7 - 1 != uVar8) {
                          do {
                            if (uVar21 == 0) {
                              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                              iVar6 = 0xf;
                            }
                            else {
                              iVar6 = uVar21 - 1;
                            }
                            uVar18 = uVar18 - 2;
                            if (iVar6 == 0) {
                              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                              uVar21 = 0xf;
                            }
                            else {
                              uVar21 = iVar6 - 1;
                            }
                          } while (uVar18 != 0);
                        }
                      }
                    }
                    *(uint *)(param_5 + 6) = uVar8;
                    *(undefined4 *)(param_5 + 7) = 0;
                  }
                  else {
                    *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
                  }
                  lVar15 = *param_1;
                  if (*(code **)(lVar15 + 0xb0) == (code *)0x0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = 0;
                    if ((lVar15 == *param_2) && (lVar15 == *param_3)) {
                      uVar9 = (**(code **)(lVar15 + 0xb0))(param_1,param_2,param_3,param_5);
                    }
                  }
                  goto LAB_100bb1124;
                }
                *(undefined4 *)(param_2 + 8) = 0;
                *(undefined4 *)(param_2 + 9) = 0;
                *(undefined4 *)(param_2 + 10) = 0;
                uVar9 = 1;
              }
              else {
                iVar6 = FUN_100bb5b30(plVar11,plVar11,uVar13);
                if (iVar6 != 0) {
                  iVar6 = (int)plVar11[1];
                  lVar17 = (long)iVar6;
                  if (iVar6 == (int)param_1[0xe]) {
                    lVar19 = (long)(iVar6 + -1) * 8;
                    puVar22 = (ulong *)(*plVar1 + lVar19);
                    puVar20 = (ulong *)(lVar19 + *plVar11);
                    do {
                      if (lVar17 < 1) goto LAB_100bb0f3a;
                      uVar9 = *puVar22;
                      lVar17 = lVar17 + -1;
                      puVar22 = puVar22 + -1;
                      uVar5 = *puVar20;
                      puVar20 = puVar20 + -1;
                    } while (uVar5 == uVar9);
                    if (uVar9 <= uVar5) goto LAB_100bb0f3a;
LAB_100bb0f5b:
                    iVar6 = FUN_100bb5b30(plVar12,plVar12,uVar14);
                    if (iVar6 == 0) {
LAB_100bb1039:
                      uVar9 = 0;
                    }
                    else {
                      iVar6 = (int)plVar12[1];
                      lVar17 = (long)iVar6;
                      if (iVar6 == (int)param_1[0xe]) {
                        lVar19 = (long)(iVar6 + -1) * 8;
                        puVar22 = (ulong *)(*plVar1 + lVar19);
                        puVar20 = (ulong *)(lVar19 + *plVar12);
                        do {
                          if (lVar17 < 1) goto LAB_100bb0fdf;
                          uVar9 = *puVar22;
                          lVar17 = lVar17 + -1;
                          puVar22 = puVar22 + -1;
                          uVar5 = *puVar20;
                          puVar20 = puVar20 + -1;
                        } while (uVar5 == uVar9);
                        if (uVar9 <= uVar5) {
LAB_100bb0fdf:
                          iVar6 = FUN_100bb61f0(plVar12,plVar12,plVar1);
                          if (iVar6 == 0) goto LAB_100bb1039;
                        }
                      }
                      else if ((int)param_1[0xe] <= iVar6) goto LAB_100bb0fdf;
                      if ((int)param_3[10] == 0) {
                        uVar9 = 0;
                        param_3 = param_3 + 7;
                        if ((int)param_4[10] != 0) goto LAB_100bb11c2;
                        iVar6 = (*UNRECOVERED_JUMPTABLE)
                                          (param_1,plVar10,param_3,param_4 + 7,param_5);
                        if (iVar6 == 0) goto LAB_100bb103f;
LAB_100bb11f4:
                        uVar9 = 0;
                        iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 7,plVar10,lVar15,param_5)
                        ;
                        if (iVar6 == 0) goto LAB_100bb103f;
                      }
                      else {
                        uVar9 = 0;
                        if ((int)param_4[10] == 0) {
                          param_3 = param_4 + 7;
LAB_100bb11c2:
                          uVar9 = 0;
                          lVar17 = FUN_100bac3a0(plVar10,param_3);
                          if (lVar17 == 0) goto LAB_100bb103f;
                          goto LAB_100bb11f4;
                        }
                        lVar17 = FUN_100bac3a0(param_2 + 7,lVar15);
                        if (lVar17 == 0) goto LAB_100bb103f;
                      }
                      uVar9 = 0;
                      *(undefined4 *)(param_2 + 10) = 0;
                      iVar6 = (*pcVar4)(param_1,plVar10,lVar16,param_5);
                      if (((iVar6 != 0) &&
                          (iVar6 = (*pcVar4)(param_1,uVar14,lVar15,param_5), iVar6 != 0)) &&
                         (iVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar13,plVar11,uVar14),
                         iVar6 != 0)) {
                        plVar2 = param_2 + 1;
                        iVar6 = FUN_100bb6450(plVar2,plVar10,uVar13);
                        if (((iVar6 != 0) &&
                            (((int)param_2[3] == 0 ||
                             (iVar6 = FUN_100bb66e0(plVar2,plVar2,plVar1), iVar6 != 0)))) &&
                           (iVar6 = FUN_100bb6570(plVar10,plVar2), iVar6 != 0)) {
                          if (plVar10 == (long *)0x0) {
LAB_100bb136d:
                            iVar6 = FUN_100bb6450(plVar10,plVar10,plVar1);
                            if (iVar6 == 0) goto LAB_100bb103f;
                          }
                          else {
                            iVar6 = (int)plVar10[2];
                            uVar7 = ~-(uint)(iVar6 == 0) | 1;
                            uVar8 = uVar7;
                            if (iVar6 == (int)param_1[0xf]) {
                              iVar3 = (int)plVar10[1];
                              lVar17 = (long)iVar3;
                              if ((iVar3 <= (int)param_1[0xe]) &&
                                 (uVar18 = -(uint)(iVar6 == 0) | 1, uVar8 = uVar18,
                                 (int)param_1[0xe] <= iVar3)) {
                                lVar19 = (long)(iVar3 + -1) << 3;
                                do {
                                  if (lVar17 < 1) goto LAB_100bb136d;
                                  puVar20 = (ulong *)(*plVar10 + lVar19);
                                  puVar22 = (ulong *)(*plVar1 + lVar19);
                                  uVar8 = uVar7;
                                  if (*puVar22 < *puVar20) break;
                                  lVar17 = lVar17 + -1;
                                  lVar19 = lVar19 + -8;
                                  uVar8 = uVar18;
                                } while (*puVar22 <= *puVar20);
                              }
                            }
                            if (-1 < (int)uVar8) goto LAB_100bb136d;
                          }
                          iVar6 = FUN_100bb6450(plVar10,uVar13,plVar10);
                          if (((iVar6 != 0) &&
                              (((((int)plVar10[2] == 0 ||
                                 (iVar6 = FUN_100bb66e0(plVar10,plVar10,plVar1), iVar6 != 0)) &&
                                (iVar6 = (*UNRECOVERED_JUMPTABLE)
                                                   (param_1,plVar10,plVar10,lVar16,param_5),
                                iVar6 != 0)) &&
                               ((iVar6 = (*UNRECOVERED_JUMPTABLE)
                                                   (param_1,lVar15,uVar14,lVar15,param_5),
                                iVar6 != 0 &&
                                (iVar6 = (*UNRECOVERED_JUMPTABLE)
                                                   (param_1,plVar11,plVar12,lVar15,param_5),
                                iVar6 != 0)))))) &&
                             ((iVar6 = FUN_100bb6450(plVar10,plVar10,plVar11), iVar6 != 0 &&
                              ((((int)plVar10[2] == 0 ||
                                (iVar6 = FUN_100bb66e0(plVar10,plVar10,plVar1), iVar6 != 0)) &&
                               (((int)plVar10[1] < 1 ||
                                (((*(byte *)*plVar10 & 1) == 0 ||
                                 (iVar6 = FUN_100bb66e0(plVar10,plVar10,plVar1), iVar6 != 0)))))))))
                             ) {
                            iVar6 = FUN_100bb5d50(param_2 + 4,plVar10);
                            uVar9 = (ulong)(iVar6 != 0);
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar6 < (int)param_1[0xe]) goto LAB_100bb0f5b;
LAB_100bb0f3a:
                    iVar6 = FUN_100bb61f0(plVar11,plVar11,plVar1);
                    uVar9 = 0;
                    if (iVar6 != 0) goto LAB_100bb0f5b;
                  }
LAB_100bb103f:
                  if (param_5 == (undefined8 *)0x0) goto LAB_100bb1124;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)((long)param_5 + 0x34) == 0) {
    iVar6 = *(int *)(param_5 + 5);
    *(uint *)(param_5 + 5) = iVar6 - 1U;
    uVar8 = *(uint *)(param_5[4] + (ulong)(iVar6 - 1U) * 4);
    uVar7 = *(uint *)(param_5 + 6);
    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
      iVar6 = *(int *)(param_5 + 3);
      uVar18 = uVar7 - uVar8;
      *(uint *)(param_5 + 3) = iVar6 - (uVar7 - uVar8);
      if (uVar18 != 0) {
        uVar21 = iVar6 + 0xfU & 0xf;
        if ((uVar18 & 1) != 0) {
          if (uVar21 == 0) {
            param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
            uVar21 = 0xf;
          }
          else {
            uVar21 = uVar21 - 1;
          }
          uVar18 = uVar18 - 1;
        }
        if (uVar7 - 1 != uVar8) {
          do {
            if (uVar21 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              iVar6 = 0xf;
            }
            else {
              iVar6 = uVar21 - 1;
            }
            uVar18 = uVar18 - 2;
            if (iVar6 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              uVar21 = 0xf;
            }
            else {
              uVar21 = iVar6 - 1;
            }
          } while (uVar18 != 0);
        }
      }
    }
    *(uint *)(param_5 + 6) = uVar8;
    *(undefined4 *)(param_5 + 7) = 0;
  }
  else {
    *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
  }
LAB_100bb1124:
  if (puVar23 != (undefined8 *)0x0) {
    FUN_100ba8db0(puVar23);
  }
  return uVar9;
}

