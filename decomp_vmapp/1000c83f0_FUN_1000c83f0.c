
undefined4 FUN_1000c83f0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x2b0) + 0x5ac);
  }
  return uVar1;
}

