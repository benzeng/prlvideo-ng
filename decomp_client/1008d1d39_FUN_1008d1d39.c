
void FUN_1008d1d39(long *param_1)

{
  if ((((int)param_1[0x12] == 0) && (*param_1 != 0)) && (0 < (int)param_1[0xe])) {
    if ((int)param_1[0xe] < 0x32) {
      _fprintf((FILE *)*param_1,(char *)((long)param_1 + (long)((int)param_1[0xe] * -2 + 100) + 8));
    }
    else {
      _fprintf((FILE *)*param_1,(char *)(param_1 + 1));
    }
  }
  return;
}

