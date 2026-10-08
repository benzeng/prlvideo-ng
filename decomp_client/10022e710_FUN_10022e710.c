
undefined8 FUN_10022e710(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Connection local_28 [8];
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_100161a10(uVar3);
  }
  else {
    if (iVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
      return 0x80000009;
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_1001609d0(uVar3);
  }
  uVar3 = 0x80000009;
  if (lVar2 != 0) {
    uVar3 = 0;
    QObject::connect(local_28,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_28);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar3;
}

