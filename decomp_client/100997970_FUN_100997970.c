
void FUN_100997970(long param_1,char param_2)

{
  if (param_2 == *(char *)(param_1 + 0x18)) {
    return;
  }
  *(char *)(param_1 + 0x18) = param_2;
  CAbstractWizardActionStateProvider::wizardModel();
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

