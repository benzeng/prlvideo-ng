
undefined4 FUN_100cd5670(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  QMutex::unlock();
  return uVar1;
}

