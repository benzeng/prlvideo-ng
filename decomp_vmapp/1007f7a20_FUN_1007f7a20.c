
undefined4 FUN_1007f7a20(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x4c) != 0xf1) && (*(int *)(*(long *)(param_1 + 0x80) + 0x120) == 0x17)) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x124);
  }
  return uVar1;
}

