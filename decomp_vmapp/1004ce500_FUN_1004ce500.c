
undefined8 FUN_1004ce500(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_20;
  
  lVar1 = *(long *)(*param_1 + 0xb0);
  local_20 = param_2;
  if (lVar1 != 0) {
    QMutex::lock();
  }
  FUN_100036f00(lVar1 + 8,&local_20);
  if (lVar1 != 0) {
    QMutex::unlock();
  }
  return 0xffffffff;
}

