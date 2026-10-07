
undefined8 FUN_100890a40(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_100820a30();
    uVar2 = FUN_100821930(*param_1);
    iVar1 = FUN_100821050(uVar2,2,param_1);
    if (iVar1 != 0) {
      FUN_100821480(*param_1);
      uVar2 = FUN_1008219f0(*param_1);
      uVar2 = FUN_100821050(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}

