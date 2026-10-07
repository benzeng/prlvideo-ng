
undefined4 FUN_1000a1780(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  QMutex::lock();
  lVar1 = DAT_1011cc7e0;
  if (DAT_1011cc7e0 == 0) {
    QMutex::unlock();
    uVar2 = 0x80034001;
  }
  else {
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    QMutex::unlock();
    uVar2 = FUN_10047eb10(lVar1,param_2);
    FUN_10003b2b0(&DAT_1011cc7d0);
  }
  return uVar2;
}

