
undefined1 FUN_1002f04d0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  QArrayData *pQVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  int iVar13;
  QArrayData *local_80;
  undefined1 local_78 [8];
  void *local_70;
  void *local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long *local_48;
  undefined *local_40;
  char local_32;
  undefined1 local_31;
  
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",1,"VMNET(%d): OsX_ipcfg_changed",
                  *(undefined4 *)(param_1 + 0x150));
  }
  QMutex::lock();
  QMutex::lock();
  iVar8 = CVmDevice::getConnected();
  QMutex::unlock();
  if (iVar8 != 1) {
    uVar12 = 0;
    goto LAB_1002f0a3a;
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    uVar12 = 0;
    goto LAB_1002f0a3a;
  }
  if (*(char *)(param_1 + 0x1c3) != '\0') {
    uVar12 = 0;
    goto LAB_1002f0a3a;
  }
  iVar8 = FUN_100060640();
  if (iVar8 == 0) {
    uVar12 = 0;
    goto LAB_1002f0a3a;
  }
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar11 = 0;
  if (plVar3 != (long *)0x0) {
    uVar11 = 0;
    if (plVar3[2] != 0) {
      uVar11 = ___dynamic_cast(plVar3[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  uVar9 = CVmDevice::getEmulatedType();
  if (uVar9 < 2) {
    uVar12 = 0;
  }
  else {
    iVar8 = FUN_1007da300("devices.net.track_location",1);
    if (*(char *)(param_1 + 0x1c2) == '\0') {
LAB_1002f07ab:
      local_32 = '\0';
      iVar10 = (**(code **)(**(long **)(param_1 + 0x170) + 0x30))
                         (*(long **)(param_1 + 0x170),&local_32);
      if (iVar10 == 0) {
        if (local_32 == '\0') {
          if (iVar8 == 0) {
            uVar12 = 0;
          }
          else {
            local_60 = 0;
            local_68 = (void *)0x0;
            local_70 = (void *)0x0;
            QString::toUtf8();
            FUN_10027ea60(local_80 + *(long *)(local_80 + 0x10),local_78);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002f08db;
              }
              QArrayData::deallocate(local_80,1,8);
            }
LAB_1002f08db:
            puVar2 = (undefined1 *)(param_1 + 0x1c8);
            cVar7 = FUN_10027ec20(puVar2,local_78);
            bVar4 = true;
            if (cVar7 == '\0') {
              *puVar2 = local_78[0];
              bVar4 = false;
              if (puVar2 != local_78) {
                FUN_1002f29d0(param_1 + 0x1d0,local_70,local_68);
                bVar4 = false;
              }
            }
            if (local_70 != (void *)0x0) {
              if (local_68 != local_70) {
                local_68 = (void *)((~((long)local_68 + (-4 - (long)local_70)) & 0xfffffffffffffffcU
                                    ) + (long)local_68);
              }
              operator_delete(local_70);
            }
            if (!bVar4) goto LAB_1002f09e2;
            uVar12 = 0;
          }
        }
        else {
          uVar12 = 1;
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("","LocalDevices",1,
                          "prlnet_rebind_if_needed(): bound interface disappered; rebind have happened."
                         );
            goto LAB_1002f09e2;
          }
        }
      }
      else {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",1,"prlnet_rebind_if_needed() failed: error 0x%x",iVar10);
        }
        FUN_100276ba0(param_1,0);
        uVar12 = 0;
        FUN_10025b310(param_1 + 0x68,0);
      }
    }
    else {
      local_40 = PTR_shared_null_100ba2188;
      iVar13 = 1;
      iVar10 = FUN_1006b3450(&local_40,1,0);
      if (-1 < iVar10) {
        local_48 = (long *)0x0;
        iVar10 = FUN_1006b3b90(&local_40,&local_48);
        if (-1 < iVar10) {
          cVar7 = operator==((QString *)(param_1 + 0x1b0),(QString *)(*local_48 + 8));
          iVar13 = 0;
          if (cVar7 == '\0') {
            if (0 < DAT_1011b55f8) {
              QString::toUtf8();
              pQVar6 = local_50;
              lVar5 = *(long *)(local_50 + 0x10);
              QString::toUtf8();
              FUN_1008e3970("","LocalDevices",1,
                            "Default network adapter in system has changed: was %s, now %s",
                            pQVar6 + lVar5,local_58 + *(long *)(local_58 + 0x10));
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002f073e;
                }
                QArrayData::deallocate(local_58,1,8);
              }
LAB_1002f073e:
              if (*(int *)local_50 != -1) {
                if (*(int *)local_50 != 0) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + -1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002f076e;
                }
                QArrayData::deallocate(local_50,1,8);
              }
            }
LAB_1002f076e:
            cVar7 = FUN_100276c50(param_1,uVar11,0);
            iVar13 = 6;
            if (cVar7 == '\0') {
              FUN_100276ba0(param_1,0);
              FUN_10025b310(param_1 + 0x68,0);
              iVar13 = 1;
            }
          }
        }
      }
      FUN_10027a3f0(&local_40);
      if (iVar13 == 0) goto LAB_1002f07ab;
      if (iVar13 != 6) {
        uVar12 = 0;
        goto LAB_1002f0a19;
      }
LAB_1002f09e2:
      uVar12 = 1;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",1,"VMNET(%d) should be reconnected on OsX_ipcfg_changed",
                      *(undefined4 *)(param_1 + 0x150));
      }
    }
  }
LAB_1002f0a19:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1002f0a3a:
  QMutex::unlock();
  return uVar12;
}

