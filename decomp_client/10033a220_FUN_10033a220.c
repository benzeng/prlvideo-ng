
void FUN_10033a220(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = *param_4;
  param_1[2] = param_4[1];
  param_1[1] = uVar2;
  FUN_1001818c0(param_1 + 3,param_3);
  param_1[4] = 0;
  FUN_10033a340(param_1);
  return;
}

