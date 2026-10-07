
undefined8
FUN_0040dfa0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
            undefined4 param_6,long param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_0040de30(param_3);
    iVar2 = FUN_0040e550(param_1,param_3,uVar1,0x20ca);
    if (iVar2 != 0) {
      return 0xfffffffd;
    }
  }
  if ((((param_4 == 0) || (iVar2 = FUN_0040e550(param_1,param_4,0x28,0x20cb), iVar2 == 0)) &&
      ((param_5 == 0 || (iVar2 = FUN_0040e550(param_1,param_5,param_6,0x20cc), iVar2 == 0)))) &&
     ((param_7 == 0 || (iVar2 = FUN_0040e550(param_1,param_7,param_8,0x20cd), iVar2 == 0)))) {
    uVar1 = FUN_0040de30(param_2);
    iVar2 = FUN_0040e550(param_1,param_2,uVar1,0x2191);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0xfffffffd;
}

