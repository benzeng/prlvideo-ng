
void FUN_100360240(QCursor *param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 8) == '\0') {
    QWidget::unsetCursor();
  }
  else {
    QWidget::setCursor(param_1);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    while( true ) {
      lVar1 = QGuiApplication::overrideCursor();
      if (lVar1 == 0) break;
      QGuiApplication::restoreOverrideCursor();
    }
  }
  else {
    QGuiApplication::setOverrideCursor((QCursor *)(param_2 + 0x10));
  }
  WidgetUtils::setCursorPos((QPointF *)(param_2 + 0x20));
  return;
}

