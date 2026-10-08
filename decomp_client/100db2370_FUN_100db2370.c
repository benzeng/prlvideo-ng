
void FUN_100db2370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10230fd38;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}

