
void FUN_100276c00(long param_1)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  long *plVar4;
  undefined8 uVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  CTaskGenericId local_38 [31];
  undefined1 local_19;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001884b0(&local_48,uVar5);
  FUN_10008d0d0(local_38,&local_40,&local_48);
  CTaskManager::getTaskById(pCVar3);
  plVar4 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021ffdb0);
  CTaskGenericId::~CTaskGenericId(local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100276cee;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100276cee:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100276d1e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100276d1e:
  if ((plVar4 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    (**(code **)(*plVar4 + 0x80))(plVar4);
  }
  return;
}

