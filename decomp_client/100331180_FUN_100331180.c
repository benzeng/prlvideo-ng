
undefined8 FUN_100331180(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  uVar2 = DAT_100e11050;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xe8))();
  }
  QMutex::unlock();
  return uVar2;
}

