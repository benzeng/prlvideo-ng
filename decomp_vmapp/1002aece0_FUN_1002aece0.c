
void FUN_1002aece0(long param_1)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  QThread::start(*(undefined8 *)(param_1 + 0x8a0),7);
  QWaitCondition::wait((QMutex *)(param_1 + 0x890),param_1 + 0x878);
  QMutex::unlock();
  return;
}

