
void FUN_10009d3a0(QObject *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f8460;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  uVar2 = FUN_100152280();
  QObject::connect(local_30,uVar2,"2afterServerAdded(CServerWrap&)",param_1,
                   "1onAfterServerAdded(CServerWrap&)",0);
  bVar1 = 1;
  if (local_30[0] != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  if (bVar1 == 0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
  }
  else {
    FUN_100df99c0("INVSC","prl_client_app",0,"Error: failed to connect to server manager slots");
  }
  return;
}

