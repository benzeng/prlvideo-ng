
void FUN_1006a8b70(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_100bcd158;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}

