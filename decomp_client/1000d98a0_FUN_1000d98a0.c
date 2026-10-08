
void FUN_1000d98a0(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = FUN_10004bff0(*(undefined8 *)(param_1 + 0xf0));
  if (iVar1 == 0) {
    QMutex::unlock();
    return;
  }
  QMutex::unlock();
  FUN_100d6fb50(&DAT_102311ec0);
  return;
}

