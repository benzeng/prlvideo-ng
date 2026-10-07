
undefined8 * FUN_1004b77c0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  QMutex::lock();
  piVar1 = *(int **)(param_2 + 0x40);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QMutex::unlock();
  return param_1;
}

