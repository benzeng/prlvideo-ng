
bool * FUN_10068a710(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool *pbVar2;
  undefined8 uVar3;
  bool *pbVar4;
  long local_38;
  undefined4 local_2c;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Activate license offline.");
  pbVar2 = (bool *)FUN_10061bbe0(param_2);
  pbVar4 = (bool *)0x0;
  if (pbVar2 != (bool *)0x0) {
    cVar1 = CSdkRequest::isCompleted(pbVar2,(int *)0x0);
    if (cVar1 == '\0') {
      pbVar2[0x60] = true;
      QObject::connect(&local_38,pbVar2,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onOfflineActivationFinished(PRL_RESULT)",0);
      if (local_38 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      pbVar4 = pbVar2;
    }
    else {
      uVar3 = FUN_100dddcf0(local_2c);
      FUN_100df99c0("[LICENSE]","prl_client_app",0,"Offline license activation is finished: %s",
                    uVar3);
      FUN_10084c650(param_1,local_2c);
      pbVar4 = (bool *)0x0;
    }
  }
  return pbVar4;
}

