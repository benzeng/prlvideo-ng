
void FUN_100267680(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  
  FUN_100249ab0(param_1,param_2,0x3f3,param_5,0);
  *param_1 = &PTR_FUN_1022054f0;
  piVar1 = (int *)*param_3;
  param_1[9] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  param_1[10] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return;
}

