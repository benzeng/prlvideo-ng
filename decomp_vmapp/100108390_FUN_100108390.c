
void FUN_100108390(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  long local_30;
  undefined4 local_28;
  
  QMutex::lock();
  lVar1 = FUN_100107f10(param_1,param_2);
  QMutex::unlock();
  local_28 = 0;
  local_38 = param_1;
  local_30 = lVar1;
  QMutex::lock();
  if (*(char *)(lVar1 + 0x15) != '\0') {
    FUN_100107b40(lVar1);
  }
  QMutex::unlock();
  local_28 = 1;
  FUN_100107c30(&local_38);
  return;
}

