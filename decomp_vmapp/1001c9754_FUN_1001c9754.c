
uint FUN_1001c9754(int param_1,long param_2)

{
  return 1 << ((byte)param_1 & 0x1f) & *(uint *)(param_2 + ((ulong)(long)param_1 >> 5) * 4);
}

