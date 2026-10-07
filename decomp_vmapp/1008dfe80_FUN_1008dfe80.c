
long FUN_1008dfe80(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    lVar2 = 0;
    if (lVar1 != 0) {
      *param_1 = *(long *)(lVar1 + 0x10);
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

