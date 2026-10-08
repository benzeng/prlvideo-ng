
void FUN_100370640(undefined8 param_1,long param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  
  if ((*(byte *)(*(long *)(param_2 + 0x28) + 10) & 1) == 0) {
    cVar1 = QWidget::isActiveWindow();
    if (cVar1 == '\0') {
      if (param_3 != '\0') {
        FUN_100118790(param_2,0);
        return;
      }
      QWidget::raise();
      QWidget::activateWindow();
      cVar1 = QWidget::isMinimized();
      if (cVar1 != '\0') {
        uVar2 = QWidget::windowState();
        QWidget::setWindowState(param_2,uVar2 & 0xfffffffe);
        return;
      }
    }
  }
  return;
}

