
undefined8 * FUN_1006eb040(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_1011bd278 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1011bd278);
    if (iVar2 != 0) {
      DAT_1011bd270 = (int *)QString::fromAscii_helper("/usr/lib/parallels/extensions",0x1d);
      ___cxa_atexit(FUN_10002f530,&DAT_1011bd270,0x100000000);
      ___cxa_guard_release(&DAT_1011bd278);
    }
  }
  piVar1 = DAT_1011bd270;
  *param_1 = DAT_1011bd270;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

