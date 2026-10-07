
long * FUN_1007b9f50(long *param_1,long param_2)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = *(long *)(param_2 + 0xe8);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  QMutex::unlock();
  return param_1;
}

