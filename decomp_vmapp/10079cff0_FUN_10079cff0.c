
undefined4 FUN_10079cff0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  QMutex::lock();
  lVar1 = QThread::currentThread();
  if ((lVar1 == param_1) || (uVar2 = 0, *(int *)(param_1 + 0xa0) == 1)) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  QMutex::unlock();
  return uVar2;
}

