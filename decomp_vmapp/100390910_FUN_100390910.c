
undefined4 FUN_100390910(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 4) < 0x11) {
    return *(undefined4 *)(&DAT_100b3ed10 + (ulong)*(byte *)(param_1 + 4) * 4);
  }
  return 0;
}

