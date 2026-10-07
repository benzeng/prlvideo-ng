
undefined8 FUN_1008126e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = FUN_100884e10();
  iVar1 = FUN_100885600(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar4 = FUN_100885620(param_1,iVar1);
      lVar5 = FUN_1008a11d0(uVar4);
      if ((lVar5 == 0) || (iVar2 = FUN_1008852e0(uVar3,lVar5), iVar2 == 0)) {
        FUN_100885590(uVar3,FUN_1008a11b0);
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(param_1);
    } while (iVar1 < iVar2);
  }
  return uVar3;
}

