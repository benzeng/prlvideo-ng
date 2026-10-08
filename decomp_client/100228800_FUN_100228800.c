
undefined8 * FUN_100228800(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  *param_1 = *(undefined8 *)(param_2 + 0x28);
  piVar1 = *(int **)(param_2 + 0x30);
  param_1[1] = piVar1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    piVar1[1] = piVar1[1] + 1;
    UNLOCK();
  }
  return param_1;
}

