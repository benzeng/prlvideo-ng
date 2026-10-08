
void FUN_100331680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x128))(plVar1,param_3);
  }
  QMutex::unlock();
  return;
}

