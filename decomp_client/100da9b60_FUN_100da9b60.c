
long FUN_100da9b60(char *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = _open(param_1,param_2);
  lVar2 = -1;
  if (iVar1 != -1) {
    lVar2 = (long)iVar1;
  }
  return lVar2;
}

