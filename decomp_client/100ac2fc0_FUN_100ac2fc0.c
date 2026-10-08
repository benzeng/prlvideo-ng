
void FUN_100ac2fc0(long *param_1)

{
  QObject *pQVar1;
  char cVar2;
  long local_30;
  long local_28;
  
  cVar2 = FUN_100adaf30(param_1[0x146]);
  if (cVar2 != '\0') {
    FUN_100adaf40(param_1[0x146]);
    cVar2 = (**(code **)(*(long *)param_1[0x13b] + 0x80))();
    if (cVar2 != '\0') {
      FUN_100ad9ed0(param_1 + 0x138);
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1);
  pQVar1 = (QObject *)(param_1 + 0x138);
  QObject::connect(&local_28,param_1[0x146],"2vmWndActivated()",pQVar1,"1OnVmActivated()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_1[0x146],"2vmWndDeactivated()",pQVar1,"1OnVmDeactivated()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_1[0x146],"2vmWndDeactivated()",pQVar1,"1OnVmDeactivated()",0);
    if ((cVar2 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::disconnect((QObject *)param_1[0x146],"2vmActivated()",pQVar1,"1OnVmActivated()");
  QObject::disconnect((QObject *)param_1[0x146],"2vmDeactivated()",pQVar1,"1OnVmDeactivated()");
  return;
}

