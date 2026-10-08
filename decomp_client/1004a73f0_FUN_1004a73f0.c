
void FUN_1004a73f0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28);
  uVar3 = FUN_10044e620();
  QObject::connect(&local_28,uVar1,"2currentIndexChanged(int)",uVar3,"1onPreprocessedValueChanged()"
                   ,0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
    uVar3 = FUN_10044e620(param_1);
    QObject::connect(&local_30,uVar1,"2currentIndexChanged(int)",uVar3,
                     "1onPreprocessedValueChanged()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
    uVar3 = FUN_10044e620(param_1);
    QObject::connect(&local_30,uVar1,"2currentIndexChanged(int)",uVar3,
                     "1onPreprocessedValueChanged()",0);
    if ((cVar2 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  FUN_100459060(param_1);
  return;
}

