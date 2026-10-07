
long FUN_100811bd0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    FUN_10088ae30();
  }
  *param_1 = 0;
  lVar2 = FUN_10088a690();
  *param_1 = lVar2;
  lVar3 = 0;
  if (lVar2 != 0) {
    if (param_2 == 0) {
      return lVar2;
    }
    iVar1 = FUN_10088a720(lVar2,param_2,0);
    lVar3 = *param_1;
    if (0 < iVar1) {
      return lVar3;
    }
  }
  FUN_10088ae30(lVar3);
  *param_1 = 0;
  return 0;
}

