
void FUN_100459060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x38);
  cVar3 = '\x01';
  if (lVar1 != 0) {
    uVar2 = FUN_10044e620(param_1);
    cVar3 = '\0';
    QObject::connect(&local_28,lVar1,
                     "2currentItemChanged( CPrlFileDevSelectorItem::FileDevSelectorItemType, const QString &, const QString &)"
                     ,uVar2,"1onPreprocessedValueChanged()",0);
    if (local_28 != 0) {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_30,lVar1,"2currentIndexChanged(int)",uVar2,
                     "1onPreprocessedValueChanged()",0);
    bVar4 = cVar3 != '\0';
    cVar3 = '\0';
    if (bVar4) {
      if (local_30 == 0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_38,lVar1,"2toggled(bool)",uVar2,"1onPreprocessedValueChanged()",0);
    bVar4 = cVar3 != '\0';
    cVar3 = '\0';
    if (bVar4) {
      if (local_38 == 0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_10044e620(param_1);
    QObject::connect(&local_40,lVar1,
                     "2currentSlotChanged(uint,PRL_MASS_STORAGE_INTERFACE_TYPE,uint,PRL_MASS_STORAGE_INTERFACE_TYPE)"
                     ,uVar2,"1onPreprocessedValueChanged()",0);
    if ((cVar3 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return;
}

