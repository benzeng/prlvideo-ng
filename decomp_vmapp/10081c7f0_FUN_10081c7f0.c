
long FUN_10081c7f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2c8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 600);
  }
  return lVar1;
}

