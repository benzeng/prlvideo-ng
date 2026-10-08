
void FUN_100536b00(long param_1)

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
  
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),"2clicked()",param_1,
                   "1onAddUsbDeviceMapping()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98),
                     "2clicked()",param_1,"1onDelUsbDeviceMapping()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xa8);
LAB_100536d82:
    QObject::connect(&local_40,uVar4,"2clicked()",param_1,"1onEditUsbDeviceMapping()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78);
LAB_100536dac:
    QObject::connect((Connection *)&local_48,uVar4,
                     "2currentItemChanged( QTreeWidgetItem*, QTreeWidgetItem* )",param_1,
                     "1updateButtons()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = QAbstractItemView::model();
LAB_100536de1:
    QObject::connect((Connection *)&local_50,uVar4,"2dataChanged( QModelIndex, QModelIndex )",
                     param_1,"1onModelDataChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98),"2clicked()",
                     param_1,"1onDelUsbDeviceMapping()",0);
    if ((cVar2 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xa8);
      goto LAB_100536d82;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xa8),"2clicked()",
                     param_1,"1onEditUsbDeviceMapping()",0);
    if ((cVar2 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78);
      goto LAB_100536dac;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),
                     "2currentItemChanged( QTreeWidgetItem*, QTreeWidgetItem* )",param_1,
                     "1updateButtons()",0);
    if ((cVar2 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar4 = QAbstractItemView::model();
      goto LAB_100536de1;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = QAbstractItemView::model();
    QObject::connect(&local_50,uVar4,"2dataChanged( QModelIndex, QModelIndex )",param_1,
                     "1onModelDataChanged()",0);
    if ((cVar2 != '\0') && (local_50 != 0)) {
      cVar3 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      cVar2 = '\0';
      QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x50),
                       "2userChooseConnectTo( const QModelIndex&, const QString&, const QString& )",
                       param_1,
                       "1onUserChooseConnectTo( const QModelIndex&, const QString&, const QString& )"
                       ,0);
      if (cVar3 != '\0') {
        if (local_58 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_100536e1b;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  cVar2 = '\0';
  QObject::connect(&local_58,uVar4,
                   "2userChooseConnectTo( const QModelIndex&, const QString&, const QString& )",
                   param_1,
                   "1onUserChooseConnectTo( const QModelIndex&, const QString&, const QString& )",0)
  ;
LAB_100536e1b:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar4 = 0;
  if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  cVar3 = '\0';
  QObject::connect(&local_60,uVar4,"2serverHardwareChanged(const CHostHardwareInfo& )",param_1,
                   "1onServerHardwareChanged()",0);
  if (cVar2 != '\0') {
    if (local_60 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar4 = 0;
  if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  cVar2 = '\0';
  QObject::connect(&local_68,uVar4,"2afterVmAdded( const CVmWrap& )",param_1,
                   "1onServerHardwareChanged()",0);
  if (cVar3 != '\0') {
    if (local_68 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar4 = 0;
  if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  QObject::connect(&local_70,uVar4,"2afterVmRemoved( const QString& )",param_1,"1onVmRemoved()",0);
  if ((cVar2 != '\0') && (local_70 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  return;
}

