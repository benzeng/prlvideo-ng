
void FUN_100698210(void)

{
  CTaskGenericId *pCVar1;
  long *plVar2;
  void *pvVar3;
  undefined **local_30 [3];
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_30,0x85);
  local_30[0] = &PTR_FUN_102272d80;
  plVar2 = (long *)CTaskManager::getTaskById(pCVar1);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_30);
  if (plVar2 == (long *)0x0) {
    pvVar3 = operator_new(0x30);
    FUN_1002c0f50(pvVar3,2);
    CAbstractTask::execute();
  }
  else {
    (**(code **)(*plVar2 + 0x80))(plVar2);
  }
  return;
}

