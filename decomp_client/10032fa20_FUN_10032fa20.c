
void FUN_10032fa20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10220c0d0;
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  FUN_100327dc0(param_1);
  operator_delete(param_1);
  return;
}

