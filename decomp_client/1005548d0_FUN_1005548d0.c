
void FUN_1005548d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),
                   "2doubleClicked(QModelIndex)",param_1,"1onItemDoubleClicked(QModelIndex)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar2 = QAbstractItemView::selectionModel();
    QObject::connect(&local_30,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updateEditButtons()",0);
LAB_100554b40:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),
                     "2clicked()",param_1,"1addItem()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
LAB_100554b80:
    QObject::connect((Connection *)&local_40,uVar2,"2clicked()",param_1,"1removeItem()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80);
LAB_100554bc3:
    QObject::connect(&local_48,uVar2,"2clicked()",param_1,"1editItem()",0);
LAB_100554bce:
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_1 + 0x20,"2dataChanged(QModelIndex,QModelIndex)",param_1,
                     "1onRemapsChanged()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar2 = QAbstractItemView::selectionModel();
    QObject::connect(&local_30,uVar2,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updateEditButtons()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) goto LAB_100554b40;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),"2clicked()",
                     param_1,"1addItem()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
      goto LAB_100554b80;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),"2clicked()",
                     param_1,"1removeItem()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80);
      goto LAB_100554bc3;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80),"2clicked()",
                     param_1,"1editItem()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) goto LAB_100554bce;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_1 + 0x20,"2dataChanged(QModelIndex,QModelIndex)",param_1,
                     "1onRemapsChanged()",0);
    if ((cVar1 != '\0') && (local_50 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                       "2currentIndexChanged(int)",param_1,"1onCurrentProfileChanged()",0);
      if ((cVar1 != '\0') && (local_58 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100554c24;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                   "2currentIndexChanged(int)",param_1,"1onCurrentProfileChanged()",0);
LAB_100554c24:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

