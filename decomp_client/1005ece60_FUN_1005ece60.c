
void FUN_1005ece60(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long local_38;
  QVariant local_30;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_30,"ProgressState");
    QObject::setProperty(pcVar2,(QVariant *)"state");
    QVariant::~QVariant(&local_30);
  }
  uVar3 = FUN_1005ec980(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005aff70(uVar3);
  uVar3 = FUN_1005ec980(*(long *)(param_1 + 0x10) + 0x38);
  QObject::connect(&local_38,uVar3,"2applianceDescriptorUpdated()",param_1,
                   "1onApplianceDescriptorUpdated()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

