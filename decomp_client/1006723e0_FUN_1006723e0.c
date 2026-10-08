
void FUN_1006723e0(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  QVariant local_30;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    CAbstractWizardPage::wizardModel();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    if (*(int *)(lVar1 + 0x148) == 1) {
      pcVar3 = "ProgressState";
    }
    else if (*(char *)(param_1 + 0x58) == '\0') {
      pcVar3 = "WorkState";
    }
    else {
      pcVar3 = "FailedState";
    }
    QVariant::QVariant(&local_30,pcVar3);
    QObject::setProperty(pcVar2,(QVariant *)"state");
    QVariant::~QVariant(&local_30);
    CAbstractWizardPage::wizardModel();
    QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    CAbstractWizardModel::wizardCtrl();
    CWizardController::updateWizardActions();
  }
  return;
}

