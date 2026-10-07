
undefined1 FUN_10040ba40(long param_1,undefined8 param_2,char param_3)

{
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_1006d5830(param_1 + 0x10);
  QMutex::lock();
  if (param_3 == '\0') {
    FUN_10040c170(param_1 + 0x80,&local_28);
  }
  else {
    FUN_10040c170(param_1 + 0x78,&local_28);
  }
  QMutex::unlock();
  return 1;
}

