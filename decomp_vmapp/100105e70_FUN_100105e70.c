
void FUN_100105e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10110cf20;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  operator_delete(param_1);
  return;
}

