
void FUN_100794390(undefined8 *param_1,QObject *param_2)

{
  undefined8 uVar1;
  long local_30 [2];
  
  FUN_100790360();
  *param_1 = &PTR_FUN_10222c250;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  param_1[3] = uVar1;
  param_1[4] = param_2;
  uVar1 = QGuiApplication::clipboard();
  QObject::connect(local_30,uVar1,"2dataChanged()",param_1,"1updatePasteAvailability()",0);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

