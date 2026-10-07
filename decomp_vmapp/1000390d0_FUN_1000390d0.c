
void FUN_1000390d0(QObject *param_1)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_100ba9b70;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9bf8;
  pDVar3 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_10003912b;
      pDVar3 = *(Data **)(param_1 + 0x50);
    }
    QListData::dispose(pDVar3);
  }
LAB_10003912b:
  pDVar3 = *(Data **)(param_1 + 0x48);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_100039153;
      pDVar3 = *(Data **)(param_1 + 0x48);
    }
    QListData::dispose(pDVar3);
  }
LAB_100039153:
  pDVar3 = *(Data **)(param_1 + 0x40);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_1000391bf;
      pDVar3 = *(Data **)(param_1 + 0x40);
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar4 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1000391bf:
  QMutex::~QMutex((QMutex *)(param_1 + 0x38));
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

