
void FUN_1008222c0(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102208290;
  FUN_10005e410(param_1 + 0x60);
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x50));
    }
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x40));
    }
  }
  QProcess::~QProcess((QProcess *)(param_1 + 0x30));
  pQVar2 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100822364;
      pQVar2 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100822364:
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100822394;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100822394:
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1008223c4;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1008223c4:
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

