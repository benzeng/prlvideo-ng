
undefined1
FUN_10040bc40(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_10040bb30(param_1,param_2,param_3,param_4);
  QMutex::unlock();
  return uVar1;
}

