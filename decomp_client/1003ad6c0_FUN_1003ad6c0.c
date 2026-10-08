
void FUN_1003ad6c0(void)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  void *pvVar4;
  undefined **local_30 [3];
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_30,0x85);
  local_30[0] = &PTR_FUN_102272d80;
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_30);
  if (plVar3 == (long *)0x0) {
    pvVar4 = operator_new(0x30);
    cVar1 = FUN_10076d9d0();
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_10076d9e0();
    }
    FUN_1002c0f50(pvVar4,(cVar1 == '\0') * '\x02');
    CAbstractTask::execute();
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3);
  }
  return;
}

