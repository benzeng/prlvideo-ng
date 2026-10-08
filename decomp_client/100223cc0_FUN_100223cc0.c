
void FUN_100223cc0(CAbstractTask *param_1,undefined8 *param_2,undefined8 *param_3,
                  CTaskGenericId *param_4,QObject *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  Data *local_38;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_38,param_4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2e = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2e) goto LAB_100223d18;
    }
    QListData::dispose(local_38);
  }
LAB_100223d18:
  *(undefined ***)param_1 = &PTR_FUN_102201b90;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_2d = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_2c = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x28) = 0;
  uVar2 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(QObject **)(param_1 + 0x38) = param_5;
  return;
}

