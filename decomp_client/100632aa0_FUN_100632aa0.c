
void FUN_100632aa0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18),"2toggled(bool)",
                   param_1,"1onDontShowAgainToggled(bool)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect((Connection *)&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),
                     "2clicked()",param_1,"1accept()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xa8);
LAB_100632c59:
    QObject::connect((Connection *)&local_38,uVar2,"2clicked()",param_1,"1processClose()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),"2clicked()",
                     param_1,"1accept()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xa8);
      goto LAB_100632c59;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xa8),"2clicked()",
                     param_1,"1processClose()",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),"2clicked()",
                       param_1,"1onRenewLicenseClicked()",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100632ca1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98);
  }
  QObject::connect(&local_40,uVar2,"2clicked()",param_1,"1onRenewLicenseClicked()",0);
LAB_100632ca1:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

