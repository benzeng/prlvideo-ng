
void FUN_100299e00(long param_1)

{
  QMutex::lock();
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x28))();
  }
  QMutex::unlock();
  return;
}

