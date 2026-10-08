
void FUN_100265f80(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1022052b0;
  pQVar2 = *(QArrayData **)(param_1 + 0x90);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100265fd4;
      pQVar2 = *(QArrayData **)(param_1 + 0x90);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100265fd4:
  pQVar2 = *(QArrayData **)(param_1 + 0x88);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10026600a;
      pQVar2 = *(QArrayData **)(param_1 + 0x88);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10026600a:
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
  pQVar2 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100266088;
      pQVar2 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100266088:
  pQVar2 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002660b8;
      pQVar2 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002660b8:
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

