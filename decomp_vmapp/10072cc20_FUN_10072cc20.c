
undefined4
FUN_10072cc20(byte *param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong *puVar23;
  code *pcVar24;
  uint uVar25;
  ulong *puVar26;
  long *plVar27;
  undefined4 uVar28;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined1 local_b0 [96];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  byte local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  bVar1 = *param_1;
  local_c0 = 0;
  local_b4 = 0x55;
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0 = CONCAT71(local_c0._1_7_,uVar8);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0._0_2_ = CONCAT11(uVar8,(undefined1)local_c0);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0._0_3_ = CONCAT12(uVar8,(undefined2)local_c0);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0._0_4_ = CONCAT13(uVar8,(undefined3)local_c0);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0._0_5_ = CONCAT14(uVar8,(undefined4)local_c0);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0._0_6_ = CONCAT15(uVar8,(undefined5)local_c0);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0._0_7_ = CONCAT16(uVar8,(undefined6)local_c0);
  uVar8 = FUN_100740260(param_4,&local_b4,8);
  local_c0 = CONCAT17(uVar8,(undefined7)local_c0);
  FUN_100823660(local_b0);
  FUN_100823400(local_b0,param_5,0xb);
  FUN_100823570(&local_48,local_b0);
  uVar10 = CONCAT44(uStack_3c,local_40) ^ CONCAT44(uStack_44,local_48);
  local_4d = (byte)((uint)local_40 >> 0x18) ^ (byte)((uint)local_48 >> 0x18);
  local_50 = (undefined1)uVar10;
  local_4f = (undefined1)(uVar10 >> 8);
  local_4e = (undefined1)(uVar10 >> 0x10);
  local_4c = (undefined1)(uVar10 >> 0x20);
  local_4b = (undefined1)(uVar10 >> 0x28);
  local_4a = (undefined1)(uVar10 >> 0x30);
  local_49 = (undefined1)(uVar10 >> 0x38);
  lVar11 = FUN_100729300(param_3);
  uVar28 = 5;
  if (((ulong)*param_1 + 0x10001 != param_2) ||
     (lVar12 = FUN_10072b730(param_1 + 1,(ulong)*param_1,0,0), lVar12 == 0)) goto LAB_10072d1d6;
  iVar9 = FUN_10072c870(lVar12);
  uVar28 = 5;
  if (iVar9 != 0) {
    plVar13 = (long *)FUN_10072d4c0();
    uVar28 = 2;
    if (plVar13 != (long *)0x0) {
      lVar11 = FUN_10072bbb0(param_1 + (ulong)bVar1 + 1 + lVar11 * 8,8,*plVar13);
      *plVar13 = lVar11;
      uVar28 = 1;
      if (lVar11 != 0) {
        lVar11 = FUN_10072bbb0(&local_c0,8,plVar13[1]);
        plVar13[1] = lVar11;
        uVar28 = 5;
        if (*plVar13 != 0) {
          plVar5 = *(long **)(lVar12 + 8);
          uVar28 = 2;
          if (((plVar5 != (long *)0x0) && (lVar11 = *(long *)(lVar12 + 0x10), lVar11 != 0)) &&
             (puVar14 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6),
             puVar14 != (undefined8 *)0x0)) {
            *(undefined4 *)(puVar14 + 7) = 0;
            puVar14[6] = 0;
            puVar14[5] = 0;
            puVar14[4] = 0;
            puVar14[3] = 0;
            puVar14[2] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            FUN_1007353b0(puVar14);
            plVar15 = (long *)FUN_100735470(puVar14);
            plVar16 = (long *)FUN_100735470(puVar14);
            uVar17 = FUN_100735470(puVar14);
            uVar18 = FUN_100735470(puVar14);
            lVar19 = FUN_100735470(puVar14);
            plVar27 = (long *)0x0;
            if (lVar19 == 0) {
              uVar28 = 1;
            }
            else {
              lVar20 = FUN_10072d5c0(plVar15,plVar5 + 2);
              plVar27 = (long *)0x0;
              if (lVar20 == 0) {
                uVar28 = 1;
              }
              else {
                iVar9 = (int)plVar15[1];
                lVar20 = (long)iVar9;
                plVar27 = (long *)0x0;
                if (lVar20 == 0) {
                  uVar28 = 1;
                }
                else {
                  plVar6 = (long *)*plVar13;
                  iVar2 = (int)plVar6[1];
                  uVar28 = 6;
                  plVar27 = (long *)0x0;
                  if ((iVar2 != 0) && (plVar27 = (long *)0x0, (int)plVar6[2] == 0)) {
                    if (iVar2 == iVar9) {
                      lVar22 = (long)(iVar9 + -1) * 8;
                      puVar26 = (ulong *)(*plVar15 + lVar22);
                      puVar23 = (ulong *)(lVar22 + *plVar6);
                      plVar27 = (long *)0x0;
                      lVar22 = lVar20;
                      do {
                        if (lVar22 < 1) goto LAB_10072cff0;
                        uVar10 = *puVar23;
                        uVar7 = *puVar26;
                        lVar22 = lVar22 + -1;
                        puVar26 = puVar26 + -1;
                        puVar23 = puVar23 + -1;
                      } while (uVar10 == uVar7);
                      plVar27 = (long *)0x0;
                      if (uVar10 <= uVar7) {
LAB_10072d05e:
                        plVar6 = (long *)plVar13[1];
                        iVar2 = (int)plVar6[1];
                        plVar27 = (long *)0x0;
                        if ((iVar2 != 0) && (plVar27 = (long *)0x0, (int)plVar6[2] == 0)) {
                          if (iVar2 == iVar9) {
                            lVar22 = (long)(iVar9 + -1) * 8;
                            puVar26 = (ulong *)(*plVar15 + lVar22);
                            puVar23 = (ulong *)(lVar22 + *plVar6);
                            do {
                              if (lVar20 < 1) {
                                plVar27 = (long *)0x0;
                                goto LAB_10072cff0;
                              }
                              uVar10 = *puVar23;
                              uVar7 = *puVar26;
                              lVar20 = lVar20 + -1;
                              puVar26 = puVar26 + -1;
                              puVar23 = puVar23 + -1;
                            } while (uVar10 == uVar7);
                            plVar27 = (long *)0x0;
                            if (uVar10 <= uVar7) {
LAB_10072d20b:
                              lVar20 = FUN_100735740(uVar17,plVar6,plVar15,puVar14);
                              if (lVar20 == 0) {
LAB_10072d3c5:
                                uVar28 = 1;
                                plVar27 = (long *)0x0;
                              }
                              else {
                                lVar20 = FUN_10072bbb0(&local_50,8,uVar18);
                                uVar28 = 5;
                                plVar27 = (long *)0x0;
                                if (lVar20 != 0) {
                                  iVar9 = FUN_10073b600(plVar16,uVar18,uVar17,plVar15,puVar14);
                                  if (iVar9 == 0) goto LAB_10072d3c5;
                                  iVar9 = FUN_10073b600(uVar17,*plVar13,uVar17,plVar15,puVar14);
                                  if (iVar9 == 0) {
                                    uVar28 = 1;
                                    plVar27 = (long *)0x0;
                                  }
                                  else {
                                    uVar28 = 2;
                                    if (*(long *)(*plVar5 + 0x48) == 0) {
                                      plVar27 = (long *)0x0;
                                    }
                                    else {
                                      plVar27 = (long *)FUN_10081ddd0(0x58,
                                                  "../src/snlic/sn_crypto_helper_02.c",0x1fe);
                                      if (plVar27 == (long *)0x0) {
                                        plVar27 = (long *)0x0;
                                      }
                                      else {
                                        lVar20 = *plVar5;
                                        *plVar27 = lVar20;
                                        iVar9 = (**(code **)(lVar20 + 0x48))();
                                        if (iVar9 == 0) {
                                          FUN_10081e1a0(plVar27);
                                          plVar27 = (long *)0x0;
                                        }
                                        else {
                                          iVar9 = FUN_10073f000(plVar5,plVar27,plVar16,lVar11,uVar17
                                                                ,puVar14);
                                          if (iVar9 != 0) {
                                            pcVar24 = *(code **)(*plVar5 + 0x88);
                                            if ((((pcVar24 != (code *)0x0) && (*plVar5 == *plVar27))
                                                && (iVar9 = (*pcVar24)(plVar5,plVar27,lVar19,0,
                                                                       puVar14), iVar9 != 0)) &&
                                               (iVar9 = FUN_1007366c0(0,plVar16,lVar19,plVar15,
                                                                      puVar14), iVar9 != 0)) {
                                              if ((int)plVar16[2] != 0) {
                                                if ((int)plVar15[2] == 0) {
                                                  pcVar24 = FUN_100737900;
                                                }
                                                else {
                                                  pcVar24 = FUN_100737670;
                                                }
                                                iVar9 = (*pcVar24)(plVar16,plVar16,plVar15);
                                                uVar28 = 1;
                                                if (iVar9 == 0) goto LAB_10072cff0;
                                              }
                                              iVar9 = (int)plVar16[1];
                                              lVar11 = (long)iVar9;
                                              iVar2 = (int)((long *)*plVar13)[1];
                                              if (iVar9 == iVar2) {
                                                lVar19 = (long)(iVar9 + -1) * 8;
                                                puVar26 = (ulong *)(*(long *)*plVar13 + lVar19);
                                                puVar23 = (ulong *)(lVar19 + *plVar16);
                                                do {
                                                  iVar9 = 0;
                                                  if (lVar11 < 1) goto LAB_10072d4a8;
                                                  uVar10 = *puVar26;
                                                  lVar11 = lVar11 + -1;
                                                  puVar26 = puVar26 + -1;
                                                  uVar7 = *puVar23;
                                                  puVar23 = puVar23 + -1;
                                                } while (uVar7 == uVar10);
                                                iVar9 = -1;
                                                if (uVar10 < uVar7) {
                                                  iVar9 = 1;
                                                }
                                              }
                                              else {
                                                iVar9 = iVar9 - iVar2;
                                              }
LAB_10072d4a8:
                                              uVar28 = 6;
                                              if (iVar9 == 0) {
                                                uVar28 = 0;
                                              }
                                              goto LAB_10072cff0;
                                            }
                                          }
                                          uVar28 = 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else {
                            plVar27 = (long *)0x0;
                            if (iVar2 < iVar9) goto LAB_10072d20b;
                          }
                        }
                      }
                    }
                    else {
                      plVar27 = (long *)0x0;
                      if (iVar2 < iVar9) goto LAB_10072d05e;
                    }
                  }
                }
              }
            }
LAB_10072cff0:
            if (*(int *)((long)puVar14 + 0x34) == 0) {
              iVar9 = *(int *)(puVar14 + 5);
              *(uint *)(puVar14 + 5) = iVar9 - 1U;
              uVar3 = *(uint *)(puVar14[4] + (ulong)(iVar9 - 1U) * 4);
              uVar4 = *(uint *)(puVar14 + 6);
              if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
                iVar9 = *(int *)(puVar14 + 3);
                uVar21 = uVar4 - uVar3;
                *(uint *)(puVar14 + 3) = iVar9 - (uVar4 - uVar3);
                if (uVar21 != 0) {
                  uVar25 = iVar9 + 0xfU & 0xf;
                  if ((uVar21 & 1) != 0) {
                    if (uVar25 == 0) {
                      puVar14[1] = *(undefined8 *)(puVar14[1] + 0x180);
                      uVar25 = 0xf;
                    }
                    else {
                      uVar25 = uVar25 - 1;
                    }
                    uVar21 = uVar21 - 1;
                  }
                  if (uVar4 - 1 != uVar3) {
                    do {
                      if (uVar25 == 0) {
                        puVar14[1] = *(undefined8 *)(puVar14[1] + 0x180);
                        iVar9 = 0xf;
                      }
                      else {
                        iVar9 = uVar25 - 1;
                      }
                      uVar21 = uVar21 - 2;
                      if (iVar9 == 0) {
                        puVar14[1] = *(undefined8 *)(puVar14[1] + 0x180);
                        uVar25 = 0xf;
                      }
                      else {
                        uVar25 = iVar9 - 1;
                      }
                    } while (uVar21 != 0);
                  }
                }
              }
              *(uint *)(puVar14 + 6) = uVar3;
              *(undefined4 *)(puVar14 + 7) = 0;
            }
            else {
              *(int *)((long)puVar14 + 0x34) = *(int *)((long)puVar14 + 0x34) + -1;
            }
            FUN_100729fd0(puVar14);
            if (plVar27 != (long *)0x0) {
              if (*(code **)(*plVar27 + 0x50) != (code *)0x0) {
                (**(code **)(*plVar27 + 0x50))();
              }
              FUN_10081e1a0(plVar27);
            }
          }
          plVar5 = (long *)*plVar13;
          if (plVar5 != (long *)0x0) {
            if ((*plVar5 != 0) && ((*(byte *)((long)plVar5 + 0x14) & 2) == 0)) {
              FUN_10081e1a0();
            }
            if ((*(byte *)((long)plVar5 + 0x14) & 1) == 0) {
              *plVar5 = 0;
            }
            else {
              FUN_10081e1a0(plVar5);
            }
          }
        }
      }
      plVar5 = (long *)plVar13[1];
      if (plVar5 != (long *)0x0) {
        if ((*plVar5 != 0) && ((*(byte *)((long)plVar5 + 0x14) & 2) == 0)) {
          FUN_10081e1a0();
        }
        if ((*(byte *)((long)plVar5 + 0x14) & 1) == 0) {
          *plVar5 = 0;
        }
        else {
          FUN_10081e1a0(plVar5);
        }
      }
      FUN_10081e1a0(plVar13);
    }
  }
  FUN_10072b560(lVar12);
LAB_10072d1d6:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar28;
}

