
void FUN_100d2efd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10230f8f8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}

