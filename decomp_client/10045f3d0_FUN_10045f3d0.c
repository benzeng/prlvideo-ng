
void FUN_10045f3d0(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x10) < 0) {
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_100785b00(pvVar2);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar2;
    }
    pvVar2 = DAT_1023109d8;
    uVar3 = FUN_10044e460(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_100785c90(pvVar2,uVar3,9);
    QObject::connect(&local_28,uVar3,"2valueChanged(const QVariant&)",param_1,
                     "1onVmDiskSpaceUsageChanged(const QVariant&)",0);
    if (local_28 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x30),"2timeout()",uVar3,"1fetch()",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x30),"2timeout()",uVar3,"1fetch()",0);
      if ((cVar1 != '\0') && (local_30 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    FUN_100786550(uVar3);
    QTimer::start((int)*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

