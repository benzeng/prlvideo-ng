
undefined4 FUN_100430230(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x42dc);
  QMutex::unlock();
  return uVar1;
}

