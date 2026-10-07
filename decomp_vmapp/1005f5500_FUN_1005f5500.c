
undefined8 FUN_1005f5500(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  
  QMutex::lock();
  local_28 = 0;
  local_30 = param_2;
  FUN_1005f5910(param_1 + 0x10,&local_30);
  QMutex::unlock();
  return 0;
}

