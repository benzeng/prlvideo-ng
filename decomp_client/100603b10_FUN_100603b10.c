
void FUN_100603b10(void)

{
  undefined4 uVar1;
  long *plVar2;
  
  CAbstractWizardActionHandler::wizardModel();
  plVar2 = (long *)CAbstractWizardModel::currentPage();
  uVar1 = (**(code **)(*plVar2 + 0x78))(plVar2);
  AppHelpUtils::openHelpTopic(uVar1,0);
  return;
}

