
void FUN_100811bc0(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  Data *pDVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_102201930;
  pQVar2 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100811c08;
      pQVar2 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100811c08:
  pDVar3 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_100811c2e;
      pDVar3 = *(Data **)(param_1 + 0x28);
    }
    QListData::dispose(pDVar3);
  }
LAB_100811c2e:
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

