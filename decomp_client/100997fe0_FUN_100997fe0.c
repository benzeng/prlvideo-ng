
void FUN_100997fe0(void)

{
  undefined8 uVar1;
  char cVar2;
  
  CAbstractWizardActionHandler::wizardModel();
  CAbstractWizardModel::wizardCtrl();
  uVar1 = CWizardController::parentWidget();
  cVar2 = FUN_100997b90(uVar1);
  if (cVar2 != '\0') {
    CAbstractWizardActionHandler::wizardModel();
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goBack();
    return;
  }
  return;
}

