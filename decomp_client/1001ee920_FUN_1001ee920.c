
void FUN_1001ee920(long param_1)

{
  CTaskGenericId *pCVar1;
  long *plVar2;
  CTaskGenericId local_28 [24];
  
  FUN_1001b8b80(local_28,*(long *)(param_1 + 0x40) + 0x58,1);
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  plVar2 = (long *)CTaskManager::getTaskById(pCVar1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x78))(plVar2,0x80000275);
  }
  CTaskGenericId::~CTaskGenericId(local_28);
  return;
}

