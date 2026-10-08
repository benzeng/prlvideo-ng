
void FUN_100298e10(long *param_1)

{
  int iVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(&local_48,lVar4);
  FUN_100033dd0(local_40,&local_48);
  uVar3 = CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100298e9f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100298e9f:
  iVar1 = CAbstractTask::getCurrentSubTask();
  if ((((iVar1 == 2) && (iVar1 = FUN_1002308e0(uVar3), iVar1 != 1)) ||
      ((iVar1 = CAbstractTask::getCurrentSubTask(), iVar1 == 5 &&
       (iVar1 = FUN_1002308e0(uVar3), iVar1 != 2)))) ||
     ((iVar1 = CAbstractTask::getCurrentSubTask(), iVar1 == 6 &&
      (iVar1 = FUN_1002308e0(uVar3), iVar1 != *(int *)((long)param_1 + 0x2c))))) {
    (**(code **)(*param_1 + 0x78))(param_1,0x80000275);
  }
  return;
}

