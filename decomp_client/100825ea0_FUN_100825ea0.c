
void FUN_100825ea0(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102209a20;
  FUN_100d6f080(param_1 + 0x60);
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x50));
    }
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100825f16;
      pQVar2 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100825f16:
  FUN_1001790e0(param_1 + 0x18);
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

