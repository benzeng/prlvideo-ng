
void FUN_100333cd0(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c320;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  param_1[0x20] = (QObject)0x0;
  pvVar1 = operator_new(0x88);
  FUN_10003a650(pvVar1,param_1,param_2);
  *(void **)(param_1 + 0x18) = pvVar1;
  FUN_100333e50(param_1,0);
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x10),
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,
                   "1onPrimaryDisplayViewModeChanged( const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  uVar2 = FUN_100319be0(*(undefined8 *)(param_1 + 0x10));
  QObject::connect(&local_30,uVar2,"2vmDesktopIOStateChanged(const QString&, PRL_IO_STATE)",param_1,
                   "1onClientStateChanged(const QString&, PRL_IO_STATE)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar2 = FUN_100319be0(*(undefined8 *)(param_1 + 0x10));
  QObject::connect(&local_38,uVar2,
                   "2toolsGeneralCommandReceived(const QString&, PRL_IO_TOOLS_UTILITY_COMMAND, QByteArray)"
                   ,param_1,
                   "1onToolsGeneralCommandReceived(const QString&, PRL_IO_TOOLS_UTILITY_COMMAND, QByteArray)"
                   ,0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

