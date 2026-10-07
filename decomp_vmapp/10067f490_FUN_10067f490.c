
void FUN_10067f490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc9a08;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x60))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x30))();
  }
  operator_delete(param_1);
  return;
}

