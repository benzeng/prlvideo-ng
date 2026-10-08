
void FUN_10054d4d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  QPersistentModelIndex *pQVar1;
  QPersistentModelIndex *this;
  long lVar2;
  
  if (param_2 - param_3 != 0) {
    lVar2 = 0;
    do {
      this = operator_new(0x10);
      pQVar1 = *(QPersistentModelIndex **)(param_4 + lVar2);
      QPersistentModelIndex::QPersistentModelIndex(this,pQVar1);
      QPersistentModelIndex::QPersistentModelIndex(this + 8,pQVar1 + 8);
      *(QPersistentModelIndex **)(param_2 + lVar2) = this;
      lVar2 = lVar2 + 8;
    } while ((param_2 - param_3) + lVar2 != 0);
  }
  return;
}

