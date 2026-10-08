
void FUN_10052f6f0(undefined8 param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  long local_30;
  
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  cVar1 = '\0';
  QObject::connect(&local_30,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"1onVmAdded(GUI::VmId)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_38,DAT_1023108e0,"2vmRemoved(GUI::VmId)",param_1,"1onVmRemoved(GUI::VmId)"
                   ,0);
  if ((cVar1 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = QAbstractItemView::selectionModel();
    QObject::connect(&local_40,uVar3,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1onSelectionChanged()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = QAbstractItemView::selectionModel();
    QObject::connect(&local_40,uVar3,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1onSelectionChanged()",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

