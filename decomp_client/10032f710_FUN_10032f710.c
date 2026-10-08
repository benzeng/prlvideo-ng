
void FUN_10032f710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10220c000;
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 0x20))();
  }
  FUN_100327dc0(param_1);
  return;
}

