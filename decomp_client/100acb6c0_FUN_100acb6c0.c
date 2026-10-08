
bool FUN_100acb6c0(long param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(char *)(param_1 + 0x81) == '\0') {
    QMutex::lock();
    iVar1 = *(int *)(param_1 + 0x58);
    QMutex::unlock();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}

