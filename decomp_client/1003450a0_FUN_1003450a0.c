
void FUN_1003450a0(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [15];
  char local_21;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d120;
  pvVar1 = operator_new(0x58);
  FUN_10009af70(pvVar1,param_2,&local_21);
  *(void **)(param_1 + 0x10) = pvVar1;
  if (local_21 == '\0') {
    FUN_100df99c0("FSCRMONL","prl_client_app",0,"Error: failed to create Fullscreen Monitor client")
    ;
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    QObject::connect(local_30,param_2,
                     "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                     ,pvVar1,
                     "1onPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                     ,0);
    QMetaObject::Connection::~Connection(local_30);
    QObject::connect(local_38,param_1,
                     "2vmScreenSizeChanged(const QString&, PRL_IO_DISPLAY_SCREEN_SIZE)",
                     *(undefined8 *)(param_1 + 0x10),
                     "1onDesktopScreenSizeChanged(const QString&, PRL_IO_DISPLAY_SCREEN_SIZE)",0);
    QMetaObject::Connection::~Connection(local_38);
    QObject::connect(local_40,param_1,"2unsupportedCoherenceDisplayCfgSet()",
                     *(undefined8 *)(param_1 + 0x10),"1onUnsupportedCoherenceDisplayCfgSet()",0);
    QMetaObject::Connection::~Connection(local_40);
  }
  return;
}

