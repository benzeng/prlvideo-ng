
void FUN_1004b6c40(long param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_24 = param_2;
  QMutex::lock();
  FUN_100528210(*(undefined8 *)(param_1 + 0x10),&local_28);
  QMutex::unlock();
  return;
}

