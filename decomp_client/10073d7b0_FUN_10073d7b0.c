
void FUN_10073d7b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102274ce8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  operator_delete(param_1);
  return;
}

