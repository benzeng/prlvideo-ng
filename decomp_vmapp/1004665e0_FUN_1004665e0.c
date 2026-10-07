
bool FUN_1004665e0(long param_1)

{
  int iVar1;
  undefined1 local_24 [4];
  
  QMutex::lock();
  iVar1 = FUN_100466c80(param_1 + 8,local_24);
  QMutex::unlock();
  return iVar1 == 1;
}

