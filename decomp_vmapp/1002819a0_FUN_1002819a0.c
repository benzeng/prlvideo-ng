
undefined4 FUN_1002819a0(long param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_10026c890(param_1 + 0x138);
  QMutex::unlock();
  return uVar1;
}

