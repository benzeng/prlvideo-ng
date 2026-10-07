
void FUN_100519700(long param_1)

{
  QMutex::lock();
  if (*(int *)(param_1 + 0x28) != 0) {
    QWaitCondition::wait((QMutex *)(param_1 + 0x38),param_1 + 0x30);
  }
  QMutex::unlock();
  return;
}

