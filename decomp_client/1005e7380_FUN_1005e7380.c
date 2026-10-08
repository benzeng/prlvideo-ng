
void FUN_1005e7380(long param_1,char *param_2)

{
  long lVar1;
  QVariant local_50;
  QVariant local_40;
  long local_30;
  
  if (param_2 != (char *)0x0) {
    QObject::connect(&local_30,param_2,"2currentIndexChanged(int)",*(undefined8 *)(param_1 + 0x40),
                     "1onWindowsVersionSelectionChanged(int)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    lVar1 = *(long *)(param_1 + 0x40);
    if (DAT_102273ff8 == 0) {
      DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_40,DAT_102273ff8,(void *)(lVar1 + 0x18),0);
    QObject::setProperty(param_2,(QVariant *)"purchasedWindowsVersions");
    QVariant::~QVariant(&local_40);
    QVariant::QVariant(&local_50,2,(void *)(*(long *)(param_1 + 0x40) + 0x20),0);
    QObject::setProperty(param_2,(QVariant *)"currentIndex");
    QVariant::~QVariant(&local_50);
  }
  return;
}

