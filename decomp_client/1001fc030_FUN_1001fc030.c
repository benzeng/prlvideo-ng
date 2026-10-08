
void FUN_1001fc030(CAbstractTask *param_1)

{
  void *pvVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1022004b0;
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
  }
  pvVar1 = *(void **)(param_1 + 0x70);
  if (pvVar1 != (void *)0x0) {
    FUN_100d96c00(pvVar1);
    operator_delete(pvVar1);
  }
  if (((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    QObject::deleteLater();
  }
  if (((*(long *)(param_1 + 0x90) != 0) && (*(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) &&
     (*(long *)(param_1 + 0x98) != 0)) {
    QObject::deleteLater();
  }
  if (((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) &&
     (*(long *)(param_1 + 0x88) != 0)) {
    QObject::deleteLater();
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xa0));
    }
  }
  piVar2 = *(int **)(param_1 + 0x90);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
  }
  piVar2 = *(int **)(param_1 + 0x80);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x80));
    }
  }
  FUN_100039a80(param_1 + 0x78);
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x50));
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1001fc1d0;
      pQVar3 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1001fc1d0:
  pQVar3 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1001fc200;
      pQVar3 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1001fc200:
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

