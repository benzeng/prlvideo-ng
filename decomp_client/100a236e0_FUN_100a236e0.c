
void FUN_100a236e0(undefined8 *param_1)

{
  int iVar1;
  QSslError *this;
  Data *pDVar2;
  long lVar3;
  
  pDVar2 = (Data *)*param_1;
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) {
        return;
      }
      pDVar2 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar2 + 0xc);
    if (iVar1 != *(int *)(pDVar2 + 8)) {
      lVar3 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
      this = (QSslError *)(pDVar2 + (long)iVar1 * 8 + 8);
      do {
        QSslError::~QSslError(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

