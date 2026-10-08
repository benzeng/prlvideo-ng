
void FUN_100269ea0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  
  FUN_100249ab0(param_1,param_2,0x3f4,param_4,0);
  *param_1 = &PTR_FUN_1022056a0;
  piVar1 = (int *)*param_3;
  param_1[9] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

