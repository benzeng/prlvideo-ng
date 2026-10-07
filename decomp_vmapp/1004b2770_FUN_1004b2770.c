
undefined1 FUN_1004b2770(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  QMutex::lock();
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      QMutex::unlock();
      FUN_1004b7240(*(undefined8 *)(param_1 + 0xf0));
      uVar2 = 1;
      bVar1 = false;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  if (bVar1) {
    QMutex::unlock();
  }
  return uVar2;
}

