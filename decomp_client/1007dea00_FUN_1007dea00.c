
void FUN_1007dea00(undefined8 param_1,int param_2)

{
  if (-1 < param_2) {
    CAbstractWizardModel::goToNextPage();
    return;
  }
  CAbstractWizardModel::goToPrevPage();
  return;
}

