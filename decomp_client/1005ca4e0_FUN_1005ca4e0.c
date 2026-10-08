
undefined8 FUN_1005ca4e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)*(long *)(param_1 + 0x10) >> 8),
                     *(int *)(*(long *)(param_1 + 0x10) + 4) != 0);
  }
  return uVar1;
}

