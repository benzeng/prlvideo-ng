
undefined8 FUN_100468220(long param_1,long param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = 0xffffffff;
  if (*(long *)(param_1 + 0x48) == param_2) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar1 = 0xf0000000;
  }
  QMutex::unlock();
  return uVar1;
}

