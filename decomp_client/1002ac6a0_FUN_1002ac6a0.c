
undefined8 FUN_1002ac6a0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool *pbVar3;
  long local_38;
  char local_29;
  long local_28;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10061b510(uVar2);
  FUN_10015aa50(&local_28,uVar2);
  if (local_28 != 0) {
    _PrlHandle_Free();
    return 0x3bfa;
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10061b510(uVar2);
  pbVar3 = (bool *)FUN_100161ad0(uVar2);
  if (pbVar3 != (bool *)0x0) {
    cVar1 = CSdkRequest::isCompleted(pbVar3,(int *)&local_29);
    if (cVar1 == '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      QObject::connect(&local_38,pbVar3,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onUpdateDispUserPreferencesFinished(PRL_RESULT)",0);
      if (local_38 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      return 0;
    }
    if (local_29 != '\0') {
      return 0;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Update Disp User Preferences failed");
  CAbstractTask::removeSubTask((int)param_1);
  return 0;
}

