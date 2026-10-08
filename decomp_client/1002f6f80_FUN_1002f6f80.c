
void FUN_1002f6f80(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10220b320;
  pQVar2 = *(QArrayData **)(param_1 + 0x70);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f6fcc;
      pQVar2 = *(QArrayData **)(param_1 + 0x70);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f6fcc:
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x60));
    }
  }
  FUN_100286840(param_1 + 0x38);
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f704f;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f704f:
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002f707f;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f707f:
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

