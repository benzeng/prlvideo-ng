
undefined8 FUN_100a71090(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *param_2;
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  uVar4 = lVar3 + 0x10;
  if ((uVar4 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar4 = uVar4 | 1;
    lVar2 = *param_2;
  }
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x28);
  if ((uVar4 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar1;
}

