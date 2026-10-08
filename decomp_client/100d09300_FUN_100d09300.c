
undefined8 * FUN_100d09300(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 8);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

