
undefined4 FUN_1004769c0(undefined8 param_1)

{
  undefined4 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100476a20(param_1);
  QMutex::unlock();
  return uVar1;
}

