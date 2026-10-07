
long FUN_10081c810(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x310);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 0x2a0);
  }
  return lVar1;
}

