
void FUN_100ab2fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022821a8;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  FUN_100ab0670(param_1);
  operator_delete(param_1);
  return;
}

