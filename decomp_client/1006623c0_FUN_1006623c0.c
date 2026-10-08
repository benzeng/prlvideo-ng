
void FUN_1006623c0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  QVariant local_30;
  
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_1006760f0(uVar1,1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
  QVariant::QVariant(&local_30,"waitPurchaseCompletion");
  QObject::setProperty(pcVar2,(QVariant *)"state");
  QVariant::~QVariant(&local_30);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

