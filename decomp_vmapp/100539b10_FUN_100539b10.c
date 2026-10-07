
bool FUN_100539b10(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  cVar1 = QSemaphore::tryAcquire((int)param_1 + 0x10);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    LOCK();
    lVar2 = *(long *)(param_1 + 8);
    if (param_2 == lVar2) {
      *(long *)(param_1 + 8) = 0;
      lVar2 = param_2;
    }
    UNLOCK();
    bVar3 = lVar2 == param_2;
  }
  return bVar3;
}

