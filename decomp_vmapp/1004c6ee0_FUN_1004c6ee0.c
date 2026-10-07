
void FUN_1004c6ee0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  uVar2 = lVar1 + 0x80;
  if ((uVar2 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar2 = uVar2 | 1;
  }
  *(undefined1 *)(lVar1 + 0x94) = 1;
  if ((uVar2 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

