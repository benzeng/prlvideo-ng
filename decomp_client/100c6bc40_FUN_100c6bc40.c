
undefined8 FUN_100c6bc40(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_100bf61a0();
    uVar2 = FUN_100bf70a0(*param_1);
    iVar1 = FUN_100bf67c0(uVar2,2,param_1);
    if (iVar1 != 0) {
      FUN_100bf6bf0(*param_1);
      uVar2 = FUN_100bf7160(*param_1);
      uVar2 = FUN_100bf67c0(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}

