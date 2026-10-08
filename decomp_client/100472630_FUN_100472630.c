
void FUN_100472630(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  cVar1 = '\0';
  QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),"2clicked()",param_1,
                   "1onGenerateMacAddressClicked()",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58);
  uVar2 = FUN_10044e620(param_1);
  QObject::connect(&local_40,uVar3,"2editingFinished()",uVar2,"1onPreprocessedValueChanged()",0);
  if ((cVar1 == '\0') || (local_40 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x48);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect((Connection *)&local_48,uVar3,"2currentIndexChanged(int)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect((Connection *)&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),
                     "2clicked()",param_1,"1editNetworkRateLimit()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
    uVar2 = FUN_10044e620(param_1);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x48);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_48,uVar3,"2currentIndexChanged(int)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),"2clicked()",
                       param_1,"1editNetworkRateLimit()",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),"2clicked()",
                       param_1,"1editNetworkRateLimit()",0);
      if ((cVar1 != '\0') && (local_50 != 0)) {
        cVar1 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_50);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
        uVar2 = FUN_10044e620(param_1);
        QObject::connect(&local_58,uVar3,"2currentIndexChanged(int)",uVar2,
                         "1onPreprocessedValueChanged()",0);
        if ((cVar1 != '\0') && (local_58 != 0)) {
          QMetaObject::Connection::isConnected_helper();
        }
        goto LAB_100472901;
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
    uVar2 = FUN_10044e620(param_1);
  }
  QObject::connect(&local_58,uVar3,"2currentIndexChanged(int)",uVar2,"1onPreprocessedValueChanged()"
                   ,0);
LAB_100472901:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  FUN_100459060(param_1);
  return;
}

