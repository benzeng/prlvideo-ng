
long FUN_100cbc900(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  if ((((param_5 != 0) && (param_4 != 0)) && (param_2 != 0)) &&
     ((lVar4 = 0, param_1 != 0 && (param_3 != 0)))) {
    lVar2 = FUN_100c27a20();
    lVar4 = 0;
    lVar5 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_100c26720();
      lVar4 = 0;
      lVar5 = 0;
      if (lVar3 != 0) {
        lVar4 = FUN_100c26720();
        lVar5 = lVar3;
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          iVar1 = FUN_100c239a0(lVar3,param_2,param_3,param_5,lVar2);
          if (iVar1 != 0) {
            iVar1 = FUN_100c29cc0(lVar3,param_1,lVar3,param_5,lVar2);
            if (iVar1 != 0) {
              FUN_100c239a0(lVar4,lVar3,param_4,param_5,lVar2);
            }
          }
        }
      }
    }
    FUN_100c27ab0(lVar2);
    FUN_100c26640(lVar5);
  }
  return lVar4;
}

