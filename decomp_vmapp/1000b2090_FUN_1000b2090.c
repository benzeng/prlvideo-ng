
void FUN_1000b2090(long param_1,byte param_2)

{
  QMutex::lock();
  if (*(char *)(param_1 + 0x109ed) != '\0') {
    FUN_1000b20f0(param_1,param_2 ^ 1);
  }
  QMutex::unlock();
  FUN_10010e360(param_2);
  return;
}

