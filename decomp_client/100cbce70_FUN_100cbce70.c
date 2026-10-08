
long FUN_100cbce70(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = FUN_100c27a20();
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_100c26720();
      lVar4 = 0;
      if (lVar3 != 0) {
        iVar1 = FUN_100c239a0(lVar3,param_3,param_1,param_2,lVar2);
        lVar4 = lVar3;
        if (iVar1 == 0) {
          FUN_100c266b0(lVar3);
          lVar4 = 0;
        }
      }
      FUN_100c27ab0(lVar2);
    }
  }
  return lVar4;
}

