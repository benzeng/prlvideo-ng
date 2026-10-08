
int FUN_100a67f40(long param_1)

{
  return *(uint *)(param_1 + 4) + 0xc +
         *(int *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 4));
}

