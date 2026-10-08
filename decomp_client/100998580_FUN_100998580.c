
undefined8 FUN_100998580(void)

{
  long lVar1;
  undefined8 uVar2;
  
  CAbstractWizardPage::wizardModel();
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardPage::wizardModel();
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    uVar2 = QWidget::window();
    return uVar2;
  }
  return 0;
}

