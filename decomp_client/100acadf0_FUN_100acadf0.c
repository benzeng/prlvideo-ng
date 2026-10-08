
bool FUN_100acadf0(long param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x58);
  }
  else {
    QMutex::lock();
    iVar1 = *(int *)(param_1 + 0x58);
    QMutex::unlock();
  }
  return iVar1 == 1;
}

