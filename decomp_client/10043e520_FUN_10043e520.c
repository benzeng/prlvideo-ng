
void FUN_10043e520(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),"2toggled(bool)",
                   param_1,"1onValueChanged()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78),"2toggled(bool)",
                     param_1,"1onValueChanged()",0);
LAB_10043e6a3:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),
                     "2valueChanged(int)",param_1,"1onPeriodChanged(int)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78),"2toggled(bool)",
                     param_1,"1onValueChanged()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) goto LAB_10043e6a3;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),
                     "2valueChanged(int)",param_1,"1onPeriodChanged(int)",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),
                       "2valueChanged(int)",param_1,"1onTotalSnapshotsChanged(int)",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10043e6fc;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38);
  }
  QObject::connect(&local_40,uVar2,"2valueChanged(int)",param_1,"1onTotalSnapshotsChanged(int)",0);
LAB_10043e6fc:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

