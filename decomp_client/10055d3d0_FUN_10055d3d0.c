
void FUN_10055d3d0(QObject *param_1)

{
  int iVar1;
  QKeySequence *this;
  long lVar2;
  Data *pDVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f3150;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  pDVar3 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_10055d45a;
      pDVar3 = *(Data **)(param_1 + 0x28);
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar2 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(pDVar3 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_10055d45a:
  QObject::~QObject(param_1);
  return;
}

