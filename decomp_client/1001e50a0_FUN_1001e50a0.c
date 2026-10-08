
void FUN_1001e50a0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_2c;
  
  local_2c = param_2;
  QMutex::lock();
  puVar1 = (undefined4 *)FUN_1001e5930(param_1 + 2,&local_2c);
  *puVar1 = param_3;
  FUN_10080ad20(*param_1,param_2,param_3);
  QMutex::unlock();
  return;
}

