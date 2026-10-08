
void FUN_1005f50a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  QVariant local_38;
  
  lVar2 = CDeclarativeWizardPage::pageContentItem();
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_2 + 8);
    lVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    if (iVar1 == *(int *)(lVar2 + 0x158)) {
      FUN_1005f4b00(param_1);
    }
    FUN_1005f3310(param_1,param_2);
    pcVar3 = (char *)CDeclarativeWizardPage::pageContentItem();
    if (DAT_102273ff8 == 0) {
      DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_38,DAT_102273ff8,(void *)(param_1 + 0x18),0);
    QObject::setProperty(pcVar3,(QVariant *)"detectedSources");
    QVariant::~QVariant(&local_38);
  }
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

