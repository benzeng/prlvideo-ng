
undefined8 FUN_1005ca500(char *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)*(long *)(param_1 + 0x10) >> 8),*param_1 != '\0');
  }
  return uVar1;
}

