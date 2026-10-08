
void FUN_1006688e0(void)

{
  long lVar1;
  char *pcVar2;
  QVariant local_40;
  QVariant local_30;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_30,false);
    QObject::setProperty(pcVar2,(QVariant *)"waitNextResend");
    QVariant::~QVariant(&local_30);
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_40,0);
    QObject::setProperty(pcVar2,(QVariant *)"waitNextResendOption");
    QVariant::~QVariant(&local_40);
  }
  return;
}

