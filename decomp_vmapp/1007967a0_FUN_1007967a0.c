
undefined1 FUN_1007967a0(long param_1)

{
  QMutex::lock();
  FUN_100495c00(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 10;
  QMutex::unlock();
  return 1;
}

