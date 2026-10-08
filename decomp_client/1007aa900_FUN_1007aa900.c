
undefined8 FUN_1007aa900(long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_3 + 0x10);
  if (0x19 < uVar1) {
    return 0;
  }
  if ((0x3000b00U >> (uVar1 & 0x1f) & 1) == 0) {
    if ((0x1cU >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0xc0U >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_3 + 0x28);
      uVar4 = QKeyEvent::modifiers();
      if (0x1ffffff < uVar4) {
        return 0;
      }
      if ((uVar2 & 0xfffffffc) == 0x1000020) {
        return 0;
      }
    }
    else {
      cVar3 = QRect::contains((QPoint *)(param_1 + 0x38),true);
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  QWidget::hide();
  QBasicTimer::start((int)param_1 + 0x34,(QObject *)0x32);
  return 0;
}

