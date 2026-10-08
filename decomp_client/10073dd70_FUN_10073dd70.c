
undefined8 FUN_10073dd70(long *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)param_1[0xb] >> 8),*(int *)(param_1[0xb] + 4) != 0);
  }
  return uVar1;
}

