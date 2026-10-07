
void FUN_1002a0440(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  QMutex::lock();
  FUN_1002a04a0(param_1,param_2,param_3);
  QMutex::unlock();
  return;
}

