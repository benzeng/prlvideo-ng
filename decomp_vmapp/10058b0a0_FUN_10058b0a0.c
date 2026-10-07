
void FUN_10058b0a0(long *param_1)

{
  if (((int)param_1[1] == -1) && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 0x28))();
    (**(code **)(*(long *)*param_1 + 0x20))();
    *param_1 = 0;
  }
  return;
}

