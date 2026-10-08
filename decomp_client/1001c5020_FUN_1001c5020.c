
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c5020(QObject *param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff110;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  uVar3 = FUN_1001d50a0();
  QObject::connect(local_30,uVar3,"2activeStateChanged(bool)",param_1,"1onAppActivate(bool)",0);
  bVar1 = 1;
  if (local_30[0] != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  if (bVar1 == 0) {
    uVar3 = FUN_100060bb0();
    QObject::connect(&local_38,uVar3,"2contextChanged(QPointer<QObject>, QPointer<QObject>)",param_1
                     ,"1onAppContextChanged(QPointer<QObject>, QPointer<QObject>)",0);
    bVar1 = 1;
    if (local_38 != 0) {
      bVar1 = QMetaObject::Connection::isConnected_helper();
      bVar1 = bVar1 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (bVar1 == 0) {
      uVar3 = FUN_100152280();
      QObject::connect(&local_40,uVar3,"2afterServerAdded(CServerWrap&)",param_1,
                       "1onAfterServerAdded(CServerWrap&)",0);
      bVar1 = 1;
      if (local_40 != 0) {
        bVar1 = QMetaObject::Connection::isConnected_helper();
        bVar1 = bVar1 ^ 1;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      if (bVar1 == 0) {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        _DAT_1023120c0 = FUN_1001c5290;
        _DAT_1023120d0 = FUN_1001c5300;
        _DAT_1023120c8 = param_1;
        _DAT_1023120d8 = param_1;
        cVar2 = FUN_1001c5c90(&DAT_1023120c0);
        if (cVar2 == '\0' && 0 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",1,"Failed to initialize AppleRemote");
        }
      }
      else {
        FUN_100df99c0("","prl_client_app",0,"Error: failed to connect to ServerManager signals");
      }
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"Error: failed to connect to CAppContextLogic signals");
    }
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Error: failed to connect to CApplication signals");
  }
  return;
}

