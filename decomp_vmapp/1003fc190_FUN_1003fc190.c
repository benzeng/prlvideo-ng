
void FUN_1003fc190(long param_1)

{
  QMutex::lock();
  if (*(char *)(param_1 + 0x28) == '\0') {
    QThread::start(param_1,7);
  }
  QMutex::unlock();
  return;
}

