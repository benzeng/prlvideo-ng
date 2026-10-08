
void FUN_100668790(QObject *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  QVariant local_48;
  QVariant local_38;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_38,param_2);
    QObject::setProperty(pcVar2,(QVariant *)"waitNextResendOption");
    QVariant::~QVariant(&local_38);
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_48,true);
    QObject::setProperty(pcVar2,(QVariant *)"waitNextResend");
    QVariant::~QVariant(&local_48);
  }
  QTimer::singleShot(10000,param_1,"1onResendTimeout()");
  return;
}

