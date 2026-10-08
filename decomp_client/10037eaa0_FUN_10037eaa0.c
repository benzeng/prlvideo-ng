
void FUN_10037eaa0(long param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
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
  
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar1 = '\0';
  QObject::connect(&local_30,DAT_1023108e0,
                   "2mouseGrabStateChanged(const QString&, bool, GUI::InputStateChangeReason)",
                   param_1,"1onGrabStateChanged(const QString&)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar2 = '\0';
  QObject::connect(&local_38,DAT_1023108e0,
                   "2keyboardGrabStateChanged(const QString&, bool, GUI::InputStateChangeReason)",
                   param_1,"1onGrabStateChanged(const QString&)",0);
  if (cVar1 != '\0') {
    if (local_38 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_40,uVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onAfterVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0)
  ;
  if (cVar2 != '\0') {
    if (local_40 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_48,uVar4,"2memorySwappingStarted()",param_1,"1onMemorySwappingChanged()",0
                  );
  if (cVar1 != '\0') {
    if (local_48 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_50,uVar4,"2memorySwappingFinished()",param_1,"1onMemorySwappingChanged()",
                   0);
  if (cVar2 != '\0') {
    if (local_50 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_58,uVar4,"2shutDownRetryStarted()",param_1,"1onShutDownRetryStarted()",0);
  if (cVar1 != '\0') {
    if (local_58 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_60,uVar4,"2shutDownRetryFinished()",param_1,"1onShutDownRetryFinished()",0
                  );
  if (cVar2 != '\0') {
    if (local_60 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_68,uVar4,"2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",
                   param_1,"1onAfterVmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",0);
  if (cVar1 != '\0') {
    if (local_68 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_70,uVar4,"2vmHWUpgradeStarted()",param_1,"1onVmUpgradingStateChanged()",0)
  ;
  if (cVar2 != '\0') {
    if (local_70 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_78,uVar4,"2vmHWUpgradeProgressChanged(uint, int)",param_1,
                   "1onVmUpgradingStateChanged()",0);
  if (cVar1 != '\0') {
    if (local_78 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_80,uVar4,"2vmHWUpgradeFinished()",param_1,"1onVmUpgradingStateChanged()",0
                  );
  if ((cVar2 != '\0') && (local_80 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  return;
}

