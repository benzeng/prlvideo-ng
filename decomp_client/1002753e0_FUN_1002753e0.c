
void FUN_1002753e0(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  Data *local_30;
  undefined1 local_23;
  
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_30,(CTaskGenericId *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_23 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_23) goto LAB_100275432;
    }
    QListData::dispose(local_30);
  }
LAB_100275432:
  *(undefined ***)param_1 = &PTR_FUN_102205bb0;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

