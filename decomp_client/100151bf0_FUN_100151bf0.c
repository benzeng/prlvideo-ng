
undefined8 FUN_100151bf0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)*(long *)(param_1 + 0x18) >> 8),
                     *(int *)(*(long *)(param_1 + 0x18) + 4) != 0);
  }
  return uVar1;
}

