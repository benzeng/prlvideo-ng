
void FUN_100699680(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  void *pvVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  FUN_1002da510(local_40,&local_48);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100699700;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100699700:
  if ((plVar3 == (long *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pvVar4 = operator_new(0x40);
    FUN_100188480(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    FUN_1002d8ca0(pvVar4,&local_50);
    CAbstractTask::execute();
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3);
  }
  return;
}

