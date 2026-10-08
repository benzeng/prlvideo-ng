
void FUN_100dae2c0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_10225c058;
  param_1[1] = 0xffffffffffffffff;
  piVar1 = (int *)*param_2;
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

