
void FUN_10073ca00(QObject *param_1)

{
  void *pvVar1;
  long local_40;
  long local_38;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102227f40;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(local_30,DAT_1023108e0,"2beforeVmRemoved(const GUI::VmId &)",param_1,
                   "1onBeforeVmRemoved(const GUI::VmId &)",0);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(&local_38,DAT_1023108e0,
                   "2vmDesktopIOStateChanged(const GUI::VmId &, PRL_IO_STATE)",param_1,
                   "1onVmDesktopIOStateChanged(const GUI::VmId &, PRL_IO_STATE)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(&local_40,DAT_1023108e0,
                   "2vmConfigurationChanged(const GUI::VmId &, const CVmConfiguration &)",param_1,
                   "1onVmConfigurationChanged(const GUI::VmId &, const CVmConfiguration &)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

