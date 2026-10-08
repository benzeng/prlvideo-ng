
undefined8 FUN_100214020(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  Connection local_20 [8];
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  if (uVar1 < 2) {
    iVar2 = CAbstractTask::getCurrentSubTask();
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    uVar4 = 0x1000;
    if (iVar2 == 0) {
      uVar4 = 0x1800;
    }
    lVar3 = FUN_100195e00(lVar3,(int)param_1[5],uVar4);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
    }
    else {
      QObject::connect(local_20,lVar3,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onHddResizeInfoReceived(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_20);
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar4 = 0;
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
    uVar4 = 0x80000009;
  }
  return uVar4;
}

