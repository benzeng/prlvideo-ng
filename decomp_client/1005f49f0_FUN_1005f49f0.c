
void FUN_1005f49f0(undefined8 param_1,void *param_2)

{
  long lVar1;
  char *pcVar2;
  QVariant local_30;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_30,10,param_2,0);
    QObject::setProperty(pcVar2,(QVariant *)"currentManualItem");
    QVariant::~QVariant(&local_30);
  }
  return;
}

