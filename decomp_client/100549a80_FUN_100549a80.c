
void FUN_100549a80(QAbstractListModel *param_1)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  Data *pDVar4;
  long lVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2ab0;
  pDVar4 = *(Data **)(param_1 + 0x20);
  iVar1 = *(int *)(pDVar4 + 8);
  if (iVar1 != *(int *)(pDVar4 + 0xc)) {
    pDVar3 = pDVar4 + (long)iVar1 * 8 + 0x10;
    lVar5 = (long)*(int *)(pDVar4 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (*(long **)pDVar3 != (long *)0x0) {
        (**(code **)(**(long **)pDVar3 + 0x88))();
      }
      pDVar3 = pDVar3 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    pDVar4 = *(Data **)(param_1 + 0x20);
  }
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_100549b04;
      pDVar4 = *(Data **)(param_1 + 0x20);
    }
    QListData::dispose(pDVar4);
  }
LAB_100549b04:
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QAbstractListModel::~QAbstractListModel(param_1);
  return;
}

