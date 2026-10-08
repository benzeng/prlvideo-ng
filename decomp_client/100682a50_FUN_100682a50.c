
void FUN_100682a50(long param_1)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    CSocialSignInProgressDialog::setMode(*(long *)(param_1 + 0x40),1);
  }
  CAbstractWizardModel::wizardCtrl();
  uVar1 = CWizardController::parentWidget();
  FUN_100118790(uVar1,1);
  return;
}

