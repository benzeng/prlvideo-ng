
void FUN_1004880d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108);
  uVar2 = FUN_10044e620();
  QObject::connect(&local_38,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x110);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect((Connection *)&local_40,uVar3,"2toggled(bool)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_48,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
LAB_10048863a:
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf8);
    uVar2 = FUN_10044e620(param_1);
LAB_10048865a:
    QObject::connect((Connection *)&local_50,uVar3,"2currentIndexChanged(int)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_58,uVar3,"2clicked()",uVar2,"1encryptVm()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_60,uVar3,"2clicked()",uVar2,"1changeVmPassword()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_68,uVar3,"2clicked()",uVar2,"1setCustomPassword()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_70,uVar3,"2clicked()",uVar2,"1changeCustomPassword()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_78,uVar3,"2clicked()",uVar2,"1editVmExpiration()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect((Connection *)&local_80,uVar3,"2clicked()",uVar2,
                     "1changeVmExpirationPassword()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar3 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar3);
    uVar3 = FUN_10044e620(param_1);
LAB_100488823:
    QObject::connect((Connection *)&local_88,uVar2,"2encryptionFinished()",uVar3,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x130);
    uVar2 = FUN_10044e620(param_1);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x110);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_40,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0);
      uVar2 = FUN_10044e620(param_1);
      QObject::connect(&local_48,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
      goto LAB_10048863a;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_48,uVar3,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf8);
      uVar2 = FUN_10044e620(param_1);
      goto LAB_10048865a;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf8);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_50,uVar3,"2currentIndexChanged(int)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      QObject::connect((Connection *)&local_58,uVar3,"2clicked()",uVar2,"1encryptVm()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
LAB_100488955:
      QObject::connect((Connection *)&local_60,uVar3,"2clicked()",uVar2,"1changeVmPassword()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
LAB_100488995:
      QObject::connect((Connection *)&local_68,uVar3,"2clicked()",uVar2,"1setCustomPassword()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
LAB_1004889d5:
      QObject::connect((Connection *)&local_70,uVar3,"2clicked()",uVar2,"1changeCustomPassword()",0)
      ;
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
LAB_100488a15:
      QObject::connect((Connection *)&local_78,uVar3,"2clicked()",uVar2,"1editVmExpiration()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      QObject::connect(&local_80,uVar3,"2clicked()",uVar2,"1changeVmExpirationPassword()",0);
LAB_100488a77:
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      uVar3 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar3);
      uVar3 = FUN_10044e620(param_1);
      goto LAB_100488823;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_58,uVar3,"2clicked()",uVar2,"1encryptVm()",0);
    if ((cVar1 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      goto LAB_100488955;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_60,uVar3,"2clicked()",uVar2,"1changeVmPassword()",0);
    if ((cVar1 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      goto LAB_100488995;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_68,uVar3,"2clicked()",uVar2,"1setCustomPassword()",0);
    if ((cVar1 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      goto LAB_1004889d5;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_70,uVar3,"2clicked()",uVar2,"1changeCustomPassword()",0);
    if ((cVar1 == '\0') || (local_70 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      goto LAB_100488a15;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_78,uVar3,"2clicked()",uVar2,"1editVmExpiration()",0);
    if ((cVar1 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      QObject::connect(&local_80,uVar3,"2clicked()",uVar2,"1changeVmExpirationPassword()",0);
      goto LAB_100488a77;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_80,uVar3,"2clicked()",uVar2,"1changeVmExpirationPassword()",0);
    if ((cVar1 == '\0') || (local_80 == 0)) goto LAB_100488a77;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_88,uVar3,"2encryptionFinished()",uVar2,"1onPreprocessedValueChanged()",0
                    );
    if ((cVar1 != '\0') && (local_88 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_88);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x130);
      uVar2 = FUN_10044e620(param_1);
      QObject::connect(&local_90,uVar3,"2toggled( bool )",uVar2,"1onPreprocessedValueChanged()",0);
      if ((cVar1 != '\0') && (local_90 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100488876;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x130);
    uVar2 = FUN_10044e620(param_1);
  }
  QObject::connect(&local_90,uVar3,"2toggled( bool )",uVar2,"1onPreprocessedValueChanged()",0);
LAB_100488876:
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  return;
}

