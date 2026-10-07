
undefined8 FUN_100865820(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10085c5d0();
  uVar2 = 1;
  if ((iVar1 == 0) && (*(int *)(param_2 + 0x28) != 0)) {
    iVar1 = FUN_10085c690(param_1,param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_100858bf0(param_2 + 0x20,param_2 + 8,param_2 + 0x20);
      return uVar2;
    }
  }
  return uVar2;
}

