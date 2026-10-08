
void FUN_100696df0(void)

{
  char cVar1;
  QWidget *pQVar2;
  
  pQVar2 = (QWidget *)QApplication::activeWindow();
  if (pQVar2 == (QWidget *)0x0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != activeWindow","ActionManager/ActionHandler/CAppActionHandler.cpp",0xad,
                  "onZoomWindow");
  }
  cVar1 = MacUtils::isSheetWindow(pQVar2);
  if (cVar1 == '\0') {
    if (pQVar2 != (QWidget *)0x0) goto LAB_100696eaa;
  }
  else {
    if (*(long *)(*(long *)(pQVar2 + 8) + 0x10) != 0) {
LAB_100696eaa:
      cVar1 = QWidget::isMaximized();
      if (cVar1 != '\0') {
        QWidget::showNormal();
        return;
      }
      QWidget::showMaximized();
      return;
    }
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != activeWindow","ActionManager/ActionHandler/CAppActionHandler.cpp",0xb3,
                  "onZoomWindow");
  }
  return;
}

