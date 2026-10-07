
undefined1 FUN_100539ae0(int *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    LOCK();
    lVar1 = *(long *)(param_1 + 2);
    if (lVar1 == 0) {
      *(long *)(param_1 + 2) = param_2;
      lVar1 = 0;
    }
    UNLOCK();
    if (lVar1 == 0) {
      QSemaphore::release((int)param_1 + 0x10);
      uVar2 = 1;
    }
  }
  return uVar2;
}

