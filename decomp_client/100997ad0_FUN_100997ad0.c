
undefined8 FUN_100997ad0(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","TransporterWizardModel",2,"Handle wizard closing event");
  }
  CAbstractWizardActionHandler::wizardModel();
  plVar3 = (long *)CAbstractWizardModel::currentPage();
  if ((int)plVar3[2] == 0xc) {
    cVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
    iVar2 = CAbstractWizardActionHandler::wizardModel();
    if (cVar1 == '\0') {
      CAbstractWizardModel::wizardCtrl();
      uVar4 = CWizardController::parentWidget();
      cVar1 = FUN_100997b90(uVar4);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x18) = 1;
        (**(code **)(*plVar3 + 0x70))(plVar3);
        return 1;
      }
      return 0;
    }
  }
  else {
    iVar2 = CAbstractWizardActionHandler::wizardModel();
  }
  CAbstractWizardModel::finished(iVar2);
  return 1;
}

