
undefined1 FUN_100476e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100476f00(param_1,param_2,param_3);
  QMutex::unlock();
  return uVar1;
}

