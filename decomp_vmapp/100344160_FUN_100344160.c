
void FUN_100344160(byte *param_1,uint param_2,long param_3)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x358) != param_3) {
    *(long *)(param_1 + (ulong)param_2 * 8 + 0x358) = param_3;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << ((byte)param_2 & 0x1f);
    *param_1 = *param_1 | 8;
  }
  return;
}

