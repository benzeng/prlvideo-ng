
void FUN_100282030(CAbstractTask *param_1,undefined8 *param_2,CAbstractTask *param_3)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  
  pCVar2 = operator_new(0x18);
  FUN_100283330(pCVar2,param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  *(undefined ***)param_1 = &PTR_FUN_102206050;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x30] = *param_3;
  piVar1 = *(int **)(param_3 + 8);
  *(int **)(param_1 + 0x38) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x30] = *param_3;
  piVar1 = *(int **)(param_3 + 0x10);
  *(int **)(param_1 + 0x40) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x30] = *param_3;
  piVar1 = *(int **)(param_3 + 0x18);
  *(int **)(param_1 + 0x48) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x30] = *param_3;
  piVar1 = *(int **)(param_3 + 0x20);
  *(int **)(param_1 + 0x50) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x30] = *param_3;
  piVar1 = *(int **)(param_3 + 0x28);
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x30] = *param_3;
  piVar1 = *(int **)(param_3 + 0x30);
  *(int **)(param_1 + 0x60) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_3 + 0x38);
  *(undefined **)(param_1 + 0x70) = PTR_shared_null_1021e12f0;
  return;
}

