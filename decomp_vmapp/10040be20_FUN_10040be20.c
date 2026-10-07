
ulong FUN_10040be20(long param_1,char param_2)

{
  undefined1 *puVar1;
  
  FUN_1006d5830(param_1 + 0x10);
  puVar1 = (undefined1 *)(param_1 + 0x41);
  if (param_2 != '\0') {
    puVar1 = (undefined1 *)(param_1 + 0x40);
  }
  return CONCAT71((int7)((ulong)(param_1 + 0x40) >> 8),*puVar1) & 0xffffffffffffff01;
}

