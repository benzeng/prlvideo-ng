
undefined4 FUN_100465be0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) - 1;
  if (uVar1 < 4) {
    return *(undefined4 *)(&DAT_100b431b8 + (long)(int)uVar1 * 4);
  }
  return 0xfffffd66;
}

