
void FUN_1002a2df0(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x40) = 1;
  QMutex::lock();
  iVar1 = CVmDevice::getConnected();
  QMutex::unlock();
  if (iVar1 == 1) {
    FUN_100299500(*(undefined8 *)(param_1 + 0x38));
    FUN_100299500(*(undefined8 *)(param_1 + 0x30));
  }
  QMutex::unlock();
  return;
}

