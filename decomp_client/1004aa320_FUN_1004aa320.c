
void FUN_1004aa320(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60);
  uVar2 = FUN_10044e620();
  QObject::connect(&local_38,uVar3,"2currentIndexChanged(int)",uVar2,"1onPreprocessedValueChanged()"
                   ,0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect((Connection *)&local_40,uVar3,"2toggled(bool)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa8);
    uVar2 = FUN_10044e620(param_1);
LAB_1004aa529:
    QObject::connect((Connection *)&local_48,uVar3,"2toggled(bool)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    uVar2 = FUN_10044e620(param_1);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_40,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa8);
      uVar2 = FUN_10044e620(param_1);
      goto LAB_1004aa529;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa8);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_48,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
    if ((cVar1 != '\0') && (local_48 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      uVar2 = FUN_10044e620(param_1);
      QObject::connect(&local_50,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
      if ((cVar1 != '\0') && (local_50 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1004aa575;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    uVar2 = FUN_10044e620(param_1);
  }
  QObject::connect(&local_50,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
LAB_1004aa575:
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  return;
}

