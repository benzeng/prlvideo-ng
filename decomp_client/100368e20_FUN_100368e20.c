
void FUN_100368e20(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar2 = FUN_100323dd0(uVar2);
  cVar1 = '\0';
  QObject::connect(&local_28,uVar2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (local_28 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar2 = FUN_100323e00(uVar2);
  uVar2 = FUN_100319be0(uVar2);
  QObject::connect(&local_30,uVar2,"2vmDesktopIOStateChanged(const QString&, PRL_IO_STATE)",param_1,
                   "1onVmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",0);
  if ((cVar1 == '\0') || (local_30 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,uVar2,
                     "2vmScreenSurfaceDetached(const QString&, PRL_IO_SCREEN_SURFACE)",param_1,
                     "1onVmScreenSurfaceDetached(const QString&, PRL_IO_SCREEN_SURFACE)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,uVar2,
                     "2vmScreenSurfaceDetached(const QString&, PRL_IO_SCREEN_SURFACE)",param_1,
                     "1onVmScreenSurfaceDetached(const QString&, PRL_IO_SCREEN_SURFACE)",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,uVar2,
                       "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",param_1,
                       "1onVmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100368fdf;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,uVar2,
                   "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",param_1,
                   "1onVmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",0);
LAB_100368fdf:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

