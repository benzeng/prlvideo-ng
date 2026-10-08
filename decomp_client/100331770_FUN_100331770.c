
void FUN_100331770(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 local_20 [2];
  
  local_20[0] = param_3;
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,local_20);
  }
  QMutex::unlock();
  return;
}

