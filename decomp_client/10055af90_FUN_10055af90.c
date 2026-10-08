
void FUN_10055af90(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),
                   "2keyChanged(int, int)",param_1,"1onRClickModifiersChanged(int, int)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect((Connection *)&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),
                     "2toggled(bool)",param_1,"1onRClickEnableStateChanged(bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
                     "2keyChanged(int, int)",param_1,"1onMClickModifiersChanged(int, int)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),"2toggled(bool)",
                     param_1,"1onRClickEnableStateChanged(bool)",0);
    if ((cVar1 == '\0') || (local_30 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
                       "2keyChanged(int, int)",param_1,"1onMClickModifiersChanged(int, int)",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
                       "2keyChanged(int, int)",param_1,"1onMClickModifiersChanged(int, int)",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        cVar1 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_38);
        QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                         "2toggled(bool)",param_1,"1onMClickEnableStateChanged(bool)",0);
        if ((cVar1 != '\0') && (local_40 != 0)) {
          QMetaObject::Connection::isConnected_helper();
        }
        goto LAB_10055b1c7;
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
  }
  QObject::connect(&local_40,uVar2,"2toggled(bool)",param_1,"1onMClickEnableStateChanged(bool)",0);
LAB_10055b1c7:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

