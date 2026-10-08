
void FUN_1007825d0(undefined8 *param_1)

{
  undefined1 uVar1;
  long in_RAX;
  void *pvVar2;
  long local_28;
  
  local_28 = in_RAX;
  FUN_100782110();
  *param_1 = &PTR_FUN_10222a820;
  if (DAT_1023108e8 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001ba940(pvVar2);
    DAT_1022727a8 = 1;
    DAT_1023108e8 = pvVar2;
  }
  uVar1 = FUN_1001baa80(DAT_1023108e8);
  FUN_1007821f0(param_1,uVar1,0);
  if (DAT_1023108e8 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001ba940(pvVar2);
    DAT_1022727a8 = 1;
    DAT_1023108e8 = pvVar2;
  }
  QObject::connect(&local_28,DAT_1023108e8,"2presentationModeStateChanged(bool)",param_1,
                   "1onPresentationModeStateChanged(bool)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

