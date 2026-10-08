
void FUN_1001a5960(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = QWizardPage::wizard();
  if (lVar1 != 0) {
    lVar1 = QWizardPage::wizard();
    if (lVar1 != 0) {
      uVar2 = QWizardPage::wizard();
      lVar1 = QWizard::button(uVar2,3);
      if (lVar1 != 0) {
        QWidget::setEnabled(SUB81(lVar1,0));
        return;
      }
    }
  }
  return;
}

