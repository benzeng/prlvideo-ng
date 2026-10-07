
void FUN_100432ba0(long param_1,undefined8 param_2)

{
  QMutex::lock();
  *(undefined8 *)(param_1 + 0x4278) = param_2;
  QMutex::unlock();
  FUN_100439610(param_1,param_2);
  return;
}

