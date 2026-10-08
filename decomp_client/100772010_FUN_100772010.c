
void FUN_100772010(void)

{
  undefined8 uVar1;
  int iVar2;
  
  CAbstractWizardActionHandler::handleNext();
  CAbstractWizardActionHandler::wizardModel();
  iVar2 = CAbstractWizardModel::currentPageId();
  if (iVar2 == 1) {
    uVar1 = CAbstractWizardActionHandler::wizardModel();
    FUN_10076f1d0(uVar1);
    return;
  }
  return;
}

