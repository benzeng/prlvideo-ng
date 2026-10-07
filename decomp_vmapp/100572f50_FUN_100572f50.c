
int FUN_100572f50(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_1 + 0x1198;
  if ((uVar3 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar3 = uVar3 | 1;
  }
  iVar1 = 0;
  for (puVar2 = *(undefined8 **)(param_1 + 0x1128); puVar2 != *(undefined8 **)(param_1 + 0x1130);
      puVar2 = puVar2 + 1) {
    iVar1 = FUN_100594b10(*puVar2);
    if (iVar1 < 0) break;
  }
  if ((uVar3 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return iVar1;
}

