
void FUN_100d2f9b0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_10225b780;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

