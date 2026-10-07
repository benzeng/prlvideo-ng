
undefined4 FUN_1007bb2b0(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x30) == 2) && (*(long *)(param_1 + 0x38) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x10) != 0)) {
    uVar1 = FUN_10079caa0();
  }
  QMutex::unlock();
  return uVar1;
}

