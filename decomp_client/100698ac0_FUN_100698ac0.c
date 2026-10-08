
void FUN_100698ac0(long param_1)

{
  undefined8 uVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  FUN_1002bab50(local_40,&local_48);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100698b40;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100698b40:
  if (plVar3 == (long *)0x0) {
    pvVar4 = operator_new(0x88);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    uVar5 = FUN_100695ba0();
    FUN_1002b6d70(pvVar4,uVar1,uVar5,1);
    CAbstractTask::execute();
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3);
  }
  return;
}

