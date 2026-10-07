
long FUN_10080cee0(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(long *)(param_1 + 0x288), lVar1 == 0 &&
      ((*(long *)(param_1 + 0x170) == 0 ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 0x2d8), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}

