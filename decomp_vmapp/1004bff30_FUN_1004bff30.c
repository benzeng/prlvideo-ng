
void FUN_1004bff30(QThread *param_1)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc2a40;
  QMutex::~QMutex((QMutex *)(param_1 + 0x30));
  QMutex::~QMutex((QMutex *)(param_1 + 0x28));
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 0x20));
  pDVar4 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1004bffcf;
      pDVar4 = *(Data **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar3 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1004bffcf:
  QThread::~QThread(param_1);
  return;
}

