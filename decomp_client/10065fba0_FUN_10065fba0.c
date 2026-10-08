
void FUN_10065fba0(undefined8 param_1,bool param_2)

{
  long lVar1;
  char *pcVar2;
  QVariant local_28;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_28,param_2);
    QObject::setProperty(pcVar2,(QVariant *)"busy");
    QVariant::~QVariant(&local_28);
  }
  return;
}

