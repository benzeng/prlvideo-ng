
void FUN_100707920(long param_1)

{
  int iVar1;
  QKeySequence *this;
  QArrayData *pQVar2;
  long lVar3;
  Data *pDVar4;
  
  pDVar4 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_10070799a;
      pDVar4 = *(Data **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar3 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(pDVar4 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_10070799a:
  pQVar2 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

