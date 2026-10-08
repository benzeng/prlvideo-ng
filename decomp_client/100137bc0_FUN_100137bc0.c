
void FUN_100137bc0(QObject *param_1)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  
  *(undefined **)param_1 = PTR_DAT_1021e1798 + 0x10;
  pDVar4 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_100137c4f;
      pDVar4 = *(Data **)(param_1 + 0x10);
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
LAB_100137c4f:
  QObject::~QObject(param_1);
  return;
}

