
long FUN_100599ef0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10);
  lVar2 = 0;
  if ((lVar1 != 0) && (lVar2 = 0, (*(byte *)(*(long *)(lVar1 + 8) + 0x20) & 1) != 0)) {
    lVar2 = lVar1;
  }
  return lVar2;
}

