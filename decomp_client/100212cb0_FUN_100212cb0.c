
undefined8 FUN_100212cb0(long *param_1)

{
  int iVar1;
  long lVar2;
  Connection local_20 [8];
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    FUN_100212e10(param_1);
  }
  else {
    if (iVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
      return 0x80000009;
    }
    lVar2 = FUN_100212d60(param_1);
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
    }
    else {
      QObject::connect(local_20,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onHddInfoReceived(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_20);
    }
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

