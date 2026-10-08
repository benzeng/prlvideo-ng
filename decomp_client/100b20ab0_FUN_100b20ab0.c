
void FUN_100b20ab0(long param_1)

{
  QMutex::lock();
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    _free(*(void **)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  QMutex::unlock();
  if (*(void **)(param_1 + 0x180a0) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x180a0));
    *(undefined8 *)(param_1 + 0x180a0) = 0;
  }
  *(undefined8 *)(param_1 + 0x180d0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x180a8) = 0;
  *(undefined4 *)(param_1 + 0x180b0) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

