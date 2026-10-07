
undefined8 * FUN_1004708e0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_1004795a0(param_1);
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

