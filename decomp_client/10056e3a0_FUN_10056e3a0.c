
void FUN_10056e3a0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  long lVar4;
  Data *pDVar5;
  
  pDVar5 = (Data *)*param_1;
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) {
        return;
      }
      pDVar5 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar4 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        pvVar2 = *(void **)pDVar3;
        if (pvVar2 != (void *)0x0) {
          QKeySequence::~QKeySequence((QKeySequence *)((long)pvVar2 + 8));
          operator_delete(pvVar2);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}

