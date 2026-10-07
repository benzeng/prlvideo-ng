
undefined4 FUN_1007b90b0(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x14);
  QMutex::unlock();
  return uVar1;
}

