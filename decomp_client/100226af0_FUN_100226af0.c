
undefined4 FUN_100226af0(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  Connection local_30 [8];
  
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  iVar2 = FUN_10018a9d0(lVar4);
  uVar3 = 0x3bfa;
  if (iVar2 != 0x30000004) {
    CAbstractTask::setWaitForSubTaskCompletion();
    lVar4 = 0;
    if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar4 = param_1[4];
    }
    lVar5 = 0;
    if ((param_1[7] != 0) && (lVar5 = 0, *(int *)(param_1[7] + 4) != 0)) {
      lVar5 = param_1[8];
    }
    lVar4 = FUN_100192d60(lVar4,(int)param_1[5],*(undefined4 *)((long)param_1 + 0x2c),lVar5,
                          (int)param_1[6]);
    uVar3 = 0x80000009;
    if (lVar4 != 0) {
      cVar1 = CAbstractTask::isFinished();
      if (cVar1 == '\0') {
        QObject::connect(local_30,lVar4,"2taskFinished(PRL_RESULT)",param_1,
                         "1onVmLaucnhFinished(PRL_RESULT)",0);
        QMetaObject::Connection::~Connection(local_30);
        return 0;
      }
      uVar3 = CAbstractTask::getResult();
    }
    (**(code **)(*param_1 + 0xb0))(param_1,uVar3);
  }
  return uVar3;
}

