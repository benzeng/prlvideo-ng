
void FUN_10056a270(long *param_1)

{
  if (param_1[600] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    if ((long *)param_1[600] != (long *)0x0) {
      (**(code **)(*(long *)param_1[600] + 0x28))();
    }
    param_1[600] = 0;
  }
  return;
}

