
void FUN_10007bc70(long param_1)

{
  char cVar1;
  char cVar2;
  CWindowVisibilityObserver *this;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x28),"2itemAdded(CControlCenterVmItem*)",
                   param_1,"1onItemAdded(CControlCenterVmItem*)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    cVar2 = '\0';
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x28),"2itemRemoved(const QString&)",
                     param_1,"1onItemRemoved()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    cVar2 = '\0';
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x28),"2itemRemoved(const QString&)",
                     param_1,"1onItemRemoved()",0);
    if (cVar1 != '\0') {
      if (local_30 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  this = operator_new(0x18);
  CWindowVisibilityObserver::CWindowVisibilityObserver(this,*(QWidget **)(param_1 + 0x10));
  QObject::connect(&local_38,this,"2windowVisibilityChanged(bool)",param_1,
                   "1onWindowVisibilityChanged(bool)",0);
  if ((cVar2 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

