
long * FUN_1008e4af0(long *param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = DAT_1011ccc20;
  *param_1 = DAT_1011ccc20;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

