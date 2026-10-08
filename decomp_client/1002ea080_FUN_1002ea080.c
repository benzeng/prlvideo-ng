
void FUN_1002ea080(long param_1)

{
  char cVar1;
  int iVar2;
  QString *pQVar3;
  CTaskGenericId *pCVar4;
  undefined8 uVar5;
  long *plVar6;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 0) {
    iVar2 = CAbstractTask::getCurrentSubTask();
    if (iVar2 != 1) {
      return;
    }
    pQVar3 = (QString *)CMessageManager::instance();
    CMessageManager::raiseSpecificMessageBox(pQVar3,(int)param_1 + 0x18);
    return;
  }
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  uVar5 = FUN_100152280();
  uVar5 = FUN_1001554a0(uVar5);
  uVar5 = FUN_10015cb20(uVar5,param_1 + 0x18);
  uVar5 = FUN_10018d490(uVar5);
  FUN_10015aab0(&local_48,uVar5);
  FUN_10008d0d0(local_40,param_1 + 0x18,&local_48);
  plVar6 = (long *)CTaskManager::getTaskById(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ea167;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002ea167:
  if ((plVar6 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    (**(code **)(*plVar6 + 0x80))(plVar6);
  }
  return;
}

