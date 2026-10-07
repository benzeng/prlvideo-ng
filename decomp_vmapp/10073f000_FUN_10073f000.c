
undefined4
FUN_10073f000(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
             undefined8 *param_6)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  void *pvVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  bool bVar29;
  bool bVar30;
  long *local_f0;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  long local_c8;
  long local_b0;
  ulong *local_a0;
  long *local_90;
  ulong local_80;
  ulong local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar17 = (ulong)(param_4 != (long *)0x0 && param_5 != 0);
  lVar11 = *param_1;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = lVar20;
  if (*(code **)(lVar11 + 0xe8) != (code *)0x0) {
    uVar6 = (**(code **)(lVar11 + 0xe8))(param_1,param_2,param_3,uVar17,&local_40,&local_48,param_6)
    ;
    goto LAB_10074013a;
  }
  uVar6 = 0;
  if (lVar11 != *param_2) goto LAB_10074013a;
  if ((param_3 == (long *)0x0) && (param_4 == (long *)0x0 || param_5 == 0)) {
    if (*(code **)(lVar11 + 0x68) != (code *)0x0) {
      uVar6 = (**(code **)(lVar11 + 0x68))(param_1,param_2);
    }
    goto LAB_10074013a;
  }
  if ((uVar17 != 0) && (uVar6 = 0, lVar11 != *param_4)) goto LAB_10074013a;
  puVar21 = (undefined8 *)0x0;
  if (param_6 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    uVar6 = 0;
    if (puVar21 == (undefined8 *)0x0) goto LAB_10074013a;
    *(undefined4 *)(puVar21 + 7) = 0;
    puVar21[6] = 0;
    puVar21[5] = 0;
    puVar21[4] = 0;
    puVar21[3] = 0;
    puVar21[2] = 0;
    puVar21[1] = 0;
    *puVar21 = 0;
    param_6 = puVar21;
  }
  if (param_3 == (long *)0x0) {
    local_c8 = 0;
    local_f0 = (long *)0x0;
    local_d8 = 0;
    uVar28 = 0;
    local_e0 = 0;
LAB_10073f220:
    local_b0 = 0;
LAB_10073f320:
    local_d0 = uVar28 + uVar17;
    uVar19 = local_d0 * 8;
    lVar10 = FUN_10081ddd0(uVar19 & 0xffffffff,"../src/snlic/sn_crypto_helper_03.c",0x1a6);
    local_a0 = (ulong *)FUN_10081ddd0(uVar19 & 0xffffffff,"../src/snlic/sn_crypto_helper_03.c",0x1a7
                                     );
    local_90 = (long *)FUN_10081ddd0((local_d0 << 0x20 | 0xffffffff) + 1 >> 0x1d & 0xffffffff,
                                     "../src/snlic/sn_crypto_helper_03.c",0x1a8);
    lVar11 = FUN_10081ddd0(uVar19 & 0xffffffff,"../src/snlic/sn_crypto_helper_03.c",0x1a9);
    if (lVar10 == 0) {
LAB_10073f686:
      plVar15 = (long *)0x0;
      puVar23 = (undefined8 *)0x0;
      uVar6 = 0;
    }
    else {
      if ((local_a0 == (ulong *)0x0) || (local_90 == (long *)0x0)) goto LAB_10073f69f;
      puVar23 = (undefined8 *)0x0;
      uVar6 = 0;
      plVar15 = (long *)0x0;
      if (lVar11 == 0) goto LAB_100740022;
      *local_90 = 0;
      uVar14 = 0;
      uVar12 = local_b0 + uVar17;
      uVar19 = 0;
      if (uVar12 != 0) {
        plVar15 = &local_48;
        uVar14 = 0;
        uVar19 = 0;
        uVar26 = 0;
        puVar25 = local_a0;
        plVar18 = local_90;
        do {
          if (uVar26 < uVar17) {
            iVar9 = (int)((long *)*plVar15)[1];
            uVar8 = 0;
            if ((long)iVar9 == 0) goto LAB_10073f4db;
            uVar22 = *(undefined8 *)(*(long *)*plVar15 + -8 + (long)iVar9 * 8);
LAB_10073f49e:
            iVar7 = FUN_10072d8e0(uVar22);
            uVar8 = iVar7 + (iVar9 + -1) * 0x40;
            lVar20 = 6;
            if ((((uVar8 < 2000) && (lVar20 = 5, uVar8 < 800)) && (lVar20 = 4, uVar8 < 300)) &&
               (lVar20 = 3, uVar8 < 0x46)) goto LAB_10073f4db;
          }
          else {
            iVar9 = (int)param_3[1];
            uVar8 = 0;
            if ((long)iVar9 != 0) {
              uVar22 = *(undefined8 *)(*param_3 + -8 + (long)iVar9 * 8);
              goto LAB_10073f49e;
            }
LAB_10073f4db:
            lVar20 = (ulong)(0x13 < uVar8) + 1;
          }
          *(long *)(lVar10 + uVar26 * 8) = lVar20;
          plVar18[1] = 0;
          plVar27 = param_3;
          if (uVar26 < uVar17) {
            plVar27 = (long *)*plVar15;
          }
          lVar13 = FUN_10073ea80(plVar27,lVar20,puVar25);
          *plVar18 = lVar13;
          if (lVar13 == 0) goto LAB_100740002;
          uVar14 = uVar14 + (uint)(1 << ((char)lVar20 - 1U & 0x1f));
          uVar26 = uVar26 + 1;
          if (uVar19 < *puVar25) {
            uVar19 = *puVar25;
          }
          plVar15 = plVar15 + 1;
          puVar25 = puVar25 + 1;
          plVar18 = plVar18 + 1;
        } while (uVar26 < uVar12);
      }
      if (uVar28 == 0) {
LAB_10073f904:
        lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10073f91d:
        puVar23 = (undefined8 *)
                  FUN_10081ddd0((uVar14 << 0x20 | 0xffffffff) + 1 >> 0x1d,
                                "../src/snlic/sn_crypto_helper_03.c",0x236);
        if (puVar23 != (undefined8 *)0x0) {
          puVar23[uVar14] = 0;
          puVar24 = puVar23;
          if (uVar12 != 0) {
            uVar28 = 0;
            do {
              *(undefined8 **)(lVar11 + uVar28 * 8) = puVar24;
              uVar26 = 0;
              do {
                if (((param_1 == (long *)0x0) || (*(long *)(*param_1 + 0x48) == 0)) ||
                   (plVar15 = (long *)FUN_10081ddd0(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe)
                   , plVar15 == (long *)0x0)) {
LAB_10073ff65:
                  *puVar24 = 0;
                  plVar15 = (long *)0x0;
                  uVar6 = 0;
                  lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
                  goto LAB_100740022;
                }
                lVar20 = *param_1;
                *plVar15 = lVar20;
                iVar9 = (**(code **)(lVar20 + 0x48))(plVar15);
                if (iVar9 == 0) {
                  FUN_10081e1a0(plVar15);
                  goto LAB_10073ff65;
                }
                *puVar24 = plVar15;
                puVar24 = puVar24 + 1;
                uVar26 = uVar26 + 1;
              } while (uVar26 < (uint)(1 << ((char)*(undefined4 *)(lVar10 + uVar28 * 8) - 1U & 0x1f)
                                      ));
              uVar28 = uVar28 + 1;
              lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
            } while (uVar28 < uVar12);
          }
          plVar15 = (long *)0x0;
          if (param_1 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            plVar15 = (long *)0x0;
            if (puVar24 == puVar23 + uVar14) {
              plVar15 = (long *)0x0;
              if (*(long *)(*param_1 + 0x48) != 0) {
                plVar15 = (long *)FUN_10081ddd0(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe);
                uVar6 = 0;
                if (plVar15 != (long *)0x0) {
                  lVar13 = *param_1;
                  *plVar15 = lVar13;
                  iVar9 = (**(code **)(lVar13 + 0x48))(plVar15);
                  if (iVar9 != 0) {
                    if (uVar12 != 0) {
                      uVar28 = 0;
                      do {
                        plVar18 = (long *)**(undefined8 **)(lVar11 + uVar28 * 8);
                        if (uVar17 <= uVar28) {
                          pcVar2 = *(code **)(*plVar18 + 0x60);
                          if ((pcVar2 != (code *)0x0) && (plVar27 = local_f0, *plVar18 == *local_f0)
                             ) goto joined_r0x00010073fb3c;
LAB_100740159:
                          uVar6 = 0;
                          goto LAB_100740022;
                        }
                        pcVar2 = *(code **)(*plVar18 + 0x60);
                        if ((pcVar2 == (code *)0x0) ||
                           (plVar27 = (&local_40)[uVar28], *plVar18 != *plVar27))
                        goto LAB_100740159;
joined_r0x00010073fb3c:
                        if ((plVar18 != plVar27) && (iVar9 = (*pcVar2)(plVar18,plVar27), iVar9 == 0)
                           ) goto LAB_100740159;
                        if (1 < *(ulong *)(lVar10 + uVar28 * 8)) {
                          lVar13 = *param_1;
                          if ((*(code **)(lVar13 + 0xb0) == (code *)0x0) || (lVar13 != *plVar15)) {
LAB_10073ffe7:
                            uVar6 = 0;
                            goto LAB_100740022;
                          }
                          plVar18 = (long *)**(undefined8 **)(lVar11 + uVar28 * 8);
                          if ((lVar13 != *plVar18) ||
                             (iVar9 = (**(code **)(lVar13 + 0xb0))(param_1,plVar15,plVar18,param_6),
                             iVar9 == 0)) {
LAB_100740174:
                            uVar6 = 0;
                            goto LAB_100740022;
                          }
                          uVar26 = 1;
                          if (*(int *)(lVar10 + uVar28 * 8) != 1) {
                            do {
                              lVar13 = *param_1;
                              if (((*(code **)(lVar13 + 0xa8) == (code *)0x0) ||
                                  (lVar3 = *(long *)(lVar11 + uVar28 * 8),
                                  lVar13 != **(long **)(lVar3 + uVar26 * 8))) ||
                                 (lVar13 != **(long **)(lVar3 + -8 + uVar26 * 8)))
                              goto LAB_10073ffe7;
                              if (lVar13 != *plVar15) {
                                uVar6 = 0;
                                goto LAB_100740022;
                              }
                              iVar9 = (**(code **)(lVar13 + 0xa8))();
                              if (iVar9 == 0) goto LAB_100740174;
                              uVar26 = uVar26 + 1;
                            } while (uVar26 < (uint)(1 << ((char)*(undefined4 *)
                                                                  (lVar10 + uVar28 * 8) - 1U & 0x1f)
                                                    ));
                          }
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar28 < uVar12);
                    }
                    pcVar2 = *(code **)(*param_1 + 0xe0);
                    if (pcVar2 != (code *)0x0) {
                      uVar6 = 0;
                      if (uVar14 != 0) {
                        uVar17 = 0;
                        do {
                          if (*param_1 != *(long *)puVar23[uVar17]) {
                            uVar6 = 0;
                            lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
                            goto LAB_100740022;
                          }
                          uVar17 = uVar17 + 1;
                        } while (uVar17 < uVar14);
                      }
                      iVar9 = (*pcVar2)(param_1,uVar14,puVar23,param_6);
                      if (iVar9 != 0) {
                        iVar9 = (int)uVar19 + -1;
                        if (iVar9 < 0) {
LAB_10073ff03:
                          pcVar2 = *(code **)(*param_1 + 0x68);
                          if ((pcVar2 != (code *)0x0) && (*param_1 == *param_2)) {
                            iVar9 = (*pcVar2)(param_1,param_2);
LAB_10073ff3a:
                            uVar6 = 0;
                            if (iVar9 != 0) goto LAB_100740253;
                          }
                        }
                        else {
                          bVar30 = false;
                          bVar29 = true;
                          uVar17 = (long)iVar9;
                          do {
                            if (!bVar29) {
                              pcVar2 = *(code **)(*param_1 + 0xb0);
                              if (((pcVar2 == (code *)0x0) || (*param_1 != *param_2)) ||
                                 (iVar9 = (*pcVar2)(param_1,param_2,param_2,param_6), iVar9 == 0)) {
LAB_1007401d6:
                                uVar6 = 0;
                                goto LAB_1007401d9;
                              }
                            }
                            uVar28 = 0;
                            if (local_d0 != 0) {
                              do {
                                if (uVar17 < local_a0[uVar28]) {
                                  bVar1 = *(byte *)(local_90[uVar28] + uVar17);
                                  if (bVar1 != 0) {
                                    iVar9 = -(int)(char)bVar1;
                                    if (-1 < (char)bVar1) {
                                      iVar9 = (int)(char)bVar1;
                                    }
                                    if ((bool)(bVar1 >> 7) != bVar30) {
                                      if ((!bVar29) &&
                                         (((lVar20 = *param_1, *(long *)(lVar20 + 0xb0) == 0 ||
                                           (lVar20 != *param_2)) ||
                                          (iVar7 = (**(code **)(lVar20 + 0xb8))
                                                             (param_1,param_2,param_6), iVar7 == 0))
                                         )) goto LAB_1007401d6;
                                      bVar30 = bVar30 == false;
                                    }
                                    plVar18 = *(long **)(*(long *)(lVar11 + uVar28 * 8) +
                                                        (long)(iVar9 >> 1) * 8);
                                    if (bVar29) {
                                      pcVar2 = *(code **)(*param_2 + 0x60);
                                      if ((pcVar2 == (code *)0x0) || (*param_2 != *plVar18))
                                      goto LAB_1007401d6;
                                      if (plVar18 != param_2) {
                                        iVar9 = (*pcVar2)(param_2,plVar18);
                                        goto LAB_10073feb4;
                                      }
                                    }
                                    else {
                                      lVar20 = *param_1;
                                      if (((*(code **)(lVar20 + 0xa8) == (code *)0x0) ||
                                          (lVar20 != *param_2)) || (lVar20 != *plVar18))
                                      goto LAB_1007401d6;
                                      iVar9 = (**(code **)(lVar20 + 0xa8))
                                                        (param_1,param_2,param_2,plVar18,param_6);
LAB_10073feb4:
                                      if (iVar9 == 0) goto LAB_1007401d6;
                                    }
                                    bVar29 = false;
                                  }
                                }
                                uVar28 = uVar28 + 1;
                              } while (uVar28 < local_d0);
                            }
                            bVar4 = 0 < (long)uVar17;
                            uVar17 = uVar17 - 1;
                          } while (bVar4);
                          if (bVar29) goto LAB_10073ff03;
                          if (bVar30 != false) {
                            lVar20 = *param_1;
                            uVar6 = 0;
                            if ((*(long *)(lVar20 + 0xb0) == 0) || (lVar20 != *param_2))
                            goto LAB_1007401d9;
                            iVar9 = (**(code **)(lVar20 + 0xb8))(param_1,param_2,param_6);
                            goto LAB_10073ff3a;
                          }
LAB_100740253:
                          uVar6 = 1;
                        }
                      }
                    }
LAB_1007401d9:
                    lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
                    goto LAB_100740022;
                  }
                  FUN_10081e1a0(plVar15);
                }
                goto LAB_10073ff4d;
              }
              uVar6 = 0;
            }
          }
          goto LAB_100740022;
        }
      }
      else {
        if (local_c8 == 0) {
          lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
          if ((int)local_b0 == 0) goto LAB_10073f671;
          goto LAB_10073f91d;
        }
        local_50 = 0;
        lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
        if ((int)local_b0 != 0) {
LAB_10073f671:
          puVar23 = (undefined8 *)0x0;
          plVar15 = (long *)0x0;
          uVar6 = 0;
          goto LAB_100740022;
        }
        uVar22 = *(undefined8 *)(local_c8 + 0x18);
        *(undefined8 *)(lVar10 + uVar17 * 8) = uVar22;
        plVar15 = (long *)FUN_10073ea80(param_3,uVar22,&local_50);
        puVar23 = (undefined8 *)0x0;
        if (plVar15 != (long *)0x0) {
          if (local_50 <= uVar19) {
            local_d0 = uVar17 + 1;
            local_90[uVar17] = (long)plVar15;
            local_90[uVar17 + 1] = 0;
            local_a0[uVar17] = local_50;
            *(undefined8 *)(lVar11 + uVar17 * 8) = *(undefined8 *)(local_c8 + 0x20);
            goto LAB_10073f91d;
          }
          plVar18 = plVar15;
          if (local_50 < uVar28 * local_d8) {
            uVar28 = (local_d8 - 1) + local_50;
            local_d0 = uVar28 / local_d8;
            plVar18 = (long *)(uVar28 % local_d8);
            if (local_d0 <= *(ulong *)(local_c8 + 0x10)) {
              local_d0 = local_d0 + uVar17;
              goto LAB_10073f7d0;
            }
          }
          else {
LAB_10073f7d0:
            if (local_d0 <= uVar17) {
LAB_10073f8e4:
              FUN_10081e1a0(plVar15,local_d8,plVar18);
              goto LAB_10073f904;
            }
            plVar18 = *(long **)(local_c8 + 0x20);
            local_80 = local_50;
            uVar28 = uVar17;
            plVar27 = plVar15;
            while( true ) {
              if (uVar28 < local_d0 - 1) {
                local_a0[uVar28] = local_d8;
                bVar29 = local_80 < local_d8;
                local_80 = local_80 - local_d8;
                uVar26 = local_d8;
                uVar5 = local_80;
                if (bVar29) goto LAB_100740002;
              }
              else {
                local_a0[uVar28] = local_80;
                uVar26 = local_80;
                uVar5 = local_50;
              }
              local_50 = uVar5;
              local_90[uVar28 + 1] = 0;
              pvVar16 = (void *)FUN_10081ddd0(uVar26,"../src/snlic/sn_crypto_helper_03.c",0x21a);
              local_90[uVar28] = (long)pvVar16;
              if ((pvVar16 == (void *)0x0) ||
                 (_memcpy(pvVar16,plVar27,local_a0[uVar28]), *plVar18 == 0)) break;
              if (uVar19 < local_a0[uVar28]) {
                uVar19 = local_a0[uVar28];
              }
              *(long **)(lVar11 + uVar28 * 8) = plVar18;
              uVar28 = uVar28 + 1;
              plVar27 = (long *)((long)plVar27 + local_d8);
              plVar18 = plVar18 + local_e0;
              if (local_d0 <= uVar28) goto LAB_10073f8e4;
            }
            FUN_10081e1a0(plVar15);
LAB_100740002:
            lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
          uVar6 = 0;
          puVar23 = (undefined8 *)0x0;
          plVar15 = (long *)0x0;
          goto LAB_100740022;
        }
      }
LAB_10073ff4d:
      plVar15 = (long *)0x0;
      uVar6 = 0;
    }
  }
  else {
    local_f0 = (long *)param_1[1];
    lVar11 = 0;
    if (local_f0 != (long *)0x0) {
      puVar23 = (undefined8 *)param_1[0xc];
      local_b0 = 1;
      for (; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
        if ((((code *)puVar23[2] == FUN_10073e8e0) && ((code *)puVar23[3] == FUN_10073e8f0)) &&
           ((code *)puVar23[4] == FUN_10073e990)) {
          local_c8 = puVar23[1];
          if ((local_c8 != 0) && (*(long *)(local_c8 + 0x10) != 0)) {
            lVar11 = *param_1;
            if ((*(code **)(lVar11 + 0xd0) != (code *)0x0) &&
               ((lVar11 == *local_f0 && (lVar11 == *(long *)**(undefined8 **)(local_c8 + 0x20))))) {
              iVar9 = (**(code **)(lVar11 + 0xd0))(param_1,local_f0);
              local_d8 = 0;
              if (iVar9 != 0) {
                local_e0 = 0;
                local_c8 = 0;
                uVar28 = 1;
                goto LAB_10073f320;
              }
            }
            local_d8 = *(ulong *)(local_c8 + 8);
            iVar9 = (int)param_3[1];
            iVar7 = 0;
            if ((long)iVar9 != 0) {
              iVar7 = FUN_10072d8e0(*(undefined8 *)(*param_3 + -8 + (long)iVar9 * 8));
              iVar7 = iVar7 + (iVar9 + -1) * 0x40;
            }
            lVar11 = 0;
            uVar28 = (ulong)(long)iVar7 / local_d8 + 1;
            uVar19 = *(ulong *)(local_c8 + 0x10);
            if (uVar19 < uVar28) {
              uVar28 = uVar19;
            }
            local_e0 = (ulong)(uint)(1 << ((char)*(undefined4 *)(local_c8 + 0x18) - 1U & 0x1f));
            if (*(long *)(local_c8 + 0x28) == uVar19 * local_e0) goto LAB_10073f220;
            lVar10 = 0;
            local_90 = (long *)0x0;
            local_a0 = (ulong *)0x0;
            goto LAB_10073f686;
          }
          break;
        }
      }
      local_d8 = 0;
      uVar28 = 1;
      local_e0 = 0;
      local_c8 = 0;
      goto LAB_10073f320;
    }
    lVar10 = 0;
    local_90 = (long *)0x0;
    local_a0 = (ulong *)0x0;
LAB_10073f69f:
    plVar15 = (long *)0x0;
    puVar23 = (undefined8 *)0x0;
    uVar6 = 0;
  }
LAB_100740022:
  if (puVar21 != (undefined8 *)0x0) {
    FUN_100729fd0();
  }
  if (plVar15 != (long *)0x0) {
    if (*(code **)(*plVar15 + 0x50) != (code *)0x0) {
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    FUN_10081e1a0(plVar15);
  }
  if (lVar10 != 0) {
    FUN_10081e1a0(lVar10);
  }
  if (local_a0 != (ulong *)0x0) {
    FUN_10081e1a0(local_a0);
  }
  if (local_90 != (long *)0x0) {
    lVar10 = *local_90;
    plVar15 = local_90;
    while (lVar10 != 0) {
      plVar15 = plVar15 + 1;
      FUN_10081e1a0();
      lVar10 = *plVar15;
    }
    FUN_10081e1a0(local_90);
  }
  if (puVar23 != (undefined8 *)0x0) {
    plVar15 = (long *)*puVar23;
    puVar21 = puVar23;
    while (plVar15 != (long *)0x0) {
      puVar21 = puVar21 + 1;
      lVar10 = *plVar15;
      if (*(code **)(lVar10 + 0x58) == (code *)0x0) {
        if ((lVar10 != 0) && (*(code **)(lVar10 + 0x50) != (code *)0x0)) {
          (**(code **)(lVar10 + 0x50))(plVar15);
        }
      }
      else {
        (**(code **)(lVar10 + 0x58))(plVar15);
      }
      _OPENSSL_cleanse(plVar15,0x58);
      FUN_10081e1a0(plVar15);
      plVar15 = (long *)*puVar21;
    }
    FUN_10081e1a0(puVar23);
  }
  if (lVar11 != 0) {
    FUN_10081e1a0();
  }
LAB_10074013a:
  if (lVar20 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

