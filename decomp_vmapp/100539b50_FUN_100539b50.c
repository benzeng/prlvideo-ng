
undefined8 FUN_100539b50(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = QSemaphore::tryAcquire((int)param_1 + 0x10);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    LOCK();
    lVar1 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = 0;
    UNLOCK();
    *param_2 = lVar1;
    uVar3 = CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 != 0);
  }
  return uVar3;
}

