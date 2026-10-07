
void FUN_1002a0a90(undefined8 param_1,undefined8 param_2)

{
  QMutex::lock();
  FUN_1002a04a0(param_1,param_2,0);
  QMutex::unlock();
  return;
}

