
undefined1 FUN_10059c480(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *local_28;
  undefined4 local_20;
  int local_1c;
  
  uVar3 = DAT_1011bc6c0;
  if ((DAT_1011bc6c0 != 0) && ((DAT_1011bc6c0 & 1) == 0)) {
    QReadWriteLock::lockForRead();
    uVar3 = uVar3 | 1;
  }
  iVar2 = *(int *)(*DAT_1011bc6b8 + 4);
  if (iVar2 == 0) {
    uVar1 = FUN_1006ddaa0(param_1);
  }
  else {
    local_28 = DAT_1011bc6b8;
    local_20 = 0;
    if (DAT_1011bc6b8 == (long *)0x0) {
      iVar2 = 0;
    }
    local_1c = iVar2;
    uVar1 = QString::startsWith(param_1,&local_28,0);
  }
  if ((uVar3 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar1;
}

