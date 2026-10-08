
void FUN_100331700(long param_1)

{
  long *plVar1;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x130))();
  }
  QMutex::unlock();
  return;
}

