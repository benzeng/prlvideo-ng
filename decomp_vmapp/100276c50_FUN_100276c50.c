
undefined1 FUN_100276c50(long param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  QArrayData *local_f0;
  void *local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  QArrayData *local_c8;
  undefined1 local_c0 [24];
  QArrayData *local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined1 local_50 [31];
  undefined1 local_31;
  
  iVar3 = FUN_100278dd0();
  if (iVar3 < 0) {
    FUN_1008e3970("","LocalDevices",0,
                  "[VMNET(%d) setConfig] Failed to setup packet filter for device: 0x%08x\n",
                  *(undefined4 *)(param_1 + 0x150),iVar3);
    FUN_10006a060(local_50);
    FUN_10006a860(local_50,*(undefined4 *)(param_1 + 0x150),0);
    local_68 = (void *)0x0;
    pvStack_60 = (void *)0x0;
    local_58 = 0;
    FUN_1000648b0(DAT_1011c3650,0x80004023,&local_68,local_50);
    if (local_68 != (void *)0x0) {
      if (pvStack_60 != local_68) {
        pvStack_60 = (void *)((~((long)pvStack_60 + (-4 - (long)local_68)) & 0xfffffffffffffffcU) +
                             (long)pvStack_60);
      }
      operator_delete(local_68);
    }
    FUN_10006a680(local_50);
    return 0;
  }
  FUN_1002790d0(param_1,*(uint *)(*(long *)(param_1 + 0x160) + 0x10) & 8);
  FUN_1002792b0(param_1,param_2);
  iVar3 = FUN_100279540(param_1,param_2);
  if ((iVar3 < 0) &&
     (FUN_1008e3970("","LocalDevices",0,
                    "[VMNET(%d) setConfig] Failed to setup offline management for device: 0x%08x\n",
                    *(undefined4 *)(param_1 + 0x150),iVar3), uVar1 = DAT_1011c3650,
     DAT_1011b89d2 == '\0')) {
    local_88 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_78 = 0;
    FUN_10006a060(local_a0);
    FUN_1000648b0(uVar1,0x80004029,&local_88,local_a0);
    FUN_10006a680(local_a0);
    if (local_88 != (void *)0x0) {
      if (pvStack_80 != local_88) {
        pvStack_80 = (void *)((~((long)pvStack_80 + (-4 - (long)local_88)) & 0xfffffffffffffffcU) +
                             (long)pvStack_80);
      }
      operator_delete(local_88);
    }
    DAT_1011b89d2 = '\x01';
  }
  FUN_100278a20(&local_a8,param_1);
  iVar3 = FUN_100277320(param_1,param_2);
  if (iVar3 < 0) {
    uVar4 = 0;
    FUN_1008e3970("","LocalDevices",0,"Failed to setup bind-mode virtual netif #%d: %#08x",
                  *(undefined4 *)(param_1 + 0x150),iVar3);
    goto LAB_100277065;
  }
  *(undefined1 *)(param_1 + 0x169) = 1;
  cVar2 = FUN_1002f0cd0(param_1);
  if (cVar2 == '\0') {
    QMutex::lock();
    iVar3 = CVmDevice::getConnected();
    QMutex::unlock();
    if (((iVar3 == 1) && (*(int *)(DAT_1011c3698 + 0x1948) != 2)) && (param_3 == '\x01')) {
      FUN_10006a060(local_c0);
      FUN_10006a860(local_c0,*(undefined4 *)(param_1 + 0x150),0);
      if (*(int *)(local_a8 + 4) == 0) {
        CVmGenericNetworkAdapter::getBoundAdapterName();
        FUN_10006a120(local_c0,&local_c8,1);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100276f87;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
      else {
        FUN_10006a120(local_c0,&local_a8,1);
      }
LAB_100276f87:
      local_e8 = (void *)0x0;
      pvStack_e0 = (void *)0x0;
      local_d8 = 0;
      FUN_1000648b0(DAT_1011c3650,0x80004010,&local_e8,local_c0);
      if (local_e8 != (void *)0x0) {
        if (pvStack_e0 != local_e8) {
          pvStack_e0 = (void *)((~((long)pvStack_e0 + (-4 - (long)local_e8)) & 0xfffffffffffffffcU)
                               + (long)pvStack_e0);
        }
        operator_delete(local_e8);
      }
      FUN_10006a680(local_c0);
    }
  }
  QString::toUtf8();
  FUN_10027ea60(local_f0 + *(long *)(local_f0 + 0x10),param_1 + 0x1c8);
  uVar4 = 1;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100277065;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_100277065:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
  return uVar4;
}

