
void FUN_100d6a5e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10225b928;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x60))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x30))();
  }
  operator_delete(param_1);
  return;
}

