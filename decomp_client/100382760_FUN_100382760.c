
void FUN_100382760(QPoint *param_1)

{
  long lVar1;
  QWidget *pQVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x30) + 0x30) != 0)) {
    QWidget::grabKeyboard();
  }
  pQVar2 = (QWidget *)QApplication::desktop();
  QDesktopWidget::availableGeometry(pQVar2);
  QWidget::move(param_1);
  return;
}

