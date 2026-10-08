
void FUN_1001e3dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102271430;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  operator_delete(param_1);
  return;
}

