
void FUN_1006d4b10(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined1 local_28 [8];
  
  local_30 = param_2;
  FUN_1006d5830(param_1 + 0x10);
  QMutex::lock();
  FUN_1006d5a80(param_1 + 0x38,&local_30,local_28);
  QMutex::unlock();
  return;
}

