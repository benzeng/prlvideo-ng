
undefined8 * FUN_10006a960(undefined8 *param_1,long *param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_2 + 8 + (ulong)param_3 * 0x10);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

