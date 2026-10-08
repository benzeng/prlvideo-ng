
void FUN_1002f6470(CAbstractTask *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220b200;
  FUN_100252c80(param_1 + 0xe0);
  FUN_100252e70(param_1 + 0x88);
  FUN_10024f950(param_1 + 0x28);
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

