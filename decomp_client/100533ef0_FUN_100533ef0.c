
void FUN_100533ef0(undefined8 param_1,Data *param_2)

{
  int iVar1;
  QPersistentModelIndex *this;
  Data *pDVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar3 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar2 = param_2 + (long)iVar1 * 8 + 8;
    do {
      this = *(QPersistentModelIndex **)pDVar2;
      if (this != (QPersistentModelIndex *)0x0) {
        QPersistentModelIndex::~QPersistentModelIndex(this + 8);
        QPersistentModelIndex::~QPersistentModelIndex(this);
        operator_delete(this);
      }
      pDVar2 = pDVar2 + -8;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  QListData::dispose(param_2);
  return;
}

