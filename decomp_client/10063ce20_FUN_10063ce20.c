
void FUN_10063ce20(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x68),"2toggled(bool)",
                   param_1,"1onSelectionChanged()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect((Connection *)&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),
                     "2toggled(bool)",param_1,"1onSelectionChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar2 = QAbstractItemView::selectionModel();
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),"2toggled(bool)",
                     param_1,"1onSelectionChanged()",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar2 = QAbstractItemView::selectionModel();
      QObject::connect(&local_38,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                       "1onSelectionChanged()",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10063cfb3;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar2 = QAbstractItemView::selectionModel();
  }
  QObject::connect(&local_38,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                   "1onSelectionChanged()",0);
LAB_10063cfb3:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

