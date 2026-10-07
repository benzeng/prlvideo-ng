
undefined4 FUN_1002a03a0(long param_1,char param_2)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = DAT_100b39678;
  if (param_2 == '\0') {
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0xb8))();
    }
  }
  else if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xb8))();
  }
  QMutex::unlock();
  return uVar1;
}

