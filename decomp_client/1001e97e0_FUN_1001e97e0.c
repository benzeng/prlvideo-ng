
void FUN_1001e97e0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 == 0) {
    return;
  }
  bVar5 = param_3;
  if (param_3 == 0) {
    QMutex::lock();
    if (DAT_1023108a8 == 0) {
      QMutex::unlock();
      goto LAB_1001e988c;
    }
    DAT_1023108b0 = DAT_1023108b0 + 1;
    QMutex::unlock();
    cVar4 = FUN_1000a6420();
    bVar5 = 1;
    if (cVar4 != '\0') {
      bVar5 = FUN_1000ad0b0();
      bVar5 = bVar5 ^ 1;
    }
    FUN_100055290(&DAT_102310898);
  }
  if (bVar5 != 0) {
    uVar1 = FUN_10018c280(lVar2);
    uVar1 = FUN_100319c90(uVar1);
    FUN_10033b0e0(uVar1,param_3);
  }
LAB_1001e988c:
  QMutex::lock();
  lVar3 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
  }
  else {
    DAT_1023108b0 = DAT_1023108b0 + 1;
    QMutex::unlock();
    FUN_1000ae7c0(param_2,param_3);
  }
  uVar1 = FUN_10018c280(lVar2);
  uVar1 = FUN_100319c70(uVar1);
  FUN_1003302c0(uVar1,param_3);
  uVar1 = FUN_10018c280(lVar2);
  uVar1 = FUN_100319d00(uVar1);
  FUN_100353520(uVar1,param_3);
  if (lVar3 == 0) {
    return;
  }
  FUN_100055290(&DAT_102310898);
  return;
}

