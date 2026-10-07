
long FUN_1002c78a0(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)*param_1;
  lVar2 = (long)(*param_1 + -1);
  param_1 = param_1 + lVar2 + 1;
  do {
    if (lVar3 < 1) {
      return 0;
    }
    lVar3 = lVar3 + -1;
    lVar2 = CONCAT71((int7)((ulong)lVar2 >> 8),1);
    iVar1 = *param_1;
    param_1 = param_1 + -1;
  } while (iVar1 != param_2);
  return lVar2;
}

