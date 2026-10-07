
long FUN_10081c7b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2d8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 0x268);
  }
  return lVar1;
}

