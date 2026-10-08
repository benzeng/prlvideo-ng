
undefined8 FUN_100be7e50(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = FUN_100c60010();
  iVar1 = FUN_100c60800(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar4 = FUN_100c60820(param_1,iVar1);
      lVar5 = FUN_100c7c750(uVar4);
      if ((lVar5 == 0) || (iVar2 = FUN_100c604e0(uVar3,lVar5), iVar2 == 0)) {
        FUN_100c60790(uVar3,FUN_100c7c730);
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100c60800(param_1);
    } while (iVar1 < iVar2);
  }
  return uVar3;
}

