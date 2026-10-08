
void FUN_10069d1f0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  CTaskGenericId *pCVar3;
  long *plVar4;
  void *pvVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_48,*(undefined8 *)(param_1 + 0x28));
  FUN_100086960(local_40,&local_48);
  plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10069d26c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10069d26c:
  if ((plVar4 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    (**(code **)(*plVar4 + 0x80))(plVar4);
    return;
  }
  pvVar5 = operator_new(0x40);
  FUN_100188480(&local_50,*(undefined8 *)(param_1 + 0x28));
  uVar2 = FUN_10018ed10(*(undefined8 *)(param_1 + 0x28));
  FUN_1002e9320(pvVar5,&local_50,uVar2,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10069d2e1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10069d2e1:
  CAbstractTask::execute();
  return;
}

