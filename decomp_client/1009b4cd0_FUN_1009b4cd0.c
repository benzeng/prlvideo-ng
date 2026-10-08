
void FUN_1009b4cd0(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  QVariant local_40;
  QVariant local_30;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    if (*(int *)(*(long *)(param_1 + 0x50) + 4) == 0) {
      pcVar3 = "noProgress";
    }
    else {
      pcVar3 = "inProgress";
    }
    QVariant::QVariant(&local_30,pcVar3);
    QObject::setProperty(pcVar2,(QVariant *)"state");
    QVariant::~QVariant(&local_30);
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_40,(QString *)(param_1 + 0x50));
    QObject::setProperty(pcVar2,(QVariant *)"text");
    QVariant::~QVariant(&local_40);
  }
  return;
}

