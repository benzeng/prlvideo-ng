
undefined4 FUN_100476b40(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100476bb0(param_1,param_2);
  QMutex::unlock();
  return uVar1;
}

