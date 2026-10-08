
void FUN_100b598c0(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined1 local_28 [8];
  
  local_30 = param_2;
  FUN_100b5a5e0(param_1 + 0x10);
  QMutex::lock();
  FUN_100b5a830(param_1 + 0x38,&local_30,local_28);
  QMutex::unlock();
  return;
}

