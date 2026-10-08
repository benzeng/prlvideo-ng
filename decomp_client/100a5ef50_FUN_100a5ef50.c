
long FUN_100a5ef50(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_20;
  
  local_20 = param_2;
  if (param_1 != 0) {
    QMutex::lock();
  }
  FUN_100a5f790((long *)(param_1 + 8),&local_20);
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 8);
  if (param_1 != 0) {
    QMutex::unlock();
  }
  return (long)iVar1 - (long)iVar2;
}

