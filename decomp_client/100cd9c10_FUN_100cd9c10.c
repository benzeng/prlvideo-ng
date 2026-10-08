
void FUN_100cd9c10(long param_1,undefined4 param_2,undefined1 param_3)

{
  QMutex::lock();
  if (*(char *)(param_1 + 0x44c) != '\0') {
    FUN_100cd3e40(param_1,param_2,param_3);
  }
  QMutex::unlock();
  return;
}

