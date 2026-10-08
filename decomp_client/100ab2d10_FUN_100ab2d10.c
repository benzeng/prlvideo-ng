
void FUN_100ab2d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102239d20;
  FUN_100aaf5b0(param_1 + 5);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}

