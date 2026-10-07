
undefined4 FUN_100430a30(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x4310);
  QMutex::unlock();
  return uVar1;
}

