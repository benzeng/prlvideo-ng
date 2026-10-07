
void FUN_100048080(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 1) {
    QMutex::lock();
    *(undefined4 *)(param_1 + 0x120) = 0xf0000025;
    QMutex::unlock();
    FUN_100040d30(param_1 + 0x68);
    return;
  }
  if (param_2 == 2) {
    QMutex::lock();
    *(undefined4 *)(param_1 + 0x120) = 0;
    QMutex::unlock();
    uVar1 = param_1 + 0xe8;
    if ((uVar1 & 1) == 0) {
      QReadWriteLock::lockForWrite();
      uVar1 = uVar1 | 1;
    }
    *(undefined1 *)(param_1 + 0xfc) = 1;
    if ((uVar1 & 1) != 0) {
      QReadWriteLock::unlock();
      return;
    }
  }
  else if (param_2 == 3) {
    FUN_100048140(param_1);
    return;
  }
  return;
}

