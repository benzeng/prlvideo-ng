
undefined8
FUN_100c29bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100c22e70();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100c27100(param_1,param_4);
    uVar2 = 1;
    if (-1 < iVar1) {
      uVar2 = FUN_100c22be0(param_1,param_1,param_4);
      return uVar2;
    }
  }
  return uVar2;
}

