
void FUN_1005a8a40(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != param_2) {
    *(long *)(param_1 + 0x40) = param_2;
    FUN_10083efe0(param_1);
    lVar1 = CAbstractWizardModel::wizardCtrl();
    if (lVar1 != 0) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::updateWizardActions();
      return;
    }
  }
  return;
}

