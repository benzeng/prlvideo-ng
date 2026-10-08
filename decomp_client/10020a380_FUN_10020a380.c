
undefined8 FUN_10020a380(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  bool *pbVar4;
  undefined8 uVar5;
  long local_30;
  char local_21;
  
  lVar3 = FUN_100209ac0();
  uVar5 = 0x80000009;
  if (lVar3 != 0) {
    pbVar4 = (bool *)FUN_1001924b0(lVar3,3);
    if (pbVar4 != (bool *)0x0) {
      local_21 = '\x01';
      uVar5 = 0;
      cVar1 = CSdkRequest::isCompleted(pbVar4,(int *)&local_21);
      if (cVar1 == '\0') {
        CAbstractTask::setWaitForSubTaskCompletion();
        uVar5 = 0;
        QObject::connect(&local_30,pbVar4,"2jobCompleted(PRL_RESULT)",param_1,
                         "1subTaskCompleted(PRL_RESULT)",0);
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = QMetaObject::Connection::isConnected_helper();
        }
        local_21 = uVar2;
        QMetaObject::Connection::~Connection((Connection *)&local_30);
      }
      else if (local_21 == '\0') {
        uVar5 = 0x80000009;
      }
    }
  }
  return uVar5;
}

