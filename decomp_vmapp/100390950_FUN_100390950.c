
uint FUN_100390950(long param_1)

{
  if (*(byte *)(param_1 + 4) < 0x12) {
    return 0x5f10U >> (*(byte *)(param_1 + 4) & 0x1f) & 1;
  }
  return 0;
}

