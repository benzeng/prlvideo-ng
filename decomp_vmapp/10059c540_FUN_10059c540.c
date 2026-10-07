
undefined8 FUN_10059c540(QString *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = DAT_1011bc6c0;
  uVar1 = 0x80021011;
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    if ((DAT_1011bc6c0 != 0) && ((DAT_1011bc6c0 & 1) == 0)) {
      QReadWriteLock::lockForWrite();
      uVar2 = uVar2 | 1;
    }
    QString::operator=(DAT_1011bc6b8,param_1);
    uVar1 = 0;
    if ((uVar2 & 1) != 0) {
      QReadWriteLock::unlock();
    }
  }
  return uVar1;
}

