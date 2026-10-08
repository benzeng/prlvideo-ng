
undefined8 * FUN_100a74830(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = PTR_shared_null_1021e1288;
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

