
void FUN_10038cfe0(QPoint *param_1)

{
  int iVar1;
  
  QWidget::grabKeyboard();
  iVar1 = QApplication::desktop();
  QDesktopWidget::screenGeometry(iVar1);
  QWidget::move(param_1);
  FUN_10038cc70(*(undefined8 *)(param_1 + 0x30));
  QDialog::showEvent((QShowEvent *)param_1);
  return;
}

