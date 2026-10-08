
void FUN_1001e4550(long param_1,undefined1 param_2)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x18) = param_2;
  QMutex::unlock();
  return;
}

