
undefined8 FUN_100240650(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  Connection *this;
  long local_30;
  long local_28;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x18);
  if (lVar3 == 0) {
    pcVar4 = "Error: cannot get vm instance.";
LAB_10024071a:
    FUN_100df99c0("","prl_client_app",0,pcVar4);
    return 0x80000009;
  }
  iVar1 = FUN_10018a9d0(lVar3);
  if (iVar1 == 0x30000001) {
    return 0;
  }
  iVar1 = FUN_10018a9d0(lVar3);
  if (iVar1 == 0x30000009) {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar1 = FUN_10018a9d0(lVar3);
  if ((iVar1 == 0x30000007) || (iVar1 = FUN_10018a9d0(lVar3), iVar1 == 0x30000006)) {
    QObject::connect(&local_28,lVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                     param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    this = (Connection *)&local_28;
  }
  else {
    uVar2 = 0xc9;
    if (*(char *)(param_1 + 0x29) != '\0') {
      uVar2 = 0x49;
    }
    lVar3 = FUN_1001930a0(lVar3,uVar2);
    if (lVar3 == 0) {
      pcVar4 = "Error: cannot stop VM";
      goto LAB_10024071a;
    }
    QObject::connect(&local_30,lVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    this = (Connection *)&local_30;
  }
  QMetaObject::Connection::~Connection(this);
  return 0;
}

