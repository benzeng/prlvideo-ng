
void FUN_100221930(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  long lVar4;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (param_3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000100221a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(&local_48,lVar4);
  FUN_100086960(local_40,&local_48);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002219d0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002219d0:
  if ((plVar3 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    (**(code **)(*plVar3 + 0x80))(plVar3);
    goto LAB_100221a8c;
  }
  plVar3 = operator_new(0x40);
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(&local_50,lVar4);
  FUN_1002e9320(plVar3,&local_50,1,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100221a58;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100221a58:
  CAbstractTask::execute();
LAB_100221a8c:
  QObject::connect(&local_58,plVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

