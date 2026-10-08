
void FUN_1004dfdf0(long param_1)

{
  char cVar1;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38),"2pressed()",param_1,
                   "1onAddHardware()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40),"2clicked()",
                     param_1,"1onRemoveHardware()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40),"2clicked()",
                     param_1,"1onRemoveHardware()",0);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  FUN_1004dd9f0(param_1);
  return;
}

