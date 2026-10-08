
void FUN_100a675c0(QObject *param_1,undefined8 param_2)

{
  QTimer *this;
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_1022391b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239230;
  FUN_10018c2b0(param_2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  cVar1 = CVmTravelOptions::isEnabled();
  uVar3 = 7;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  param_1[0x24] = (QObject)0x0;
  iVar4 = FUN_10018a9d0(param_2);
  param_1[0x25] = (QObject)(iVar4 == 0x30000004);
  this = (QTimer *)(param_1 + 0x28);
  QTimer::QTimer(this,(QObject *)0x0);
  QObject::connect(&local_38,param_2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                   ,param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  bVar2 = 1;
  if (local_38 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,param_2,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                   "1onVmConfigurationChanged(const CVmConfiguration &)",0);
  if (bVar2 == 0) {
    if (local_40 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  else {
    cVar1 = '\0';
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar5 = FUN_10018c280(param_2);
  uVar5 = FUN_100319c00(uVar5);
  QObject::connect(&local_48,uVar5,"2coherenceWndActivated(const QString&)",param_1,
                   "1onCoherenceWndActivated(const QString&)",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_48 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,uVar5,"2coherenceWndDeactivated(const QString&)",param_1,
                   "1onCoherenceWndDeactivated(const QString&)",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_50 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  param_1[0x44] = (QObject)((byte)param_1[0x44] & 0xfe);
  QTimer::setInterval((int)this);
  QObject::connect(&local_58,this,"2timeout()",param_1,"1onVmIdleCheckTimeout()",0);
  if ((cVar1 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  FUN_10018c250(&local_60,param_2);
  FUN_100a4a120(param_1 + 0x10,local_60,0x12);
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  return;
}

