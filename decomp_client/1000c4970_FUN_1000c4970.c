
void FUN_1000c4970(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
    QMutex::unlock();
    FUN_1000ae810(lVar1,param_1,param_2,param_3,param_4);
    FUN_100055290(&DAT_102310898);
    return;
  }
  QMutex::unlock();
  return;
}

