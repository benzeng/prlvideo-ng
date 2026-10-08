
undefined8 * FUN_1001a3530(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xe8);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

