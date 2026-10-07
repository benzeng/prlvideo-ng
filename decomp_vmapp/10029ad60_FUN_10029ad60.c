
void FUN_10029ad60(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  QMutex::unlock();
  return;
}

