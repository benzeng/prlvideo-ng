
long FUN_100be7340(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    FUN_100c66030();
  }
  *param_1 = 0;
  lVar2 = FUN_100c65890();
  *param_1 = lVar2;
  lVar3 = 0;
  if (lVar2 != 0) {
    if (param_2 == 0) {
      return lVar2;
    }
    iVar1 = FUN_100c65920(lVar2,param_2,0);
    lVar3 = *param_1;
    if (0 < iVar1) {
      return lVar3;
    }
  }
  FUN_100c66030(lVar3);
  *param_1 = 0;
  return 0;
}

