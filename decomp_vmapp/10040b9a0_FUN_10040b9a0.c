
undefined1 FUN_10040b9a0(long param_1,undefined8 param_2,char param_3)

{
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  
  local_38 = param_2;
  FUN_1006d5830(param_1 + 0x10);
  QMutex::lock();
  if (param_3 == '\0') {
    FUN_10040bfc0(param_1 + 0x80,&local_38,local_28);
  }
  else {
    FUN_10040bfc0(param_1 + 0x78,&local_38,local_30);
  }
  QMutex::unlock();
  return 1;
}

