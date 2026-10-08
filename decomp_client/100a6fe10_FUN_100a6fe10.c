
undefined4 FUN_100a6fe10(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 4);
  QMutex::unlock();
  return uVar1;
}

