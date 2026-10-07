
int FUN_10032df40(long param_1,int param_2,int param_3)

{
  if ((*(ushort *)(param_1 + 0xb0) & 7) == 1) {
    param_2 = param_2 * *(int *)(param_1 + 0x1c) + param_3;
  }
  return param_2;
}

