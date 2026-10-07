
undefined8 FUN_1004b2e40(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  long local_20;
  
  uVar1 = 0xf0000002;
  if (param_2 != 0) {
    local_28[0] = 2;
    local_20 = param_2;
    QMutex::lock();
    FUN_1004b3810(param_1 + 0x18,local_28);
    QMutex::unlock();
    QSemaphore::release((int)param_1 + 0x20);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

