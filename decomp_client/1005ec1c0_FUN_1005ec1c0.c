
void FUN_1005ec1c0(void)

{
  QObject *pQVar1;
  
  CAbstractWizardPage::wizardModel();
  pQVar1 = (QObject *)CAbstractWizardModel::wizardCtrl();
  QTimer::singleShot(500,pQVar1,"1finish()");
  return;
}

