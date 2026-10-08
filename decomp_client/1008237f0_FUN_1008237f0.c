
void FUN_1008237f0(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1022089b0;
  pQVar2 = *(QArrayData **)(param_1 + 0x68);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100823838;
      pQVar2 = *(QArrayData **)(param_1 + 0x68);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100823838:
  FUN_1001b8c60(param_1 + 0x28);
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
  operator_delete(param_1);
  return;
}

