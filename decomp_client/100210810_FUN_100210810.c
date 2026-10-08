
undefined8 FUN_100210810(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Connection local_28 [8];
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  switch(uVar1) {
  case 0:
    FUN_100210950(param_1);
    uVar3 = 0;
    break;
  case 1:
    FUN_100210a10(param_1);
    uVar3 = 0;
    break;
  default:
    FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
    uVar3 = 0x80000001;
    break;
  case 3:
    FUN_100210c60(param_1);
    uVar3 = 0;
    break;
  case 4:
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x208) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x208) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x210);
    }
    uVar2 = FUN_100192800(uVar2);
    goto LAB_1002108f1;
  case 5:
    FUN_100210d60(param_1);
    uVar3 = 0;
    break;
  case 6:
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x208) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x208) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x210);
    }
    uVar2 = FUN_100192380(uVar2);
LAB_1002108f1:
    uVar3 = 0;
    QObject::connect(local_28,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_28);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar3;
}

