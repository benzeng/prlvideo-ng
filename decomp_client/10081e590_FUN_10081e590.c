
void FUN_10081e590(CAbstractTask *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102206f00;
  piVar1 = *(int **)(param_1 + 0x28);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_10081e5d1;
      piVar1 = *(int **)(param_1 + 0x28);
    }
    FUN_100296070(param_1 + 0x28,piVar1);
  }
LAB_10081e5d1:
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

