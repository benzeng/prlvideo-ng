
void FUN_1001c3b00(QObject *param_1)

{
  char cVar1;
  void *pvVar2;
  long local_50;
  long local_48;
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff050;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15e8;
  param_1[0x18] = (QObject)0x0;
  QProcess::QProcess((QProcess *)(param_1 + 0x20),(QObject *)0x0);
  *(undefined4 *)(param_1 + 0x30) = 2;
  FUN_1001c43f0("QProcess::ProcessState",0,0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(local_40,DAT_1023108e0,
                   "2vmStateChanged( const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )"
                   ,param_1,
                   "1onVmStateChanged( const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )"
                   ,0);
  if (local_40[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_40);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_48,DAT_1023108e0,
                   "2vmConfigurationChanged( const GUI::VmId&, const CVmConfiguration& )",param_1,
                   "1onVmConfigurationChanged( const GUI::VmId&, const CVmConfiguration& )",0);
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
  QObject::connect(&local_50,(QProcess *)(param_1 + 0x20),"2stateChanged( QProcess::ProcessState )",
                   param_1,"1onStateChanged( QProcess::ProcessState )",2);
  if ((cVar1 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  return;
}

