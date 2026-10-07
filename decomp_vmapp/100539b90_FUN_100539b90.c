
bool FUN_100539b90(int *param_1,long *param_2,int param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 0) {
    cVar2 = QSemaphore::tryAcquire((int)param_1 + 0x10);
    if (cVar2 == '\0') {
      bVar4 = false;
    }
    else {
      LOCK();
      lVar1 = *(long *)(param_1 + 2);
      *(long *)(param_1 + 2) = 0;
      UNLOCK();
      *param_2 = lVar1;
      bVar4 = lVar1 != 0;
    }
    return bVar4;
  }
  iVar3 = (int)param_1 + 0x10;
  while( true ) {
    if (param_3 == 0) {
      QSemaphore::acquire(iVar3);
    }
    else {
      cVar2 = QSemaphore::tryAcquire(iVar3,1);
      if (cVar2 == '\0') {
        if (DAT_1011b55f8 < 1) {
          return false;
        }
        FUN_1008e3970("","InvSharingHost",1,"getting request: timeout");
        return false;
      }
    }
    LOCK();
    lVar1 = *(long *)(param_1 + 2);
    *(long *)(param_1 + 2) = 0;
    UNLOCK();
    *param_2 = lVar1;
    if (lVar1 != 0) break;
    if (*param_1 == 0) {
      return false;
    }
  }
  return true;
}

