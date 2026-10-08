
void FUN_1005b2940(QObject *param_1)

{
  int iVar1;
  
  iVar1 = CAbstractWizardModel::currentPageId();
  if (iVar1 != 5) {
    iVar1 = CAbstractWizardModel::currentPageId();
    if (iVar1 != 6) {
      return;
    }
  }
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goNext();
  QTimer::singleShot(500,param_1,"1onInstallOsPageShown()");
  return;
}

