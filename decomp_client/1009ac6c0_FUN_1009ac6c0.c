
void FUN_1009ac6c0(long param_1,bool param_2)

{
  long lVar1;
  char *pcVar2;
  QVariant local_28;
  
  *(bool *)(param_1 + 99) = param_2;
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_28,param_2);
    QObject::setProperty(pcVar2,(QVariant *)"connecting");
    QVariant::~QVariant(&local_28);
  }
  return;
}

