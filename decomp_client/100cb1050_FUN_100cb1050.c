
undefined8 FUN_100cb1050(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_100c60790(*(long *)(param_1 + 0x30),FUN_100c7bc60);
  }
  lVar3 = FUN_100c5fe10(param_2);
  *(long *)(param_1 + 0x30) = lVar3;
  uVar5 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_100c60800(param_2);
    if (iVar1 < 1) {
      uVar5 = 1;
    }
    else {
      iVar1 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        uVar4 = FUN_100c60820(param_2,iVar1);
        uVar4 = FUN_100c7bc80(uVar4);
        lVar3 = FUN_100c60850(uVar5,iVar1,uVar4);
        if (lVar3 == 0) {
          return 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_2);
      } while (iVar1 < iVar2);
      uVar5 = 1;
    }
  }
  return uVar5;
}

