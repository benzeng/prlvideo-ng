
void FUN_100203960(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1022006f0;
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    if ((piVar1[1] != 0) && (*(long *)(param_1 + 0x88) != 0)) {
      QObject::deleteLater();
      piVar1 = *(int **)(param_1 + 0x80);
      if (piVar1 == (int *)0x0) goto LAB_1002039ca;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x80));
    }
  }
LAB_1002039ca:
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x70));
    }
  }
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
      if (*(int *)pQVar2 != 0) goto LAB_100203a44;
      pQVar2 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100203a44:
  pQVar2 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100203a74;
      pQVar2 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100203a74:
  pQVar2 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100203aa4;
      pQVar2 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100203aa4:
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
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

