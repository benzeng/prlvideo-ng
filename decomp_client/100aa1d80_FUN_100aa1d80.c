
long * FUN_100aa1d80(long *param_1,long param_2)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = *(long *)(param_2 + 200);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  QMutex::unlock();
  return param_1;
}

