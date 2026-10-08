
void FUN_1006f2910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102225f20;
  param_1[2] = &PTR_FUN_102226110;
  param_1[6] = &PTR_FUN_102226160;
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x20))();
  }
  FUN_100381040(param_1);
  return;
}

