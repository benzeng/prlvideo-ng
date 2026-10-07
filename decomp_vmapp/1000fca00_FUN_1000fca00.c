
long * FUN_1000fca00(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_1;
}

