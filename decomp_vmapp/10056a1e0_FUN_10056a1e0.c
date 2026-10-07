
void FUN_10056a1e0(long *param_1)

{
  (**(code **)(*param_1 + 0x1f8))(param_1,param_1[599]);
  if ((long *)param_1[599] != (long *)0x0) {
    (**(code **)(*(long *)param_1[599] + 0x28))();
  }
  param_1[599] = 0;
  return;
}

