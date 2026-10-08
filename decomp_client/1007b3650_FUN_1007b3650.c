
undefined1 FUN_1007b3650(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  undefined8 uVar4;
  Connection local_70 [8];
  Connection local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return 0;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_58,uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1001884b0(&local_60,uVar4);
  FUN_1001910e0(local_50,&local_58,&local_60,0x3f3);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b3732;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007b3732:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b3762;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007b3762:
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    plVar3 = (long *)FUN_100193360(uVar4,param_2,param_3,0x49);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3);
  }
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 == '\0') {
    QObject::connect(local_68,plVar3,"2subTaskStarted(int)",param_1,
                     "1onCreateSnapshotSubTaskStarted(int)",0x80);
    QMetaObject::Connection::~Connection(local_68);
    QObject::connect(local_70,plVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1onCreateSnapshotSubTaskFinished(PRL_RESULT)",0x80);
    QMetaObject::Connection::~Connection(local_70);
  }
  return 1;
}

