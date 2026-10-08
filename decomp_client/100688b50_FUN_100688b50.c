
void FUN_100688b50(void)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  
  CAbstractWizardActionHandler::wizardModel();
  lVar1 = CAbstractWizardModel::currentPage();
  if (lVar1 != 0) {
    CAbstractWizardActionHandler::wizardModel();
    plVar3 = (long *)CAbstractWizardModel::currentPage();
    uVar2 = (**(code **)(*plVar3 + 0x78))(plVar3);
    AppHelpUtils::openHelpTopic(uVar2,0);
    return;
  }
  return;
}

