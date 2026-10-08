
void FUN_10020df60(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102200c90;
  pQVar2 = *(QArrayData **)(param_1 + 0xa0);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10020dfb2;
      pQVar2 = *(QArrayData **)(param_1 + 0xa0);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10020dfb2:
  piVar1 = *(int **)(param_1 + 0x98);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_10020dfe1;
      piVar1 = *(int **)(param_1 + 0x98);
    }
    FUN_1001c45d0(param_1 + 0x98,piVar1);
  }
LAB_10020dfe1:
  pQVar2 = *(QArrayData **)(param_1 + 0x90);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10020e017;
      pQVar2 = *(QArrayData **)(param_1 + 0x90);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10020e017:
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x20))();
  }
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x78));
    }
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x68));
    }
  }
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x58));
    }
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
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

