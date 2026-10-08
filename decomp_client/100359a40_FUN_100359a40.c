
void FUN_100359a40(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_28,DAT_1023108e0,
                   "2appUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",
                   param_1,
                   "1onAppUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
LAB_100359ac8:
    FUN_100df99c0("CRYSTAL_EDU_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                  "VmDesktop/Logics/CVmDesktopCrystalIndicationLogic.cpp",0x61,"connectSignals");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    if (cVar1 == '\0') goto LAB_100359ac8;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  QObject::connect(&local_30,uVar3,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,
                   "1onVmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
LAB_100359b68:
    FUN_100df99c0("CRYSTAL_EDU_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                  "VmDesktop/Logics/CVmDesktopCrystalIndicationLogic.cpp",0x67,"connectSignals");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    if (cVar1 == '\0') goto LAB_100359b68;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  QObject::connect(&local_38,*(long *)(param_1 + 0x38),
                   "2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",param_1,
                   "1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (cVar1 != '\0') goto LAB_100359c40;
  }
  FUN_100df99c0("CRYSTAL_EDU_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                "VmDesktop/Logics/CVmDesktopCrystalIndicationLogic.cpp",0x6d,"connectSignals");
LAB_100359c40:
  uVar3 = FUN_10018f5c0(*(undefined8 *)(param_1 + 0x38));
  QObject::connect(&local_40,uVar3,"2toolsVersionChanged(QString)",param_1,
                   "1onToolsVersionChanged(QString)",0);
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
  FUN_100df99c0("CRYSTAL_EDU_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                "VmDesktop/Logics/CVmDesktopCrystalIndicationLogic.cpp",0x71,"connectSignals");
  return;
}

