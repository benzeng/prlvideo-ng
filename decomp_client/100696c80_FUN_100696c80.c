
void FUN_100696c80(void)

{
  long lVar1;
  
  lVar1 = QApplication::activeWindow();
  if (lVar1 != 0) {
    QWidget::close();
    return;
  }
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                "0 != activeWindow","ActionManager/ActionHandler/CAppActionHandler.cpp",0x97,
                "onCloseWindow");
  return;
}

