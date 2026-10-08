
long FUN_100be4b00(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(long *)(param_1 + 0xc0), lVar1 == 0 &&
      ((*(long *)(param_1 + 0x170) == 0 ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 0x10), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}

