
void FUN_100519770(long param_1)

{
  QMutex::lock();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  QMutex::unlock();
  return;
}

