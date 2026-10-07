
undefined1 FUN_10055bf10(long param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100555350(param_1);
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  QMutex::unlock();
  return uVar1;
}

