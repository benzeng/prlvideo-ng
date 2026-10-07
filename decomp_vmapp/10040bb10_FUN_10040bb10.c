
ulong FUN_10040bb10(long param_1,char param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1 + 0x43);
  if (param_2 != '\0') {
    puVar1 = (undefined1 *)(param_1 + 0x42);
  }
  return CONCAT71((int7)((ulong)(param_1 + 0x42) >> 8),*puVar1) & 0xffffffffffffff01;
}

