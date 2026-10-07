
void FUN_1004dc520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc35f0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}

