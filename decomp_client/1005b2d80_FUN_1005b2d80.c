
void FUN_1005b2d80(void)

{
  int iVar1;
  
  iVar1 = CAbstractWizardModel::currentPageId();
  if (iVar1 != 0xf) {
    iVar1 = CAbstractWizardModel::currentPageId();
    if (iVar1 != 0x13) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::goNext();
      return;
    }
  }
  return;
}

