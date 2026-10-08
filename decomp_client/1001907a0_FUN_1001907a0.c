
void FUN_1001907a0(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  CTaskGenericId local_38 [31];
  undefined1 local_19;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  local_48 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_19 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_1001910e0(local_38,&local_40,&local_48,0x3e9);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100190845;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100190845:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100190875;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100190875:
  if (((plVar3 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) &&
     (*(int *)(param_1 + 0x48) == 0x30000010)) {
    (**(code **)(*plVar3 + 0x78))(plVar3,0x80000275);
  }
  return;
}

