
undefined8 * FUN_100382700(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(long *)(param_2 + 0x30) + 0x38);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

