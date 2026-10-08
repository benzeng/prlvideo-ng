
undefined8 FUN_1002ebc40(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "localhost != 0","Tasks/CTaskResumeWindow.cpp",0x91,"waitForConnection");
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"(!)Error: can\'t get default server");
    uVar3 = 0x80000009;
  }
  else {
    FUN_1002eb2b0(param_1);
    iVar2 = FUN_10015a6e0(lVar4);
    uVar3 = 0;
    if (iVar2 != 0) {
      CAbstractTask::setWaitForSubTaskCompletion();
      QObject::connect(&local_28,lVar4,"2serverStateChanged(GUI::ServerState)",param_1,
                       "1onServerStateChanged(GUI::ServerState)",0x80);
      if (local_28 == 0) {
        QMetaObject::Connection::~Connection((Connection *)&local_28);
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_28);
        if (cVar1 != '\0') {
          return 0;
        }
      }
      uVar3 = 0;
      FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "connected","Tasks/CTaskResumeWindow.cpp",0xa0,"waitForConnection");
    }
  }
  return uVar3;
}

