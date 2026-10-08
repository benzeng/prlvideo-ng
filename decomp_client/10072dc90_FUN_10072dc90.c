
undefined8 * FUN_10072dc90(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x30);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

