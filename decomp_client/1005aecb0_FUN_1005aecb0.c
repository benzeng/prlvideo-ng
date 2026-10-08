
void FUN_1005aecb0(void)

{
  undefined8 uVar1;
  int iVar2;
  
  CAbstractWizardActionHandler::handleNext();
  CAbstractWizardActionHandler::wizardModel();
  iVar2 = CAbstractWizardModel::currentPageId();
  if (iVar2 == 1) {
    uVar1 = CAbstractWizardActionHandler::wizardModel();
    FUN_1005aaa50(uVar1);
    return;
  }
  return;
}

