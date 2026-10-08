
void FUN_100537390(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28),"2toggled(bool)",
                   *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),
                     "2toggled(bool)",*(undefined8 *)(param_1 + 0x38),
                     "1onPreprocessedValueChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),"2toggled(bool)",
                     *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
    if ((cVar2 != '\0') && (local_38 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38),"2toggled(bool)",
                       *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
      if ((cVar2 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100537512;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
  }
  QObject::connect(&local_40,uVar4,"2toggled(bool)",uVar3,"1onPreprocessedValueChanged()",0);
LAB_100537512:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar3 = 0;
  if ((lVar1 != 0) && (uVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_1001b4530(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar3 = 0;
  if ((lVar1 != 0) && (uVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_100534ab0(*(undefined8 *)(param_1 + 0x50),uVar3,
                *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
  FUN_1005375f0(param_1);
  FUN_100525c10(param_1);
  return;
}

