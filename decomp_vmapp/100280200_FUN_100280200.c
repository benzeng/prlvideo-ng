
void FUN_100280200(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  
  local_20 = param_2;
  QMutex::lock();
  FUN_100041910(param_1 + 0x120,&local_20);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  QMutex::unlock();
  return;
}

