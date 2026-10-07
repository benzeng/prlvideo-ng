
undefined1 FUN_10029a590(undefined8 param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_10029a130(param_1);
  QMutex::unlock();
  return uVar1;
}

