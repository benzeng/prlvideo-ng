
undefined8 FUN_1005eab20(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  QMutex::lock();
  if ((param_2[0xd] == 0) || (lVar1 = *(long *)(param_2[0xd] + 0x10), lVar1 == 0)) {
    FUN_1007d6870(param_1);
  }
  else {
    (**(code **)(*param_2 + 0xb8))(param_1,param_2,lVar1 + 0x218,param_3);
  }
  QMutex::unlock();
  return param_1;
}

