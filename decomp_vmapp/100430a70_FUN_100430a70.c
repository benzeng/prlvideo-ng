
void FUN_100430a70(long param_1)

{
  QMutex::lock();
  *(int *)(param_1 + 0x430c) = *(int *)(param_1 + 0x430c) + 1;
  FUN_100431250(param_1,1);
  QMutex::unlock();
  return;
}

