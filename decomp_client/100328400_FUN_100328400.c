
void FUN_100328400(long param_1)

{
  char cVar1;
  char cVar2;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  cVar1 = '\x01';
  if (*(long *)(param_1 + 0x58) != 0) {
    cVar1 = '\0';
    QObject::connect(&local_28,*(long *)(param_1 + 0x58),"2DesktopGeometryChangedSignal()",param_1,
                     "2coherenceDesktopGeometryChanged()",0);
    if (local_28 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  cVar2 = '\0';
  QObject::connect(&local_30,*(long *)(param_1 + 0x48),"2onBeforeCoherenceModeStartedSignal()",
                   param_1,"2coherenceAboutToStart()",0);
  if (cVar1 != '\0') {
    if (local_30 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x48),"2onCoherenceModeStartedSignal()",
                   param_1,"2coherenceStarted()",0);
  if ((cVar2 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x48),
                     "2onCoherenceModeCannotStartSignal( unsigned int )",param_1,
                     "2coherenceStartFailed( unsigned int )",0);
LAB_10032877e:
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x48),
                     "2onCoherenceModeStoppedSignal( bool, unsigned int )",param_1,
                     "2coherenceStopped( bool, unsigned int )",0);
LAB_1003287aa:
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x48),
                     "2onCoherenceToolAvailabilityChanged(bool)",param_1,
                     "2coherenceToolAvailabilityChanged( bool )",0);
LAB_1003287d6:
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x48),"2keyboardGrabStateChanged(bool)",
                     param_1,"1onCoherenceKeyboardGrabStateChanged( bool )",0);
LAB_100328802:
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x48),"2unsupportedDisplayCfgSet()",param_1
                     ,"2unsupportedDisplayCfgSet()",0);
LAB_10032882a:
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x48),"2vmActivated(const QString&)",
                     param_1,"2coherenceWndActivated(const QString&)",0);
LAB_100328856:
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x48),"2vmDeactivated(const QString&)",
                     param_1,"2coherenceWndDeactivated(const QString&)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x48),
                     "2onCoherenceModeCannotStartSignal( unsigned int )",param_1,
                     "2coherenceStartFailed( unsigned int )",0);
    if ((cVar1 == '\0') || (local_40 == 0)) goto LAB_10032877e;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x48),
                     "2onCoherenceModeStoppedSignal( bool, unsigned int )",param_1,
                     "2coherenceStopped( bool, unsigned int )",0);
    if ((cVar1 == '\0') || (local_48 == 0)) goto LAB_1003287aa;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x48),
                     "2onCoherenceToolAvailabilityChanged(bool)",param_1,
                     "2coherenceToolAvailabilityChanged( bool )",0);
    if ((cVar1 == '\0') || (local_50 == 0)) goto LAB_1003287d6;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x48),"2keyboardGrabStateChanged(bool)",
                     param_1,"1onCoherenceKeyboardGrabStateChanged( bool )",0);
    if ((cVar1 == '\0') || (local_58 == 0)) goto LAB_100328802;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x48),"2unsupportedDisplayCfgSet()",param_1
                     ,"2unsupportedDisplayCfgSet()",0);
    if ((cVar1 == '\0') || (local_60 == 0)) goto LAB_10032882a;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x48),"2vmActivated(const QString&)",
                     param_1,"2coherenceWndActivated(const QString&)",0);
    if ((cVar1 == '\0') || (local_68 == 0)) goto LAB_100328856;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x48),"2vmDeactivated(const QString&)",
                     param_1,"2coherenceWndDeactivated(const QString&)",0);
    if ((cVar1 != '\0') && (local_70 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x48),"2IndentsChanged()",param_1,
                       "2indentsChanged()",0);
      if ((cVar1 != '\0') && (local_78 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1003288a8;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x48),"2IndentsChanged()",param_1,
                   "2indentsChanged()",0);
LAB_1003288a8:
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  return;
}

