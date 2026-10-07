
void FUN_10008fde0(long param_1)

{
  QMutex::lock();
  if (*(char *)(param_1 + 0x5c) == '\0') {
    QWaitCondition::wait((QMutex *)(param_1 + 0xb8),param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  QMutex::unlock();
  return;
}

