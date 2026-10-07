
ulong FUN_10058d0f0(long *param_1,undefined8 param_2)

{
  long ****pppplVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  long ***ppplVar12;
  long *plVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar28;
  long *****ppppplVar29;
  undefined8 *puVar30;
  long *plVar31;
  uint uVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  undefined8 *in_stack_ffffffffffffec38;
  undefined4 uVar41;
  long local_1330;
  int local_1324;
  void *local_1308;
  ulong local_12e0;
  long *local_12d8;
  long lStack_12d0;
  long local_12c8;
  long local_12c0;
  long local_12b8;
  char *local_12b0;
  long *local_12a8;
  long ***local_12a0;
  undefined1 local_1298 [4352];
  ulong local_198;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [24];
  undefined4 local_f8;
  code *local_f0;
  long local_e8;
  undefined1 local_e0 [24];
  undefined4 local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long ****local_b0;
  long ****local_a8;
  ulong local_a0;
  uint local_94;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  ulong uVar27;
  
  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_90 = (long *)0x0;
  local_68 = param_2;
  local_38 = lVar38;
  plVar22 = (long *)(**(code **)(*(long *)param_1[0xe] + 0x240))();
  uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
  local_94 = 0;
  local_a0 = 0;
  local_c0 = FUN_10058d020;
  local_b8 = (undefined1 *)0x0;
  local_c8 = 0;
  local_f0 = FUN_10058e410;
  local_e8 = param_1[0xe];
  local_f8 = 0;
  local_12e0 = (ulong)*(uint *)(param_1 + 0x13);
  local_b0 = (long ****)&local_b0;
  local_a8 = (long ****)&local_b0;
  if ((int)*(uint *)(param_1 + 0x13) < 0) goto LAB_10058e1d1;
  if (plVar22 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error: async dev is null! Wrong ctx!");
    local_12e0 = 0x80000001;
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",
                  CONCAT44(uVar41,0x57d),"DeleteStateAsync");
    goto LAB_10058e1d1;
  }
  if (param_1[0x1e] == 0) {
    FUN_1008e3970("","vdisk",0,"Error: snapshots list is empty!");
    local_12e0 = 0x80000001;
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",
                  CONCAT44(uVar41,0x582),"DeleteStateAsync");
    goto LAB_10058e1d1;
  }
  uVar4 = *(uint *)(param_1 + 3);
  lVar23 = (**(code **)(*param_1 + 0x30))(param_1);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = lVar23 * (ulong)uVar4;
  iVar3 = (int)param_1[0x1e];
  uVar15 = (uint)((ulong)(iVar3 + 0xb) / (param_1[0x1e] & 0xffffffffU));
  uVar4 = *(uint *)(param_1 + 3);
  lVar23 = (**(code **)(*param_1 + 0x30))(param_1);
  (**(code **)(*(long *)param_1[0xe] + 800))();
  FUN_10058bb40(param_1);
  if ((param_1[0x18] == 0) ||
     (plVar24 = (long *)___dynamic_cast(param_1[0x18],&PTR_vtable_10111dd60,&PTR_vtable_100bcc3b0),
     plVar24 == (long *)0x0)) {
    bVar11 = false;
    local_94 = (uint)((((param_1[2] + -1) - param_1[1]) + (ulong)*(uint *)(param_1 + 3)) /
                     (ulong)*(uint *)(param_1 + 3));
    plVar24 = (long *)0x0;
    local_1330 = 0;
    local_12e0 = 0;
LAB_10058d49e:
    uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
    if (local_94 == 0) {
      local_1308 = (void *)0x0;
    }
    else {
      lVar26 = param_1[3];
      lVar25 = (**(code **)(*param_1 + 0x30))(param_1);
      local_1308 = _valloc(lVar25 * (ulong)((int)lVar26 * uVar15));
      uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
      if (local_1308 == (void *)0x0) {
        local_12e0 = 0x80000002;
        local_1308 = (void *)0x0;
        FUN_1008e3970("","vdisk",0,"Error: rd blocks arr memory allocation problem");
      }
      else if (local_94 != 0) {
        uVar17 = uVar15 - 1;
        local_1324 = 1;
        uVar21 = 0;
        uVar16 = local_94;
        do {
          uVar39 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x8000000)) / auVar10,0);
          uVar18 = uVar16 - uVar39;
          if (uVar16 < uVar39 || uVar16 - uVar39 == 0) {
            uVar18 = 0;
          }
          if (uVar18 <= uVar16 && uVar16 - uVar18 != 0) {
            uVar37 = (ulong)(uVar16 - 1);
            uVar32 = uVar39;
            if (uVar39 < uVar16) {
              uVar32 = uVar16;
            }
            uVar35 = (ulong)(uVar32 - uVar39);
            uVar32 = 0;
            do {
              lVar38 = param_1[3];
              lVar26 = (**(code **)(*param_1 + 0x30))(param_1);
              if (local_90 == (long *)0x0) {
                lVar25 = *(uint *)(param_1 + 3) * uVar35;
                lVar40 = lVar25;
              }
              else {
                lVar25 = *(uint *)(param_1 + 3) * uVar35;
                lVar40 = lVar25;
                if (local_90[2] != 0) {
                  lVar40 = lVar25 + local_1330;
                  lVar25 = *(long *)(local_90[2] + uVar35 * 8);
                }
              }
              lVar6 = param_1[1];
              uVar27 = (ulong)(uVar21 * 1000) / (ulong)local_94;
              iVar36 = (int)uVar27;
              puVar30 = &local_88;
              if (local_1324 < iVar36) {
                while( true ) {
                  pcVar7 = (code *)*puVar30;
                  local_1324 = iVar36;
                  if ((pcVar7 == (code *)0x0) && (puVar30[4] == 0)) goto LAB_10058d6e6;
                  iVar19 = (int)uVar27;
                  if ((-1 < iVar19) && (1 < *(uint *)(puVar30 + 2))) {
                    iVar5 = *(int *)((long)puVar30 + 0x14);
                    if (iVar19 < *(int *)((long)puVar30 + 0x14)) {
                      *(int *)((long)puVar30 + 0x14) = iVar19;
                      goto LAB_10058d6e6;
                    }
                    *(int *)((long)puVar30 + 0x14) = iVar19;
                    uVar20 = (uint)(iVar19 - iVar5) / *(uint *)(puVar30 + 2) + *(int *)(puVar30 + 3)
                    ;
                    uVar27 = (ulong)uVar20;
                    *(uint *)(puVar30 + 3) = uVar20;
                  }
                  if (pcVar7 != (code *)0x0) break;
                  puVar30 = (undefined8 *)puVar30[4];
                }
                cVar14 = (*pcVar7)(uVar27,puVar30[1]);
                uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
                if (cVar14 == '\0') {
                  local_12e0 = 0x80021038;
                  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
                  goto LAB_10058e12c;
                }
              }
LAB_10058d6e6:
              if (lVar25 == -1) {
                lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
                if ((uVar32 == uVar17) || (uVar35 == uVar37)) {
                  local_12e0 = FUN_10058c410(plVar22,local_110,&local_b0);
                  uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
                  if ((int)local_12e0 < 0) goto LAB_10058e12c;
                }
              }
              else {
                lVar26 = lVar26 * (ulong)((int)lVar38 * uVar32);
                pcVar2 = (char *)((long)local_1308 + lVar26);
                FUN_100593a40(local_1298,lVar6 + lVar25,lVar40,param_1,param_1[0x18]);
                local_b8 = local_1298;
                cVar14 = (**(code **)(*plVar22 + 0x18))(plVar22,local_e0);
                if ((cVar14 == '\0') ||
                   (cVar14 = (**(code **)(*plVar22 + 0x18))(plVar22,local_110), cVar14 == '\0')) {
                  FUN_1008e3970("","vdisk",0,"Error: device sync request was not acked");
                  local_12e0 = 0x80021025;
LAB_10058d818:
                  iVar36 = 0x17;
                }
                else {
                  FUN_10058c520(local_1298,0xffffffffffffffff);
                  if ((int)local_198 != 0) {
                    FUN_1008e3970("","vdisk",0,
                                  "Error: RD request failed during merge with dio_err=%u, sys_err=%u"
                                  ,local_198,local_198 >> 0x20);
                    local_12e0 = 0x80021029;
                    goto LAB_10058d818;
                  }
                  if ((bVar11) || (*pcVar2 != '\0')) {
LAB_10058d96f:
                    for (plVar34 = (long *)param_1[0x1d]; plVar34 != param_1 + 0x1c;
                        plVar34 = (long *)plVar34[1]) {
                      local_12a0 = (long ***)0x0;
                      lStack_12d0 = plVar34[2];
                      local_12c8 = plVar34[3];
                      local_12d8 = param_1;
                      local_12c0 = lVar6 + lVar25;
                      local_12b8 = lVar25;
                      local_12b0 = pcVar2;
                      local_12a8 = plVar24;
                      uVar28 = (**(code **)(*(long *)param_1[0xe] + 0x350))();
                      cVar14 = FUN_1005abdf0(uVar28,local_12c0);
                      if (cVar14 == '\0') {
                        local_50 = 0xffffffffffffffff;
                        local_58 = 0xffffffffffffffff;
                        local_40 = 0;
                        local_48 = 0;
                        uVar20 = (**(code **)(*(long *)param_1[0xe] + 0x358))
                                           ((long *)param_1[0xe],0xffffffff,local_12c0,&local_58);
                        local_12e0 = (ulong)uVar20;
                        if (-1 < (int)uVar20) goto LAB_10058db31;
                        iVar36 = 0x17;
                        FUN_1008e3970("","vdisk",0,"Error: GetGroupElementSync(%llu) failed - 0x%X",
                                      local_12c0,local_12e0);
                      }
                      else {
LAB_10058db31:
                        uVar20 = FUN_100575200(param_1[0xe],FUN_10058c5f0,&local_12d8);
                        local_12e0 = (ulong)uVar20;
                        if ((int)uVar20 < 0) {
                          iVar36 = 0x17;
                          FUN_1008e3970("","vdisk",0,"Error: MakeMergeRequest() failed - 0x%X",
                                        local_12e0);
                        }
                        else {
                          QMutex::lock();
                          ppplVar12 = local_12a0;
                          if ((((long ****)local_12a0 != (long ****)0x0) &&
                              ((long ***)local_12a0[2] != (long ***)0x0)) &&
                             (*(int *)(local_12a0[2] + 0x21b) != 8)) {
                            ppppplVar29 = operator_new(0x18);
                            ppppplVar29[2] = (long ****)ppplVar12;
                            LOCK();
                            pppplVar8 = (long ****)(ppplVar12 + 1);
                            *(int *)pppplVar8 = *(int *)pppplVar8 + 1;
                            UNLOCK();
                            ppppplVar29[1] = (long ****)&local_b0;
                            *ppppplVar29 = local_b0;
                            local_b0[1] = (long ***)ppppplVar29;
                            local_a0 = local_a0 + 1;
                            local_b0 = (long ****)ppppplVar29;
                          }
                          QMutex::unlock();
                          if (local_a0 < 0xc) {
                            if (((long *)plVar34[1] == param_1 + 0x1c) &&
                               (uVar35 == uVar37 || uVar32 == uVar17)) goto LAB_10058dc01;
                          }
                          else {
LAB_10058dc01:
                            uVar20 = FUN_10058c410(plVar22,local_110,&local_b0);
                            local_12e0 = (ulong)uVar20;
                            iVar36 = 0x17;
                            if ((int)uVar20 < 0) goto LAB_10058dc80;
                          }
                          iVar36 = 0;
                        }
                      }
LAB_10058dc80:
                      if ((long ****)local_12a0 != (long ****)0x0) {
                        LOCK();
                        pppplVar8 = (long ****)(local_12a0 + 1);
                        iVar19 = *(int *)pppplVar8;
                        *(int *)pppplVar8 = *(int *)pppplVar8 + -1;
                        UNLOCK();
                        if (iVar19 == 1) {
                          (*(code *)(*local_12a0)[2])();
                        }
                      }
                      if (iVar36 != 0) goto LAB_10058d824;
                    }
                    puVar30 = (undefined8 *)FUN_10057c2b0(param_1[0xe]);
                    iVar36 = 0;
                    if (puVar30 != (undefined8 *)0x0) {
                      (**(code **)*puVar30)
                                (puVar30,(ulong)uVar4 * (ulong)(iVar3 + 1) * lVar23 >> 10,
                                 param_1[0xe]);
                    }
                  }
                  else {
                    uVar20 = *(uint *)(param_1 + 3);
                    lVar38 = (**(code **)(*param_1 + 0x30))(param_1);
                    iVar36 = _memcmp(pcVar2,(void *)(lVar26 + 1 + (long)local_1308),
                                     lVar38 * (ulong)uVar20 - 1);
                    if (iVar36 != 0) goto LAB_10058d96f;
                    if ((uVar32 == uVar17) || (uVar35 == uVar37)) {
                      local_12e0 = FUN_10058c410(plVar22,local_110,&local_b0);
                      iVar36 = 0x17;
                      if (-1 < (int)local_12e0) goto LAB_10058d9d7;
                    }
                    else {
LAB_10058d9d7:
                      iVar36 = 0x21;
                    }
                  }
                }
LAB_10058d824:
                FUN_100593c60(local_1298);
                uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
                if (iVar36 == 0) {
                  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
                }
                else {
                  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
                  if (iVar36 == 0x17) goto LAB_10058e12c;
                  if (iVar36 != 0x21) goto LAB_10058e1d1;
                }
              }
              uVar35 = uVar35 + 1;
              uVar21 = uVar21 + 1;
              uVar32 = (uVar32 + 1) % uVar15;
            } while ((uint)uVar35 < uVar16);
            if (uVar18 < uVar16) {
              uVar32 = uVar39;
              if (uVar39 < uVar16) {
                uVar32 = uVar16;
              }
              uVar37 = (ulong)(uVar32 - uVar39);
              do {
                if ((local_90 == (long *)0x0) || (local_90[2] == 0)) {
                  lVar38 = *(uint *)(param_1 + 3) * uVar37;
                }
                else {
                  lVar38 = *(long *)(local_90[2] + uVar37 * 8);
                }
                if (lVar38 != -1) {
                  if ((int)param_1[0x19] != -1) {
                    lVar26 = param_1[1];
                    QMutex::lock();
                    uVar35 = (ulong)(lVar26 + lVar38) / (ulong)*(uint *)(param_1 + 3);
                    plVar34 = (long *)0x0;
                    plVar13 = (long *)param_1[0x23];
                    plVar33 = param_1 + 0x23;
                    if ((long *)param_1[0x23] != (long *)0x0) {
                      do {
                        while (plVar31 = plVar13, (ulong)plVar31[4] < uVar35) {
                          plVar34 = plVar31 + 1;
                          plVar31 = plVar33;
                          plVar13 = (long *)*plVar34;
                          if ((long *)*plVar34 == (long *)0x0) goto LAB_10058ddd1;
                        }
                        plVar13 = (long *)*plVar31;
                        plVar33 = plVar31;
                      } while ((long *)*plVar31 != (long *)0x0);
LAB_10058ddd1:
                      plVar34 = (long *)0x0;
                      if (((plVar31 != param_1 + 0x23) &&
                          (plVar34 = (long *)0x0, (ulong)plVar31[4] <= uVar35)) &&
                         (plVar34 = (long *)plVar31[5], plVar34 != (long *)0x0)) {
                        LOCK();
                        *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
                        UNLOCK();
                      }
                    }
                    QMutex::unlock();
                    if (plVar34 != (long *)0x0) {
                      if (plVar34[2] != 0) {
                        FUN_10058c520(plVar34[2],0xffffffffffffffff);
                      }
                      LOCK();
                      plVar13 = plVar34 + 1;
                      lVar26 = *plVar13;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)lVar26 == 1) {
                        (**(code **)(*plVar34 + 0x10))(plVar34);
                      }
                    }
                  }
                  if ((bVar11) && ((char)param_1[0x16] == '\0')) {
                    local_12e0 = (**(code **)(*plVar24 + 0x20))(plVar24,lVar38,0);
                    uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
                    if ((int)local_12e0 < 0) {
                      FUN_1008e3970("","vdisk",0,"Error: BAT update sync failed during merge, 0x%x")
                      ;
                      lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
                      goto LAB_10058e12c;
                    }
                  }
                }
                uVar37 = uVar37 + 1;
              } while ((uint)uVar37 < uVar16);
              lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
            }
          }
          if (bVar11) {
            (**(code **)(*plVar24 + 0x80))(plVar24);
            (**(code **)(*plVar24 + 0x28))(plVar24);
            uVar16 = (**(code **)(*(long *)((long)plVar24 + *(long *)(*plVar24 + -0x18)) + 0xb8))
                               ((long)plVar24 + *(long *)(*plVar24 + -0x18),uVar16 - uVar18);
            uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
            local_12e0 = (ulong)uVar16;
            if ((int)uVar16 < 0) {
              FUN_1008e3970("","vdisk",0,"Error: truncation failed during merge, 0x%x");
              break;
            }
          }
          uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
          uVar16 = uVar18;
        } while (uVar21 < local_94);
      }
    }
  }
  else {
    local_1330 = FUN_1006978d0(plVar24[4]);
    iVar36 = 0;
    while( true ) {
      uVar16 = (**(code **)(*plVar24 + 0x78))(plVar24,&local_90,&local_94);
      uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
      local_12e0 = (ulong)uVar16;
      if ((iVar36 == -1) || ((uVar16 != 0x80021056 && (uVar16 != 0x80022000)))) break;
      FUN_1008e3970("","vdisk",0,
                    "Warning: previous image op has found abnormal BAT entries! Will try to fix them (remain attempts %u)..."
                    ,iVar36);
      local_78 = CONCAT44(local_78._4_4_,2);
      local_114 = 0;
      local_118 = 0;
      local_11c = 0;
      local_120 = 0;
      in_stack_ffffffffffffec38 = &local_88;
      uVar16 = (**(code **)(*(long *)((long)plVar24 + *(long *)(*plVar24 + -0x18)) + 200))
                         ((long)plVar24 + *(long *)(*plVar24 + -0x18),10,&local_114,&local_118,
                          &local_11c,&local_120,in_stack_ffffffffffffec38);
      uVar41 = (undefined4)((ulong)in_stack_ffffffffffffec38 >> 0x20);
      local_12e0 = (ulong)uVar16;
      if ((int)uVar16 < 0) {
        local_1308 = (void *)0x0;
        FUN_1008e3970("","vdisk",0,"Error: check consistency failed, err 0x%x");
        lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_10058e12c;
      }
      (**(code **)(*(long *)param_1[0xe] + 0x318))();
      (**(code **)(*(long *)param_1[0xe] + 0x360))();
      (**(code **)(*(long *)param_1[0xe] + 800))();
      iVar36 = iVar36 + -1;
      (**(code **)(*(long *)param_1[0xe] + 0x148))
                ((long *)param_1[0xe],local_114,local_118,local_11c,local_120);
    }
    if (-1 < (int)uVar16) {
      bVar11 = true;
      lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_10058d49e;
    }
    local_1308 = (void *)0x0;
    FUN_1008e3970("","vdisk",0,"Error: can\'t get BAT offsets of image, err 0x%x");
    lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_10058e12c:
  (**(code **)(*(long *)param_1[0xe] + 0x318))();
  if ((-1 < (int)local_12e0) && (local_a0 != 0)) {
    FUN_1008e3970("","vdisk",0,"DeleteStateAsync Error: reqs list is not empty %zu");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",
                  CONCAT44(uVar41,0x6e2),"DeleteStateAsync");
  }
  if (local_1308 != (void *)0x0) {
    _free(local_1308);
  }
  *(int *)(param_1 + 0x13) = (int)local_12e0;
LAB_10058e1d1:
  if (local_a0 != 0) {
    pppplVar8 = (long ****)*local_a8;
    pppplVar8[1] = local_b0[1];
    *local_b0[1] = (long **)pppplVar8;
    local_a0 = 0;
    ppppplVar29 = (long *****)local_a8;
    while (ppppplVar29 != &local_b0) {
      ppppplVar9 = (long *****)ppppplVar29[1];
      pppplVar8 = ppppplVar29[2];
      if (pppplVar8 != (long ****)0x0) {
        LOCK();
        pppplVar1 = pppplVar8 + 1;
        iVar3 = *(int *)pppplVar1;
        *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)(*pppplVar8)[2])();
        }
      }
      operator_delete(ppppplVar29);
      ppppplVar29 = ppppplVar9;
    }
  }
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar22 = local_90 + 1;
    lVar23 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (lVar38 == local_38) {
    return local_12e0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

