
undefined8 FUN_100195800(undefined8 param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  QString local_a0;
  CRequestInfo local_98 [8];
  QArrayData *local_90;
  int *local_80;
  QVariant local_70;
  long local_60;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  FUN_100188480(&local_40,param_1);
  lVar7 = FUN_1001547d0(uVar6,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195875;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100195875:
  if (lVar7 == 0) {
    pcVar8 = "(!)Error: can\'t get server instance.";
LAB_100195b48:
    FUN_100df99c0("","prl_client_app",0,pcVar8);
    return 0;
  }
  iVar1 = CVmDevice::getEmulatedType();
  if (iVar1 != 1) {
    return 0;
  }
  uVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  uVar3 = CVmDevice::getIndex();
  lVar7 = FUN_10018f120(param_1,uVar2,uVar3);
  if (lVar7 == 0) {
    pcVar8 = "(!)Error: can\'t get handle to resize hard disk.";
    goto LAB_100195b48;
  }
  uVar6 = FUN_100dd9170(0x850);
  EnumUtils::enumToString(&local_50,6);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0," sending [%s] request... The related device is %s",uVar6);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195973;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100195973:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001959a3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001959a3:
  FUN_100146b90(&local_58,lVar7);
  lVar7 = local_58;
  uVar2 = CVmHardDisk::getSize();
  lVar7 = _PrlVmDev_ResizeImage(lVar7,uVar2,param_3);
  if (local_58 != 0) {
    _PrlHandle_Free();
  }
  uVar6 = CSdkCommunicator::requestStorage();
  local_60 = lVar7;
  if (lVar7 != 0) {
    _PrlHandle_AddRef(lVar7);
  }
  uVar4 = (**(code **)(*param_2 + 0x68))(param_2);
  uVar5 = CVmDevice::getIndex();
  FUN_100188480(&local_a0,param_1);
  CRequestInfo::CRequestInfo(local_98,0x850,uVar4,uVar5,&local_a0,(QObject *)0x0);
  uVar6 = CRequestStorage::addRequest(uVar6,&local_60,local_98);
  QVariant::~QVariant(&local_70);
  if (local_80 != (int *)0x0) {
    LOCK();
    *local_80 = *local_80 + -1;
    local_31 = *local_80 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_80 != (int *)0x0)) {
      operator_delete(local_80);
    }
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195ac2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100195ac2:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195af8;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100195af8:
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  if (lVar7 == 0) {
    return uVar6;
  }
  _PrlHandle_Free(lVar7);
  return uVar6;
}

