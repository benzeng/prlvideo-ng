
void FUN_1004a14c0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long local_28;
  long local_20;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
  uVar3 = FUN_10044e620();
  QObject::connect(&local_20,uVar1,"2toggled(bool)",uVar3,"1onPreprocessedValueChanged()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38),
                     "2linkActivated(const QString&)",param_1,"1onSelectFileLinkActivated()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38),
                     "2linkActivated(const QString&)",param_1,"1onSelectFileLinkActivated()",0);
    if ((cVar2 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

