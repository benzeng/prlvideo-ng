
void FUN_100ab2e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102239d78;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}

