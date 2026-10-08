
int FUN_1003afa90(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = 0;
  if (*(long *)(lVar1 + 0x10) != 0) {
    iVar3 = 0;
    lVar2 = *(long *)(lVar1 + 0x20);
    while (lVar2 != lVar1 + 8) {
      iVar3 = iVar3 + 1;
      lVar2 = QMapNodeBase::nextNode();
    }
  }
  return iVar3;
}

