
void FUN_10079c8d0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = QThread::currentThread();
  if (uVar1 == param_1) {
    QMutex::lock();
    FUN_10079e6a0(param_1);
  }
  else {
    QMutex::lock();
    QMutex::lock();
    if (*(int *)(param_1 + 0xa8) == 0) {
      QThread::wait(param_1);
    }
    else if (*(int *)(param_1 + 0xa8) == 1) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x90),param_1 + 0x88);
      QThread::wait(param_1);
    }
    else {
      FUN_10079e6a0(param_1);
      QWaitCondition::wait((QMutex *)(param_1 + 0x90),param_1 + 0x88);
      QThread::wait(param_1);
    }
    QMutex::unlock();
  }
  QMutex::unlock();
  return;
}

