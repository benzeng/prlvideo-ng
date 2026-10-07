
void FUN_100430ae0(long param_1)

{
  QMutex::lock();
  *(int *)(param_1 + 0x4310) = *(int *)(param_1 + 0x4310) + 1;
  FUN_1004312b0(param_1,1);
  QMutex::unlock();
  return;
}

