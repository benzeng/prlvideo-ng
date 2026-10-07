
undefined8 FUN_100474280(undefined8 param_1,long param_2)

{
  QMutex::lock();
  FUN_1004786e0(param_1,param_2 + 0x18);
  QMutex::unlock();
  return param_1;
}

