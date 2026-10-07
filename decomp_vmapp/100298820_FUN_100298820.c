
ulong FUN_100298820(long param_1)

{
  return (ulong)*(byte *)(param_1 + 4) |
         (ulong)*(byte *)(param_1 + 5) << 8 |
         (ulong)*(byte *)(param_1 + 6) << 0x10 |
         (ulong)*(byte *)(param_1 + 8) << 0x18 |
         (ulong)*(byte *)(param_1 + 9) << 0x20 | (ulong)*(byte *)(param_1 + 10) << 0x28;
}

