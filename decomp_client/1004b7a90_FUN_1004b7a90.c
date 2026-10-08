
void FUN_1004b7a90(long param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    uVar4 = FUN_10044e620(param_1);
    bVar2 = 0;
    QObject::connect(&local_38,lVar1,"2memoryChanged(int)",uVar4,"1onPreprocessedValueChanged()",0);
    if (local_38 != 0) {
      bVar2 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    bVar2 = bVar2 ^ 1;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0);
  uVar5 = FUN_10044e620(param_1);
  QObject::connect(&local_40,uVar4,"2toggled(bool)",uVar5,"1onPreprocessedValueChanged()",0);
  if ((bVar2 == 0) && (local_40 != 0)) {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xc0);
    uVar5 = FUN_10044e620(param_1);
    QObject::connect(&local_48,uVar4,"2toggled(bool)",uVar5,"1onPreprocessedValueChanged()",0);
    if ((cVar3 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0);
      uVar5 = FUN_10044e620(param_1);
      QObject::connect((Connection *)&local_50,uVar4,"2toggled(bool)",uVar5,
                       "1onPreprocessedValueChanged()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x100);
      uVar5 = FUN_10044e620(param_1);
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0);
      uVar5 = FUN_10044e620(param_1);
      QObject::connect(&local_50,uVar4,"2toggled(bool)",uVar5,"1onPreprocessedValueChanged()",0);
      if ((cVar3 != '\0') && (local_50 != 0)) {
        cVar3 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_50);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x100);
        uVar5 = FUN_10044e620(param_1);
        QObject::connect(&local_58,uVar4,"2toggled(bool)",uVar5,"1onPreprocessedValueChanged()",0);
        if ((cVar3 != '\0') && (local_58 != 0)) {
          QMetaObject::Connection::isConnected_helper();
        }
        goto LAB_1004b7dd6;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x100);
      uVar5 = FUN_10044e620(param_1);
    }
  }
  else {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xc0);
    uVar5 = FUN_10044e620(param_1);
    QObject::connect((Connection *)&local_48,uVar4,"2toggled(bool)",uVar5,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0);
    uVar5 = FUN_10044e620(param_1);
    QObject::connect((Connection *)&local_50,uVar4,"2toggled(bool)",uVar5,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x100);
    uVar5 = FUN_10044e620(param_1);
  }
  QObject::connect(&local_58,uVar4,"2toggled(bool)",uVar5,"1onPreprocessedValueChanged()",0);
LAB_1004b7dd6:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

