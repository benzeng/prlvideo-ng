
void FUN_10009c890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10226c8b8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  operator_delete(param_1);
  return;
}

