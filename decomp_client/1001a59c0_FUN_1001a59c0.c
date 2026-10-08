
void FUN_1001a59c0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = QWizardPage::wizard();
  if (lVar1 != 0) {
    uVar2 = QWizardPage::wizard();
    lVar1 = QWizard::button(uVar2,param_2);
    if (lVar1 != 0) {
      QWidget::setEnabled(SUB81(lVar1,0));
      return;
    }
  }
  return;
}

