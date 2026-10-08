
void FUN_100c266b0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && ((*(byte *)((long)param_1 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(uint *)((long)param_1 + 0x14) & 1) != 0) {
      FUN_100bf3910(param_1);
      return;
    }
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x8000;
    *param_1 = 0;
  }
  return;
}

