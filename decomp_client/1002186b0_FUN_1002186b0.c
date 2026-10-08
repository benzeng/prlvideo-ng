
void FUN_1002186b0(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  CTaskGenericId *pCVar3;
  long lVar4;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm instance is invalid.");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(&local_48,lVar4);
  FUN_1002126f0(local_40,&local_48);
  lVar4 = CTaskManager::getTaskById(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100218784;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100218784:
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar2 = 0;
  if (lVar4 != 0) {
    uVar2 = CAbstractTask::getResult();
  }
  (*pcVar1)(param_1,uVar2);
  return;
}

