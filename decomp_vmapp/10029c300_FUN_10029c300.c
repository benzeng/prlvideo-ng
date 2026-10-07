
void FUN_10029c300(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}

