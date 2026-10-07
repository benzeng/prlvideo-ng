
void FUN_10025b310(long param_1)

{
  uint uVar1;
  
  if (*(int *)(DAT_1011c3698 + 0x1948) == 2) {
    return;
  }
  QMutex::lock();
  CVmDevice::setConnected((uint)*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  CVmDevice::setConnected(uVar1);
  FUN_10025b3c0();
  QMutex::unlock();
  return;
}

