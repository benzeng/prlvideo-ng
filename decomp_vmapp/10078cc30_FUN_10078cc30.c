
long FUN_10078cc30(undefined4 *param_1,uint param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_2 + 0xc;
  return (ulong)param_2 + *(long *)(param_1 + 4);
}

