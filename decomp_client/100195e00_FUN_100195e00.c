
undefined8 FUN_100195e00(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
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
  
  uVar1 = FUN_100152280();
  FUN_100188480(&local_40,param_1);
  lVar2 = FUN_1001547d0(uVar1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195e72;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100195e72:
  if (lVar2 == 0) {
    pcVar3 = "(!)Error: can\'t get server instance.";
LAB_1001960fc:
    FUN_100df99c0("","prl_client_app",0,pcVar3);
    return 0;
  }
  lVar2 = FUN_10018f120(param_1,6,param_2);
  if (lVar2 == 0) {
    pcVar3 = "(!)Error: can\'t get handle to resize hard disk.";
    goto LAB_1001960fc;
  }
  uVar1 = FUN_100dd9170(0x850);
  EnumUtils::enumToString(&local_50,6);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0," sending [%s] request... The related device is %s. flags %d",
                uVar1,local_48 + *(long *)(local_48 + 0x10),param_3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195f57;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100195f57:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195f87;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100195f87:
  FUN_100146b90(&local_58,lVar2);
  lVar2 = _PrlVmDev_ResizeImage(local_58,0,param_3);
  if (local_58 != 0) {
    _PrlHandle_Free();
  }
  uVar1 = CSdkCommunicator::requestStorage();
  local_60 = lVar2;
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  FUN_100188480(&local_a0,param_1);
  CRequestInfo::CRequestInfo(local_98,0x850,6,param_2,&local_a0,(QObject *)0x0);
  uVar1 = CRequestStorage::addRequest(uVar1,&local_60,local_98);
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
      if ((bool)local_31) goto LAB_10019607d;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10019607d:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001960b3;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1001960b3:
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  if (lVar2 == 0) {
    return uVar1;
  }
  _PrlHandle_Free(lVar2);
  return uVar1;
}

