
undefined8 FUN_1004b2df0(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_28[0] = param_2;
  local_20 = param_3;
  QMutex::lock();
  FUN_1004b3810(param_1 + 0x18,local_28);
  QMutex::unlock();
  return 0xffffffff;
}

