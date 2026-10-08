
void FUN_10078a980(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CRequestInfo local_b0 [8];
  QArrayData *local_a8;
  int *local_98;
  QVariant local_88;
  long local_78;
  long local_70;
  CRequestInfo local_68 [8];
  QArrayData *local_60;
  int *local_50;
  QVariant local_40;
  long local_30;
  long local_28;
  undefined1 local_19;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    local_30 = 0;
  }
  else {
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c250(&local_30,uVar1);
  }
  local_28 = _PrlVm_SubscribeToGuestStatistics(local_30);
  CRequestInfo::CRequestInfo(local_68,0x826,(QObject *)0x0);
  CSdkCommunicator::createRequest(uVar2,&local_28,local_68);
  QVariant::~QVariant(&local_40);
  if (local_50 != (int *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    local_19 = *local_50 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_50 != (int *)0x0)) {
      operator_delete(local_50);
    }
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10078aa6f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10078aa6f:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    local_78 = 0;
  }
  else {
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c250(&local_78,uVar1);
  }
  local_70 = _PrlVm_SubscribeToPerfStats(local_78,0);
  CRequestInfo::CRequestInfo(local_b0,0x83b,(QObject *)0x0);
  CSdkCommunicator::createRequest(uVar2,&local_70,local_b0);
  QVariant::~QVariant(&local_88);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_19 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10078ab7d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10078ab7d:
  if (local_70 != 0) {
    _PrlHandle_Free();
  }
  if (local_78 != 0) {
    _PrlHandle_Free();
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}

