
undefined8 FUN_10053b2c0(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  cVar1 = QSemaphore::tryAcquire((int)param_1 + 0x38);
  if (cVar1 != '\0') {
    LOCK();
    lVar3 = *(long *)(param_1 + 0x30);
    if (param_2 == lVar3) {
      *(long *)(param_1 + 0x30) = 0;
      lVar3 = param_2;
    }
    UNLOCK();
    if (lVar3 == param_2) {
      return 1;
    }
  }
  uVar5 = 0;
  LOCK();
  lVar3 = *(long *)(param_1 + 0x78);
  if (param_2 == lVar3) {
    *(long *)(param_1 + 0x78) = 0;
    lVar3 = param_2;
  }
  UNLOCK();
  if (lVar3 == param_2) {
    uVar5 = 1;
    if (*(int *)(param_1 + 0x68) != -1) {
      iVar2 = _shutdown(*(int *)(param_1 + 0x68),2);
      if ((iVar2 == 0) || (piVar4 = ___error(), *piVar4 != 9)) {
        _close(*(int *)(param_1 + 0x68));
      }
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    }
  }
  return uVar5;
}

