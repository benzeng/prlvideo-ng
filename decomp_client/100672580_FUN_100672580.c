
void FUN_100672580(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

