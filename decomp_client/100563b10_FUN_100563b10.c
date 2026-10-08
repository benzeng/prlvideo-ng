
void FUN_100563b10(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),
                   "2doubleClicked(QModelIndex)",param_1,"1onItemDoubleClicked(QModelIndex)",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar2 = QAbstractItemView::selectionModel();
    QObject::connect(&local_28,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updateEditButtons()",0);
LAB_100563c9d:
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),"2clicked()",
                     param_1,"1editItem()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar2 = QAbstractItemView::selectionModel();
    QObject::connect(&local_28,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updateEditButtons()",0);
    if ((cVar1 == '\0') || (local_28 == 0)) goto LAB_100563c9d;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),"2clicked()",
                     param_1,"1editItem()",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,param_1 + 0x20,"2dataChanged(QModelIndex,QModelIndex)",param_1,
                       "1onShortcutsChanged()",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100563cf3;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,param_1 + 0x20,"2dataChanged(QModelIndex,QModelIndex)",param_1,
                   "1onShortcutsChanged()",0);
LAB_100563cf3:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

