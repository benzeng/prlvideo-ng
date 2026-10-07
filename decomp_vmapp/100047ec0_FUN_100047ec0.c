
int FUN_100047ec0(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  QMutex::lock();
  iVar3 = *(int *)(param_1 + 0x120);
  if (iVar3 == 0) {
    bVar2 = false;
    QMutex::unlock();
    cVar1 = FUN_100041750(param_1 + 0x68,param_2);
    iVar3 = -0xfffffe4;
    if (cVar1 != '\0') {
      iVar3 = -1;
    }
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    QMutex::unlock();
  }
  return iVar3;
}

