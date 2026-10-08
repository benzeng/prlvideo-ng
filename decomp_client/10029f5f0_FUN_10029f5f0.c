
void FUN_10029f5f0(CAbstractTask *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1022076e0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

