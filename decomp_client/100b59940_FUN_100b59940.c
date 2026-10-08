
void FUN_100b59940(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_100b5a5e0(param_1 + 0x10);
  QMutex::lock();
  FUN_100b5a9c0(param_1 + 0x38,&local_28);
  QMutex::unlock();
  return;
}

