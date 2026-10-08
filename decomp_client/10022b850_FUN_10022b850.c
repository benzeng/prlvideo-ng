
undefined8 FUN_10022b850(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  long local_48;
  Data_conflict local_40;
  undefined4 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    return 0x80000009;
  }
  if (*(int *)(*(long *)(param_1 + 0x90) + 4) == 0) {
    return 0x80000009;
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    return 0x80000009;
  }
  pvVar1 = operator_new(0x38);
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onErrorMessageClosed( PRL_RESULT, Messaging::ButtonID )",0x38);
  local_38 = 0x80000000;
  local_40.field7 = 0;
  FUN_100a1c600(pvVar1,param_1,&local_30,&local_40);
  QVariant::~QVariant((QVariant *)&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022b90a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10022b90a:
  uVar2 = CMessageManager::instance();
  local_48 = *(long *)(*(long *)(param_1 + 0x98) + 0x10);
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  CMessageManager::showMessageBoxForJob(uVar2,&local_48,&local_50,pvVar1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022b97c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10022b97c:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

