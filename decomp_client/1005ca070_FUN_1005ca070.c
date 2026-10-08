
void FUN_1005ca070(void)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  
  CAbstractWizardActionHandler::wizardModel();
  plVar3 = (long *)CAbstractWizardModel::currentPage();
  if (plVar3 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x68))(plVar3);
    if (cVar2 == '\0') {
      return;
    }
  }
  uVar1 = CAbstractWizardActionHandler::wizardModel();
  uVar1 = FUN_1005c11e0(uVar1);
  FUN_1005b25a0(uVar1);
  return;
}

