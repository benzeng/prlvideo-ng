
void FUN_100abf290(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022827c8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  operator_delete(param_1);
  return;
}

