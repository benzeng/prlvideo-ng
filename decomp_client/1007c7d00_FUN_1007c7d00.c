
undefined8 * FUN_1007c7d00(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(long *)(param_2 + 0x10) + 0x20);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

