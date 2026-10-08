
long FUN_100061050(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_100060e10(param_2);
    lVar2 = param_2;
    while (iVar1 != param_1) {
      lVar2 = *(long *)(*(long *)(lVar2 + 8) + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = FUN_100060e10(lVar2);
    }
  }
  return lVar2;
}

