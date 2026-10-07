
ulong FUN_1002987c0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 9);
  if (*(byte *)(param_1 + 8) == 0 && bVar2 == 0) {
    if (*(char *)(param_1 + 10) == '\0') {
      uVar1 = ((ulong)*(byte *)(param_1 + 7) & 0xf) << 0x18;
      goto LAB_1002987f2;
    }
    bVar2 = 0;
  }
  uVar1 = (ulong)*(byte *)(param_1 + 8) << 0x18 |
          (ulong)bVar2 << 0x20 | (ulong)*(byte *)(param_1 + 10) << 0x28;
LAB_1002987f2:
  return (ulong)*(byte *)(param_1 + 4) |
         (ulong)*(byte *)(param_1 + 5) << 8 | (ulong)*(byte *)(param_1 + 6) << 0x10 | uVar1;
}

