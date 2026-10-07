
void FUN_100080c50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bfbb80;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x88))();
  }
  operator_delete(param_1);
  return;
}

