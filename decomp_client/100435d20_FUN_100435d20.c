
void FUN_100435d20(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),"2toggled(bool)",
                   param_1,"1updateNotice()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),
                     "2toggled(bool)",param_1,"1updateNotice()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48);
LAB_100435f6e:
    QObject::connect((Connection *)&local_40,uVar2,"2toggled(bool)",param_1,"1updateNotice()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
LAB_100435f97:
    QObject::connect((Connection *)&local_48,uVar2,"2toggled(bool)",param_1,"1updateNotice()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect((Connection *)&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50),
                     "2toggled(bool)",param_1,"1updateNotice()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),"2toggled(bool)",
                     param_1,"1updateNotice()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48);
      goto LAB_100435f6e;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48),"2toggled(bool)",
                     param_1,"1updateNotice()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
      goto LAB_100435f97;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),"2toggled(bool)",
                     param_1,"1updateNotice()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect((Connection *)&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50),
                       "2toggled(bool)",param_1,"1updateNotice()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50),"2toggled(bool)",
                       param_1,"1updateNotice()",0);
      if ((cVar1 != '\0') && (local_50 != 0)) {
        cVar1 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_50);
        QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30),
                         "2toggled(bool)",param_1,"1updateNotice()",0);
        if ((cVar1 != '\0') && (local_58 != 0)) {
          QMetaObject::Connection::isConnected_helper();
        }
        goto LAB_100435ffe;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
    }
  }
  QObject::connect(&local_58,uVar2,"2toggled(bool)",param_1,"1updateNotice()",0);
LAB_100435ffe:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

