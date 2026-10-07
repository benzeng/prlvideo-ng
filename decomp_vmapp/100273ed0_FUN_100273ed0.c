
void FUN_100273ed0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined1 local_120 [24];
  void *local_108;
  void *pvStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined1 local_b0 [24];
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar3 = CVmDevice::getIndex();
  FUN_1002578b0(param_1,4,uVar3,0);
  FUN_10025ae40(param_1 + 0xd,param_2);
  *param_1 = &PTR_FUN_100baf7e0;
  param_1[1] = &PTR_metaObject_100baf868;
  param_1[0xd] = &PTR_FUN_100baf8e0;
  QMutex::QMutex((QMutex *)(param_1 + 0x12),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x13));
  uVar3 = CVmDevice::getIndex();
  *(undefined4 *)(param_1 + 0x2a) = uVar3;
  QMutex::QMutex((QMutex *)(param_1 + 0x2b),0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((long)param_1 + 0x169) = 0;
  param_1[0x2e] = 0;
  param_1[0x36] = PTR_shared_null_100ba20d0;
  *(undefined2 *)((long)param_1 + 0x1c2) = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x204) = 100;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  pbVar7 = (byte *)FUN_1002f0000(4,*(undefined2 *)(param_1 + 0x2a),0xffff);
  param_1[0x2f] = pbVar7;
  if (pbVar7 == (byte *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to open main queue");
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_58);
    FUN_10002d9d0(&local_58);
    return;
  }
  *pbVar7 = *pbVar7 | 1;
  param_1[0x30] = pbVar7;
  uVar3 = CVmGenericNetworkAdapter::getAdapterType();
  iVar4 = FUN_1000946b0(uVar3);
  if (iVar4 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80004034,&local_78);
    FUN_10002d9d0(&local_78);
    return;
  }
  iVar6 = 1;
  cVar2 = FUN_1006d81f0(1);
  if ((cVar2 == '\0') && (iVar6 = 0, *(int *)(DAT_1011c3698 + 0x109e0) == 2)) {
    FUN_1008e3970("","LocalDevices",0,"use_event-net since not a sandbox while apple.hypervisor");
    iVar6 = 1;
  }
  iVar5 = FUN_1007da300("devices.net.mode",iVar6);
  if (iVar6 != iVar5) {
    FUN_1008e3970("","LocalDevices",0,"Network mode is forcibly overwritten to %d",iVar5);
    iVar6 = iVar5;
  }
  *(int *)(param_1 + 0x37) = iVar6;
  FUN_1006bc2d0(iVar6 == 3);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  lVar11 = DAT_1011c3698;
  FUN_1000a4cd0(DAT_1011c3698,0x96,*(undefined4 *)(param_1 + 0x2a),0);
  FUN_1000a4cd0(lVar11,0x226,*(undefined4 *)(param_1 + 0x2a),0);
  uVar8 = FUN_1000e99d0(*(undefined8 *)(lVar11 + 0x1158),0x226,*(undefined2 *)(param_1 + 0x2a));
  param_1[0x32] = uVar8;
  uVar8 = FUN_1000e99d0(*(undefined8 *)(lVar11 + 0x1158),0x96,*(undefined2 *)(param_1 + 0x2a));
  param_1[0x2c] = uVar8;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0xffffffffffffffff;
  ___bzero(uVar8,0x81000);
  QString::fromUtf8_helper((char *)&local_40,0xa12a8d);
  QString::operator=((QString *)(param_1 + 0x36),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002741e6;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002741e6:
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  if (*(int *)(param_1 + 0x37) == 1) {
    pcVar9 = FUN_1002749e0;
  }
  else {
    pcVar9 = FUN_1002749f0;
  }
  param_1[0x33] = pcVar9;
  cVar2 = FUN_100274a30(param_1);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1[0x2c] + 8) = 1;
    QMutex::lock();
    iVar6 = CVmDevice::getConnected();
    QMutex::unlock();
    uVar8 = DAT_1011c3650;
    if (iVar6 != 1) {
      return;
    }
    if (DAT_1011b89d0 == '\0') {
      local_98 = (void *)0x0;
      pvStack_90 = (void *)0x0;
      local_88 = 0;
      FUN_10006a060(local_b0);
      FUN_1000648b0(uVar8,0x80004008,&local_98,local_b0);
      FUN_10006a680(local_b0);
      if (local_98 != (void *)0x0) {
        if (pvStack_90 != local_98) {
          pvStack_90 = (void *)((~((long)pvStack_90 + (-4 - (long)local_98)) & 0xfffffffffffffffcU)
                               + (long)pvStack_90);
        }
        operator_delete(local_98);
      }
      DAT_1011b89d0 = '\x01';
    }
    QMutex::lock();
    iVar6 = CVmDevice::getConnected();
    QMutex::unlock();
    if (iVar6 == 1) {
      FUN_10025b310(param_1 + 0xd,0);
    }
    plVar10 = (long *)FUN_1006bce50(3);
    param_1[0x2e] = plVar10;
    bVar1 = true;
  }
  else {
    plVar10 = (long *)param_1[0x2e];
    bVar1 = false;
  }
  param_1[0x30] = param_1[0x2f];
  iVar6 = (**(code **)(*plVar10 + 0x50))();
  if (iVar6 != 0) {
    FUN_1008e3970("","LocalDevices",0,"net_adapter %d:Failed to set rx-monev: error %x",
                  *(undefined4 *)(param_1 + 0x2a),iVar6);
  }
  FUN_100274b80(param_1);
  CVmGenericNetworkAdapter::getMacAddress();
  cVar2 = FUN_1006b6c60(&local_b8,(long)param_1 + 0x1bc);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027449a;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10027449a:
  if (cVar2 != '\0') goto LAB_100274566;
  uVar3 = *(undefined4 *)(param_1 + 0x2a);
  CVmGenericNetworkAdapter::getMacAddress();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,
                "[VMNET(%d) setConfig]\tVM Adapter has wrong-formatted MAC-Address %s",uVar3,
                local_c0 + *(long *)(local_c0 + 0x10));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100274530;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_100274530:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100274566;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100274566:
  *(int *)(param_1 + 0x40) = iVar4;
  lVar11 = FUN_100273d90(iVar4,param_1,param_1[0x2c],param_1[0x32]);
  param_1[0x31] = lVar11;
  if (lVar11 == 0) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000188,&local_e8);
    FUN_10002d9d0(&local_e8);
  }
  else {
    *(undefined4 *)(param_1[0x2c] + 8) = 1;
    if (!bVar1) {
      *(undefined1 *)(param_1 + 0x2d) = 1;
      QMutex::lock();
      iVar4 = CVmDevice::getConnected();
      QMutex::unlock();
      iVar6 = FUN_100276270(param_1,0);
      uVar8 = DAT_1011c3650;
      if ((iVar4 == 1) && (iVar6 < 0)) {
        local_108 = (void *)0x0;
        pvStack_100 = (void *)0x0;
        local_f8 = 0;
        FUN_10006a060(local_120);
        FUN_1000648b0(uVar8,0x80004008,&local_108,local_120);
        FUN_10006a680(local_120);
        if (local_108 != (void *)0x0) {
          if (pvStack_100 != local_108) {
            pvStack_100 = (void *)((~((long)pvStack_100 + (-4 - (long)local_108)) &
                                   0xfffffffffffffffcU) + (long)pvStack_100);
          }
          operator_delete(local_108);
        }
      }
    }
  }
  return;
}

