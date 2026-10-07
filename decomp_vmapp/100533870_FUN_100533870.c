
void FUN_100533870(long param_1,undefined8 param_2)

{
  QMutex::lock();
  *(undefined8 *)(param_1 + 0x18) = param_2;
  QMutex::unlock();
  return;
}

