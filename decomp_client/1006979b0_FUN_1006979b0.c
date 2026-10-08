
void FUN_1006979b0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  FUN_10015aab0(&local_58,*(undefined8 *)(param_1 + 0x18));
  FUN_1002925a0(local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100697a13;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100697a13:
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  cVar2 = CTaskManager::isTaskRunning(pCVar3);
  if (cVar2 != '\0') {
    pCVar3 = (CTaskGenericId *)CTaskManager::instance();
    plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
    (**(code **)(*plVar4 + 0x80))(plVar4);
    goto LAB_100697ac6;
  }
  pvVar5 = operator_new(0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = FUN_100695ba0(param_1);
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100291eb0(pvVar5,uVar1,uVar6,9,5,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100697abe;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100697abe:
  CAbstractTask::execute();
LAB_100697ac6:
  CTaskGenericId::~CTaskGenericId(local_50);
  return;
}

