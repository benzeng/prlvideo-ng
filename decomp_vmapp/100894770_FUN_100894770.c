
void FUN_100894770(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) & (long)(int)~param_2;
  return;
}

