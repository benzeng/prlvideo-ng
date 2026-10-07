
void FUN_100473750(long *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
    if ((long *)param_1[4] != (long *)0x0) {
      (**(code **)(*(long *)param_1[4] + 8))();
    }
    param_1[4] = 0;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

