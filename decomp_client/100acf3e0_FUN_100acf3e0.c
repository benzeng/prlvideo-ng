
void FUN_100acf3e0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
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
  
  uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x18),"2DesktopGeometryChangedSignal()",
                   param_1,"1DesktopGeometryChangedSlot()",2);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_1,"2UngrabAllSignal()",param_1,"1onUngrabAll()",2);
LAB_100acf513:
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar1 = '\0';
    QObject::connect(&local_40,uVar3,
                     "2vmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     param_1,
                     "1vmConfigurationChangedSlot(const CVmConfiguration&, const CVmConfiguration&)"
                     ,0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_1,"2UngrabAllSignal()",param_1,"1onUngrabAll()",2);
    if ((cVar1 == '\0') || (local_38 == 0)) goto LAB_100acf513;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar1 = '\0';
    QObject::connect(&local_40,uVar3,
                     "2vmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     param_1,
                     "1vmConfigurationChangedSlot(const CVmConfiguration&, const CVmConfiguration&)"
                     ,0);
    if (cVar2 != '\0') {
      if (local_40 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(param_1 + 0xa30),
                   "2stubActivated(const ProcessSerialNumber)",param_1,
                   "1OnStubActivated(const ProcessSerialNumber)",0);
  if ((cVar1 == '\0') || (local_48 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect((Connection *)&local_50,*(undefined8 *)(param_1 + 0xa30),"2vmDeactivated()",
                     param_1,"1OnVmDeactivated()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
LAB_100acf6b9:
    cVar1 = '\0';
    QObject::connect(&local_58,param_1 + 0x9c0,"2KeyboardGrabStateChanged(bool)",uVar3,
                     "2keyboardGrabStateChanged(bool)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0xa30),"2vmDeactivated()",param_1,
                     "1OnVmDeactivated()",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      goto LAB_100acf6b9;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    cVar1 = '\0';
    QObject::connect(&local_58,param_1 + 0x9c0,"2KeyboardGrabStateChanged(bool)",
                     *(undefined8 *)(param_1 + 0x10),"2keyboardGrabStateChanged(bool)",0);
    if (cVar2 != '\0') {
      if (local_58 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0xf8),
                   "2StubDataReceived(const QByteArray, const ProcessSerialNumber)",param_1,
                   "1OnStubDataReceived(const QByteArray, const ProcessSerialNumber)",0);
  if ((cVar1 == '\0') || (local_60 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0xf8),
                     "2StubEventsReceived(const ProcessSerialNumber, const QByteArray)",param_1,
                     "1OnStubEventsReceived(const ProcessSerialNumber, const QByteArray)",0);
LAB_100acfa0d:
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0xf8),
                     "2StubConnected(const QString, const ProcessSerialNumber, const hwndList_t)",
                     param_1,
                     "1OnStubConnected(const QString, const ProcessSerialNumber, const hwndList_t)",
                     0);
LAB_100acfa3c:
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0xf8),
                     "2StubDisconnected(const QString, const ProcessSerialNumber)",param_1,
                     "1OnStubDisconnected(const QString, const ProcessSerialNumber)",0);
LAB_100acfa6b:
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0xf8),
                     "2StubWindowAdded(const QString, const ProcessSerialNumber, UINT64)",param_1,
                     "1OnStubWindowAdded(const QString, const ProcessSerialNumber, UINT64)",0);
LAB_100acfa9a:
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,param_1 + 0x920,"2sigFinalized()",param_1,"1OnZorderFinalized()",2);
LAB_100acfacc:
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect(&local_90,*(undefined8 *)(param_1 + 0xa58),"2timeout(bool)",param_1,
                     "1OnIndentsTimeout(bool)",0);
LAB_100acfafe:
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    *(byte *)(param_1 + 0xa7c) = *(byte *)(param_1 + 0xa7c) | 1;
    QTimer::setInterval((int)(param_1 + 0xa60));
    QObject::connect((Connection *)&local_98,param_1 + 0xa60,"2timeout()",param_1,
                     "1OnIndentsScreenshotTimeout()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    *(byte *)(param_1 + 0xa9c) = *(byte *)(param_1 + 0xa9c) | 1;
    QTimer::setInterval((int)param_1 + 0xa80);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0xf8),
                     "2StubEventsReceived(const ProcessSerialNumber, const QByteArray)",param_1,
                     "1OnStubEventsReceived(const ProcessSerialNumber, const QByteArray)",0);
    if ((cVar1 == '\0') || (local_68 == 0)) goto LAB_100acfa0d;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0xf8),
                     "2StubConnected(const QString, const ProcessSerialNumber, const hwndList_t)",
                     param_1,
                     "1OnStubConnected(const QString, const ProcessSerialNumber, const hwndList_t)",
                     0);
    if ((cVar1 == '\0') || (local_70 == 0)) goto LAB_100acfa3c;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0xf8),
                     "2StubDisconnected(const QString, const ProcessSerialNumber)",param_1,
                     "1OnStubDisconnected(const QString, const ProcessSerialNumber)",0);
    if ((cVar1 == '\0') || (local_78 == 0)) goto LAB_100acfa6b;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0xf8),
                     "2StubWindowAdded(const QString, const ProcessSerialNumber, UINT64)",param_1,
                     "1OnStubWindowAdded(const QString, const ProcessSerialNumber, UINT64)",0);
    if ((cVar1 == '\0') || (local_80 == 0)) goto LAB_100acfa9a;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,param_1 + 0x920,"2sigFinalized()",param_1,"1OnZorderFinalized()",2);
    if ((cVar1 == '\0') || (local_88 == 0)) goto LAB_100acfacc;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect(&local_90,*(undefined8 *)(param_1 + 0xa58),"2timeout(bool)",param_1,
                     "1OnIndentsTimeout(bool)",0);
    if ((cVar1 == '\0') || (local_90 == 0)) goto LAB_100acfafe;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    *(byte *)(param_1 + 0xa7c) = *(byte *)(param_1 + 0xa7c) | 1;
    QTimer::setInterval((int)(param_1 + 0xa60));
    QObject::connect(&local_98,param_1 + 0xa60,"2timeout()",param_1,"1OnIndentsScreenshotTimeout()",
                     0);
    if ((cVar1 != '\0') && (local_98 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_98);
      *(byte *)(param_1 + 0xa9c) = *(byte *)(param_1 + 0xa9c) | 1;
      QTimer::setInterval((int)(param_1 + 0xa80));
      QObject::connect(&local_a0,param_1 + 0xa80,"2timeout()",param_1,"1OnLazyRecreateTimeout()",0);
      if ((cVar1 != '\0') && (local_a0 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100acfb8b;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    *(byte *)(param_1 + 0xa9c) = *(byte *)(param_1 + 0xa9c) | 1;
    QTimer::setInterval((int)param_1 + 0xa80);
  }
  QObject::connect(&local_a0,param_1 + 0xa80,"2timeout()",param_1,"1OnLazyRecreateTimeout()",0);
LAB_100acfb8b:
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  return;
}

