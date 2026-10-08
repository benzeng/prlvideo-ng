
void FUN_10064f260(long param_1)

{
  bool bVar1;
  
  FUN_10063f490();
  *(undefined1 *)(param_1 + 0x58) = 1;
  QLineEdit::clear();
  QLineEdit::clear();
  QLabel::clear();
  FUN_10064f2c0(param_1);
  bVar1 = (bool)CDeclarativeWizardProxyPage::sourcePage();
  QWidget::setDisabled(bVar1);
  return;
}

