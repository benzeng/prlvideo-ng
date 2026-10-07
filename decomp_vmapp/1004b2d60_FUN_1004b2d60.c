
undefined8 FUN_1004b2d60(long param_1,long param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined1 local_28 [8];
  long local_20;
  
  uVar1 = 0xf0000002;
  if (param_2 != 0) {
    puVar2 = (uint *)FUN_1002a6010(param_2);
    if ((*puVar2 < 0x11) && ((0x11860U >> (*puVar2 & 0x1f) & 1) != 0)) {
      uVar1 = FUN_1004af760(*(undefined8 *)(param_1 + 0x10),param_2);
      return uVar1;
    }
    local_28[0] = 1;
    local_20 = param_2;
    QMutex::lock();
    FUN_1004b3810(param_1 + 0x18,local_28);
    QMutex::unlock();
    QSemaphore::release((int)param_1 + 0x20);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

