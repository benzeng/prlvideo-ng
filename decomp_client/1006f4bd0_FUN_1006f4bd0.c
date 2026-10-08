
void FUN_1006f4bd0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102226200;
  *param_1 = &PTR_FUN_1022263f0;
  param_1[4] = &PTR_FUN_102226440;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x20))();
  }
  FUN_100381040(param_1 + -2);
  return;
}

