
void FUN_1000a94a0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (*(long *)(param_1 + 0x1990 + lVar2 * 8) != 0) {
      QMutex::lock();
      iVar1 = CVmDevice::getConnected();
      QMutex::unlock();
      if (iVar1 == 1) {
        FUN_100276910(*(undefined8 *)(param_1 + 0x1990 + lVar2 * 8));
      }
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < 0x10);
  return;
}

