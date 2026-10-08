
undefined1 FUN_100a6ffd0(long param_1)

{
  QMutex::lock();
  FUN_100a71530(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 10;
  QMutex::unlock();
  return 1;
}

