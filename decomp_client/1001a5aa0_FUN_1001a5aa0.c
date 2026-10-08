
void FUN_1001a5aa0(undefined8 param_1,char param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = QWizardPage::wizard();
  if (lVar1 != 0) {
    uVar2 = QWizardPage::wizard();
    lVar1 = QWizard::button(uVar2,1);
    uVar2 = QWizardPage::wizard();
    lVar3 = QWizard::button(uVar2,3);
    if (param_2 == '\0') {
      QWidget::hide();
      QWidget::show();
      lVar1 = lVar3;
      if (param_3 != '\0') {
        QWidget::setEnabled(SUB81(lVar3,0));
      }
    }
    else {
      QWidget::hide();
      QWidget::show();
      if (param_3 != '\0') {
        QWidget::setEnabled(SUB81(lVar1,0));
      }
    }
    if ((lVar1 != 0) &&
       (lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e16c8,PTR_typeinfo_1021e1658,0), lVar1 != 0))
    {
      QPushButton::setDefault(SUB81(lVar1,0));
      return;
    }
  }
  return;
}

