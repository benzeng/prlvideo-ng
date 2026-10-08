
void FUN_1005fbcd0(long param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  QVariant local_58;
  QVariant local_48;
  Connection local_38 [8];
  Connection local_30 [8];
  
  if (param_2 != (char *)0x0) {
    QObject::connect(local_30,param_2,"2currentIndexChanged(int)",*(undefined8 *)(param_1 + 0x40),
                     "1onSelectionChanged(int)",0x80);
    QMetaObject::Connection::~Connection(local_30);
    uVar2 = CAbstractWizardPage::wizardCtrl();
    QObject::connect(local_38,param_2,"2itemDoubleClicked(int)",uVar2,"1goNext()",0x80);
    QMetaObject::Connection::~Connection(local_38);
    lVar1 = *(long *)(param_1 + 0x40);
    if (DAT_102273ff8 == 0) {
      DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_48,DAT_102273ff8,(void *)(lVar1 + 0x18),0);
    QObject::setProperty(param_2,(QVariant *)"dataList");
    QVariant::~QVariant(&local_48);
    QVariant::QVariant(&local_58,2,(void *)(*(long *)(param_1 + 0x40) + 0x20),0);
    QObject::setProperty(param_2,(QVariant *)"currentIndex");
    QVariant::~QVariant(&local_58);
  }
  return;
}

