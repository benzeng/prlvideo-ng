
void FUN_1001ee7d0(long param_1)

{
  long lVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  void *pvVar4;
  undefined8 uVar5;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  FUN_1001b8b80(local_50,*(long *)(param_1 + 0x40) + 0x58,1);
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  cVar2 = CTaskManager::isTaskRunning(pCVar3);
  if (cVar2 != '\0') goto LAB_1001ee893;
  pvVar4 = operator_new(0x78);
  lVar1 = *(long *)(param_1 + 0x40);
  uVar5 = 0;
  if ((*(long *)(lVar1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(lVar1 + 0x18) + 4) != 0)) {
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
  }
  FUN_100188480(&local_58,uVar5);
  FUN_100278880(pvVar4,lVar1 + 0x28,&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ee88b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001ee88b:
  CAbstractTask::execute();
LAB_1001ee893:
  CTaskGenericId::~CTaskGenericId(local_50);
  return;
}

