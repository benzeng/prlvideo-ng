
int FUN_100b20260(long param_1,uint param_2)

{
  return *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x20) + 0xc) *
         *(int *)((ulong)*(uint *)(param_1 + 0x20) + *(long *)(param_1 + 8) + (ulong)param_2 * 4);
}

