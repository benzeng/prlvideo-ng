
undefined1 FUN_1004ec360(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  QMutex::lock();
  uVar2 = 1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar1 = _pipe((int)param_1 + 0x10);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      QThread::start(param_1,7);
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  QMutex::unlock();
  return uVar2;
}

