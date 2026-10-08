
void FUN_100278670(CAbstractTask *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4
                  )

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  
  pCVar2 = operator_new(0x18);
  FUN_1001b8b80(pCVar2,param_2 + 0xc,*param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  *(undefined ***)param_1 = &PTR_FUN_102205df0;
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  piVar1 = *(int **)(param_2 + 2);
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 4);
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 6);
  *(int **)(param_1 + 0x30) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  piVar1 = *(int **)(param_2 + 10);
  *(int **)(param_1 + 0x40) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  piVar1 = *(int **)(param_2 + 0xc);
  *(int **)(param_1 + 0x48) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  piVar1 = *(int **)(param_2 + 0xe);
  *(int **)(param_1 + 0x50) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x68) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x70] = (CAbstractTask)0x0;
  param_1[0x71] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0x74) = param_4;
  DLCItemInfo::load();
  return;
}

