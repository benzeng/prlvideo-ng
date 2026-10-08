
void FUN_100222870(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  CAbstractTask::CAbstractTask(param_1,(CTaskGenericId *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102201930;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x30) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x38] = *(CAbstractTask *)(param_3 + 1);
  return;
}

