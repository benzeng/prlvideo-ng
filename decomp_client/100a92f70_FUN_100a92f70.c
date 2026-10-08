
void FUN_100a92f70(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    }
    FUN_100a77260(uVar2);
    return;
  }
  uVar1 = QThread::currentThread();
  if (uVar1 == param_1) {
    QMutex::lock();
    FUN_100a959c0(param_1);
  }
  else {
    QMutex::lock();
    QMutex::lock();
    if (*(int *)(param_1 + 0x68) == 0) {
      QThread::wait(param_1);
    }
    else if (*(int *)(param_1 + 0x68) == 1) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x60),param_1 + 0x58);
      QThread::wait(param_1);
    }
    else {
      FUN_100a959c0(param_1);
      QWaitCondition::wait((QMutex *)(param_1 + 0x60),param_1 + 0x58);
      QThread::wait(param_1);
    }
    QMutex::unlock();
  }
  QMutex::unlock();
  return;
}

