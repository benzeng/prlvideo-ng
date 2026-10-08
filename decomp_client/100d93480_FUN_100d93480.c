
undefined8 * FUN_100d93480(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_102318988 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_102318988);
    if (iVar2 != 0) {
      DAT_102318980 = (int *)QString::fromAscii_helper("/usr/lib/parallels/extensions",0x1d);
      ___cxa_atexit(FUN_100054e40,&DAT_102318980,0x100000000);
      ___cxa_guard_release(&DAT_102318988);
    }
  }
  piVar1 = DAT_102318980;
  *param_1 = DAT_102318980;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

