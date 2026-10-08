
void FUN_1006f4cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102226200;
  param_1[2] = &PTR_FUN_1022263f0;
  param_1[6] = &PTR_FUN_102226440;
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x20))();
  }
  FUN_100381040(param_1);
  operator_delete(param_1);
  return;
}

