
void FUN_1005693f0(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  cVar2 = '\0';
  QObject::connect(&local_30,uVar4,"2lockedStateChanged()",param_1,"1onLockedStateChanged()",0);
  if (local_30 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  lVar1 = param_1 + 0x20;
  QObject::connect(&local_38,lVar1,"2dataChanged(QModelIndex,QModelIndex)",
                   *(undefined8 *)(param_1 + 0x10),"2dataChanged()",0);
  if ((cVar2 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,lVar1,"2modelAboutToBeReset()",param_1,
                     "1onModelAboutToBeReset()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
LAB_1005695ab:
    cVar2 = '\0';
    QObject::connect(&local_48,lVar1,"2modelReset()",param_1,"1onModelReset()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,lVar1,"2modelAboutToBeReset()",param_1,"1onModelAboutToBeReset()",0);
    if ((cVar2 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      goto LAB_1005695ab;
    }
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    cVar2 = '\0';
    QObject::connect(&local_48,lVar1,"2modelReset()",param_1,"1onModelReset()",0);
    if (cVar3 != '\0') {
      if (local_48 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                   "2doubleClicked(QModelIndex)",param_1,"1editKey()",0);
  if ((cVar2 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = QAbstractItemView::selectionModel();
    QObject::connect(&local_58,uVar4,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updateEditButtons()",0);
LAB_10056979a:
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect((Connection *)&local_60,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),
                     "2clicked()",param_1,"1addKey()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60);
LAB_1005697dc:
    QObject::connect((Connection *)&local_68,uVar4,"2clicked()",param_1,"1editKey()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = QAbstractItemView::selectionModel();
    QObject::connect(&local_58,uVar4,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updateEditButtons()",0);
    if ((cVar2 == '\0') || (local_58 == 0)) goto LAB_10056979a;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),"2clicked()",
                     param_1,"1addKey()",0);
    if ((cVar2 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60);
      goto LAB_1005697dc;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),"2clicked()",
                     param_1,"1editKey()",0);
    if ((cVar2 != '\0') && (local_68 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      QObject::connect(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),"2clicked()",
                       param_1,"1removeKey()",0);
      if ((cVar2 != '\0') && (local_70 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100569822;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58);
  }
  QObject::connect(&local_70,uVar4,"2clicked()",param_1,"1removeKey()",0);
LAB_100569822:
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  return;
}

