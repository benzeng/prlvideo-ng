
long FUN_004104b0(long param_1,int param_2)

{
  for (; (param_1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    param_1 = *(long *)(param_1 + 0x20);
  }
  return param_1;
}

