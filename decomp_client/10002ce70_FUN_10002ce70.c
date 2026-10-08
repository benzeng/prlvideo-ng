
void FUN_10002ce70(long param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  cVar1 = '\0';
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x18),"2timeout()",param_1,
                   "1onDelayedUIVisibilityUpdateTimeout()",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar2 = '\0';
  QObject::connect(&local_40,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"1onVmAdded(GUI::VmId)",0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar1 = '\0';
  QObject::connect(&local_48,DAT_1023108e0,"2vmRemoved(GUI::VmId)",param_1,"1onVmRemoved(GUI::VmId)"
                   ,0);
  if (cVar2 != '\0') {
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_50,DAT_1023108e0,
                   "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",
                   param_1,
                   "1onKeyboardGrabStateChanged(const QString&, bool, GUI::InputStateChangeReason)",
                   0);
  if ((cVar1 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = CHostDesktopWorkspacesController::instance();
    QObject::connect(&local_58,uVar4,"2workspacesUpdated()",param_1,"1onWorkspacesUpdated()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = CHostDesktopWorkspacesController::instance();
    QObject::connect(&local_58,uVar4,"2workspacesUpdated()",param_1,"1onWorkspacesUpdated()",0);
    if ((cVar1 != '\0') && (local_58 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      QObject::connect(&local_60,*(undefined8 *)PTR_self_1021e1388,
                       "2activeWindowChanged(QWidget*, QWidget*)",param_1,
                       "1onActiveWindowChanged(QWidget*, QWidget*)",0);
      if ((cVar1 != '\0') && (local_60 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10002d14a;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)PTR_self_1021e1388,
                   "2activeWindowChanged(QWidget*, QWidget*)",param_1,
                   "1onActiveWindowChanged(QWidget*, QWidget*)",0);
LAB_10002d14a:
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

