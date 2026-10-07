
ulong FUN_1002d6d30(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 0x30) + 10);
  }
  return uVar1;
}

