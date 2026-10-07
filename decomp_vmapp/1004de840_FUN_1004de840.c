
void FUN_1004de840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc3698;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  operator_delete(param_1);
  return;
}

