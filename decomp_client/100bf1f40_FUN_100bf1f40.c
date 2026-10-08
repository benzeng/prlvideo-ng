
long FUN_100bf1f40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 0x260);
  }
  return lVar1;
}

