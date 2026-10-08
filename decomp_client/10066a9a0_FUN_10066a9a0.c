
void FUN_10066a9a0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

