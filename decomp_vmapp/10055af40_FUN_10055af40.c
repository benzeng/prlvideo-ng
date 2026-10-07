
void FUN_10055af40(long param_1)

{
  QMutex::lock();
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  QMutex::unlock();
  return;
}

