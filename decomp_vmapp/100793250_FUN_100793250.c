
bool FUN_100793250(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForRead();
    uVar2 = param_1 | 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return iVar1 == 0;
}

