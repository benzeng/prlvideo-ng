
undefined8 FUN_1002342a0(long *param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  lVar5 = 0;
  if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar5 = param_1[4];
  }
  FUN_10031c020(lVar5,1);
  lVar5 = 0;
  if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar5 = param_1[4];
  }
  uVar3 = FUN_100319c00(lVar5);
  QObject::connect(&local_30,uVar3,"2coherenceAboutToStart()",param_1,"1onCoherenceAboutToStart()",0
                  );
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,uVar3,"2coherenceStarted()",param_1,
                     "1onCoherenceStarted()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,uVar3,"2coherenceStarted()",param_1,"1onCoherenceStarted()",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      cVar1 = '\0';
      QObject::connect(&local_40,uVar3,"2coherenceStartFailed(unsigned int)",param_1,
                       "1onCoherenceStartFailed(unsigned int)",0);
      if (cVar2 != '\0') {
        if (local_40 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_100234443;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  cVar1 = '\0';
  QObject::connect(&local_40,uVar3,"2coherenceStartFailed(unsigned int)",param_1,
                   "1onCoherenceStartFailed(unsigned int)",0);
LAB_100234443:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  lVar5 = 0;
  if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar5 = param_1[4];
  }
  uVar4 = FUN_100319c50(lVar5);
  cVar2 = FUN_100330ac0(uVar4);
  if ((cVar2 == '\0') && (*(char *)((long)param_1 + 0x34) != '\0')) {
    CAbstractTask::setWaitForSubTaskCompletion();
    QObject::connect(&local_48,uVar3,"2coherenceToolAvailabilityChanged(bool)",param_1,
                     "1onModeAvailabilityChanged(bool)",0);
    if ((cVar1 != '\0') && (local_48 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    lVar5 = 0;
    if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar5 = param_1[4];
    }
    uVar3 = FUN_100319c50(lVar5);
    FUN_100330c70(uVar3,1,1);
  }
  else {
    lVar5 = 0;
    if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar5 = param_1[4];
    }
    uVar3 = FUN_100319c50(lVar5);
    cVar1 = FUN_100330a50(uVar3);
    if (cVar1 == '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      lVar5 = 0;
      if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar5 = param_1[4];
      }
      lVar5 = FUN_100319960(lVar5);
      if (lVar5 != 0) {
        (**(code **)(*param_1 + 0x128))(param_1);
      }
      FUN_1002345c0(param_1);
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,0);
    }
  }
  return 0;
}

