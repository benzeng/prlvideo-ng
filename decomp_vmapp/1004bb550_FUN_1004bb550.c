
void FUN_1004bb550(long param_1,undefined4 param_2,undefined4 param_3)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  QMutex::unlock();
  return;
}

