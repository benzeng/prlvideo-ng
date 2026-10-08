
void FUN_100450d70(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),"2released()",param_1
                   ,"1moveDeviceUp()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),
                     "2released()",param_1,"1moveDeviceDown()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect((Connection *)&local_48,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),
                     "2released()",param_1,"1updatePageUI()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect((Connection *)&local_50,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),
                     "2released()",param_1,"1updatePageUI()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
LAB_100451068:
    QObject::connect((Connection *)&local_58,uVar4,"2currentRowChanged(int)",param_1,
                     "1updatePageUI()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
LAB_10045111d:
    cVar1 = '\0';
    QObject::connect(&local_60,uVar4,"2currentRowChanged(int)",param_1,"1onSelectionChanged(int)",0)
    ;
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),"2released()",
                     param_1,"1moveDeviceDown()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect((Connection *)&local_48,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),
                       "2released()",param_1,"1updatePageUI()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
LAB_1004510c2:
      QObject::connect(&local_50,uVar4,"2released()",param_1,"1updatePageUI()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      QObject::connect((Connection *)&local_58,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),
                       "2currentRowChanged(int)",param_1,"1updatePageUI()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
      goto LAB_10045111d;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),"2released()",
                     param_1,"1updatePageUI()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
      goto LAB_1004510c2;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),"2released()",
                     param_1,"1updatePageUI()",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
      goto LAB_100451068;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),
                     "2currentRowChanged(int)",param_1,"1updatePageUI()",0);
    if ((cVar1 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
      goto LAB_10045111d;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    cVar1 = '\0';
    QObject::connect(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),
                     "2currentRowChanged(int)",param_1,"1onSelectionChanged(int)",0);
    if (cVar2 != '\0') {
      if (local_60 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar3 = FUN_10044e620(param_1);
  QObject::connect(&local_68,uVar4,"2changed()",uVar3,"1onPreprocessedValueChanged()",0);
  if ((cVar1 == '\0') || (local_68 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar3 = FUN_10044e620(param_1);
    QObject::connect((Connection *)&local_70,uVar4,"2itemChanged(QListWidgetItem*)",uVar3,
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    uVar3 = FUN_10044e620(param_1);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar3 = FUN_10044e620(param_1);
    QObject::connect(&local_70,uVar4,"2itemChanged(QListWidgetItem*)",uVar3,
                     "1onPreprocessedValueChanged()",0);
    if ((cVar1 != '\0') && (local_70 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      uVar3 = FUN_10044e620(param_1);
      QObject::connect(&local_78,uVar4,"2currentIndexChanged(int)",uVar3,
                       "1onPreprocessedValueChanged()",0);
      if ((cVar1 != '\0') && (local_78 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1004512ec;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    uVar3 = FUN_10044e620(param_1);
  }
  QObject::connect(&local_78,uVar4,"2currentIndexChanged(int)",uVar3,"1onPreprocessedValueChanged()"
                   ,0);
LAB_1004512ec:
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  return;
}

