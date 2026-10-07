
void FUN_10070f410(void)

{
  bool bVar1;
  int iVar2;
  
  LOCK();
  iVar2 = DAT_1011bdad8 + -1;
  UNLOCK();
  bVar1 = DAT_1011bdad8 < 1;
  DAT_1011bdad8 = iVar2;
  if (bVar1) {
    if (DAT_1011bdad0 != (void *)0x0) {
      operator_delete(DAT_1011bdad0);
    }
    DAT_1011bdad0 = (void *)0x0;
  }
  return;
}

