
void FUN_1006724f0(QObject *param_1,bool param_2)

{
  long lVar1;
  char *pcVar2;
  QVariant local_28;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    QTimer::singleShot(0,param_1,"1updateState()");
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_28,param_2);
    QObject::setProperty(pcVar2,(QVariant *)"busy");
    QVariant::~QVariant(&local_28);
  }
  return;
}

