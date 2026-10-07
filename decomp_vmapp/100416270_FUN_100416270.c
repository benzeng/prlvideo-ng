
bool FUN_100416270(long param_1)

{
  QMutex::lock();
  QThread::start(param_1,7);
  QWaitCondition::wait((QMutex *)(param_1 + 0x620),param_1 + 0x618);
  QMutex::unlock();
  return *(int *)(param_1 + 0x610) == 0;
}

