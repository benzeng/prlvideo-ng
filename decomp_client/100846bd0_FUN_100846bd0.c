
void FUN_100846bd0(CAbstractTask *param_1)

{
  int iVar1;
  Data *pDVar2;
  int *piVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_102221b70;
  piVar3 = *(int **)(param_1 + 400);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_100846c1d;
      piVar3 = *(int **)(param_1 + 400);
    }
    FUN_100682f30(param_1 + 400,piVar3);
  }
LAB_100846c1d:
  pDVar6 = *(Data **)(param_1 + 0x188);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_100846c96;
      pDVar6 = *(Data **)(param_1 + 0x188);
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        if (*(long **)pDVar2 != (long *)0x0) {
          (**(code **)(**(long **)pDVar2 + 0x88))();
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100846c96:
  pDVar6 = *(Data **)(param_1 + 0x180);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_100846d06;
      pDVar6 = *(Data **)(param_1 + 0x180);
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        if (*(long **)pDVar2 != (long *)0x0) {
          (**(code **)(**(long **)pDVar2 + 0x88))();
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100846d06:
  CDownloadedKeyList::~CDownloadedKeyList((CDownloadedKeyList *)(param_1 + 0xe0));
  pQVar4 = *(QArrayData **)(param_1 + 0xd8);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100846d48;
      pQVar4 = *(QArrayData **)(param_1 + 0xd8);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100846d48:
  CDownloadedKeyList::~CDownloadedKeyList((CDownloadedKeyList *)(param_1 + 0x38));
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

