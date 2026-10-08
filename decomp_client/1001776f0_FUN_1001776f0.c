
undefined1 FUN_1001776f0(undefined8 param_1)

{
  CTaskGenericId *pCVar1;
  undefined1 uVar2;
  CTaskGenericId local_38 [24];
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100179370(local_38,param_1);
  uVar2 = CTaskManager::isTaskRunning(pCVar1);
  CTaskGenericId::~CTaskGenericId(local_38);
  return uVar2;
}

