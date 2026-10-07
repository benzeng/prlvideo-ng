
undefined8 FUN_1000459c0(long param_1,long param_2)

{
  QMutex::lock();
  if (*(char *)(param_1 + 0x19a) != '\0') {
    *(undefined1 *)(param_1 + 0x19a) = 0;
    FUN_100042ce0(param_1);
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  QMutex::unlock();
  return 0;
}

