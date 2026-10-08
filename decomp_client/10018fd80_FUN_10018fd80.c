
void * FUN_10018fd80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  void *pvVar3;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100190f50(local_50,&local_58,param_2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10018fdf5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10018fdf5:
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  pvVar3 = (void *)CTaskManager::getTaskById(pCVar2);
  if ((pvVar3 == (void *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pvVar3 = operator_new(0x38);
    FUN_10025a1c0(pvVar3,param_1,param_2);
    CAbstractTask::execute();
  }
  CTaskGenericId::~CTaskGenericId(local_50);
  return pvVar3;
}

