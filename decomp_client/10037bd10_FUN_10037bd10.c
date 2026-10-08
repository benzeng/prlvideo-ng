
undefined4 FUN_10037bd10(void)

{
  int iVar1;
  
  if (DAT_102312270 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_102312270);
    if (iVar1 != 0) {
      DAT_102312268 = QEvent::registerEventType(-1);
      ___cxa_guard_release(&DAT_102312270);
    }
  }
  return DAT_102312268;
}

