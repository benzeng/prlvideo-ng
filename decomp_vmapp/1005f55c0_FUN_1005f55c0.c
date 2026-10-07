
undefined8 FUN_1005f55c0(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  
  local_20 = param_2;
  QMutex::lock();
  FUN_1005f5a10(param_1 + 0x10,&local_20);
  QMutex::unlock();
  return 0;
}

