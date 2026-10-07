
void FUN_100040d30(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x80;
  if ((uVar1 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar1 = uVar1 | 1;
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  FUN_1000412f0(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  QReadWriteLock::unlock();
  return;
}

