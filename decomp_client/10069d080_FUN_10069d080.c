
void FUN_10069d080(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long lVar3;
  void *pvVar4;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  FUN_100188480(&local_50,*(undefined8 *)(param_1 + 0x28));
  FUN_1002d39d0(local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10069d0e2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10069d0e2:
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  lVar3 = CTaskManager::getTaskById(pCVar2);
  if ((lVar3 == 0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pvVar4 = operator_new(0x50);
    FUN_1002d30c0(pvVar4,*(undefined8 *)(param_1 + 0x28));
    CAbstractTask::execute();
  }
  CTaskGenericId::~CTaskGenericId(local_48);
  return;
}

