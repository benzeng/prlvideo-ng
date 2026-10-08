
undefined4 FUN_100b2fbf0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24);
  }
  return uVar1;
}

