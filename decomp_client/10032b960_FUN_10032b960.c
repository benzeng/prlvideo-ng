
void FUN_10032b960(CSdkCommunicator *param_1)

{
  int *piVar1;
  
  *(undefined **)param_1 = &DAT_1021efa10;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  CSdkCommunicator::~CSdkCommunicator(param_1);
  return;
}

