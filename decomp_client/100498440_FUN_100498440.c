
void FUN_100498440(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  long local_30;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50);
  uVar2 = FUN_10044e620();
  QObject::connect(&local_30,uVar3,"2currentIndexChanged(int)",uVar2,"1onPreprocessedValueChanged()"
                   ,0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x80);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_38,uVar3,"2clicked()",uVar2,"1editMoreSharedFolders()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x80);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_38,uVar3,"2clicked()",uVar2,"1editMoreSharedFolders()",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      QObject::connect(&local_40,uVar3,"2clicked()",uVar2,"1editSharedProfile()",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10049862f;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
  }
  QObject::connect(&local_40,uVar3,"2clicked()",uVar2,"1editSharedProfile()",0);
LAB_10049862f:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

