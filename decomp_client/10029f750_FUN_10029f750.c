
undefined8 FUN_10029f750(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  long local_28;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  lVar2 = FUN_1001476d0(uVar3);
  uVar3 = 0x80000009;
  if (lVar2 != 0) {
    cVar1 = '\0';
    QObject::connect(&local_28,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onChangeStateRequestFinished(PRL_RESULT)",0);
    if (local_28 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar3 = 0;
    QObject::connect(&local_30,uVar4,"2connectStateChanged(unsigned int)",param_1,
                     "1onConnectedChanged(unsigned int)",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar3;
}

