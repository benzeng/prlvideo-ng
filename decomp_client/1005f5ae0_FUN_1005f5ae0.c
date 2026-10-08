
void FUN_1005f5ae0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  char *pcVar2;
  QVariant local_30;
  undefined1 local_19;
  
  local_19 = param_2;
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_30,1,&local_19,0);
    QObject::setProperty(pcVar2,(QVariant *)"animateDropArea");
    QVariant::~QVariant(&local_30);
  }
  return;
}

