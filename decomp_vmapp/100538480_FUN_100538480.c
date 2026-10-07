
void FUN_100538480(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = lVar1 + 0x80;
  if ((uVar2 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar2 = uVar2 | 1;
  }
  *(undefined1 *)(lVar1 + 0x94) = 1;
  if ((uVar2 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  FUN_1005397e0(*(undefined8 *)(param_1 + 0x38));
  if (DAT_1011b55f8 < 2) {
    return;
  }
  FUN_1008e3970("","InvSharingHost",2,"inversed sharing: start requested");
  return;
}

