
int FUN_100cdf7f0(uint param_1,uint param_2)

{
  int iVar1;
  
  if (0xc0 < (int)param_1) {
    return -1;
  }
  iVar1 = *(int *)(&DAT_101db1140 + (ulong)param_1 * 4 + (ulong)param_2 * 0x400);
  if (iVar1 == -1) {
    if (param_2 == 0) {
      return -1;
    }
    iVar1 = -1;
    if (param_2 != 3) {
      iVar1 = *(int *)(&DAT_101db1140 + (ulong)param_1 * 4);
    }
  }
  return iVar1;
}

