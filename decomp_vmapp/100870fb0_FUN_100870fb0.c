
undefined4 FUN_100870fb0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x48);
  }
  return uVar1;
}

