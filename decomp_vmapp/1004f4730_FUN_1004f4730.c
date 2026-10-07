
void FUN_1004f4730(long param_1)

{
  QMutex::lock();
  if (*(char *)(param_1 + 0x20) == '\0') {
    QWaitCondition::wait((QMutex *)(param_1 + 0x18),param_1 + 0x10);
  }
  QMutex::unlock();
  return;
}

