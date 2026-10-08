
void FUN_100688ae0(void)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = CAbstractWizardActionHandler::wizardModel();
  cVar2 = FUN_100678060(uVar1);
  if (cVar2 != '\0') {
    return;
  }
  CAbstractWizardActionHandler::handleBack();
  return;
}

