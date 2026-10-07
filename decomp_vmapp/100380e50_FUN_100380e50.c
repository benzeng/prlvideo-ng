
undefined4 FUN_100380e50(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 0x1b;
  if ((uVar1 < 0x3c) && ((0xc20000000000001U >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    return 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),*(int *)(param_1 + 0x14) != 0x806f);
}

