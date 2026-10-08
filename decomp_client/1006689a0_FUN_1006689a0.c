
void FUN_1006689a0(long param_1,char param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  QVariant local_40;
  QVariant local_30;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0x38) == '\0') {
        pcVar3 = "UsualState";
      }
      else {
        CAbstractWizardPage::wizardModel();
        lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
        if (*(char *)(lVar1 + 0x16a) == '\0') {
          pcVar3 = "failedState";
        }
        else {
          pcVar3 = "UsualState";
        }
      }
    }
    else {
      pcVar3 = "ProgressState";
    }
    QVariant::QVariant(&local_30,pcVar3);
    QObject::setProperty(pcVar2,(QVariant *)"state");
    QVariant::~QVariant(&local_30);
    CAbstractWizardPage::wizardModel();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    if (lVar1 != 0) {
      pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
      CAbstractWizardPage::wizardModel();
      lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      QVariant::QVariant(&local_40,*(bool *)(lVar1 + 0x169));
      QObject::setProperty(pcVar2,(QVariant *)"wasResent");
      QVariant::~QVariant(&local_40);
    }
  }
  return;
}

