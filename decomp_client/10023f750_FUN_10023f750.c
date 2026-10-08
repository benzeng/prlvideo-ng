
void FUN_10023f750(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  Data *local_40;
  undefined1 local_33;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_10023fc80(pCVar2,param_3);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10023f7c5;
    }
    QListData::dispose(local_40);
  }
LAB_10023f7c5:
  *(undefined ***)param_1 = &PTR_FUN_1022036f0;
  uVar3 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x30) = param_4;
  return;
}

