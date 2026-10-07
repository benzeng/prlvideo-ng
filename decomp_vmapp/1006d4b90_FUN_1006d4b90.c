
void FUN_1006d4b90(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_1006d5830(param_1 + 0x10);
  QMutex::lock();
  FUN_1006d5c10(param_1 + 0x38,&local_28);
  QMutex::unlock();
  return;
}

