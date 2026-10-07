
void FUN_1003ece30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bbef60;
  (**(code **)(*(long *)param_1[0x27] + 0x10))();
  *param_1 = &PTR_FUN_1011198e8;
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 8))();
  }
  FUN_1003e07d0(param_1);
  operator_delete(param_1);
  return;
}

