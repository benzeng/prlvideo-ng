
void FUN_1001c2920(QObject *param_1)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021feed0;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  param_1[0x18] = (QObject)0x0;
  uVar2 = CHostDesktopWorkspacesController::instance();
  QObject::connect(local_38,uVar2,"2workspacesUpdated()",param_1,"1updateGamma()",0);
  if (local_38[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_40,DAT_1023108e0,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,"1updateGamma()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_48,DAT_1023108e0,"2vmDisplayGammaChanged(const GUI::VmId&, uint )",param_1
                   ,"1updateGamma()",0);
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
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_50,DAT_1023108e0,
                   "2vmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",param_1,
                   "1updateGamma()",0);
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
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_58,DAT_1023108e0,"2screenLocked()",param_1,"1onScreenLocked()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_58 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_60,DAT_1023108e0,"2screenUnlocked()",param_1,"1onScreenUnlocked()",0);
  if ((cVar1 != '\0') && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

