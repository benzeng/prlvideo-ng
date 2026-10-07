
void FUN_10067c400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc9970;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}

