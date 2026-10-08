
bool FUN_1007dfb60(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = CAbstractWizardActionHandler::wizardModel();
  cVar1 = FUN_1007de9a0(uVar2);
  if (cVar1 != '\0') {
    uVar2 = CAbstractWizardActionHandler::wizardModel();
    FUN_1007dea20(uVar2);
  }
  return cVar1 != '\0';
}

