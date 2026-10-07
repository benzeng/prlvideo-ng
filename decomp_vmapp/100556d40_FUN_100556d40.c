
undefined1 FUN_100556d40(undefined8 param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100555350(param_1);
  QMutex::unlock();
  return uVar1;
}

