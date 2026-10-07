
undefined8 * FUN_1000fcb10(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

