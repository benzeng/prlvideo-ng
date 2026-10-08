
void FUN_100db8810(void)

{
  bool bVar1;
  int iVar2;
  
  LOCK();
  iVar2 = DAT_1023191c8 + -1;
  UNLOCK();
  bVar1 = DAT_1023191c8 < 1;
  DAT_1023191c8 = iVar2;
  if (bVar1) {
    if (DAT_1023191c0 != (void *)0x0) {
      operator_delete(DAT_1023191c0);
    }
    DAT_1023191c0 = (void *)0x0;
  }
  return;
}

