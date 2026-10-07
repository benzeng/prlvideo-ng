
void FUN_100061110(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = param_1 + 0x50;
  if ((uVar2 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar2 = uVar2 | 1;
  }
  if (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x14)) {
    cVar1 = FUN_1000611c0(param_1,1);
    if (cVar1 != '\0') {
      QObject::killTimer((int)param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  QReadWriteLock::unlock();
  return;
}

