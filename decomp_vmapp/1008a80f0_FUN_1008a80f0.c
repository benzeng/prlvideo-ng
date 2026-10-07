
long * FUN_1008a80f0(long *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 1) & 4) == 0) {
    param_1 = (long *)(*param_1 + *(long *)(param_2 + 0x10));
  }
  return param_1;
}

