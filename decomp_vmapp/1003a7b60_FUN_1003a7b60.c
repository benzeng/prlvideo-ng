
ulong FUN_1003a7b60(long *param_1)

{
  return (ulong)((long)param_1 - *(long *)(*param_1 + 0x40)) >> 6 & 0xffffffff;
}

