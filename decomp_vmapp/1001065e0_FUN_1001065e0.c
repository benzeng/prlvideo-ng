
void FUN_1001065e0(long *param_1,long param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = 0x10c;
  if (*(int *)(param_2 + 0x20) != 0) {
    param_1[1] = param_3 + -0x24;
  }
  return;
}

