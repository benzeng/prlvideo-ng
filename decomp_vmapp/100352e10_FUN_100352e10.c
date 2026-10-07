
void FUN_100352e10(long param_1,ushort param_2,byte *param_3)

{
  if ((param_2 - 0x42 < 0x1e) && ((0x28030d5fU >> (param_2 - 0x42 & 0x1f) & 1) != 0)) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 1 << (*param_3 & 0x1f);
  }
  return;
}

