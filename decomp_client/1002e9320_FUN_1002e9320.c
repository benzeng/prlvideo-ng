
void FUN_1002e9320(CAbstractTask *param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  
  pCVar2 = operator_new(0x18);
  FUN_100086960(pCVar2,param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  *(undefined ***)param_1 = &PTR_FUN_10220ab40;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x38) = param_4 | 1;
  return;
}

