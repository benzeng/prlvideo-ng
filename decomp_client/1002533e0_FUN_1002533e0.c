
void FUN_1002533e0(CAbstractTask *param_1)

{
  int *piVar1;
  char cVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102204500;
  if (*(long *)(param_1 + 0x28) != 0) {
    if (((*(int *)(*(long *)(param_1 + 0x28) + 4) != 0) &&
        (*(bool **)(param_1 + 0x30) != (bool *)0x0)) &&
       (cVar2 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x30),(int *)0x0), cVar2 == '\0')) {
      CSdkRequest::cancel();
    }
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

