
void FUN_10007f170(QObject *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021eda90;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(local_38,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"1onVmAdded(GUI::VmId)",0);
  if (local_38[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_40,DAT_1023108e0,"2beforeVmRemoved(GUI::VmId)",param_1,
                   "1onVmRemoved(GUI::VmId)",0);
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
  uVar3 = FUN_100794960();
  QObject::connect(&local_48,uVar3,"2afterApplianceAdded(const CApplianceWrap&)",param_1,
                   "1onApplianceAdded(const CApplianceWrap&)",0);
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
  uVar3 = FUN_100794960();
  QObject::connect(&local_50,uVar3,"2beforeApplianceRemoved(const CApplianceWrap&)",param_1,
                   "1onApplianceRemoved(const CApplianceWrap&)",0);
  if ((cVar1 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  return;
}

