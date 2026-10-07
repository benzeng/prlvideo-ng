
undefined8 FUN_100050db0(undefined8 param_1,undefined8 param_2)

{
  QMutex::lock();
  FUN_1000597d0(param_1,param_2);
  QMutex::unlock();
  return param_1;
}

