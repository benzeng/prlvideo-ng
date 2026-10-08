
void FUN_100722190(long param_1)

{
  int iVar1;
  QKeySequence *this;
  Data *pDVar2;
  long lVar3;
  
  pDVar2 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) {
        return;
      }
      pDVar2 = *(Data **)(param_1 + 0x10);
    }
    iVar1 = *(int *)(pDVar2 + 0xc);
    if (iVar1 != *(int *)(pDVar2 + 8)) {
      lVar3 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(pDVar2 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

