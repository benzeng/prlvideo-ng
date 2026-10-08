
bool FUN_100c97a90(long param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = -(uint)(param_2 == 0) | 0xff;
  }
  return param_1 != 0;
}

