
void FUN_100105760(QObject *param_1,undefined8 param_2)

{
  QObject QVar1;
  byte bVar2;
  long in_RAX;
  undefined8 uVar3;
  long local_28;
  
  local_28 = in_RAX;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f9450;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_100d752c0();
  uVar3 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  QVar1 = (QObject)FUN_100d75500(uVar3,0);
  param_1[0x18] = QVar1;
  uVar3 = FUN_100d752c0();
  QObject::connect(&local_28,uVar3,"2sigAppsStateChanged(bool)",param_1,"1settingsChanged(bool)",0);
  bVar2 = 1;
  if (local_28 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  if (bVar2 != 0) {
    FUN_100df99c0("","prl_client_app",0,"connect failed in SGARestrictor");
  }
  return;
}

