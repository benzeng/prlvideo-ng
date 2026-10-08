
void FUN_10066a8a0(undefined8 param_1,bool param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  QVariant local_48;
  QVariant local_38;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    CAbstractWizardPage::wizardModel();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    if (*(int *)(lVar1 + 0x148) == 1) {
      pcVar3 = "ProgressState";
    }
    else {
      pcVar3 = "WorkState";
    }
    QVariant::QVariant(&local_38,pcVar3);
    QObject::setProperty(pcVar2,(QVariant *)"state");
    QVariant::~QVariant(&local_38);
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_48,param_2);
    QObject::setProperty(pcVar2,(QVariant *)"busy");
    QVariant::~QVariant(&local_48);
  }
  return;
}

