
void FUN_1007923b0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar6);
  if (iVar2 != 0x30000005) {
    FUN_100a1c840(param_2,0);
    return;
  }
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001884b0(&local_50,uVar6);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_58,uVar6);
  FUN_100226c70(local_48,&local_50,&local_58,param_2);
  cVar1 = CTaskManager::isTaskRunning(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100792490;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100792490:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007924c0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007924c0:
  if (cVar1 == '\0') {
    pvVar4 = operator_new(0x80);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_10018f900(uVar6);
    uVar5 = 0x800;
    if (cVar1 != '\0') {
      uVar5 = 0x1000;
    }
    FUN_1002269d0(pvVar4,param_2,uVar6,uVar5,0,0,0);
    CAbstractTask::execute();
  }
  return;
}

