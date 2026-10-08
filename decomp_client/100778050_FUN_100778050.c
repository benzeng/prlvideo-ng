
undefined1 FUN_100778050(void)

{
  undefined1 uVar1;
  CTaskGenericId *pCVar2;
  undefined **local_30 [3];
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_30,0x85);
  local_30[0] = &PTR_FUN_102272d80;
  uVar1 = CTaskManager::isTaskRunning(pCVar2);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_30);
  return uVar1;
}

