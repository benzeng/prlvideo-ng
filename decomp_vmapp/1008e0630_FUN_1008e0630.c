
long FUN_1008e0630(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = FUN_10084c820();
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_10084b520();
      lVar4 = 0;
      if (lVar3 != 0) {
        iVar1 = FUN_1008487a0(lVar3,param_3,param_1,param_2,lVar2);
        lVar4 = lVar3;
        if (iVar1 == 0) {
          FUN_10084b4b0(lVar3);
          lVar4 = 0;
        }
      }
      FUN_10084c8b0(lVar2);
    }
  }
  return lVar4;
}

