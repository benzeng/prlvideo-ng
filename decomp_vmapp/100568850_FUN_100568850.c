
int FUN_100568850(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  undefined1 *puVar15;
  QArrayData *local_f8;
  QArrayData *local_f0;
  long *local_e8;
  long *local_e0;
  int local_d8;
  undefined1 local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  long local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  QString local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  long local_38;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar14;
  FUN_1005b6bc0(local_a0);
  FUN_1007d6870();
  plVar11 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar11 = *(long **)(param_1[1] + 0x10);
  }
  local_d8 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,param_3,local_a0);
  iVar6 = local_d8;
  if (-1 < local_d8) {
    if (param_1[0x243] == 0) {
      lVar9 = FUN_10070bb60(0,local_80);
      param_1[0x243] = lVar9;
      if (lVar9 != 0) goto LAB_1005688f1;
LAB_100568d09:
      local_d8 = -0x7ffffffe;
    }
    else {
LAB_1005688f1:
      if (param_1[0x242] == 0) {
        puVar10 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (puVar10 == (undefined8 *)0x0) {
          param_1[0x242] = 0;
          goto LAB_100568d09;
        }
        *puVar10 = &PTR_FUN_100bc5f10;
        QMutex::QMutex((QMutex *)(puVar10 + 1),0);
        puVar10[2] = param_1;
        puVar10[3] = 0;
        param_1[0x242] = (long)puVar10;
        *(undefined1 *)(param_1 + 0x244) = 1;
      }
      if (param_1[0x252] == 0) {
        puVar10 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (puVar10 == (undefined8 *)0x0) {
          param_1[0x252] = 0;
          goto LAB_100568d09;
        }
        *puVar10 = &PTR_FUN_100bc71f8;
        param_1[0x252] = (long)puVar10;
      }
      *(undefined4 *)(param_1 + 0x228) = param_3;
      *(int *)((long)param_1 + 0x1144) = local_a0._0_4_;
      *(int *)(param_1 + 0x229) = local_a0._4_4_;
      *(undefined4 *)((long)param_1 + 0x114c) = local_98;
      param_1[0x22a] = local_90;
      *(int *)(param_1 + 0x22b) = (int)local_88;
      iVar6 = FUN_1007da300("devices.hdd.pss4k",0xffffffff);
      if (iVar6 == -1) {
        uVar8 = (undefined4)((ulong)local_88 >> 0x20);
      }
      else if (iVar6 == 0) {
        uVar8 = 0x200;
      }
      else {
        uVar8 = 0x1000;
      }
      *(undefined4 *)((long)param_1 + 0x115c) = uVar8;
      iVar6 = FUN_1007da300("devices.hdd.lss4k",0xffffffff);
      uVar12 = 0x1000;
      if (iVar6 == 0) {
        uVar12 = 0x200;
      }
      else if (iVar6 == -1) {
        uVar12 = local_80 & 0xffffffff;
      }
      param_1[0x22c] = uVar12;
      param_1[0x22e] = local_70;
      param_1[0x22d] = local_78;
      *(undefined8 *)((long)param_1 + 0x11e1) = local_60;
      *(undefined8 *)((long)param_1 + 0x11d9) = local_68;
      QString::operator=((QString *)(param_1 + 0x23e),&local_58);
      puVar3 = PTR_nothrow_100ba21c8;
      if (local_48 != local_50) {
        puVar15 = local_48;
        do {
          plVar11 = operator_new(0x580,(nothrow_t *)puVar3);
          if (plVar11 == (long *)0x0) {
            local_e0 = (long *)0x0;
            local_d8 = -0x7ffffffe;
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_100568d13;
          }
          local_e8 = *(long **)(puVar15 + 0x28);
          if (local_e8 != (long *)0x0) {
            LOCK();
            *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
            UNLOCK();
          }
          FUN_100584b50(plVar11,param_1,&local_e8);
          if (local_e8 != (long *)0x0) {
            LOCK();
            plVar1 = local_e8 + 1;
            lVar14 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)(*local_e8 + 0x10))();
            }
          }
          local_e0 = plVar11;
          FUN_100585020(plVar11,*(undefined8 *)(puVar15 + 0x10),*(undefined8 *)(puVar15 + 0x18),
                        *(undefined4 *)(puVar15 + 0x20),*(undefined4 *)(puVar15 + 0x24));
          iVar6 = FUN_100585050(plVar11);
          if (iVar6 != 0) {
            FUN_1008e3970("","vdisk",0,"XML parsing failed");
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
            local_d8 = -0x7ffdeff8;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
            goto LAB_100568d13;
          }
          if ((undefined8 *)param_1[0x226] == (undefined8 *)param_1[0x227]) {
            FUN_10057eb80(param_1 + 0x225);
          }
          else {
            *(undefined8 *)param_1[0x226] = plVar11;
            param_1[0x226] = param_1[0x226] + 8;
          }
          puVar15 = *(undefined1 **)(puVar15 + 8);
        } while (puVar15 != local_50);
      }
      *(undefined1 *)(param_1 + 0x231) = 1;
      local_d8 = (**(code **)(*param_1 + 0x380))(param_1);
      lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (-1 < local_d8) {
        uVar7 = (**(code **)(*param_1 + 0x388))(param_1);
        param_1[0x22a] = param_1[0x22a] + (ulong)uVar7;
        iVar6 = 0;
        if ((*(byte *)(param_1 + 0x228) & 0x28) != 0) goto LAB_100568d25;
        pcVar2 = *(code **)(*param_1 + 0x3a8);
        plVar11 = (long *)0x0;
        if (param_1[1] != 0) {
          plVar11 = *(long **)(param_1[1] + 0x10);
        }
        (**(code **)(*plVar11 + 0xd8))(local_c0);
        local_d8 = (*pcVar2)(param_1,local_c0);
        if (local_d8 < 0) {
          FUN_1008e3970("","vdisk",0,"Encryption engine initialization failed with code 0x%x",
                        local_d8);
        }
        else {
          cVar4 = FUN_1007ea210(param_4);
          if (cVar4 == '\0') {
            local_d8 = FUN_100569260(param_1,param_4);
            local_b0 = *param_4;
            local_a8 = param_4[1];
          }
          else {
            local_d8 = (**(code **)(*param_1 + 0x368))(param_1);
            (**(code **)(*param_1 + 0x2b0))(&local_d0,param_1);
            local_a8 = local_c8;
            local_b0 = local_d0;
          }
          if (-1 < local_d8) {
            plVar11 = param_1 + 2;
            local_d8 = FUN_1005aad70(plVar11);
            if (-1 < local_d8) {
              uVar8 = (**(code **)(*param_1 + 0x2f8))(param_1);
              cVar4 = FUN_1005b15b0(plVar11,&local_b0,uVar8);
              if (cVar4 != '\0') {
                FUN_1005b1e90(plVar11);
              }
              local_d8 = FUN_100569470(param_1);
              if ((local_d8 < 0) && (1 < DAT_1011b55f8)) {
                FUN_1008e3970("","vdisk",2,"Trim tracker or compaction context creation failed 0x%x"
                              ,local_d8);
              }
              lVar9 = FUN_1007da520("devices.hdd.cbt",0);
              *(bool *)(param_1 + 0x25d) = lVar9 != 0;
              if (lVar9 != 0) {
                lVar9 = FUN_100569540(param_1,&local_d8);
                if (lVar9 == 0) {
                  if (local_d8 != -0x7fffffec) {
                    FUN_1008e3970("","vdisk",0,"Error while loading dirty bitmap: 0x%x");
                  }
                }
                else {
                  if (param_1[600] != 0) {
                    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                  "NULL == m_DirtyTracker","DiskStatesImp.cpp",0x128b,
                                  "CreateDirtyTracker");
                  }
                  puVar10 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
                  if (puVar10 == (undefined8 *)0x0) {
                    param_1[600] = 0;
                    local_d8 = -0x7ffffffe;
                  }
                  else {
                    puVar10[1] = puVar10 + 1;
                    puVar10[2] = puVar10 + 1;
                    *puVar10 = &PTR_FUN_100bc72a0;
                    puVar10[3] = lVar9;
                    puVar10[5] = 0;
                    puVar10[4] = 0;
                    puVar10[6] = param_1;
                    param_1[600] = (long)puVar10;
                    local_d8 = (**(code **)(*param_1 + 0x1f0))(param_1,puVar10);
                    if (-1 < local_d8) goto LAB_100568fc7;
                  }
                  FUN_1008e3970("","vdisk",0,"Dirty tracker creation failed 0x%x",local_d8);
                }
              }
LAB_100568fc7:
              uVar5 = (**(code **)(*param_1 + 0x1a8))(param_1,&local_d8);
              *(undefined1 *)((long)param_1 + 0x11a4) = uVar5;
              iVar6 = local_d8;
              if (-1 < local_d8) goto LAB_100568d25;
              if (local_d8 == -0x7ffdd000) {
                uVar5 = (**(code **)(*param_1 + 0x390))(param_1);
                *(undefined1 *)((long)param_1 + 0x11a4) = uVar5;
                pcVar2 = *(code **)(*param_1 + 0x138);
                local_f0 = (QArrayData *)QString::fromAscii_helper("Bootable",8);
                if (*(char *)((long)param_1 + 0x11a4) == '\0') {
                  pcVar13 = "0";
                }
                else {
                  pcVar13 = "1";
                }
                local_f8 = (QArrayData *)QString::fromAscii_helper(pcVar13,1);
                (*pcVar2)(param_1,&local_f0,&local_f8);
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_d1 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_d1) goto LAB_1005690d2;
                  }
                  QArrayData::deallocate(local_f8,2,8);
                }
LAB_1005690d2:
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_d1 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_d1) goto LAB_10056910e;
                  }
                  QArrayData::deallocate(local_f0,2,8);
                }
LAB_10056910e:
                local_d8 = 0;
                iVar6 = 0;
                goto LAB_100568d25;
              }
              FUN_1008e3970("","vdisk",0,"Error reading user parameter Bootable [0x%x]",local_d8);
            }
          }
        }
      }
    }
LAB_100568d13:
    (**(code **)(*param_1 + 0x20))(param_1);
    iVar6 = local_d8;
  }
LAB_100568d25:
  FUN_10057e490(local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_d1 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_d1) goto LAB_100568d64;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100568d64:
  if (lVar14 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

