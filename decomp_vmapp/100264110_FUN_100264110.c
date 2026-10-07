
void FUN_100264110(long param_1)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_100269cb0(param_1 + 0xa8,*(long *)(param_1 + 0x90) + 0x14,
                *(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x1c) & *(uint *)(lVar1 + 0x28),0);
  FUN_10025b2f0(param_1 + 0x68,2);
  QMutex::unlock();
  return;
}

