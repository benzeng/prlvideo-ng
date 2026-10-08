
void FUN_1007e1150(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  CTaskGenericId local_38 [24];
  
  FUN_1001b8b80(local_38,param_1 + 0x58,*(undefined4 *)(param_1 + 0x28));
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  if (plVar3 != (long *)0x0) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      (**(code **)(*plVar3 + 0x78))(plVar3,0x80000275);
      goto LAB_1007e11b7;
    }
  }
  CAbstractTask::terminate((int)param_1);
LAB_1007e11b7:
  CTaskGenericId::~CTaskGenericId(local_38);
  return;
}

