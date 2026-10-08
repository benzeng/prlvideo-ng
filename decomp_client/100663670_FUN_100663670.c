
void FUN_100663670(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_1006760f0(uVar1,0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

