
void FUN_1001d37b0(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
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
  
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar2 = '\0';
  QObject::connect(&local_38,DAT_1023108e0,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,
                   "1onVmPrimaryDisplayViewModeChanged(const QString&,GUI::VmDisplayViewMode,GUI::VmDisplayViewMode)"
                   ,0);
  if (local_38 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar3 = '\0';
  QObject::connect(&local_40,DAT_1023108e0,"2switchToCoherenceComplete(const GUI::VmId&)",param_1,
                   "1updateAppUIOptions()",0);
  if (cVar2 != '\0') {
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar2 = '\0';
  QObject::connect(&local_48,DAT_1023108e0,
                   "2vmConfigurationChanged(const QString&, const CVmConfiguration&)",param_1,
                   "1updateAppUIOptions()",0);
  if (cVar3 != '\0') {
    if (local_48 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar3 = '\0';
  QObject::connect(&local_50,DAT_1023108e0,
                   "2vmDesktopSilentOperationModeChanged(const QString&, bool)",param_1,
                   "1updateAppUIOptions()",0);
  if (cVar2 != '\0') {
    if (local_50 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar2 = '\0';
  QObject::connect(&local_58,DAT_1023108e0,"2serverStateChanged(const QString&, GUI::ServerState)",
                   param_1,"1updateAppUIOptions()",0);
  if (cVar3 != '\0') {
    if (local_58 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar3 = '\0';
  QObject::connect(&local_60,DAT_1023108e0,
                   "2vmStateChanged(const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                   ,param_1,"1updateAppUIOptions()",0);
  if (cVar2 != '\0') {
    if (local_60 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  cVar2 = '\0';
  QObject::connect(&local_68,DAT_1023108e0,"2appPreferencesChanged()",param_1,
                   "1updateAppUIOptions()",0);
  if (cVar3 != '\0') {
    if (local_68 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  if (DAT_102310920 == (void *)0x0) {
    pvVar4 = operator_new(0x50);
    FUN_1001d1080(pvVar4);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar4;
  }
  QObject::connect(&local_70,DAT_102310920,"2quitCanceled()",param_1,"1onAppQuitCanceled()",0);
  if ((cVar2 == '\0') || (local_70 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar5 = CSessionWatcher::instance();
    cVar2 = '\0';
    QObject::connect(&local_78,uVar5,"2stateChanged(CSessionWatcher::State, CSessionWatcher::State)"
                     ,param_1,"1updateAppUIOptions()",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar5 = CSessionWatcher::instance();
    cVar2 = '\0';
    QObject::connect(&local_78,uVar5,"2stateChanged(CSessionWatcher::State, CSessionWatcher::State)"
                     ,param_1,"1updateAppUIOptions()",0);
    if (cVar3 != '\0') {
      if (local_78 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QMutex::lock();
  lVar1 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
    FUN_100df99c0("","prl_client_app",0,"Can\'t get CSharedAppsDsp");
  }
  else {
    DAT_1023108b0 = DAT_1023108b0 + 1;
    QMutex::unlock();
    QObject::connect(&local_80,lVar1,
                     "2sigStubConnected(const QString, const QString, const ProcessSerialNumber, const hwndList_t)"
                     ,param_1,"1updateAppUIOptions()",0);
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else if (local_80 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,lVar1,
                     "2sigStubDisconnected(const QString, const QString, const ProcessSerialNumber)"
                     ,param_1,"1updateAppUIOptions()",0);
    if ((cVar2 != '\0') && (local_88 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    FUN_100055290(&DAT_102310898);
  }
  return;
}

