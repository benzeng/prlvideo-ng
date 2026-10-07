
undefined4 FUN_1004309f0(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x430c);
  QMutex::unlock();
  return uVar1;
}

