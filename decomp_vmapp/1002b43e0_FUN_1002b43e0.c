
void FUN_1002b43e0(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(long *)(param_1[4] + 0xf0) = *(long *)(param_1[4] + 0xf0) + 1;
  QMutex::lock();
  iVar1 = FUN_10061bbc0(param_1 + 0xd,param_2,param_3);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,iVar1,param_3);
  }
  QMutex::unlock();
  return;
}

