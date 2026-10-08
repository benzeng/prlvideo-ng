
undefined4 FUN_100aa1c00(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = QThread::currentThread();
  if (uVar1 == param_1) {
    QMutex::lock();
    FUN_100aa2110(param_1);
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
  }
  else {
    QMutex::lock();
    QMutex::lock();
    if (*(int *)(param_1 + 0xf0) == 0) {
      QThread::wait(param_1);
    }
    else if (*(int *)(param_1 + 0xf0) == 1) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x108),param_1 + 0x110);
      QThread::wait(param_1);
    }
    else {
      FUN_100aa2110(param_1);
      QWaitCondition::wait((QMutex *)(param_1 + 0x108),param_1 + 0x110);
      QThread::wait(param_1);
    }
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
    QMutex::unlock();
  }
  QMutex::unlock();
  return uVar2;
}

