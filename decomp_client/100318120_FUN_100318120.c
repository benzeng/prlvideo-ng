
void FUN_100318120(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x60),
                   "2vmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",param_1,
                   "1onVmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,*(undefined8 *)(param_1 + 0x60),
                     "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",param_1,
                     "1onVmDisplayScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",0
                    );
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
LAB_1003182d0:
    QObject::connect((Connection *)&local_48,uVar6,
                     "2vmLanguageHotkeysChanged( const QString&, PRL_IO_LANGUAGE_HOTKEYS )",param_1,
                     "1onVmLanguageHotkeysChanged( const QString&, PRL_IO_LANGUAGE_HOTKEYS )",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
LAB_1003182fc:
    cVar1 = '\0';
    QObject::connect(&local_50,uVar6,
                     "2vmAvailableDisplaysReceived( const QString&, PRL_IO_AVAILABLE_DISPLAYS )",
                     param_1,
                     "1onVmAvailableDisplaysReceived( const QString&, PRL_IO_AVAILABLE_DISPLAYS )",0
                    );
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x60),
                     "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",param_1,
                     "1onVmDisplayScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",0
                    );
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      goto LAB_1003182d0;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x60),
                     "2vmLanguageHotkeysChanged( const QString&, PRL_IO_LANGUAGE_HOTKEYS )",param_1,
                     "1onVmLanguageHotkeysChanged( const QString&, PRL_IO_LANGUAGE_HOTKEYS )",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      goto LAB_1003182fc;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    cVar1 = '\0';
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x60),
                     "2vmAvailableDisplaysReceived( const QString&, PRL_IO_AVAILABLE_DISPLAYS )",
                     param_1,
                     "1onVmAvailableDisplaysReceived( const QString&, PRL_IO_AVAILABLE_DISPLAYS )",0
                    );
    if (cVar2 != '\0') {
      if (local_50 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  local_58 = (QArrayData *)QString::fromAscii_helper("parallels.ModernMix.guest.win",0x1d);
  lVar3 = FUN_10032d8b0(uVar6,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100318368;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100318368:
  if (lVar3 != 0) {
    QObject::connect(&local_60,lVar3,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onTISWindows7LookChanged( SdkHandleWrap, PRL_UINT32 )",2);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_60 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  local_68 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallStage.guest.cross",0x27)
  ;
  lVar3 = FUN_10032d8b0(uVar6,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031844f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10031844f:
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to get TIS_UID_TOOLS_INSTALL_STAGE record");
  }
  else {
    QObject::connect(&local_70,lVar3,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onTISToolsIntallationStageChanged(SdkHandleWrap,PRL_UINT32)",2);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_70 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
  }
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    QObject::connect(&local_78,*(long *)(param_1 + 0x18),
                     "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                     "1onAfterVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
    bVar7 = cVar1 != '\0';
    cVar1 = '\0';
    if (bVar7) {
      if (local_78 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
  }
  cVar2 = '\0';
  QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x70),
                   "2coherenceKeyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)"
                   ,*(undefined8 *)(param_1 + 0x148),
                   "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",0
                  );
  if (cVar1 != '\0') {
    if (local_80 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x60),
                   "2vmMouseCursorReceived(const QString&, PRL_IO_MOUSE_CURSOR, QByteArray)",
                   *(undefined8 *)(param_1 + 0x98),
                   "1onGuestCursorSet(const QString&, PRL_IO_MOUSE_CURSOR, QByteArray)",0);
  if ((cVar2 == '\0') || (local_88 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect((Connection *)&local_90,*(undefined8 *)(param_1 + 0x60),
                     "2vmKeyboardLedsChanged(const QString&, PRL_IO_KEYBOARD_LEDS)",
                     *(undefined8 *)(param_1 + 0x98),
                     "1vmKeyboardLedsChanged(const QString&, PRL_IO_KEYBOARD_LEDS)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
LAB_10031873e:
    cVar1 = '\0';
    QObject::connect(&local_98,uVar6,"2vmMouseCursorHidden(const QString&)",uVar5,
                     "1onGuestCursorHid(const QString&)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect(&local_90,*(undefined8 *)(param_1 + 0x60),
                     "2vmKeyboardLedsChanged(const QString&, PRL_IO_KEYBOARD_LEDS)",
                     *(undefined8 *)(param_1 + 0x98),
                     "1vmKeyboardLedsChanged(const QString&, PRL_IO_KEYBOARD_LEDS)",0);
    if ((cVar1 == '\0') || (local_90 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_90);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      goto LAB_10031873e;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    cVar1 = '\0';
    QObject::connect(&local_98,*(undefined8 *)(param_1 + 0x60),
                     "2vmMouseCursorHidden(const QString&)",*(undefined8 *)(param_1 + 0x98),
                     "1onGuestCursorHid(const QString&)",0);
    if (cVar2 != '\0') {
      if (local_98 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                ,
                "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                ,0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2silentOperationModeChanged(const QString&, bool)",
                "2vmDesktopSilentOperationModeChanged(const QString&, bool)",0);
  QObject::connect(&local_a0,*(undefined8 *)(param_1 + 0xa0),
                   "2taskBarVisibilityStateChanged( bool, bool )",*(undefined8 *)(param_1 + 0x98),
                   "1onTaskBarVisibilityStateChanged( bool, bool )",0);
  if ((cVar1 == '\0') || (local_a0 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect((Connection *)&local_a8,*(undefined8 *)(param_1 + 0xa0),"2activated()",
                     *(undefined8 *)(param_1 + 0x98),"1onDesktopUtilitiesToolActivated()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_a8);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect(&local_a8,*(undefined8 *)(param_1 + 0xa0),"2activated()",
                     *(undefined8 *)(param_1 + 0x98),"1onDesktopUtilitiesToolActivated()",0);
    if ((cVar1 != '\0') && (local_a8 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
      cVar2 = '\0';
      QObject::connect(&local_b0,*(undefined8 *)(param_1 + 0xa0),"2deactivated()",
                       *(undefined8 *)(param_1 + 0x98),"1onDesktopUtilitiesToolDeactivated()",0);
      if (cVar1 != '\0') {
        if (local_b0 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_1003189a6;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a8);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
  }
  cVar2 = '\0';
  QObject::connect(&local_b0,uVar5,"2deactivated()",uVar6,"1onDesktopUtilitiesToolDeactivated()",0);
LAB_1003189a6:
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QObject::connect(&local_b8,*(undefined8 *)(param_1 + 0x60),
                   "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",
                   *(undefined8 *)(param_1 + 0xf0),
                   "2vmScreenSizeChanged( const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",0);
  if ((cVar2 == '\0') || (local_b8 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    QObject::connect(&local_c0,*(undefined8 *)(param_1 + 0x70),"2unsupportedDisplayCfgSet()",
                     *(undefined8 *)(param_1 + 0xf0),"2unsupportedCoherenceDisplayCfgSet()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    QObject::connect(&local_c0,*(undefined8 *)(param_1 + 0x70),"2unsupportedDisplayCfgSet()",
                     *(undefined8 *)(param_1 + 0xf0),"2unsupportedCoherenceDisplayCfgSet()",0);
    if ((cVar1 != '\0') && (local_c0 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c0);
  return;
}

