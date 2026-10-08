
undefined1 FUN_100331280(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  uVar2 = 1;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xb0))();
  }
  QMutex::unlock();
  return uVar2;
}

