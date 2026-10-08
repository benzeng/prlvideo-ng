
void FUN_100c6fcc0(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & (long)(int)~param_2;
  return;
}

