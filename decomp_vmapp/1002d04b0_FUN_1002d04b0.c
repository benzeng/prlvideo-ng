
uint FUN_1002d04b0(long param_1,uint param_2)

{
  return *(uint *)(*(long *)(param_1 + 0x40) + 0x1064 + (ulong)param_2 * 4) >> 2 & 1;
}

