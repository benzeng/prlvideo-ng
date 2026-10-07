
uint FUN_10003c3b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  local_28 = param_2;
  QMutex::lock();
  iVar1 = FUN_100036ff0(param_1 + 0x30,&local_28);
  QMutex::unlock();
  return -(uint)(iVar1 == 0) | 0xf0000000;
}

