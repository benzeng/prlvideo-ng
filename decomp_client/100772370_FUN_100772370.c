
bool FUN_100772370(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = CAbstractWizardActionHandler::wizardModel();
  cVar1 = FUN_100770af0(uVar2);
  if (cVar1 != '\0') {
    uVar2 = CAbstractWizardActionHandler::wizardModel();
    FUN_100770bb0(uVar2);
  }
  return cVar1 != '\0';
}

