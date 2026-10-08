
void FUN_100826150(CAbstractTask *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102209b40;
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1008261b0;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1008261b0:
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

