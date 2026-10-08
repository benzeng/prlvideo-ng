
void FUN_100323840(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  Connection local_60 [8];
  Connection local_58 [8];
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [8];
  
  QObject::connect(local_30,param_1,
                   "2switchViewModeToDeferred( GUI::VmDisplayViewMode, const GUI::VmDisplayViewModeSwitchOptions & )"
                   ,param_1,
                   "1onDeferredSwitchViewModeTo( GUI::VmDisplayViewMode, const GUI::VmDisplayViewModeSwitchOptions & )"
                   ,2);
  QMetaObject::Connection::~Connection(local_30);
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_100319be0();
    QObject::connect(local_38,uVar1,"2vmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",
                     param_1,"1onVmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",0);
    QMetaObject::Connection::~Connection(local_38);
    QObject::connect(local_40,uVar1,
                     "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",param_1,
                     "1onScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",0);
    QMetaObject::Connection::~Connection(local_40);
    QObject::connect(local_48,uVar1,"2vmDynResToolStatusChanged( const QString&, PRL_BOOL )",param_1
                     ,"1onDynResToolStatusChanged( const QString&, PRL_BOOL )",0);
    QMetaObject::Connection::~Connection(local_48);
    QObject::connect(local_50,uVar1,"2onVmScreenGammaChanged(PRL_IO_DISPLAY_GAMMA , QByteArray )",
                     param_1,"1onVmScreenGammaChanged(PRL_IO_DISPLAY_GAMMA , QByteArray )",0);
    QMetaObject::Connection::~Connection(local_50);
    if (DAT_1023108e0 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_1001a61d0(pvVar2);
      DAT_10226c110 = 1;
      DAT_1023108e0 = pvVar2;
    }
    uVar1 = 0;
    FUN_1001a6390(DAT_1023108e0,param_1,"2vmDisplayGammaChanged(const GUI::VmId&, uint)",
                  "2vmDisplayGammaChanged(const GUI::VmId&, uint)",0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    lVar3 = FUN_100319390(uVar1);
    if (lVar3 != 0) {
      QObject::connect(local_58,lVar3,
                       "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                       "1onAfterVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
      QMetaObject::Connection::~Connection(local_58);
      QObject::connect(local_60,lVar3,"2vmConfigurationChanged(CVmConfiguration)",param_1,
                       "1updateDisplayScaleFactor()",0);
      QMetaObject::Connection::~Connection(local_60);
    }
  }
  return;
}

