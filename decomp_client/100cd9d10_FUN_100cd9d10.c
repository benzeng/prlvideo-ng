
undefined1 FUN_100cd9d10(long param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = 1;
  if (*(char *)(param_1 + 0x3e1) != '\0') {
    uVar1 = FUN_100cd9290();
    *(undefined1 *)(param_1 + 0x3e1) = uVar1;
  }
  QMutex::unlock();
  return uVar1;
}

