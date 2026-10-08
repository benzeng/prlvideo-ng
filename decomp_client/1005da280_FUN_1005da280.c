
void FUN_1005da280(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),"2toggled(bool)",
                   param_1,"1onSharedForAllChanged(bool)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    QObject::connect((Connection *)&local_38,uVar3,"2osVersionChanged(uint)",param_1,
                     "1regenerateName()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = CPrlFileDevSelectorWidget::getFileDevSelector();
LAB_1005da46b:
    QObject::connect((Connection *)&local_40,uVar3,"2afterBrowse()",param_1,"1onLocationChanged()",0
                    );
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
LAB_1005da49e:
    cVar1 = '\0';
    QObject::connect(&local_48,uVar3,
                     "2currentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType,const QString&,const QString&)"
                     ,param_1,"1updateSpaceControls()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    QObject::connect(&local_38,uVar3,"2osVersionChanged(uint)",param_1,"1regenerateName()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = CPrlFileDevSelectorWidget::getFileDevSelector();
      goto LAB_1005da46b;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = CPrlFileDevSelectorWidget::getFileDevSelector();
    QObject::connect(&local_40,uVar3,"2afterBrowse()",param_1,"1onLocationChanged()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      goto LAB_1005da49e;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    cVar1 = '\0';
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                     "2currentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType,const QString&,const QString&)"
                     ,param_1,"1updateSpaceControls()",0);
    if (cVar2 != '\0') {
      if (local_48 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023109c0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_10076b480(pvVar4);
    DAT_102271418 = 1;
    DAT_1023109c0 = pvVar4;
  }
  QObject::connect(&local_50,DAT_1023109c0,"2canFreeDiskSpaceChanged(bool)",param_1,
                   "1updateSpaceControls()",0);
  if ((cVar1 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0),"2clicked()",
                     param_1,"1onRunFreeSpaceWizard()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0),"2clicked()",
                     param_1,"1onRunFreeSpaceWizard()",0);
    if ((cVar1 != '\0') && (local_58 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = FUN_1001d50a0();
      QObject::connect(&local_60,uVar3,"2activeWindowChanged(QWidget*,QWidget*)",param_1,
                       "1onActiveWindowChanged(QWidget*,QWidget*)",0);
      if ((cVar1 != '\0') && (local_60 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1005da634;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar3 = FUN_1001d50a0();
  QObject::connect(&local_60,uVar3,"2activeWindowChanged(QWidget*,QWidget*)",param_1,
                   "1onActiveWindowChanged(QWidget*,QWidget*)",0);
LAB_1005da634:
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

