
void FUN_10035ac20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  Connection local_90 [8];
  Connection local_88 [8];
  Connection local_80 [8];
  Connection local_78 [8];
  Connection local_70 [8];
  Connection local_68 [8];
  Connection local_60 [8];
  Connection local_58 [8];
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [8];
  
  QObject::connect(local_30,*(undefined8 *)(param_1 + 0x18),
                   "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",
                   param_1,
                   "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",0
                  );
  QMetaObject::Connection::~Connection(local_30);
  QObject::connect(local_38,*(undefined8 *)(param_1 + 0x18),
                   "2mouseGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",
                   param_1,
                   "2mouseGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                   "2cursorUpdated(const CMouseCursor&)",param_1,
                   "1onCursorUpdated(const CMouseCursor&)",0);
  QMetaObject::Connection::~Connection(local_40);
  lVar1 = FUN_10035da40(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != m_pData->getVmDesktop()","VmDesktop/HIDController/CHIDController.cpp",0x5f,
                  "setupSignals");
  }
  uVar2 = FUN_10035da40(*(undefined8 *)(param_1 + 0x18));
  uVar2 = FUN_100319be0(uVar2);
  QObject::connect(local_48,uVar2,
                   "2vmSlidingMouseStatusChanged(const QString&, PRL_IO_SLIDING_MOUSE)",param_1,
                   "1onSlidingMouseStatusChanged(const QString&, PRL_IO_SLIDING_MOUSE)",0);
  QMetaObject::Connection::~Connection(local_48);
  QObject::connect(local_50,uVar2,"2vmScreenSizeChanged(const QString&, PRL_IO_DISPLAY_SCREEN_SIZE)"
                   ,param_1,"1onDisplaySizeChanged(const QString&, PRL_IO_DISPLAY_SCREEN_SIZE)",0);
  QMetaObject::Connection::~Connection(local_50);
  QObject::connect(local_58,uVar2,"2vmKeyboardLedsChanged(const QString&, PRL_IO_KEYBOARD_LEDS)",
                   param_1,"1onVmKeyboardLedsChanged(const QString&, PRL_IO_KEYBOARD_LEDS)",0);
  QMetaObject::Connection::~Connection(local_58);
  uVar2 = FUN_10035da40(*(undefined8 *)(param_1 + 0x18));
  lVar1 = FUN_100319390(uVar2);
  if (lVar1 == 0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != vm",
                  "VmDesktop/HIDController/CHIDController.cpp",0x71,"setupSignals");
  }
  lVar3 = FUN_10018d490(lVar1);
  if (lVar3 == 0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != vm->server()","VmDesktop/HIDController/CHIDController.cpp",0x72,
                  "setupSignals");
  }
  QObject::connect(local_60,lVar1,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  QMetaObject::Connection::~Connection(local_60);
  QObject::connect(local_68,lVar1,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1onVmConfigChanged(const CVmConfiguration&)",0);
  QMetaObject::Connection::~Connection(local_68);
  uVar2 = FUN_10018d490(lVar1);
  QObject::connect(local_70,uVar2,"2serverHardwareChanged(const CHostHardwareInfo&)",param_1,
                   "1onHostHardwareChanged(const CHostHardwareInfo&)",0);
  QMetaObject::Connection::~Connection(local_70);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(local_78,DAT_1023108e0,"2menuShown()",param_1,"1onMenuShown()",0);
  QMetaObject::Connection::~Connection(local_78);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(local_80,DAT_1023108e0,"2menuHidden()",param_1,"1onMenuHidden()",0);
  QMetaObject::Connection::~Connection(local_80);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(local_88,DAT_1023108e0,"2dashboardStateChanged(bool)",param_1,
                   "1onDashboardStateChanged(bool)",0);
  QMetaObject::Connection::~Connection(local_88);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(local_90,DAT_1023108e0,"2exposeActivated()",param_1,"1onExposeActivated()",0);
  QMetaObject::Connection::~Connection(local_90);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2mouseGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",
                "2mouseGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",
                "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",0);
  return;
}

