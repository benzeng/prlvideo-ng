
void FUN_10033d6c0(long param_1,ulong param_2,uint param_3,void *param_4)

{
  _memcpy((void *)(param_1 + 0xab80 + (param_2 & 0xffffffff) * 4),param_4,(ulong)param_3 << 2);
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3030);
  return;
}

