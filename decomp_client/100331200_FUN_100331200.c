
void FUN_100331200(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
  }
  QMutex::unlock();
  return;
}

