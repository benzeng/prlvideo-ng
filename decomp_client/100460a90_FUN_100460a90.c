
void FUN_100460a90(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x160);
  uVar2 = FUN_10044e620();
  QObject::connect(&local_30,uVar3,"2currentOsVerChanged(uint)",uVar2,
                   "1onPreprocessedValueChanged()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1f8);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_38,uVar3,"2clicked()",uVar2,"1selectVmProfile()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1e8);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_40,uVar3,"2clicked()",uVar2,"1cleanUpVm()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1f8);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_38,uVar3,"2clicked()",uVar2,"1selectVmProfile()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1e8);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      QObject::connect(&local_40,uVar3,"2clicked()",uVar2,"1cleanUpVm()",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1e8);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      QObject::connect(&local_40,uVar3,"2clicked()",uVar2,"1cleanUpVm()",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        cVar1 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_40);
        uVar3 = FUN_10044e460(param_1);
        QObject::connect(&local_48,uVar3,"2compactProgressChanged(uint)",param_1,
                         "1onCompactProgressChanged(uint)",0);
        if ((cVar1 != '\0') && (local_48 != 0)) {
          QMetaObject::Connection::isConnected_helper();
        }
        goto LAB_100460d26;
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar3 = FUN_10044e460(param_1);
  QObject::connect(&local_48,uVar3,"2compactProgressChanged(uint)",param_1,
                   "1onCompactProgressChanged(uint)",0);
LAB_100460d26:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

