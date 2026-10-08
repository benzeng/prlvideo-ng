
long * FUN_100ab6250(long *param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = DAT_102311840;
  *param_1 = DAT_102311840;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

