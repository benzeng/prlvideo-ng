
void FUN_10069a7b0(long param_1)

{
  CTaskGenericId *pCVar1;
  long *plVar2;
  void *pvVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  CTaskGenericId local_38 [31];
  undefined1 local_19;
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_40,*(undefined8 *)(param_1 + 0x28));
  FUN_1001884b0(&local_48,*(undefined8 *)(param_1 + 0x28));
  FUN_1002752f0(local_38,&local_40,&local_48);
  plVar2 = (long *)CTaskManager::getTaskById(pCVar1);
  CTaskGenericId::~CTaskGenericId(local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10069a839;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10069a839:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10069a869;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10069a869:
  if (plVar2 == (long *)0x0) {
    pvVar3 = operator_new(0x38);
    FUN_100274cc0(pvVar3,*(undefined8 *)(param_1 + 0x28));
    CAbstractTask::execute();
  }
  else {
    (**(code **)(*plVar2 + 0x80))(plVar2);
  }
  return;
}

