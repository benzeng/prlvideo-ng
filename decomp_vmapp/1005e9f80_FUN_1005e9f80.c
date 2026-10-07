
undefined4 FUN_1005e9f80(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  QMutex::unlock();
  return uVar1;
}

