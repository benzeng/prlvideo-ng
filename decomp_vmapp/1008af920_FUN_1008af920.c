
int FUN_1008af920(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 + 1;
  if (0x1e < param_3) {
    do {
      param_3 = param_3 >> 7;
      iVar1 = iVar1 + 1;
    } while (0 < param_3);
  }
  if (param_1 == 2) {
    return iVar1 + 3;
  }
  iVar1 = iVar1 + 1;
  if (0x7f < param_2) {
    do {
      param_2 = param_2 >> 8;
      iVar1 = iVar1 + 1;
    } while (0 < param_2);
  }
  return iVar1;
}

