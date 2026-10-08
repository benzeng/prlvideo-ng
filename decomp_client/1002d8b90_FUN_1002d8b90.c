
void FUN_1002d8b90(CAbstractTask *param_1,undefined8 *param_2)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  
  pCVar2 = operator_new(0x18);
  FUN_1002da510(pCVar2,param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  *(undefined ***)param_1 = &PTR_FUN_10220a6b0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QUrl::QUrl((QUrl *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

