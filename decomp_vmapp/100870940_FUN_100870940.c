
undefined8
FUN_100870940(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100870f90(param_5,param_4,param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  if (-1 < (int)uVar1) {
    *param_3 = (long)(int)uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

