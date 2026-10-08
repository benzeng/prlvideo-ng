
void FUN_10061caf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022748a8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}

