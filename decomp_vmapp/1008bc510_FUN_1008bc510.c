
bool FUN_1008bc510(long param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = -(uint)(param_2 == 0) | 0xff;
  }
  return param_1 != 0;
}

