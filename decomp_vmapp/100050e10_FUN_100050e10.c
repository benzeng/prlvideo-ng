
long * FUN_100050e10(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  QMutex::lock();
  FUN_100058500(param_2,param_3);
  lVar1 = *param_3;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  QMutex::unlock();
  return param_1;
}

