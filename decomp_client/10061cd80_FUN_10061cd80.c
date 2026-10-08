
void FUN_10061cd80(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long local_80;
  long local_78;
  long local_70;
  QVariant local_68;
  long local_58;
  long local_50;
  long local_48;
  QVariant local_40;
  
  QObject::property((char *)&local_40);
  lVar3 = FUN_10061fde0(&local_40);
  QVariant::~QVariant(&local_40);
  cVar1 = '\x01';
  if (lVar3 != 0) {
    QObject::connect(&local_48,lVar3,"2lastSymbolEntered()",*(undefined8 *)(param_1 + 0x10),
                     "2editPrimaryKeyFinished()",0);
    if (local_48 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect((Connection *)&local_50,lVar3,"2keyChanged(QString)",param_1,
                       "1onPrimaryKeyChanged(QString)",0);
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
LAB_10061cf3c:
      cVar1 = '\0';
      QObject::connect(&local_58,lVar3,"2keyChanged(QString)",uVar4,"1clear()",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,lVar3,"2keyChanged(QString)",param_1,
                       "1onPrimaryKeyChanged(QString)",0);
      if ((cVar1 == '\0') || (local_50 == 0)) {
        QMetaObject::Connection::~Connection((Connection *)&local_50);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
        goto LAB_10061cf3c;
      }
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      cVar1 = '\0';
      QObject::connect(&local_58,lVar3,"2keyChanged(QString)",
                       *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8),"1clear()",0);
      if (cVar2 != '\0') {
        if (local_58 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  QObject::property((char *)&local_68);
  lVar3 = FUN_10061fde0(&local_68);
  QVariant::~QVariant(&local_68);
  if (lVar3 == 0) {
    return;
  }
  QObject::connect(&local_70,lVar3,"2lastSymbolEntered()",*(undefined8 *)(param_1 + 0x10),
                   "2editSecondaryKeyFinished()",0);
  if ((cVar1 == '\0') || (local_70 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect((Connection *)&local_78,lVar3,"2keyChanged(QString)",param_1,
                     "1onSecondaryKeyChanged(QString)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,lVar3,"2keyChanged(QString)",param_1,
                     "1onSecondaryKeyChanged(QString)",0);
    if ((cVar1 != '\0') && (local_78 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      QObject::connect(&local_80,lVar3,"2keyChanged(QString)",
                       *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8),"1clear()",0);
      if ((cVar1 != '\0') && (local_80 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10061d0f9;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
  }
  QObject::connect(&local_80,lVar3,"2keyChanged(QString)",uVar4,"1clear()",0);
LAB_10061d0f9:
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  return;
}

