
void FUN_100781100(undefined8 param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  undefined **local_38 [3];
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_38,0x53);
  local_38[0] = &PTR_FUN_10226c710;
  cVar1 = CTaskManager::isTaskRunning(pCVar2);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_38);
  if (cVar1 == '\0') {
    FUN_1007811d0(param_1,0);
    FUN_1007811d0(param_1,3);
    FUN_1007811d0(param_1,4);
  }
  return;
}

