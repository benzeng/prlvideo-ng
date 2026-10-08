
void FUN_100468840(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),"2clicked()",param_1,
                   "1onCompressHdd()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58),
                     "2clicked()",param_1,"1onResizeHdd()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90);
LAB_1004689cb:
    cVar1 = '\0';
    QObject::connect(&local_40,uVar3,"2clicked()",param_1,"1onSelectPartitions()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58),"2clicked()",
                     param_1,"1onResizeHdd()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90);
      goto LAB_1004689cb;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar1 = '\0';
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90),"2clicked()",
                     param_1,"1onSelectPartitions()",0);
    if (cVar2 != '\0') {
      if (local_40 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar3 = FUN_10044b340(param_1);
  uVar3 = FUN_1003b0b00(uVar3);
  QObject::connect(&local_48,uVar3,"2freedHddSizeReceived(const QString&,uint)",param_1,
                   "1onFreedHddSizeReceived(const QString&,uint)",0);
  if ((cVar1 == '\0') || (local_48 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
    QObject::connect((Connection *)&local_50,uVar3,"2compactFinished(const QString&)",param_1,
                     "1updatePageUI()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
LAB_100468bd1:
    QObject::connect((Connection *)&local_58,uVar3,"2hddInfoReceived()",param_1,"1updatePageUI()",0)
    ;
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
    QObject::connect(&local_50,uVar3,"2compactFinished(const QString&)",param_1,"1updatePageUI()",0)
    ;
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = FUN_10044b340(param_1);
      uVar3 = FUN_1003b0b00(uVar3);
      goto LAB_100468bd1;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
    QObject::connect(&local_58,uVar3,"2hddInfoReceived()",param_1,"1updatePageUI()",0);
    if ((cVar1 != '\0') && (local_58 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = FUN_10044b340(param_1);
      uVar3 = FUN_1003b0b00(uVar3);
      QObject::connect(&local_60,uVar3,"2resizeHddFinished()",param_1,"1updatePageUI()",0);
      if ((cVar1 != '\0') && (local_60 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100468c1d;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = FUN_10044b340(param_1);
    uVar3 = FUN_1003b0b00(uVar3);
  }
  QObject::connect(&local_60,uVar3,"2resizeHddFinished()",param_1,"1updatePageUI()",0);
LAB_100468c1d:
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  FUN_100459060(param_1);
  return;
}

