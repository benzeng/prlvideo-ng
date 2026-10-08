
long FUN_100ae5500(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  uVar1 = FUN_100ae5060();
  return (ulong)uVar1 + lVar2;
}

