
void FUN_1000f8920(long param_1,undefined4 param_2)

{
  QMutex::lock();
  if (*(int *)(param_1 + 0x5c) == 1) {
    *(undefined4 *)(param_1 + 0x58) = param_2;
    *(undefined4 *)(param_1 + 0x5c) = 2;
    QThread::wait(param_1 + 0x18U);
    QThread::start(param_1 + 0x18U,7);
  }
  else {
    FUN_1008e3970("","vm",0,"Collection is already started");
  }
  QMutex::unlock();
  return;
}

