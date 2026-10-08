
void FUN_100acb760(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
    FUN_100ad9f30(*(long *)(param_1 + 0x78) + 0x9c0);
    return;
  }
  return;
}

