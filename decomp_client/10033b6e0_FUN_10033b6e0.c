
void FUN_10033b6e0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  Connection local_38 [8];
  long local_30;
  Connection local_28 [8];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319be0(uVar2);
  QObject::connect(local_28,uVar2,
                   "2toolsSIADataReceived( const QString&, PRL_IO_TOOLS_SIA_DATA, QByteArray )",
                   param_1,"1onSIADataReceived( const QString&, PRL_IO_TOOLS_SIA_DATA, QByteArray )"
                   ,0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(&local_30,uVar2,"2vmDesktopIOStateChanged(const QString&, PRL_IO_STATE)",param_1,
                   "1onClientConnected(const QString&, PRL_IO_STATE)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    if (cVar1 != '\0') goto LAB_10033b7a2;
  }
  FUN_100df99c0("","prl_client_app",0,"Can\'t connect vmDesktopIOStateChanged signal");
LAB_10033b7a2:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar3 = FUN_100319390(uVar2);
  if (lVar3 != 0) {
    QObject::connect(local_38,lVar3,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                     "1onVmConfigurationChaned( const CVmConfiguration& )",0);
    QMetaObject::Connection::~Connection(local_38);
    QObject::connect(&local_40,lVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                     param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
    if (local_40 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_100df99c0("","prl_client_app",0,"Can\'t connect vmStateChanged signal");
  }
  return;
}

