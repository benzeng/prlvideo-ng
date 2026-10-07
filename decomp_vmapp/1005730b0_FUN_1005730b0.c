
undefined1 FUN_1005730b0(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar4 = param_1 + 0x1198;
  if ((uVar4 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar4 = uVar4 | 1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1128);
  if (puVar2 == *(undefined8 **)(param_1 + 0x1130)) {
    uVar3 = 0;
  }
  else {
    do {
      cVar1 = FUN_100594bd0(*puVar2);
      uVar3 = 1;
      if (cVar1 != '\0') goto LAB_100573114;
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x1130));
    uVar3 = 0;
  }
LAB_100573114:
  if ((uVar4 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar3;
}

