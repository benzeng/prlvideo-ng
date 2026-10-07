
undefined8 * FUN_1007b9060(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  QMutex::lock();
  piVar1 = *(int **)(param_2 + 0x48);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QMutex::unlock();
  return param_1;
}

