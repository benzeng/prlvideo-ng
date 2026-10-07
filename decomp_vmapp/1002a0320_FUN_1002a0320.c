
void FUN_1002a0320(long param_1)

{
  QMutex::lock();
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 200))();
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 200))();
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  QMutex::unlock();
  return;
}

