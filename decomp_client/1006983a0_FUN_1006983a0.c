
void FUN_1006983a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  CTaskGenericId *pCVar4;
  void *pvVar5;
  undefined8 uVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  iVar3 = FUN_10018a9d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  if (iVar3 != 0x30000005) {
    FUN_100a1c840(param_2,0);
    return;
  }
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  FUN_1001884b0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  FUN_100188480(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  FUN_100226c70(local_40,&local_48,&local_50,param_2);
  cVar2 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100698451;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100698451:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100698481;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100698481:
  if (cVar2 == '\0') {
    pvVar5 = operator_new(0x80);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    cVar2 = FUN_10018f900(uVar1);
    uVar6 = 0x800;
    if (cVar2 != '\0') {
      uVar6 = 0x1000;
    }
    FUN_1002269d0(pvVar5,param_2,uVar1,uVar6,0,0,0);
    CAbstractTask::execute();
  }
  return;
}

