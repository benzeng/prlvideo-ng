
void FUN_100acb700(long param_1,undefined8 param_2)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
    FUN_100ad9f20(*(long *)(param_1 + 0x78) + 0x9c0,param_2);
    return;
  }
  return;
}

