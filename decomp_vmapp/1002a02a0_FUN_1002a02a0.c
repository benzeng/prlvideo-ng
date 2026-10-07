
void FUN_1002a02a0(long param_1)

{
  QMutex::lock();
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0xc0))();
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0xc0))();
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  QMutex::unlock();
  return;
}

