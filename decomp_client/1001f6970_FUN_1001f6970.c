
void FUN_1001f6970(CAbstractTask *param_1,QObject *param_2,QObject *param_3,QObject *param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_48,param_2);
  CVmDevice::getSystemName();
  CVmDevice::getUserFriendlyName();
  FUN_1001f7d40(pCVar1,&local_48,&local_50,&local_58);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f6a3b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001f6a3b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f6a72;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001f6a72:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f6aa2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001f6aa2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f6ac8;
    }
    QListData::dispose(local_40);
  }
LAB_1001f6ac8:
  *(undefined ***)param_1 = &PTR_FUN_102200150;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar2 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(QObject **)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_1001f6d50(param_1);
  return;
}

