
void FUN_1000feb90(undefined8 param_1,Data *param_2)

{
  int iVar1;
  QKeySequence *this;
  Data *pDVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar3 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar2 = param_2 + (long)iVar1 * 8 + 8;
    do {
      this = *(QKeySequence **)pDVar2;
      if (this != (QKeySequence *)0x0) {
        QKeySequence::~QKeySequence(this + 8);
        QKeySequence::~QKeySequence(this);
        operator_delete(this);
      }
      pDVar2 = pDVar2 + -8;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  QListData::dispose(param_2);
  return;
}

