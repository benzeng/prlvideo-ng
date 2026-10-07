
int FUN_10004bf20(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_30;
  
  local_30 = param_3;
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x130);
  if (iVar1 == param_2) {
    FUN_100036f00(param_1 + 0x140,&local_30);
  }
  QMutex::unlock();
  return iVar1;
}

