
void FUN_1001ba700(long param_1)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_100188480(&local_48,uVar4);
  FUN_1001bace0(local_40,&local_48);
  cVar1 = CTaskManager::isTaskRunning(pCVar3);
  bVar5 = true;
  if (cVar1 == '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_10018c280(uVar4);
    iVar2 = FUN_100319ae0(uVar4);
    bVar5 = iVar2 == 2;
  }
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001ba7ea;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ba7ea:
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar2 = 0;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,
                    "User manually change view mode when we are in presentation mode.");
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
        iVar2 = 2;
      }
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_1001b9c70(param_1,uVar4,0,iVar2,*(undefined1 *)(param_1 + 0x19));
  }
  return;
}

