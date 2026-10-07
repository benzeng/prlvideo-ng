
undefined8 FUN_100108460(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100107f10(param_1,param_2);
  QMutex::unlock();
  return uVar1;
}

