
int FUN_10068eca0(long *param_1,uint param_2,undefined8 param_3,undefined4 param_4,uint *param_5,
                 uint *param_6,undefined4 *param_7,uint *param_8,undefined8 *param_9)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 ***pppuVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined8 *****pppppuVar27;
  undefined8 ****ppppuVar28;
  bool bVar29;
  undefined8 **ppuVar30;
  undefined8 ****local_170;
  long local_160;
  uint local_14c;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 ***local_118;
  undefined8 ***local_110;
  undefined8 **local_108;
  ulong local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  ulong local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long local_80;
  long *local_78;
  long local_70;
  ulong local_68;
  undefined8 ****local_60;
  undefined8 ****local_58;
  long local_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_60 = &local_58;
  local_50 = 0;
  local_58 = (undefined8 *****)0x0;
  local_78 = &local_70;
  local_68 = 0;
  local_70 = 0;
  local_90 = &local_88;
  local_80 = 0;
  local_88 = 0;
  local_a8 = &local_a0;
  local_98 = 0;
  local_a0 = 0;
  local_c0 = &local_b8;
  local_b0 = 0;
  local_b8 = 0;
  local_d8 = &local_d0;
  local_c8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  plVar2 = (long *)param_1[4];
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("Reclaim","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si",
                  "DiskImageComp.cpp",0x6ae,"FixAbnormalBlocks");
  }
  uVar15 = FUN_100697940(plVar2);
  pvVar16 = _valloc(uVar15 & 0xffffffff);
  if (pvVar16 == (void *)0x0) {
    iVar11 = -0x7ffffffe;
    FUN_1008e3970("Reclaim","dimg",0,"Error: memory allocation problems!");
  }
  else {
    (**(code **)(*param_1 + 0x100))();
    uVar25 = param_2 & 1;
    if ((uVar25 != 0) ||
       ((iVar11 = FUN_10068e9d0(param_1), -1 < iVar11 &&
        (iVar11 = FUN_10068e620(param_1), -1 < iVar11)))) {
      ppuVar30 = &local_a8;
      iVar11 = FUN_100690110(param_1,param_3,param_4,&local_60,&local_78,&local_90,ppuVar30,
                             &local_c0,&local_d8,&local_e0);
      uVar14 = (undefined4)((ulong)ppuVar30 >> 0x20);
      if (iVar11 < 0) {
        FUN_1008e3970("Reclaim","dimg",0,"Blocks analysis failed: error=%u",iVar11);
      }
      else {
        *param_5 = (uint)local_68;
        *param_6 = (uint)local_b0;
        *param_8 = (uint)local_c8;
        *param_7 = (undefined4)local_98;
        FUN_1008e3970("Reclaim","dimg",0,"Ref blocks: %zu",local_50);
        FUN_1008e3970("Reclaim","dimg",0,"Dup blocks: %zu",local_68);
        FUN_1008e3970("Reclaim","dimg",0,"Empty blocks: %zu",local_80);
        FUN_1008e3970("Reclaim","dimg",0,"Free blocks: %zu",local_98);
        FUN_1008e3970("Reclaim","dimg",0,"Corrupt (unaligned) blocks: %zu",local_b0);
        FUN_1008e3970("Reclaim","dimg",0,"Out of disk blocks: %zu",local_c8);
        FUN_1008e3970("Reclaim","dimg",0,"LastUsedBlockEnd: %llu",local_e0);
        if ((*(uint *)(plVar2 + 0x10) & 1) != 0) {
          *(uint *)(plVar2 + 0x10) = *(uint *)(plVar2 + 0x10) & 0xfffffffe;
          iVar12 = (**(code **)(*plVar2 + 0x20))();
          if (iVar12 < 0) {
            FUN_1008e3970("","dimg",0,"SaveHasData() write failed. 0x%X");
          }
        }
        if (uVar25 == 0) {
LAB_10068f076:
          if ((param_2 & 4) != 0) {
            uVar13 = *param_5;
            uVar17 = (ulong)*param_6;
            if (0x200 < uVar17 + uVar13) {
              uVar22 = (ulong)*param_8;
              goto LAB_10068f0ab;
            }
          }
          if (uVar25 == 0) {
            if (local_c8 != 0) {
              FUN_1008e3970("Reclaim","dimg",0,"# Cleaning up out of disk blocks");
              (**(code **)(*param_1 + 0x70))(param_1,1);
              iVar11 = 0;
              plVar18 = local_d8;
              if (local_d8 != &local_d0) {
                do {
                  iVar11 = (**(code **)(*param_1 + 0x58))(param_1,(int)plVar18[4],0);
                  plVar3 = (long *)plVar18[1];
                  if ((long *)plVar18[1] == (long *)0x0) {
                    do {
                      plVar21 = (long *)plVar18[2];
                      bVar29 = (long *)*plVar21 != plVar18;
                      plVar18 = plVar21;
                    } while (bVar29);
                  }
                  else {
                    do {
                      plVar21 = plVar3;
                      plVar3 = (long *)*plVar21;
                    } while ((long *)*plVar21 != (long *)0x0);
                  }
                } while ((-1 < iVar11) && (plVar18 = plVar21, plVar21 != &local_d0));
                if (iVar11 < 0) {
                  FUN_1008e3970("Reclaim","dimg",0,
                                "Error: cleaning references for out of disk blocks failed 0x%x",
                                iVar11);
                  goto LAB_10068fee5;
                }
              }
              (**(code **)(*param_1 + 0x28))();
              FUN_100693af0(&local_d8,local_d0);
              local_c8 = 0;
              local_d0 = 0;
              local_d8 = &local_d0;
            }
            if (local_80 != 0) {
              FUN_1008e3970("Reclaim","dimg",0,"# Cleaning up empty BAT entries");
              (**(code **)(*param_1 + 0x70))(param_1,1);
              iVar11 = 0;
              plVar18 = local_90;
              if (local_90 != &local_88) {
                do {
                  iVar11 = (**(code **)(*param_1 + 0x58))(param_1,(int)plVar18[4],0);
                  plVar3 = (long *)plVar18[1];
                  if ((long *)plVar18[1] == (long *)0x0) {
                    do {
                      plVar21 = (long *)plVar18[2];
                      bVar29 = (long *)*plVar21 != plVar18;
                      plVar18 = plVar21;
                    } while (bVar29);
                  }
                  else {
                    do {
                      plVar21 = plVar3;
                      plVar3 = (long *)*plVar21;
                    } while ((long *)*plVar21 != (long *)0x0);
                  }
                } while ((-1 < iVar11) && (plVar18 = plVar21, plVar21 != &local_88));
                if (iVar11 < 0) {
                  FUN_1008e3970("Reclaim","dimg",0,"Create empty blocks map failed with code 0x%x",
                                iVar11);
                  goto LAB_10068fee5;
                }
              }
              (**(code **)(*param_1 + 0x28))();
              FUN_100693af0(&local_90,local_88);
              local_80 = 0;
              local_88 = 0;
              local_90 = &local_88;
            }
            if (local_68 == 0) {
LAB_10068f5f3:
              if (local_b0 != 0) {
                uVar17 = FUN_1006978d0(plVar2);
                ppppuVar24 = (undefined8 ****)(uVar17 % (ulong)*(uint *)(plVar2 + 2));
                local_108 = (undefined8 ***)0xffffffffffffffff;
                plVar18 = local_c0;
                if (local_c0 != &local_b8) {
                  do {
                    ppppuVar23 = (undefined8 ****)&local_108;
                    ppppuVar4 = (undefined8 ****)plVar18[4];
                    ppppuVar28 = (undefined8 ****)plVar18[5];
                    local_110 = ppppuVar24;
                    if (ppppuVar24 <= ppppuVar4) {
                      local_110 = (undefined8 ***)
                                  ((long)ppppuVar4 -
                                  (ulong)((long)ppppuVar4 - (long)ppppuVar24) %
                                  (ulong)*(uint *)(plVar2 + 2));
                    }
                    plVar3 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                    cVar10 = (**(code **)(*plVar3 + 0x40))
                                       (plVar3,pvVar16,uVar15,0,
                                        *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1
                                                 ) * (long)ppppuVar4);
                    if (cVar10 == '\0') {
                      iVar11 = -0x7ffffae8;
                      FUN_1008e3970("Reclaim","dimg",0,"Error: read of block [off:%llu] failed!",
                                    ppppuVar4);
                      goto LAB_10068fee5;
                    }
                    local_40 = &local_110;
                    local_48 = ppppuVar23;
                    if ((undefined8 ***)local_108 != (undefined8 ***)0xffffffffffffffff) {
                      plVar3 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                      cVar10 = (**(code **)(*plVar3 + 0x48))
                                         (plVar3,pvVar16,uVar15,0,
                                          (long)local_108 *
                                          *(long *)(*(long *)(*param_1 + -0x18) + 0x38 +
                                                   (long)param_1));
                      if (cVar10 == '\0') {
                        ppppuVar24 = &local_48;
LAB_10068fe1f:
                        iVar11 = -0x7ffffae8;
                        FUN_1008e3970("Reclaim","dimg",0,"Error: write of block [off:%llu] failed!",
                                      **ppppuVar24);
                      }
                      else {
                        iVar11 = (**(code **)(*param_1 + 0x58))(param_1,ppppuVar28,local_108);
                        if (-1 < iVar11) goto LAB_10068f781;
LAB_10068fde4:
                        iVar11 = -0x7ffffae8;
                        FUN_1008e3970("Reclaim","dimg",0,"Error: update BAT failed %llu -> %llu",
                                      ppppuVar28,*ppppuVar23);
                      }
                      goto LAB_10068fee5;
                    }
                    iVar11 = (**(code **)(*param_1 + 0xf8))
                                       (param_1,(ulong)*(uint *)(plVar2 + 2) * (long)ppppuVar28,
                                        ppppuVar23,pvVar16,uVar15);
                    if (iVar11 < 0) {
LAB_100690005:
                      FUN_1008e3970("Reclaim","dimg",0,"Error: update BAT failed %llu -> %llu",
                                    ppppuVar28,*ppppuVar23);
                      goto LAB_10068fee5;
                    }
LAB_10068f781:
                    (**(code **)(*param_1 + 0x28))();
                    if ((undefined8 ****)local_110 == (undefined8 ****)0xffffffffffffffff) {
                      iVar11 = (**(code **)(*param_1 + 0xf8))
                                         (param_1,(ulong)*(uint *)(plVar2 + 2) * (long)ppppuVar28,
                                          &local_110,pvVar16,uVar15);
                      ppppuVar23 = (undefined8 ****)local_40;
                      if (iVar11 < 0) goto LAB_100690005;
                    }
                    else {
                      plVar3 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                      cVar10 = (**(code **)(*plVar3 + 0x48))
                                         (plVar3,pvVar16,uVar15,0,
                                          (long)local_110 *
                                          *(long *)(*(long *)(*param_1 + -0x18) + 0x38 +
                                                   (long)param_1));
                      ppppuVar23 = (undefined8 ****)local_40;
                      if (cVar10 == '\0') {
                        ppppuVar24 = &local_40;
                        goto LAB_10068fe1f;
                      }
                      iVar11 = (**(code **)(*param_1 + 0x58))(param_1,ppppuVar28,*local_40);
                      if (iVar11 < 0) goto LAB_10068fde4;
                    }
                    (**(code **)(*param_1 + 0x28))();
                    pppuVar9 = local_110;
                    pppppuVar27 = (undefined8 *****)local_58;
                    if ((undefined8 *****)local_58 == (undefined8 *****)0x0) {
                      pppppuVar20 = &local_58;
                      local_170 = pppppuVar20;
                    }
                    else {
                      do {
                        while (pppppuVar20 = pppppuVar27, local_110 < pppppuVar20[4]) {
                          pppppuVar27 = (undefined8 *****)*pppppuVar20;
                          local_170 = pppppuVar20;
                          if ((undefined8 *****)*pppppuVar20 == (undefined8 *****)0x0)
                          goto LAB_10068f8bd;
                        }
                        pppppuVar27 = (undefined8 *****)pppppuVar20[1];
                      } while ((undefined8 *****)pppppuVar20[1] != (undefined8 *****)0x0);
                      local_170 = pppppuVar20 + 1;
                    }
LAB_10068f8bd:
                    pppppuVar19 = operator_new(0x30);
                    pppppuVar19[4] = (undefined8 ****)pppuVar9;
                    pppppuVar19[5] = ppppuVar28;
                    pppppuVar19[1] = (undefined8 ****)0x0;
                    *pppppuVar19 = (undefined8 ****)0x0;
                    pppppuVar19[2] = pppppuVar20;
                    *local_170 = pppppuVar19;
                    pppppuVar27 = pppppuVar19;
                    if ((undefined8 *****)*local_60 != (undefined8 *****)0x0) {
                      pppppuVar27 = (undefined8 *****)*local_170;
                      local_60 = (undefined8 ****)*local_60;
                    }
                    FUN_1000e8bb0(local_58,pppppuVar27);
                    local_50 = local_50 + 1;
                    pppppuVar27 = (undefined8 *****)pppppuVar19[1];
                    if ((undefined8 *****)pppppuVar19[1] == (undefined8 *****)0x0) {
                      do {
                        pppppuVar20 = (undefined8 *****)pppppuVar19[2];
                        bVar29 = (undefined8 *****)*pppppuVar20 != pppppuVar19;
                        pppppuVar19 = pppppuVar20;
                      } while (bVar29);
                    }
                    else {
                      do {
                        pppppuVar20 = pppppuVar27;
                        pppppuVar27 = (undefined8 *****)*pppppuVar20;
                      } while ((undefined8 *****)*pppppuVar20 != (undefined8 *****)0x0);
                    }
                    if (pppppuVar20 != &local_58) {
                      ppppuVar23 = (undefined8 ****)((long)local_110 + (ulong)*(uint *)(plVar2 + 2))
                      ;
                      ppppuVar4 = pppppuVar20[4];
                      ppppuVar28 = ppppuVar24;
                      if (ppppuVar24 <= ppppuVar4) {
                        ppppuVar28 = (undefined8 ****)
                                     ((long)ppppuVar4 -
                                     (ulong)((long)ppppuVar4 - (long)ppppuVar24) %
                                     (ulong)*(uint *)(plVar2 + 2));
                      }
                      if (ppppuVar23 < ppppuVar28) {
                        local_118 = ppppuVar23;
                        FUN_100693c60(&local_a8,&local_118);
                      }
                    }
                    plVar3 = (long *)plVar18[1];
                    if ((long *)plVar18[1] == (long *)0x0) {
                      do {
                        plVar21 = (long *)plVar18[2];
                        bVar29 = (long *)*plVar21 != plVar18;
                        plVar18 = plVar21;
                      } while (bVar29);
                    }
                    else {
                      do {
                        plVar21 = plVar3;
                        plVar3 = (long *)*plVar21;
                      } while ((long *)*plVar21 != (long *)0x0);
                    }
                    plVar18 = plVar21;
                  } while (plVar21 != &local_b8);
                }
              }
              local_14c = param_2;
              if ((local_50 != 0) && (local_98 != 0)) {
                local_130 = &local_128;
                local_120 = 0;
                local_128 = 0;
                FUN_1008e3970("Reclaim","dimg",0,"# Do compact");
                FUN_1008e3970("Reclaim","dimg",0,"#\tStage 1. Copy blocks");
                iVar11 = FUN_1006905d0(param_1,FUN_100690c50,&local_60,&local_130,&local_a8,param_9)
                ;
                if (iVar11 < 0) {
                  FUN_1008e3970("Reclaim","dimg",0,
                                "#\tTruncation disabled due to CopyBlocks() error 0x%x",iVar11);
                  local_14c = param_2 | 8;
                }
                FUN_1008e3970("Reclaim","dimg",0,"#\tStage 2. Remap %zu copied blocks",local_120);
                iVar11 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_130);
                if (iVar11 < 0) {
                  FUN_1008e3970("Reclaim","dimg",0,"Remapping used blocks failed with code 0x%x",
                                iVar11);
                  FUN_100693af0(&local_130,local_128);
                  goto LAB_10068fee5;
                }
                (**(code **)(*param_1 + 0x28))();
                FUN_100693af0(&local_130,local_128);
              }
              if (((local_14c & 8) == 0) && (local_e0 != 0)) {
                lVar5 = *(long *)(*param_1 + -0x18);
                uVar17 = local_e0 * *(long *)((long)param_1 + lVar5 + 0x38);
                uVar15 = (**(code **)(*(long *)((long)param_1 + lVar5) + 0x160))
                                   ((long)param_1 + lVar5);
                if (uVar15 < uVar17) {
                  iVar11 = -0x7ffddffe;
                  FUN_1008e3970("Reclaim","dimg",0,
                                "Error: truncate params are wrong: off %llu, current file size %llu"
                                ,uVar17,uVar15);
                }
                else if (uVar15 < uVar17 || uVar15 - uVar17 == 0) {
                  FUN_1008e3970("Reclaim","dimg",0,"Nothing to truncate!");
                }
                else {
                  uVar22 = FUN_100697940(plVar2);
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar22;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar15 - uVar17;
                  *param_7 = SUB164(auVar8 / auVar7,0);
                  FUN_1008e3970("Reclaim","dimg",0,
                                "# Truncate last %u blocks, file size from %llu to %llu",
                                SUB168(auVar8 / auVar7,0) & 0xffffffff,uVar15,uVar17);
                  plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                  cVar10 = (**(code **)(*plVar2 + 0x70))(plVar2,uVar17);
                  if (cVar10 == '\0') {
                    uVar14 = FUN_100768f60();
                    iVar11 = -0x7ffddffe;
                    FUN_1008e3970("Reclaim","dimg",0,"Error truncating file. [%u]",uVar14);
                  }
                  else {
                    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x188))
                              ((long)param_1 + *(long *)(*param_1 + -0x18),uVar17);
                  }
                }
              }
            }
            else {
              local_f8 = &local_f0;
              local_e8 = 0;
              local_f0 = 0;
              FUN_1008e3970("Reclaim","dimg",0,"#\tResolving dup blocks: %lu");
              FUN_1008e3970("Reclaim","dimg",0,"#\tStage 1. Copy blocks");
              iVar11 = FUN_1006905d0(param_1,FUN_100690c40,&local_78,&local_f8,&local_a8,param_9);
              if (iVar11 < 0) {
                FUN_1008e3970("Reclaim","dimg",0,"Used blocks copying failed with code 0x%x",iVar11)
                ;
              }
              else {
                FUN_1008e3970("Reclaim","dimg",0,"#\tStage 2. Remap %zu copied blocks",local_e8);
                iVar11 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_f8);
                if (-1 < iVar11) {
                  (**(code **)(*param_1 + 0x28))();
                  uVar17 = local_e8;
                  if ((local_e8 & 0xffffffff) < local_68) {
                    local_160 = 0;
                    plVar18 = local_78;
                    do {
                      if (plVar18 == &local_70) break;
                      if (local_160 != plVar18[4]) {
                        plVar3 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                        cVar10 = (**(code **)(*plVar3 + 0x40))
                                           (plVar3,pvVar16,uVar15,0,
                                            plVar18[4] *
                                            *(long *)(*(long *)(*param_1 + -0x18) + 0x38 +
                                                     (long)param_1));
                        local_160 = plVar18[4];
                        if (cVar10 == '\0') {
                          iVar11 = -0x7ffffae8;
                          FUN_1008e3970("Reclaim","dimg",0,"Read of block [off:%llu] failed!",
                                        local_160);
                          goto LAB_10068fecf;
                        }
                      }
                      local_100 = 0;
                      iVar11 = (**(code **)(*param_1 + 0xf8))
                                         (param_1,(ulong)*(uint *)(plVar2 + 2) * plVar18[5],
                                          &local_100,pvVar16,uVar15);
                      if (iVar11 < 0) {
                        FUN_1008e3970("Reclaim","dimg",0,
                                      "Creation of new block [BAT idx:%llu] failed!",plVar18[5]);
                        goto LAB_10068fecf;
                      }
                      uVar22 = (ulong)(uint)((int)uVar17 * 1000) / (local_68 & 0xffffffff);
                      puVar26 = param_9;
                      while( true ) {
                        pcVar6 = (code *)*puVar26;
                        if ((pcVar6 == (code *)0x0) && (puVar26[4] == 0)) goto LAB_10068f57e;
                        iVar12 = (int)uVar22;
                        if ((-1 < iVar12) && (1 < *(uint *)(puVar26 + 2))) {
                          iVar1 = *(int *)((long)puVar26 + 0x14);
                          if (iVar12 < *(int *)((long)puVar26 + 0x14)) {
                            *(int *)((long)puVar26 + 0x14) = iVar12;
                            goto LAB_10068f57e;
                          }
                          *(int *)((long)puVar26 + 0x14) = iVar12;
                          uVar25 = (uint)(iVar12 - iVar1) / *(uint *)(puVar26 + 2) +
                                   *(int *)(puVar26 + 3);
                          uVar22 = (ulong)uVar25;
                          *(uint *)(puVar26 + 3) = uVar25;
                        }
                        if (pcVar6 != (code *)0x0) break;
                        puVar26 = (undefined8 *)puVar26[4];
                      }
                      cVar10 = (*pcVar6)(uVar22,puVar26[1]);
                      if (cVar10 == '\0') {
                        iVar11 = -0x7ffdefc8;
                        FUN_1008e3970("Reclaim","dimg",0,
                                      "Fix abnormal blocks interrupted at copy process by user");
                        goto LAB_10068fecf;
                      }
LAB_10068f57e:
                      uVar17 = (ulong)((int)uVar17 + 1);
                      plVar3 = (long *)plVar18[1];
                      plVar21 = plVar18;
                      if ((long *)plVar18[1] == (long *)0x0) {
                        do {
                          plVar18 = (long *)plVar21[2];
                          bVar29 = (long *)*plVar18 != plVar21;
                          plVar21 = plVar18;
                        } while (bVar29);
                      }
                      else {
                        do {
                          plVar18 = plVar3;
                          plVar3 = (long *)*plVar18;
                        } while ((long *)*plVar18 != (long *)0x0);
                      }
                    } while (uVar17 < local_68);
                  }
                  FUN_1008e3970("Reclaim","dimg",0,"# Dup blocks fixed: %u",uVar17 & 0xffffffff);
                  FUN_100693af0(&local_f8,local_f0);
                  goto LAB_10068f5f3;
                }
                FUN_1008e3970("Reclaim","dimg",0,"Remapping used blocks failed with code 0x%x",
                              iVar11);
              }
LAB_10068fecf:
              FUN_100693af0(&local_f8,local_f0);
            }
          }
        }
        else {
          uVar13 = *param_5;
          uVar17 = (ulong)*param_6;
          uVar22 = (ulong)*param_8;
          if (uVar17 + uVar13 + uVar22 == 0) goto LAB_10068f076;
LAB_10068f0ab:
          iVar11 = -0x7ffde000;
          FUN_1008e3970("Reclaim","dimg",0,
                        "Error: BAT is corrupted (corrupted blocks %u, out of disk blocks %u, duplicated blocks %u). Please, check BAT consistency with FIX param"
                        ,uVar17,uVar22,CONCAT44(uVar14,uVar13));
        }
      }
    }
LAB_10068fee5:
    (**(code **)(*param_1 + 0x108))();
    _free(pvVar16);
    if (-1 < iVar11) goto LAB_10068ff6d;
  }
  (**(code **)(*param_1 + 0xf0))();
  iVar12 = iVar11;
  while( true ) {
    pcVar6 = (code *)*param_9;
    if ((pcVar6 == (code *)0x0) && (param_9[4] == 0)) goto LAB_10068ff6d;
    if ((-1 < iVar12) && (1 < *(uint *)(param_9 + 2))) {
      iVar1 = *(int *)((long)param_9 + 0x14);
      if (iVar12 < *(int *)((long)param_9 + 0x14)) {
        *(int *)((long)param_9 + 0x14) = iVar12;
        goto LAB_10068ff6d;
      }
      *(int *)((long)param_9 + 0x14) = iVar12;
      iVar12 = (uint)(iVar12 - iVar1) / *(uint *)(param_9 + 2) + *(int *)(param_9 + 3);
      *(int *)(param_9 + 3) = iVar12;
    }
    if (pcVar6 != (code *)0x0) break;
    param_9 = (undefined8 *)param_9[4];
  }
  (*pcVar6)(iVar12,param_9[1]);
LAB_10068ff6d:
  FUN_100693af0(&local_d8,local_d0);
  FUN_100693af0(&local_c0,local_b8);
  FUN_100693b30(&local_a8,local_a0);
  FUN_100693af0(&local_90,local_88);
  FUN_100693af0(&local_78,local_70);
  FUN_100693af0(&local_60,local_58);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar11;
}

