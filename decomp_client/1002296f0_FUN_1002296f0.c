
void FUN_1002296f0(CAbstractTask *param_1)

{
  int *piVar1;
  long lVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_102202160;
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 4) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      FUN_10072a120();
      lVar2 = *(long *)(param_1 + 0x68);
      if (lVar2 == 0) goto LAB_10022974a;
    }
    if ((*(int *)(lVar2 + 4) != 0) && (*(long **)(param_1 + 0x70) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
    }
  }
LAB_10022974a:
  if (*(long *)(param_1 + 0xc0) != 0) {
    _PrlHandle_Free();
  }
  pQVar3 = *(QArrayData **)(param_1 + 0xb8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100229791;
      pQVar3 = *(QArrayData **)(param_1 + 0xb8);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100229791:
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xa0));
    }
  }
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x88);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10022981d;
      pQVar3 = *(QArrayData **)(param_1 + 0x88);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10022981d:
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
  pQVar3 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100229897;
      pQVar3 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100229897:
  FUN_100086a10(param_1 + 0x28);
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

