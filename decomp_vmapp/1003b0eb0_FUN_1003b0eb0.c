
void FUN_1003b0eb0(long param_1,long param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((ulong)*(uint *)(*(long *)(param_2 + 0x40) + 0xa8) * 0x40 + *(long *)(param_1 + 0x10));
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    *(byte *)puVar1 = (byte)*puVar1 | 2;
  }
  else if (*(char *)(param_2 + 0x4e) == '\b') {
    if ((*(ushort *)(param_2 + 0x54) & 0x8000) == 0) {
      *puVar1 = *puVar1 | 1;
      return;
    }
    *puVar1 = *puVar1 | 4;
    return;
  }
  return;
}

