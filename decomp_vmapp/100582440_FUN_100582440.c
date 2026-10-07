
undefined8 * FUN_100582440(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_3 + 0x18);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

