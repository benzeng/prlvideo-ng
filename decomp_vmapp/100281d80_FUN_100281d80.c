
void FUN_100281d80(long *param_1)

{
  if ((*param_1 != 0) && ((*(byte *)((long)param_1 + 0x31) & 0x10) != 0)) {
    FUN_1004033b0(*param_1 + 0x148,param_1);
    return;
  }
  return;
}

