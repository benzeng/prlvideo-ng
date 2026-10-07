
undefined4 FUN_100299d00(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = DAT_100b39678;
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x40))();
  }
  QMutex::unlock();
  return uVar1;
}

