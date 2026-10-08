
void FUN_1007efd60(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  QArrayData *local_40;
  CTaskGenericId local_38 [31];
  undefined1 local_19;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  local_40 = *(QArrayData **)(*(long *)(*(long *)(param_1 + 0x40) + 0x10) + 0x18);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_100178ec0(local_38,&local_40);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007efdec;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007efdec:
  if (((plVar3 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) &&
     (cVar1 = CAbstractTask::canBeTerminated(), cVar1 != '\0')) {
    (**(code **)(*plVar3 + 0x78))(plVar3,0x80000275);
  }
  return;
}

