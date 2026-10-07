
void FUN_100299e70(long param_1)

{
  QMutex::lock();
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  }
  QMutex::unlock();
  return;
}

