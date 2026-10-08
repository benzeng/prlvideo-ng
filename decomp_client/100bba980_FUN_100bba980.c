
ulong FUN_100bba980(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  uint uVar22;
  ulong uVar23;
  long *plVar24;
  ulong *puVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  int local_1f0;
  ulong local_1e8;
  void *local_1d8;
  long *local_1d0;
  long *local_1c8;
  long local_178;
  undefined8 uStack_170;
  ulong local_168;
  long lStack_160;
  ulong local_158;
  ulong uStack_150;
  int local_148;
  undefined4 local_144;
  uint local_140 [2];
  long *local_138 [32];
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar6 = (int)param_4[1];
  lVar28 = (long)iVar6;
  local_38 = lVar11;
  if ((lVar28 < 1) || ((*(ulong *)*param_4 & 1) == 0)) {
    uVar27 = 0xffffffff;
    if ((*(byte *)((long)param_3 + 0x14) & 4) != 0) goto LAB_100bbc8b9;
    iVar6 = (int)param_3[1];
    if ((long)iVar6 != 0) {
      iVar4 = FUN_100bac6c0(*(undefined8 *)(*param_3 + -8 + (long)iVar6 * 8));
      iVar4 = iVar4 + (iVar6 + -1) * 0x40;
      if (iVar4 != 0) {
        FUN_100bb4190(param_5);
        plVar9 = (long *)FUN_100bb4250(param_5);
        plVar10 = (long *)FUN_100bb4250();
        local_138[0] = plVar10;
        if (plVar9 == (long *)0x0) {
          uVar27 = 0;
        }
        else if (plVar10 == (long *)0x0) {
          uVar27 = 0;
        }
        else {
          local_140[0] = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          lStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_148 = 0;
          if ((int)param_4[2] == 0) {
            uVar27 = 0;
            lVar11 = FUN_100bac3a0(&local_178,param_4);
            if (lVar11 != 0) {
              local_158 = local_158 & 0xffffffff00000000;
              uStack_150 = uStack_150 & 0xffffffff00000000;
              iVar6 = (int)param_4[1];
              iVar5 = 0;
              if ((long)iVar6 != 0) {
                iVar5 = FUN_100bac6c0(*(undefined8 *)(*param_4 + -8 + (long)iVar6 * 8));
                iVar5 = iVar5 + (iVar6 + -1) * 0x40;
              }
LAB_100bbb545:
              local_144 = 0;
              local_148 = iVar5;
              iVar6 = FUN_100bb54a0(0,plVar10,param_2,param_4,param_5);
              if (iVar6 == 0) {
                uVar27 = 0;
              }
              else {
                if ((int)plVar10[2] != 0) {
                  if ((int)param_4[2] == 0) {
                    pcVar21 = FUN_100bb66e0;
                  }
                  else {
                    pcVar21 = FUN_100bb6450;
                  }
                  iVar6 = (*pcVar21)(plVar10,plVar10,param_4);
                  if (iVar6 == 0) {
                    uVar27 = 0;
                    goto LAB_100bbb92a;
                  }
                }
                if ((int)plVar10[1] == 0) {
                  *(undefined4 *)(param_1 + 1) = 0;
                  *(undefined4 *)(param_1 + 2) = 0;
                  uVar27 = 1;
                }
                else {
                  uVar7 = 6;
                  if (((iVar4 < 0x2a0) && (uVar7 = 5, iVar4 < 0xf0)) && (uVar7 = 4, iVar4 < 0x50)) {
                    uVar26 = 1;
                    uVar7 = 3;
                    if (0x17 < iVar4) goto LAB_100bbb664;
                  }
                  else {
LAB_100bbb664:
                    uVar26 = uVar7;
                    iVar6 = FUN_100bbca00(plVar9,plVar10,plVar10,&local_178,param_5);
                    if (iVar6 == 0) {
                      uVar27 = 0;
                      goto LAB_100bbb92a;
                    }
                    iVar6 = 1 << ((char)uVar26 - 1U & 0x1f);
                    if (1 < iVar6) {
                      lVar11 = 1;
                      do {
                        plVar10 = (long *)FUN_100bb4250(param_5);
                        local_138[lVar11] = plVar10;
                        uVar27 = 0;
                        if ((plVar10 == (long *)0x0) ||
                           (iVar5 = FUN_100bbca00(plVar10,*(undefined8 *)(local_140 + lVar11 * 2),
                                                  plVar9,&local_178,param_5), uVar27 = 0, iVar5 == 0
                           )) goto LAB_100bbb92a;
                        lVar11 = lVar11 + 1;
                      } while (lVar11 < iVar6);
                    }
                  }
                  uVar27 = 0;
                  if ((0 < *(int *)((long)param_1 + 0xc)) ||
                     (lVar11 = FUN_100bac510(param_1,1), lVar11 != 0)) {
                    uVar23 = (ulong)(iVar4 - 1);
                    *(undefined4 *)(param_1 + 2) = 0;
                    *(undefined8 *)*param_1 = 1;
                    *(undefined4 *)(param_1 + 1) = 1;
                    bVar3 = false;
                    do {
                      while (uVar7 = (uint)uVar23, (int)uVar7 < 0) {
LAB_100bbb7ff:
                        if (bVar3) {
                          iVar6 = FUN_100bbca00(param_1,param_1,param_1,&local_178,param_5);
                          uVar27 = 0;
                          if (iVar6 == 0) goto LAB_100bbb92a;
                        }
                        uVar27 = 1;
                        if (uVar7 == 0) goto LAB_100bbb92a;
                        uVar23 = (ulong)(uVar7 - 1);
                      }
                      iVar6 = (int)(((uint)((int)uVar7 >> 0x1f) >> 0x1a) + uVar7) >> 6;
                      if (((int)param_3[1] <= iVar6) ||
                         ((*(ulong *)(*param_3 + (long)iVar6 * 8) >> (uVar23 & 0x3f) & 1) == 0))
                      goto LAB_100bbb7ff;
                      iVar4 = 0;
                      uVar18 = 1;
                      iVar6 = 0;
                      if (1 < uVar26) {
                        iVar6 = 0;
                        iVar5 = 1;
                        uVar18 = 1;
                        uVar22 = uVar7;
                        do {
                          uVar22 = uVar22 - 1;
                          if ((int)uVar22 < 0) break;
                          iVar17 = (int)(((uint)((int)uVar22 >> 0x1f) >> 0x1a) + uVar22) >> 6;
                          if ((iVar17 < (int)param_3[1]) &&
                             ((*(ulong *)(*param_3 + (long)iVar17 * 8) >> ((ulong)uVar22 & 0x3f) & 1
                              ) != 0)) {
                            uVar18 = uVar18 << ((char)iVar5 - (char)iVar6 & 0x1fU) | 1;
                            iVar6 = iVar5;
                          }
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < (int)uVar26);
                      }
                      if ((bool)(-1 < iVar6 & bVar3)) {
                        do {
                          iVar5 = FUN_100bbca00(param_1,param_1,param_1,&local_178,param_5);
                          uVar27 = 0;
                          if (iVar5 == 0) goto LAB_100bbb92a;
                          iVar4 = iVar4 + 1;
                        } while (iVar4 < iVar6 + 1);
                      }
                      iVar4 = FUN_100bbca00(param_1,param_1,local_138[(int)uVar18 >> 1],&local_178,
                                            param_5);
                      uVar27 = 0;
                      if (iVar4 == 0) break;
                      uVar7 = uVar7 - (iVar6 + 1);
                      uVar23 = (ulong)uVar7;
                      bVar3 = true;
                      uVar27 = 1;
                    } while (-1 < (int)uVar7);
                  }
                }
              }
            }
          }
          else {
            lVar11 = FUN_100bac3a0(plVar9,param_4);
            uVar27 = 0;
            if (lVar11 != 0) {
              *(undefined4 *)(plVar9 + 2) = 0;
              lVar11 = FUN_100bac3a0(&local_178,plVar9);
              if (lVar11 != 0) {
                local_158 = local_158 & 0xffffffff00000000;
                uStack_150 = uStack_150 & 0xffffffff00000000;
                iVar6 = (int)plVar9[1];
                iVar5 = 0;
                if ((long)iVar6 != 0) {
                  iVar5 = FUN_100bac6c0(*(undefined8 *)(*plVar9 + -8 + (long)iVar6 * 8));
                  iVar5 = iVar5 + (iVar6 + -1) * 0x40;
                }
                goto LAB_100bbb545;
              }
            }
          }
        }
LAB_100bbb92a:
        if (*(int *)(param_5 + 0x34) == 0) {
          uVar7 = *(int *)(param_5 + 0x28) - 1;
          *(uint *)(param_5 + 0x28) = uVar7;
          uVar7 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar7 * 4);
          uVar26 = *(uint *)(param_5 + 0x30);
          lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
          if (uVar7 <= uVar26 && uVar26 - uVar7 != 0) {
            iVar6 = *(int *)(param_5 + 0x18);
            uVar18 = uVar26 - uVar7;
            *(uint *)(param_5 + 0x18) = iVar6 - (uVar26 - uVar7);
            if (uVar18 != 0) {
              uVar22 = iVar6 + 0xfU & 0xf;
              if ((uVar18 & 1) != 0) {
                if (uVar22 == 0) {
                  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                  uVar22 = 0xf;
                }
                else {
                  uVar22 = uVar22 - 1;
                }
                uVar18 = uVar18 - 1;
              }
              if (uVar26 - 1 != uVar7) {
                do {
                  if (uVar22 == 0) {
                    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                    iVar6 = 0xf;
                  }
                  else {
                    iVar6 = uVar22 - 1;
                  }
                  uVar18 = uVar18 - 2;
                  if (iVar6 == 0) {
                    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                    uVar22 = 0xf;
                  }
                  else {
                    uVar22 = iVar6 - 1;
                  }
                } while (uVar18 != 0);
              }
            }
          }
          *(uint *)(param_5 + 0x30) = uVar7;
          *(undefined4 *)(param_5 + 0x38) = 0;
        }
        else {
          *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
          lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
        }
        if ((local_178 != 0) && ((local_168 & 0x200000000) == 0)) {
          FUN_100bf3910();
        }
        if ((local_168 & 0x100000000) == 0) {
          local_178 = 0;
        }
        else {
          FUN_100bf3910(&local_178);
        }
        if ((lStack_160 != 0) && ((uStack_150 & 0x200000000) == 0)) {
          FUN_100bf3910();
        }
        if ((uStack_150 & 0x100000000) == 0) {
          lStack_160 = 0;
        }
        else {
          FUN_100bf3910(&lStack_160);
        }
        if ((local_140[0] & 1) != 0) {
          FUN_100bf3910(&local_178);
        }
        goto LAB_100bbc8b9;
      }
    }
    iVar6 = *(int *)((long)param_1 + 0xc);
  }
  else {
    if ((((int)param_2[1] == 1) && ((int)param_2[2] == 0)) &&
       ((*(byte *)((long)param_3 + 0x14) & 4) == 0)) {
      uVar23 = *(ulong *)*param_2;
      if (iVar6 == 1) {
        uVar23 = uVar23 % *(ulong *)*param_4;
      }
      iVar6 = (int)param_3[1];
      if ((long)iVar6 != 0) {
        iVar4 = FUN_100bac6c0(*(undefined8 *)(*param_3 + -8 + (long)iVar6 * 8));
        iVar4 = iVar4 + (iVar6 + -1) * 0x40;
        if (iVar4 != 0) {
          if (uVar23 == 0) {
            *(undefined4 *)(param_1 + 1) = 0;
            *(undefined4 *)(param_1 + 2) = 0;
            uVar27 = 1;
            goto LAB_100bbc8b9;
          }
          FUN_100bb4190(param_5);
          lVar28 = FUN_100bb4250(param_5);
          plVar10 = (long *)FUN_100bb4250(param_5);
          plVar9 = (long *)FUN_100bb4250(param_5);
          uVar27 = 0;
          if ((((lVar28 != 0) && (plVar10 != (long *)0x0)) && (plVar9 != (long *)0x0)) &&
             (puVar12 = (undefined4 *)FUN_100bf3540(0x60,"../src/snlic/sn_crypto_helper_17.c",0x101)
             , puVar12 != (undefined4 *)0x0)) {
            *puVar12 = 0;
            puVar1 = (undefined8 *)(puVar12 + 2);
            *(undefined8 *)(puVar12 + 6) = 0;
            *(undefined8 *)(puVar12 + 4) = 0;
            *(undefined8 *)(puVar12 + 2) = 0;
            *(undefined8 *)(puVar12 + 0xc) = 0;
            *(undefined8 *)(puVar12 + 10) = 0;
            *(undefined8 *)(puVar12 + 8) = 0;
            *(undefined8 *)(puVar12 + 0x12) = 0;
            *(undefined8 *)(puVar12 + 0x10) = 0;
            *(undefined8 *)(puVar12 + 0xe) = 0;
            puVar12[0x16] = 1;
            iVar6 = FUN_100bb3c30(puVar12,param_4,param_5);
            if (iVar6 == 0) {
              uVar27 = 0;
            }
            else {
              uVar7 = iVar4 - 2;
              bVar3 = true;
              uVar19 = uVar23;
              if (-1 < (int)uVar7) {
                bVar3 = true;
                do {
                  uVar29 = uVar19 * uVar19;
                  if (uVar29 / uVar19 == uVar19) {
                    uVar27 = 1;
                    if (!bVar3) goto LAB_100bbae15;
                  }
                  else {
                    if (bVar3) {
                      if (*(int *)((long)plVar10 + 0xc) < 1) {
                        lVar11 = FUN_100bac510(plVar10,1);
                        uVar27 = 0;
                        if (lVar11 == 0) goto LAB_100bbc73b;
                      }
                      *(undefined4 *)(plVar10 + 2) = 0;
                      *(ulong *)*plVar10 = uVar19;
                      *(uint *)(plVar10 + 1) = (uint)(uVar19 != 0);
                      iVar6 = FUN_100bb4020(plVar10,plVar10,puVar1,puVar12,param_5);
                      plVar24 = plVar10;
                    }
                    else {
                      if ((int)plVar10[1] != 0) {
                        if (uVar19 == 0) {
                          *(undefined4 *)(plVar10 + 1) = 0;
                          *(undefined4 *)(plVar10 + 2) = 0;
                        }
                        else {
                          lVar11 = FUN_100bb6ca0(*plVar10,*plVar10,(int)plVar10[1],uVar19);
                          if (lVar11 != 0) {
                            iVar6 = (int)plVar10[1];
                            if (*(int *)((long)plVar10 + 0xc) <= iVar6) {
                              lVar28 = FUN_100bac510(plVar10,iVar6 + 1);
                              uVar27 = 0;
                              if (lVar28 == 0) goto LAB_100bbc73b;
                              iVar6 = (int)plVar10[1];
                            }
                            *(int *)(plVar10 + 1) = iVar6 + 1;
                            *(long *)(*plVar10 + (long)iVar6 * 8) = lVar11;
                          }
                        }
                      }
                      iVar6 = FUN_100bb54a0(0,plVar9,plVar10,param_4,param_5);
                      plVar24 = plVar9;
                      plVar9 = plVar10;
                    }
                    uVar27 = 0;
                    uVar29 = 1;
                    plVar10 = plVar24;
                    if (iVar6 == 0) goto LAB_100bbc73b;
LAB_100bbae15:
                    iVar6 = FUN_100bb4020(plVar10,plVar10,plVar10,puVar12,param_5);
                    uVar27 = 0;
                    bVar3 = false;
                    if (iVar6 == 0) goto LAB_100bbc73b;
                  }
                  uVar19 = uVar29;
                  if ((int)uVar7 < 0) break;
                  iVar6 = (int)(((uint)((int)uVar7 >> 0x1f) >> 0x1a) + uVar7) >> 6;
                  if (((iVar6 < (int)param_3[1]) &&
                      ((*(ulong *)(*param_3 + (long)iVar6 * 8) >> ((ulong)uVar7 & 0x3f) & 1) != 0))
                     && (uVar19 = uVar29 * uVar23, uVar19 / uVar23 != uVar29)) {
                    if ((char)uVar27 == '\0') {
                      if ((int)plVar10[1] != 0) {
                        if (uVar29 == 0) {
                          *(undefined4 *)(plVar10 + 1) = 0;
                          *(undefined4 *)(plVar10 + 2) = 0;
                        }
                        else {
                          lVar11 = FUN_100bb6ca0(*plVar10,*plVar10,(int)plVar10[1],uVar29);
                          if (lVar11 != 0) {
                            iVar6 = (int)plVar10[1];
                            if (*(int *)((long)plVar10 + 0xc) <= iVar6) {
                              lVar28 = FUN_100bac510(plVar10,iVar6 + 1);
                              uVar27 = 0;
                              if (lVar28 == 0) goto LAB_100bbc73b;
                              iVar6 = (int)plVar10[1];
                            }
                            *(int *)(plVar10 + 1) = iVar6 + 1;
                            *(long *)(*plVar10 + (long)iVar6 * 8) = lVar11;
                          }
                        }
                      }
                      iVar6 = FUN_100bb54a0(0,plVar9,plVar10,param_4,param_5);
                      plVar24 = plVar10;
                      plVar10 = plVar9;
                    }
                    else {
                      if (*(int *)((long)plVar10 + 0xc) < 1) {
                        lVar11 = FUN_100bac510(plVar10,1);
                        uVar27 = 0;
                        if (lVar11 == 0) goto LAB_100bbc73b;
                      }
                      *(undefined4 *)(plVar10 + 2) = 0;
                      *(ulong *)*plVar10 = uVar29;
                      *(uint *)(plVar10 + 1) = (uint)(uVar29 != 0);
                      iVar6 = FUN_100bb4020(plVar10,plVar10,puVar1,puVar12,param_5);
                      bVar3 = false;
                      plVar24 = plVar9;
                    }
                    plVar9 = plVar24;
                    uVar27 = 0;
                    uVar19 = uVar23;
                    if (iVar6 == 0) goto LAB_100bbc73b;
                  }
                  bVar2 = 0 < (int)uVar7;
                  uVar7 = uVar7 - 1;
                } while (bVar2);
              }
              if (uVar19 == 1) {
                plVar9 = plVar10;
                if (bVar3) {
                  if (*(int *)((long)param_1 + 0xc) < 1) {
                    lVar11 = FUN_100bac510(param_1,1);
                    uVar27 = 0;
                    if (lVar11 == 0) goto LAB_100bbc73b;
                  }
                  *(undefined4 *)(param_1 + 2) = 0;
                  *(undefined8 *)*param_1 = 1;
                  *(undefined4 *)(param_1 + 1) = 1;
                }
                else {
LAB_100bbc70e:
                  iVar6 = FUN_100bb9060(param_1,plVar9,puVar12,param_5);
                  uVar27 = 0;
                  if (iVar6 == 0) goto LAB_100bbc73b;
                }
                uVar27 = 1;
              }
              else if (bVar3) {
                if ((*(int *)((long)plVar10 + 0xc) < 1) &&
                   (lVar11 = FUN_100bac510(plVar10,1), lVar11 == 0)) {
                  uVar27 = 0;
                }
                else {
                  *(undefined4 *)(plVar10 + 2) = 0;
                  *(ulong *)*plVar10 = uVar19;
                  *(uint *)(plVar10 + 1) = (uint)(uVar19 != 0);
                  iVar6 = FUN_100bb4020(plVar10,plVar10,puVar1,puVar12,param_5);
                  plVar9 = plVar10;
                  if (iVar6 != 0) goto LAB_100bbc70e;
                  uVar27 = 0;
                }
              }
              else {
                if ((int)plVar10[1] != 0) {
                  if (uVar19 == 0) {
                    *(undefined4 *)(plVar10 + 1) = 0;
                    *(undefined4 *)(plVar10 + 2) = 0;
                  }
                  else {
                    lVar11 = FUN_100bb6ca0(*plVar10,*plVar10,(int)plVar10[1],uVar19);
                    if (lVar11 != 0) {
                      iVar6 = (int)plVar10[1];
                      if (*(int *)((long)plVar10 + 0xc) <= iVar6) {
                        lVar28 = FUN_100bac510(plVar10,iVar6 + 1);
                        if (lVar28 == 0) {
                          uVar27 = 0;
                          goto LAB_100bbc73b;
                        }
                        iVar6 = (int)plVar10[1];
                      }
                      *(int *)(plVar10 + 1) = iVar6 + 1;
                      *(long *)(*plVar10 + (long)iVar6 * 8) = lVar11;
                    }
                  }
                }
                uVar27 = 0;
                iVar6 = FUN_100bb54a0(0,plVar9,plVar10,param_4,param_5);
                if (iVar6 != 0) goto LAB_100bbc70e;
              }
            }
LAB_100bbc73b:
            if ((*(long *)(puVar12 + 2) != 0) && ((*(byte *)(puVar12 + 7) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)(puVar12 + 7) & 1) == 0) {
              *puVar1 = 0;
            }
            else {
              FUN_100bf3910(puVar1);
            }
            lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
            if ((*(long *)(puVar12 + 8) != 0) && ((*(byte *)(puVar12 + 0xd) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)(puVar12 + 0xd) & 1) == 0) {
              *(undefined8 *)(puVar12 + 8) = 0;
            }
            else {
              FUN_100bf3910();
            }
            if ((*(long *)(puVar12 + 0xe) != 0) && ((*(byte *)(puVar12 + 0x13) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)(puVar12 + 0x13) & 1) == 0) {
              *(undefined8 *)(puVar12 + 0xe) = 0;
            }
            else {
              FUN_100bf3910(puVar12 + 0xe);
            }
            if ((*(byte *)(puVar12 + 0x16) & 1) != 0) {
              FUN_100bf3910(puVar12);
            }
          }
          iVar6 = *(int *)(param_5 + 0x34);
          if (iVar6 == 0) {
            uVar7 = *(int *)(param_5 + 0x28) - 1;
            *(uint *)(param_5 + 0x28) = uVar7;
            uVar26 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar7 * 4);
            uVar7 = *(uint *)(param_5 + 0x30);
            if (uVar26 <= uVar7 && uVar7 - uVar26 != 0) {
              iVar6 = *(int *)(param_5 + 0x18);
              uVar18 = uVar7 - uVar26;
              *(uint *)(param_5 + 0x18) = iVar6 - (uVar7 - uVar26);
              if (uVar18 != 0) {
                uVar22 = iVar6 + 0xfU & 0xf;
                if ((uVar18 & 1) != 0) {
                  if (uVar22 == 0) {
                    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                    uVar22 = 0xf;
                  }
                  else {
                    uVar22 = uVar22 - 1;
                  }
                  uVar18 = uVar18 - 1;
                }
                if (uVar7 - 1 != uVar26) {
                  do {
                    if (uVar22 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      iVar6 = 0xf;
                    }
                    else {
                      iVar6 = uVar22 - 1;
                    }
                    uVar18 = uVar18 - 2;
                    if (iVar6 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      uVar22 = 0xf;
                    }
                    else {
                      uVar22 = iVar6 - 1;
                    }
                  } while (uVar18 != 0);
                }
              }
            }
LAB_100bbc8af:
            *(uint *)(param_5 + 0x30) = uVar26;
            *(undefined4 *)(param_5 + 0x38) = 0;
            goto LAB_100bbc8b9;
          }
LAB_100bbc808:
          *(int *)(param_5 + 0x34) = iVar6 + -1;
          goto LAB_100bbc8b9;
        }
      }
    }
    else {
      iVar4 = (int)param_3[1];
      iVar5 = iVar4 + -1;
      if ((*(byte *)((long)param_3 + 0x14) & 4) == 0) {
        if (iVar4 != 0) {
          iVar6 = FUN_100bac6c0(*(undefined8 *)(*param_3 + (long)iVar5 * 8));
          iVar6 = iVar6 + iVar5 * 0x40;
          if (iVar6 != 0) {
            FUN_100bb4190(param_5);
            lVar28 = FUN_100bb4250(param_5);
            lVar13 = FUN_100bb4250(param_5);
            plVar9 = (long *)FUN_100bb4250(param_5);
            uVar27 = 0;
            local_138[0] = plVar9;
            if ((((lVar28 != 0) && (lVar13 != 0)) && (plVar9 != (long *)0x0)) &&
               (puVar12 = (undefined4 *)
                          FUN_100bf3540(0x60,"../src/snlic/sn_crypto_helper_17.c",0x101),
               puVar12 != (undefined4 *)0x0)) {
              *puVar12 = 0;
              puVar1 = (undefined8 *)(puVar12 + 2);
              *(undefined8 *)(puVar12 + 6) = 0;
              *(undefined8 *)(puVar12 + 4) = 0;
              *(undefined8 *)(puVar12 + 2) = 0;
              *(undefined8 *)(puVar12 + 0xc) = 0;
              *(undefined8 *)(puVar12 + 10) = 0;
              *(undefined8 *)(puVar12 + 8) = 0;
              *(undefined8 *)(puVar12 + 0x12) = 0;
              *(undefined8 *)(puVar12 + 0x10) = 0;
              *(undefined8 *)(puVar12 + 0xe) = 0;
              puVar12[0x16] = 1;
              iVar4 = FUN_100bb3c30(puVar12,param_4,param_5);
              if (iVar4 == 0) {
                uVar27 = 0;
              }
              else {
                if ((int)param_2[2] == 0) {
                  iVar4 = (int)param_2[1];
                  if (iVar4 == (int)param_4[1]) {
                    lVar20 = (long)iVar4;
                    lVar14 = (long)(iVar4 + -1) * 8;
                    puVar25 = (ulong *)(*param_4 + lVar14);
                    puVar15 = (ulong *)(lVar14 + *param_2);
                    do {
                      if (lVar20 < 1) goto LAB_100bbbaa6;
                      uVar27 = *puVar25;
                      lVar20 = lVar20 + -1;
                      puVar25 = puVar25 + -1;
                      uVar23 = *puVar15;
                      puVar15 = puVar15 + -1;
                    } while (uVar23 == uVar27);
                    if (uVar27 <= uVar23) goto LAB_100bbbaa6;
                  }
                  else if ((int)param_4[1] <= iVar4) goto LAB_100bbbaa6;
                }
                else {
LAB_100bbbaa6:
                  uVar27 = 0;
                  iVar4 = FUN_100bb54a0(0,plVar9,param_2,param_4,param_5);
                  if (iVar4 == 0) goto LAB_100bbc4e4;
                  if ((int)plVar9[2] != 0) {
                    if ((int)param_4[2] == 0) {
                      pcVar21 = FUN_100bb66e0;
                    }
                    else {
                      pcVar21 = FUN_100bb6450;
                    }
                    iVar4 = (*pcVar21)(plVar9,plVar9,param_4);
                    if (iVar4 == 0) goto LAB_100bbc4e4;
                  }
                  iVar4 = (int)plVar9[1];
                  param_2 = plVar9;
                }
                if (iVar4 == 0) {
                  *(undefined4 *)(param_1 + 1) = 0;
                  *(undefined4 *)(param_1 + 2) = 0;
                  uVar27 = 1;
                }
                else {
                  iVar4 = FUN_100bb4020(plVar9,param_2,puVar1,puVar12,param_5);
                  if (iVar4 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar7 = 6;
                    if (((iVar6 < 0x2a0) && (uVar7 = 5, iVar6 < 0xf0)) && (uVar7 = 4, iVar6 < 0x50))
                    {
                      uVar26 = 1;
                      uVar7 = 3;
                      if (0x17 < iVar6) goto LAB_100bbbd5d;
                    }
                    else {
LAB_100bbbd5d:
                      uVar26 = uVar7;
                      iVar4 = FUN_100bb4020(lVar28,plVar9,plVar9,puVar12,param_5);
                      if (iVar4 == 0) {
                        uVar27 = 0;
                        goto LAB_100bbc4e4;
                      }
                      iVar4 = 1 << ((char)uVar26 - 1U & 0x1f);
                      if (1 < iVar4) {
                        lVar14 = 1;
                        do {
                          plVar9 = (long *)FUN_100bb4250(param_5);
                          local_138[lVar14] = plVar9;
                          if (plVar9 == (long *)0x0) {
                            uVar27 = 0;
                            goto LAB_100bbc4e4;
                          }
                          iVar5 = FUN_100bb4020(plVar9,*(undefined8 *)(local_140 + lVar14 * 2),
                                                lVar28,puVar12,param_5);
                          if (iVar5 == 0) {
                            uVar27 = 0;
                            goto LAB_100bbc4e4;
                          }
                          lVar14 = lVar14 + 1;
                        } while (lVar14 < iVar4);
                      }
                    }
                    iVar4 = FUN_100bb4020(lVar13,&PTR_DAT_102300338,puVar1,puVar12,param_5);
                    uVar27 = 0;
                    if (iVar4 != 0) {
                      uVar27 = (ulong)(iVar6 - 1);
                      bVar3 = false;
                      do {
                        while (uVar7 = (uint)uVar27, (int)uVar7 < 0) {
LAB_100bbbf4f:
                          if (bVar3) {
                            iVar6 = FUN_100bb4020(lVar13,lVar13,lVar13,puVar12,param_5);
                            uVar27 = 0;
                            if (iVar6 == 0) goto LAB_100bbc4e4;
                          }
                          if (uVar7 == 0) goto LAB_100bbc082;
                          uVar27 = (ulong)(uVar7 - 1);
                        }
                        iVar6 = (int)(((uint)((int)uVar7 >> 0x1f) >> 0x1a) + uVar7) >> 6;
                        if (((int)param_3[1] <= iVar6) ||
                           ((*(ulong *)(*param_3 + (long)iVar6 * 8) >> (uVar27 & 0x3f) & 1) == 0))
                        goto LAB_100bbbf4f;
                        iVar4 = 0;
                        uVar18 = 1;
                        iVar6 = 0;
                        if (1 < uVar26) {
                          iVar6 = 0;
                          iVar5 = 1;
                          uVar18 = 1;
                          uVar22 = uVar7;
                          do {
                            uVar22 = uVar22 - 1;
                            if ((int)uVar22 < 0) break;
                            iVar17 = (int)(((uint)((int)uVar22 >> 0x1f) >> 0x1a) + uVar22) >> 6;
                            if ((iVar17 < (int)param_3[1]) &&
                               ((*(ulong *)(*param_3 + (long)iVar17 * 8) >> ((ulong)uVar22 & 0x3f) &
                                1) != 0)) {
                              uVar18 = uVar18 << ((char)iVar5 - (char)iVar6 & 0x1fU) | 1;
                              iVar6 = iVar5;
                            }
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < (int)uVar26);
                        }
                        if ((bool)(-1 < iVar6 & bVar3)) {
                          do {
                            iVar5 = FUN_100bb4020(lVar13,lVar13,lVar13,puVar12,param_5);
                            uVar27 = 0;
                            if (iVar5 == 0) goto LAB_100bbc4e4;
                            iVar4 = iVar4 + 1;
                          } while (iVar4 < iVar6 + 1);
                        }
                        iVar4 = FUN_100bb4020(lVar13,lVar13,local_138[(int)uVar18 >> 1],puVar12,
                                              param_5);
                        uVar27 = 0;
                        if (iVar4 == 0) goto LAB_100bbc4e4;
                        uVar7 = uVar7 - (iVar6 + 1);
                        uVar27 = (ulong)uVar7;
                        bVar3 = true;
                      } while (-1 < (int)uVar7);
LAB_100bbc082:
                      iVar6 = FUN_100bb9060(param_1,lVar13,puVar12,param_5);
                      uVar27 = (ulong)(iVar6 != 0);
                    }
                  }
                }
              }
LAB_100bbc4e4:
              if ((*(long *)(puVar12 + 2) != 0) && ((*(byte *)(puVar12 + 7) & 2) == 0)) {
                FUN_100bf3910();
              }
              if ((*(byte *)(puVar12 + 7) & 1) == 0) {
                *puVar1 = 0;
              }
              else {
                FUN_100bf3910(puVar1);
              }
              if ((*(long *)(puVar12 + 8) != 0) && ((*(byte *)(puVar12 + 0xd) & 2) == 0)) {
                FUN_100bf3910();
              }
              if ((*(byte *)(puVar12 + 0xd) & 1) == 0) {
                *(undefined8 *)(puVar12 + 8) = 0;
              }
              else {
                FUN_100bf3910();
              }
              if ((*(long *)(puVar12 + 0xe) != 0) && ((*(byte *)(puVar12 + 0x13) & 2) == 0)) {
                FUN_100bf3910();
              }
              if ((*(byte *)(puVar12 + 0x13) & 1) == 0) {
                *(undefined8 *)(puVar12 + 0xe) = 0;
              }
              else {
                FUN_100bf3910(puVar12 + 0xe);
              }
              if ((*(byte *)(puVar12 + 0x16) & 1) != 0) {
                FUN_100bf3910(puVar12);
              }
            }
            iVar6 = *(int *)(param_5 + 0x34);
            if (iVar6 == 0) {
              uVar7 = *(int *)(param_5 + 0x28) - 1;
              *(uint *)(param_5 + 0x28) = uVar7;
              uVar26 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar7 * 4);
              uVar7 = *(uint *)(param_5 + 0x30);
              if (uVar26 <= uVar7 && uVar7 - uVar26 != 0) {
                iVar6 = *(int *)(param_5 + 0x18);
                uVar18 = uVar7 - uVar26;
                *(uint *)(param_5 + 0x18) = iVar6 - (uVar7 - uVar26);
                if (uVar18 != 0) {
                  uVar22 = iVar6 + 0xfU & 0xf;
                  if ((uVar18 & 1) != 0) {
                    if (uVar22 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      uVar22 = 0xf;
                    }
                    else {
                      uVar22 = uVar22 - 1;
                    }
                    uVar18 = uVar18 - 1;
                  }
                  if (uVar7 - 1 != uVar26) {
                    do {
                      if (uVar22 == 0) {
                        *(undefined8 *)(param_5 + 8) =
                             *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                        iVar6 = 0xf;
                      }
                      else {
                        iVar6 = uVar22 - 1;
                      }
                      uVar18 = uVar18 - 2;
                      if (iVar6 == 0) {
                        *(undefined8 *)(param_5 + 8) =
                             *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                        uVar22 = 0xf;
                      }
                      else {
                        uVar22 = iVar6 - 1;
                      }
                    } while (uVar18 != 0);
                  }
                }
              }
              goto LAB_100bbc8af;
            }
            goto LAB_100bbc808;
          }
        }
      }
      else if (iVar4 != 0) {
        iVar4 = FUN_100bac6c0(*(undefined8 *)(*param_3 + -8 + (long)iVar4 * 8));
        iVar4 = iVar4 + iVar5 * 0x40;
        if (iVar4 != 0) {
          FUN_100bb4190(param_5);
          lVar13 = FUN_100bb4250(param_5);
          uVar27 = 0;
          if ((lVar13 != 0) &&
             (puVar12 = (undefined4 *)FUN_100bf3540(0x60,"../src/snlic/sn_crypto_helper_17.c",0x101)
             , puVar12 != (undefined4 *)0x0)) {
            *puVar12 = 0;
            puVar1 = (undefined8 *)(puVar12 + 2);
            *(undefined8 *)(puVar12 + 6) = 0;
            *(undefined8 *)(puVar12 + 4) = 0;
            *(undefined8 *)(puVar12 + 2) = 0;
            *(undefined8 *)(puVar12 + 0xc) = 0;
            *(undefined8 *)(puVar12 + 10) = 0;
            *(undefined8 *)(puVar12 + 8) = 0;
            *(undefined8 *)(puVar12 + 0x12) = 0;
            *(undefined8 *)(puVar12 + 0x10) = 0;
            *(undefined8 *)(puVar12 + 0xe) = 0;
            puVar12[0x16] = 1;
            iVar5 = FUN_100bb3c30(puVar12,param_4,param_5);
            if (iVar5 == 0) {
              local_1f0 = 0;
LAB_100bbb5da:
              local_1e8 = 0;
              uVar27 = 0;
              local_1d8 = (void *)0x0;
              local_1c8 = (long *)0x0;
              local_1d0 = (long *)0x0;
            }
            else {
              uVar7 = 6;
              if (((iVar4 < 0x3aa) && (uVar7 = 5, iVar4 < 0x133)) && (uVar7 = 4, iVar4 < 0x5a)) {
                uVar7 = (0x16 < iVar4) + 1 + (uint)(0x16 < iVar4);
              }
              iVar5 = 1 << (sbyte)uVar7;
              local_1f0 = iVar5 * (int)(lVar28 * 8);
              local_1e8 = FUN_100bf3540(local_1f0 + 0x40,"../src/snlic/sn_crypto_helper_26.c",0x25b)
              ;
              if (local_1e8 == 0) goto LAB_100bbb5da;
              local_1d8 = (void *)(local_1e8 + 0x40 + -(local_1e8 & 0x3f));
              ___bzero(local_1d8,(long)local_1f0);
              iVar17 = FUN_100bb4020(lVar13,&PTR_DAT_102300338,puVar1,puVar12,param_5);
              if ((iVar17 == 0) ||
                 (iVar17 = FUN_100bbc920(lVar13,iVar6,local_1d8,0,iVar5), iVar17 == 0)) {
                local_1c8 = (long *)0x0;
                local_1d0 = (long *)0x0;
LAB_100bbbb09:
                uVar27 = 0;
                lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
              }
              else {
                local_1c8 = (long *)FUN_100bb4250(param_5);
                local_1d0 = (long *)FUN_100bb4250(param_5);
                if ((local_1c8 == (long *)0x0) || (local_1d0 == (long *)0x0)) goto LAB_100bbbb09;
                if ((int)param_2[2] == 0) {
                  iVar17 = (int)param_2[1];
                  lVar11 = (long)iVar17;
                  if (iVar17 == (int)param_4[1]) {
                    lVar14 = (long)(iVar17 + -1) * 8;
                    puVar25 = (ulong *)(*param_4 + lVar14);
                    puVar15 = (ulong *)(lVar14 + *param_2);
                    do {
                      if (lVar11 < 1) goto LAB_100bbc0e2;
                      uVar27 = *puVar25;
                      lVar11 = lVar11 + -1;
                      puVar25 = puVar25 + -1;
                      uVar23 = *puVar15;
                      puVar15 = puVar15 + -1;
                    } while (uVar23 == uVar27);
                    if (uVar27 < uVar23) goto LAB_100bbc0e2;
                  }
                  else if ((int)param_4[1] <= iVar17) goto LAB_100bbc0e2;
                }
                else {
LAB_100bbc0e2:
                  iVar17 = FUN_100bb54a0(0,local_1d0,param_2,param_4,param_5);
                  param_2 = local_1d0;
                  if (iVar17 == 0) goto LAB_100bbbb09;
                }
                iVar17 = FUN_100bb4020(local_1d0,param_2,puVar1,puVar12,param_5);
                if (iVar17 == 0) {
                  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
                  uVar27 = 0;
                }
                else {
                  lVar11 = FUN_100bac3a0(local_1c8,local_1d0);
                  uVar27 = 0;
                  if ((lVar11 != 0) &&
                     (iVar17 = FUN_100bbc920(local_1d0,iVar6,local_1d8,1,iVar5), iVar17 != 0)) {
                    if ((1 < uVar7) && (2 < iVar5)) {
                      iVar17 = 2;
                      do {
                        iVar8 = FUN_100bb4020(local_1c8,local_1d0,local_1c8,puVar12,param_5);
                        if ((iVar8 == 0) ||
                           (iVar8 = FUN_100bbc920(local_1c8,iVar6,local_1d8,iVar17,iVar5),
                           iVar8 == 0)) goto LAB_100bbbb09;
                        iVar17 = iVar17 + 1;
                      } while (iVar17 < iVar5);
                    }
                    uVar27 = (ulong)((iVar4 + -2 + uVar7) - (int)(iVar4 + -1 + uVar7) % (int)uVar7);
                    do {
                      iVar4 = 0;
                      uVar26 = 0;
                      if ((int)uVar27 < 0) {
                        iVar6 = FUN_100bb9060(param_1,lVar13,puVar12,param_5);
                        uVar27 = (ulong)(iVar6 != 0);
                        goto LAB_100bbc3ee;
                      }
                      do {
                        iVar17 = FUN_100bb4020(lVar13,lVar13,lVar13,puVar12,param_5);
                        if (iVar17 == 0) goto LAB_100bbc6be;
                        uVar18 = 0;
                        iVar17 = (int)uVar27;
                        if ((-1 < iVar17) &&
                           (iVar8 = (int)(((uint)(iVar17 >> 0x1f) >> 0x1a) + iVar17) >> 6,
                           uVar18 = 0, iVar8 < (int)param_3[1])) {
                          uVar18 = -(uint)((*(ulong *)(*param_3 + (long)iVar8 * 8) >>
                                            (uVar27 & 0x3f) & 1) != 0) & 1;
                        }
                        uVar26 = uVar18 | uVar26 * 2;
                        iVar4 = iVar4 + 1;
                        uVar27 = (ulong)(iVar17 - 1);
                      } while (iVar4 < (int)uVar7);
                      if ((*(int *)((long)local_1c8 + 0xc) < iVar6) &&
                         (lVar11 = FUN_100bac510(local_1c8,iVar6), lVar11 == 0)) {
LAB_100bbc6be:
                        lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
                        uVar27 = 0;
                        goto LAB_100bbbb1b;
                      }
                      if (iVar6 == 0) {
                        *(undefined4 *)(local_1c8 + 1) = 0;
                      }
                      else {
                        puVar16 = (undefined1 *)
                                  ((long)(int)uVar26 + local_1e8 + 0x40 + -(local_1e8 & 0x3f));
                        uVar23 = 0;
                        do {
                          *(undefined1 *)(*local_1c8 + uVar23) = *puVar16;
                          uVar23 = uVar23 + 1;
                          puVar16 = puVar16 + iVar5;
                        } while (uVar23 < (ulong)(lVar28 * 8));
                        *(int *)(local_1c8 + 1) = iVar6;
                        plVar9 = (long *)(*local_1c8 + (lVar28 + -1) * 8);
                        iVar4 = iVar6 + 1;
                        do {
                          if (*plVar9 != 0) break;
                          plVar9 = plVar9 + -1;
                          *(int *)(local_1c8 + 1) = iVar4 + -2;
                          iVar4 = iVar4 + -1;
                        } while (1 < iVar4);
                      }
                      iVar4 = FUN_100bb4020(lVar13,lVar13,local_1c8,puVar12,param_5);
                    } while (iVar4 != 0);
                    goto LAB_100bbbb09;
                  }
LAB_100bbc3ee:
                  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
                }
              }
            }
LAB_100bbbb1b:
            if ((*(long *)(puVar12 + 2) != 0) && ((*(byte *)(puVar12 + 7) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)(puVar12 + 7) & 1) == 0) {
              *puVar1 = 0;
            }
            else {
              FUN_100bf3910(puVar1);
            }
            if ((*(long *)(puVar12 + 8) != 0) && ((*(byte *)(puVar12 + 0xd) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)(puVar12 + 0xd) & 1) == 0) {
              *(undefined8 *)(puVar12 + 8) = 0;
            }
            else {
              FUN_100bf3910();
            }
            if ((*(long *)(puVar12 + 0xe) != 0) && ((*(byte *)(puVar12 + 0x13) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)(puVar12 + 0x13) & 1) == 0) {
              *(undefined8 *)(puVar12 + 0xe) = 0;
            }
            else {
              FUN_100bf3910(puVar12 + 0xe);
            }
            if ((*(byte *)(puVar12 + 0x16) & 1) != 0) {
              FUN_100bf3910(puVar12);
            }
            if (local_1d8 != (void *)0x0) {
              _OPENSSL_cleanse(local_1d8,(long)local_1f0);
              FUN_100bf3910(local_1e8);
            }
            if (local_1d0 != (long *)0x0) {
              if (*local_1d0 != 0) {
                ___bzero(*local_1d0,(long)*(int *)((long)local_1d0 + 0xc) << 3);
              }
              *(undefined4 *)(local_1d0 + 1) = 0;
              *(undefined4 *)(local_1d0 + 2) = 0;
            }
            if (local_1c8 != (long *)0x0) {
              if (*local_1c8 != 0) {
                ___bzero(*local_1c8,(long)*(int *)((long)local_1c8 + 0xc) << 3);
              }
              *(undefined4 *)(local_1c8 + 1) = 0;
              *(undefined4 *)(local_1c8 + 2) = 0;
            }
          }
          iVar6 = *(int *)(param_5 + 0x34);
          if (iVar6 == 0) {
            uVar7 = *(int *)(param_5 + 0x28) - 1;
            *(uint *)(param_5 + 0x28) = uVar7;
            uVar26 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar7 * 4);
            uVar7 = *(uint *)(param_5 + 0x30);
            if (uVar26 <= uVar7 && uVar7 - uVar26 != 0) {
              iVar6 = *(int *)(param_5 + 0x18);
              uVar18 = uVar7 - uVar26;
              *(uint *)(param_5 + 0x18) = iVar6 - (uVar7 - uVar26);
              if (uVar18 != 0) {
                uVar22 = iVar6 + 0xfU & 0xf;
                if ((uVar18 & 1) != 0) {
                  if (uVar22 == 0) {
                    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                    uVar22 = 0xf;
                  }
                  else {
                    uVar22 = uVar22 - 1;
                  }
                  uVar18 = uVar18 - 1;
                }
                if (uVar7 - 1 != uVar26) {
                  do {
                    if (uVar22 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      iVar6 = 0xf;
                    }
                    else {
                      iVar6 = uVar22 - 1;
                    }
                    uVar18 = uVar18 - 2;
                    if (iVar6 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      uVar22 = 0xf;
                    }
                    else {
                      uVar22 = iVar6 - 1;
                    }
                  } while (uVar18 != 0);
                }
              }
            }
            goto LAB_100bbc8af;
          }
          goto LAB_100bbc808;
        }
      }
    }
    iVar6 = *(int *)((long)param_1 + 0xc);
  }
  if (iVar6 < 1) {
    lVar28 = FUN_100bac510(param_1,1);
    uVar27 = 0;
    if (lVar28 == 0) goto LAB_100bbc8b9;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)*param_1 = 1;
  *(undefined4 *)(param_1 + 1) = 1;
  uVar27 = 1;
LAB_100bbc8b9:
  if (lVar11 == local_38) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

