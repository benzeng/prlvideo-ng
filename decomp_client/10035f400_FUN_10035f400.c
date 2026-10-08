
void FUN_10035f400(long param_1,QCursor *param_2)

{
  QCursor *pQVar1;
  long lVar2;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[CURSOR_CTL]","prl_client_app",3,"Setting guest cursor for widget...");
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
     (pQVar1 = *(QCursor **)(*(long *)(param_1 + 0x18) + 0x50), pQVar1 != (QCursor *)0x0)) {
    QWidget::setCursor(pQVar1);
  }
  lVar2 = QGuiApplication::overrideCursor();
  if (lVar2 != 0) {
    QGuiApplication::changeOverrideCursor(param_2);
    return;
  }
  QGuiApplication::setOverrideCursor(param_2);
  return;
}

