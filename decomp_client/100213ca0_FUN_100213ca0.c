
void FUN_100213ca0(CAbstractTask *param_1,QObject *param_2,undefined4 param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_48,param_2);
  FUN_1002144a0(pCVar1,&local_48,param_3);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100213d32;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100213d32:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100213d58;
    }
    QListData::dispose(local_40);
  }
LAB_100213d58:
  *(undefined ***)param_1 = &PTR_FUN_102200ff0;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

