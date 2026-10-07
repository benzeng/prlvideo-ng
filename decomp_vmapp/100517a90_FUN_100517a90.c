
undefined8 FUN_100517a90(long param_1,long param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = 0xffffffff;
  if (*(long *)(*(long *)(param_1 + 0x68) + 0x28) == param_2) {
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28) = 0;
    uVar1 = 0xf0000000;
  }
  QMutex::unlock();
  return uVar1;
}

