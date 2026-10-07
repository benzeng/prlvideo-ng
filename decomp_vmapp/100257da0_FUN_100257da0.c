
void FUN_100257da0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = FUN_1007da300("devices.all.prio",6);
  FUN_100257730(param_1 + 1,uVar1);
  lVar2 = QThread::currentThreadId();
  param_1[7] = lVar2;
  FUN_1002ef5b0(param_1[8],1);
  QMutex::lock();
  *(undefined4 *)(param_1 + 6) = 1;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_1002ef5b0(param_1[8],4);
  QMutex::lock();
  QWaitCondition::wakeAll();
  QMutex::unlock();
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}

