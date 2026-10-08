
void FUN_10037bc90(QEvent *param_1)

{
  int iVar1;
  
  if (DAT_102312270 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_102312270);
    if (iVar1 != 0) {
      DAT_102312268 = QEvent::registerEventType(-1);
      ___cxa_guard_release(&DAT_102312270);
    }
  }
  QEvent::QEvent(param_1,DAT_102312268);
  *(undefined ***)param_1 = &PTR_FUN_1022738c0;
  param_1[0x12] = (QEvent)((byte)param_1[0x12] & 0xfb);
  return;
}

