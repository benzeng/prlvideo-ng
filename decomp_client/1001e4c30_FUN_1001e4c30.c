
undefined1 FUN_1001e4c30(long param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x18);
  QMutex::unlock();
  return uVar1;
}

