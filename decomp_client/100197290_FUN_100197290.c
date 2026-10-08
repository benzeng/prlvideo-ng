
void * FUN_100197290(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  void *pvVar3;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_58,param_1);
  FUN_10019a8f0(local_50,&local_58);
  pvVar3 = (void *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100197315;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100197315:
  if ((pvVar3 == (void *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pvVar3 = operator_new(0x50);
    FUN_1001f7ff0(pvVar3,param_1,param_2,param_3);
    CAbstractTask::execute();
  }
  return pvVar3;
}

