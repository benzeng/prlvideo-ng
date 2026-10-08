
void FUN_10057c1a0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),"2clicked()",param_1,
                   "1onAdd()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect((Connection *)&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),
                     "2clicked()",param_1,"1onDelete()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58);
LAB_10057c3b2:
    QObject::connect(&local_38,uVar2,"2clicked()",param_1,"1onEdit()",0);
LAB_10057c3bd:
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                     "2itemSelectionChanged()",param_1,"1updateEditButtons()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),"2clicked()",
                     param_1,"1onDelete()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58);
      goto LAB_10057c3b2;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),"2clicked()",
                     param_1,"1onEdit()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) goto LAB_10057c3bd;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                     "2itemSelectionChanged()",param_1,"1updateEditButtons()",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                       "2itemChanged(QTreeWidgetItem *, int)",param_1,
                       "1onProfileItemChanged(QTreeWidgetItem *, int)",0);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10057c417;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                   "2itemChanged(QTreeWidgetItem *, int)",param_1,
                   "1onProfileItemChanged(QTreeWidgetItem *, int)",0);
LAB_10057c417:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

