
void FUN_1005fc980(long *param_1)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  QVariant local_30;
  
  FUN_1005fbbb0();
  lVar2 = CDeclarativeWizardPage::pageContentItem();
  if (lVar2 != 0) {
    pcVar3 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_30,"WorkState");
    QObject::setProperty(pcVar3,(QVariant *)"state");
    QVariant::~QVariant(&local_30);
    pcVar1 = *(code **)(*param_1 + 0xb8);
    uVar4 = CDeclarativeWizardPage::pageContentItem();
    (*pcVar1)(param_1,uVar4);
  }
  return;
}

