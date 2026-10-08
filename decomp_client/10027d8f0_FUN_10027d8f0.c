
undefined8 FUN_10027d8f0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_30;
  
  uVar6 = 0x3bfa;
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    if (DAT_102310930 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_1001e5440(pvVar3);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar3;
    }
    iVar2 = FUN_1001e5550(DAT_102310930,9);
    if (-1 < iVar2) {
      uVar4 = FUN_100152280();
      lVar5 = FUN_1001554a0(uVar4);
      if (lVar5 == 0) {
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",2,"Can\'t get server instance for users sessions count."
                       );
        }
      }
      else {
        if (*(char *)(lVar5 + 0x13a) != '\0') {
          if (DAT_102310920 == (void *)0x0) {
            pvVar3 = operator_new(0x50);
            FUN_1001d1080(pvVar3);
            DAT_10226c778 = 1;
            DAT_102310920 = pvVar3;
          }
          FUN_1001d12a0(DAT_102310920,1);
        }
        uVar4 = FUN_100175350(lVar5);
        uVar6 = 0;
        QObject::connect(&local_30,uVar4,"2jobCompleted(PRL_RESULT)",param_1,
                         "1onGetUserInfoListFinished(PRL_RESULT)",0);
        if (local_30 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_30);
        CAbstractTask::setWaitForSubTaskCompletion();
      }
    }
  }
  return uVar6;
}

