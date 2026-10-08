
void FUN_100662340(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_1006760f0(uVar1,param_2);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

