
ulong FUN_1005ad1f0(long param_1,long param_2)

{
  return (ulong)(param_2 - *(long *)(param_1 + 0x10)) >> 6 & 0xffffffff;
}

