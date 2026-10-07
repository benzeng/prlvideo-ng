
undefined4 FUN_1007965e0(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 4);
  QMutex::unlock();
  return uVar1;
}

