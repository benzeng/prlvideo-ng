
long FUN_100b30710(long param_1)

{
  return (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) *
         (ulong)*(uint *)(param_1 + 0x20);
}

