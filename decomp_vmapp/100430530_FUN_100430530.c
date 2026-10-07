
void FUN_100430530(long param_1,undefined8 param_2)

{
  QMutex::lock();
  *(undefined8 *)(param_1 + 0x42e8) = param_2;
  QMutex::unlock();
  return;
}

