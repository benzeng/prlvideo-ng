
void FUN_100118790(QWidget *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 != (QWidget *)0x0) {
    if (param_2 != '\0') {
      cVar1 = MacUtils::isFrontProcess();
      if (cVar1 == '\0') {
        MacUtils::bringProcessToFront();
      }
    }
    cVar1 = MacUtils::isWindowInNativeFullScreen(param_1);
    if (cVar1 == '\0') {
      cVar1 = QWidget::isMinimized();
      if (cVar1 != '\0') {
        uVar2 = QWidget::windowState();
        QWidget::setWindowState(param_1,uVar2 & 0xfffffffe);
      }
    }
    else {
      MacUtils::orderFront(param_1);
    }
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: window object is null");
  return;
}

