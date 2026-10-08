
void FUN_100698990(long param_1)

{
  CTaskGenericId *pCVar1;
  long *plVar2;
  void *pvVar3;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  FUN_100178ec0(local_40,&local_48);
  plVar2 = (long *)CTaskManager::getTaskById(pCVar1);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100698a10;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100698a10:
  if (plVar2 == (long *)0x0) {
    pvVar3 = operator_new(0x60);
    FUN_1002aaf20(pvVar3,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),0);
    CAbstractTask::execute();
  }
  else {
    (**(code **)(*plVar2 + 0x80))(plVar2);
  }
  return;
}

