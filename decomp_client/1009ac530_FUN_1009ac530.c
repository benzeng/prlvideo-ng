
void FUN_1009ac530(long param_1)

{
  QHostAddress::setAddress((QString *)(param_1 + 0x58));
  FUN_1009bf300(param_1);
  FUN_1009983a0(param_1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goNext();
  return;
}

