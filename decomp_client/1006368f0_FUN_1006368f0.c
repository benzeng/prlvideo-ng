
void FUN_1006368f0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),"2toggled(bool)",
                   param_1,"1updateContinueButtonState()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar2 = QAbstractItemView::selectionModel();
    QObject::connect(&local_28,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1onSelectionChanged()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar2 = QAbstractItemView::selectionModel();
    QObject::connect(&local_28,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1onSelectionChanged()",0);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

