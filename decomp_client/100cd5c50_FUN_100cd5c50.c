
bool FUN_100cd5c50(long *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  QMutex::lock();
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 3) = param_3;
  }
  QMutex::unlock();
  return cVar1 != '\0';
}

