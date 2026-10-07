
void FUN_100107cd0(undefined8 param_1,undefined8 param_2)

{
  QMutex::lock();
  FUN_100108040(param_1,param_2);
  QMutex::unlock();
  return;
}

