
undefined1 FUN_100cd9c80(long param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x3e1) != '\0') {
    uVar1 = 1;
    if (*(char *)(DAT_102311940 + 0x14) != '\0') goto LAB_100cd9cd2;
    FUN_100cd9290();
    *(undefined1 *)(param_1 + 0x3e1) = 0;
  }
  uVar1 = FUN_100cd91e0();
  *(undefined1 *)(param_1 + 0x3e1) = uVar1;
LAB_100cd9cd2:
  QMutex::unlock();
  return uVar1;
}

