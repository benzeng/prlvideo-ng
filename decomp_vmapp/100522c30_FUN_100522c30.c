
undefined4 FUN_100522c30(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                     *(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14));
  }
  return uVar1;
}

